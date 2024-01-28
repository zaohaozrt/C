#pragma once
#include <graphics.h>
#include <vector>
using namespace std;
struct Point {
	int row;
	int col;
};

class Block
{
public:
	Block();
	void drop();
	void moveLeftRightDown(int offset,int right_range,int bottom_range,const  vector<vector<int>> & map);
	void retate(int right_range,int bottom_range);
	void draw(int leftMargin, int topMargin);
	static IMAGE**  getImage();

	Point smallBlocks[4];
	int blockType; //方块类型0-6对应不同小块
	static IMAGE* imgs[7];
private:
	IMAGE* img;    //小块图片
	static int size;

};

