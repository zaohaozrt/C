#pragma once
#include "Block.h"
#include <vector>
#include <conio.h>
using namespace std;
class Tetris
{
public:
	Tetris(int rows, int cols, int left, int top, int blockSize);
	void init();
	void play();
private:
	void keyEvent();
	void updateWindow();
	void drop();
	void clearLine();
	int getDelay();
	void drawScore();
	void gameOver();
	int score;
	int delay;
	bool update; //是否更新

	vector<vector<int>> map;//空的二维数组，存放落地方块
	int rows;
	int cols;
	int leftMargin;
	int topMargin;
	int blockSize;
	int succeed_criterion;
	IMAGE imgBg;
	Block* curBlock;
	Block* nextBlock;

	IMAGE imgOver;
	IMAGE imgWin;
};

