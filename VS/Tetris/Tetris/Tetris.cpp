#include "Tetris.h"
#include <stdlib.h>
#include <time.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")
using namespace std;
const int SPEED_NORMAL = 500;//ms


Tetris::Tetris(int rows, int cols, int left, int top, int blockSize)
{
	this->rows = rows;
	this->cols = cols;
	this->leftMargin = left;
	this->topMargin = top;
	this->blockSize = blockSize;
	for (int i = 0; i < rows; i++) {  //创造二维数组
		map.push_back(vector<int>(cols, 0));
	}
	succeed_criterion = 1;

}

void Tetris::init()
{
	mciSendString("play res/bg.mp3 repeat", 0, 0, 0);
	
	score = 0;
	delay = SPEED_NORMAL;
	update = false;
	srand(time(NULL));//随机数种子

	initgraph(938, 896);//创建窗口
	loadimage(&imgBg, "res/bg2.png");//加载背景图片
	loadimage(&imgOver, "res/over.png"); 
	loadimage(&imgWin, "res/win.png"); 
	//初始化地图数据，map中的值1-7就是颜色，0代表没有方块
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			map[i][j] = 0;
		}
	}

	curBlock = new Block;
	nextBlock = new Block;


}

void Tetris::play()
{
	init();

	//先更新数据，后更新画面
	int timer = 0;
	while (true)   
	{
		//更新数据
		keyEvent();

		timer += getDelay();
		if (timer > delay) {//500ms执行一次：自动下降
			timer = 0;
			update = true;

			drop(); 

		}
		//更新画面
		if (update) { //方块有移动操作就要更新
			update = false;
			//因移动操作而更新的游戏画面(通用操作)
			updateWindow();
			//移动可以造成的其他效果：消行（特殊操作）
			clearLine();
		}

	}
}

void Tetris::keyEvent()
{
	unsigned char ch;
	if (_kbhit()) {
		ch = _getch();
		/*
		上键返回 224 72
		下键返回 224 80
		左键返回 224 75
		右键返回 224 77
		*/
		
		if (ch == 224) {
			ch = _getch();
			update = true;
			switch (ch)
			{
			case 72:
				curBlock->retate(cols, rows);
				break;
			case 80:
				curBlock->moveLeftRightDown(0, cols,rows,map);
				break;
			case 75:
				curBlock->moveLeftRightDown(-1,cols, rows, map);
				break;
			case 77:
				curBlock->moveLeftRightDown(1,cols, rows, map);
				break;

			default:
				break;
			}
		}
	}
}

void Tetris::updateWindow()
{

	putimage(0, 0, &imgBg);//绘制背景
	BeginBatchDraw();//运行BeginBatchDraw后，所有的绘图都不再显示在屏幕上，而是在内存中进行
	
	drawScore();

	IMAGE** imgs = Block::getImage();
	for (int i = 0; i < rows; i++) { //绘制已有方块
		for (int j = 0; j < cols; j++) {
			if (map[i][j] == 0) continue;
			int x = j * blockSize + leftMargin;
			int y = i * blockSize + topMargin;
			putimage(x, y, imgs[map[i][j]-1]);
		}
	}


	curBlock->draw(leftMargin, topMargin);
	nextBlock->draw(689,150);

	
	EndBatchDraw();//直到碰到EndBatchDraw，之前所有在内存中绘图的成品将一并展示在屏幕中
	if (score >= succeed_criterion) {
		succeed_criterion += 1;
		gameOver();
	}
}


void Tetris::drop()
{
	for (auto& x : curBlock->smallBlocks) {
		if (x.row == rows - 1 || map[x.row + 1][x.col] != 0) {
			for (auto& x : curBlock->smallBlocks) {
				map[x.row][x.col] = curBlock->blockType+1;
			}
			delete curBlock;
			curBlock = nextBlock;
			nextBlock = new Block;
			curBlock->draw(leftMargin, topMargin);
			nextBlock->draw(689, 150);  
			//检测over{}
			for (auto x : curBlock->smallBlocks) {
				if (map[x.row][x.col]) {
					gameOver();
				}
			}
			return;
		}
	}
	curBlock->drop();
}

void Tetris::clearLine()
{
	int i = rows-1;
	int count = 0;
	while (i >=0) {
		int flag = 1;
		for (int j = 0; j < cols; j++) {
			if (map[i][j] == 0) {
				i--;
				flag = 0;
				break;
			}
		}
		if(flag==0)continue;
		count++;
		map.erase(remove(map.begin(), map.end(), map[i]), map.end());
		map.insert(map.begin(), vector<int>(cols, 0));
	}

	if (count) {
		score += count;
		mciSendString("play res/xiaochu1.mp3", 0, 0, 0);
		update = true;
		
	}
}

int Tetris::getDelay()
{	//返回和上次调用这个函数相隔多少毫秒
	static unsigned long long lastTime = 0;
	unsigned long long currentTime = GetTickCount();//返回现在时间毫秒数
	if (lastTime == 0) {
		lastTime = currentTime;
		return 0;
	}
	else {
		auto ret = currentTime - lastTime;
		lastTime = currentTime;
		return ret;
	}
}

void Tetris::drawScore()
{
	char scoreText[32];
	sprintf_s(scoreText, sizeof(scoreText), "%d", score);
	char levelText[32];
	sprintf_s(levelText, sizeof(levelText), "%d", succeed_criterion);

	setcolor(RGB(180, 180, 180));
	LOGFONT f;
	gettextstyle(&f);
	f.lfHeight = 60;
	f.lfWidth = 30;
	f.lfQuality = ANTIALIASED_QUALITY;//抗锯齿
	strcpy_s(f.lfFaceName, sizeof(f.lfFaceName), _T("Segoe UI Black"));
	settextstyle(&f);
	outtextxy(680+25, 735, scoreText);
	outtextxy(160+5, 735, levelText);
}

void Tetris::gameOver()
{
	mciSendString("stop res/bg.mp3", 0, 0, 0);
	if (score >= succeed_criterion) {
		putimage(262, 361, &imgWin);
	}
	else {
		putimage(262, 361, &imgOver);
	}


	system("pause"); //暂停，按回车重新开始
	init();

}
