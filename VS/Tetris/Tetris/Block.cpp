#include "Block.h"
#include <stdlib.h>
#include <graphics.h>
IMAGE* Block::imgs[7] = { NULL };
int Block::size=36;


Block::Block()
{	
	if (imgs[0] == NULL) {
		IMAGE imgTmp;
		loadimage(&imgTmp, "res/tiles.png");
		SetWorkingImage(&imgTmp);
		for (int i = 0; i < 7; i++) {
			imgs[i] = new IMAGE;
			getimage(imgs[i], i * size, 0, size, size); //切割的图片指针赋值给imgs[i]
		}
		SetWorkingImage();//恢复工作区

	}
	int blocks[7][4] = {
		1,3,5,7, // I
		2,4,5,7, // Z 1型
		3,5,4,6, // Z 2型
		3,5,4,7, // T
		2,3,5,7, // L
		3,5,7,6, // J
		2,3,4,5, // 田
	};

	blockType = rand()  % 7;
	//初始化smallBlocks
	for (int i = 0; i < 4; i++) {  //转换成几行几列，方便渲染:位置
		int value = blocks[blockType ][i];
		smallBlocks[i].row = value / 2;  //从0开始
		smallBlocks[i].col = value % 2;	 //从0开始
	}
	img = imgs[blockType ];  //一个随机颜色方块的图片:图片
	//位置+图片=渲染
}
IMAGE** Block::getImage() 
{

	return imgs;
}
void Block::drop()
{
	for (auto &block : smallBlocks) {
		block.row++;
	}
}

void Block::moveLeftRightDown(int offset, int right_range, int bottom_range, const vector<vector<int>>& map)
{
	// if 向下
	if (offset == 0) {   

		for (auto& x : smallBlocks) {//不穿墙 不穿其他方块
			if (!((x.row + 1) >= 0 && (x.row + 1) < bottom_range) || map[x.row + 1][x.col] != 0) {
				return;
			}
		}

		for (auto& x : smallBlocks) {
			x.row = x.row + 1;

		}
		return;
	}
	//else   左右
	for (auto& x : smallBlocks) {
		if (!((x.col + offset) >= 0 && (x.col + offset) < right_range) || (offset == 1 && map[x.row][x.col + 1] != 0) || (offset == -1 && map[x.row][x.col -1] != 0) ) {
			return;
		}
	}
	for (auto& x : smallBlocks) {
		x.col = x.col + offset;
		
	}

}

void Block::retate(int right_range, int bottom_range)
{
	if (blockType == 6) {
		return;
	}

	Point p = smallBlocks[1];
	for (int i = 0; i < 4; i++) {
		Point tmp = smallBlocks[i];

		int n_c = p.col - tmp.row + p.row;
		int n_r = p.row + tmp.col - p.col;
		if (!(n_r >= 0 && n_r < bottom_range) || !(n_c >= 0 && n_c < right_range)) {
			return;
		}
	}
	for (int i = 0; i < 4; i++) {
		Point tmp = smallBlocks[i];

		int n_c = p.col - tmp.row + p.row;
		int n_r = p.row + tmp.col - p.col;
		smallBlocks[i].col = n_c;
		smallBlocks[i].row = n_r;
	}


}

void Block::draw(int leftMargin, int topMargin)
{
	//渲染=位置+图片
	for (int i = 0; i < 4; i++) {
		int x = leftMargin + smallBlocks[i].col * size;
		int y = topMargin + smallBlocks[i].row * size;
		putimage(x, y, img);
	}
}
