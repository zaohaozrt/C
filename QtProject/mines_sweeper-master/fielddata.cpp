#include "fielddata.h"
#include <stdlib.h>
#include <ctime>
//#include <iostream>
//#include <qDebug>
//using namespace std;

FieldData *FieldData::_ins=nullptr;

FieldData::FieldData()
    : _width(20), _height(15), _mines(50)//��ʼɨ�׾����С
{
    reset();
    srand(time(nullptr));
}

FieldData::~FieldData() {

}

void FieldData::reset(){
    _cells.clear();
    initCells();
    deployMines();
    _visited.clear();
    initVisited();
}

//��ʼ��������ռ�
void FieldData::initCells() {
    for(int x = 0; x < _width; ++x) {
        _cells.push_back(CellColumn(_height));
    }
}

//��ʼ��visited
void FieldData::initVisited() {
    for(int x = 0; x < _width; ++x) {
        _visited.push_back(CellColumn(_height));
    }
    for(int x = 0; x < _width; ++x) {
        for(int y = 0; y < _height; ++y) {
            _visited[x][y] = 0;
        }
    }
}


//����
void FieldData::deployMines() {
    //��ʼ��
    for(int x = 0; x < _width; ++x) {
        for(int y = 0; y < _height; ++y) {
            _cells[x][y] = 0;
        }
    }
    int cpmines = _mines;
    while(cpmines) {
        int x = rand() % _width;
        int y = rand() % _height;

        //ֻ��֮ǰû�в����׵�λ�òſ��Բ���
        if(_cells[x][y] != -1) {
            --cpmines;
            _cells[x][y] = -1;

            //������Χ������
            updateSurrounding(x - 1, y - 1); //����
            updateSurrounding(x, y - 1); //��
            updateSurrounding(x + 1, y - 1); //����
            updateSurrounding(x - 1, y); //��
            updateSurrounding(x + 1, y); //��
            updateSurrounding(x - 1, y + 1); //����
            updateSurrounding(x, y + 1); //��
            updateSurrounding(x + 1, y + 1); //����

        }
    }
    //dump();
}

//����֮�󣬸�����Χ������
void FieldData::updateSurrounding(int x, int y) {
    //Խ���ж�
    if(x >= 0 && x < _width && y >= 0 && y < _height) {
        if(_cells[x][y] != -1) {
            ++_cells[x][y];
        }
    }
}

//void FieldData::dump(){
//    for(int y = 0; y < _height; ++y) {
//        for(int x = 0; x < _width; ++x) {
//            cout<<_cells[x][y]<<'\t';
//        }
//        cout<<endl;
//    }
//    //qDebug()<<"---------------------------------"<<endl;
//}

//ÿ�ε������£����������ߣ��ף�
void FieldData::customizeWHM(int cw, int ch, int cm) {
    _width=cw;
    _height=ch;
    _mines=cm;
}

FieldData * FieldData::getInstance(){
    if(_ins==nullptr){
        _ins=new FieldData;
    }
    return _ins;
}
