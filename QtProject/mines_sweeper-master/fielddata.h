#ifndef FIELDDATA_H
#define FIELDDATA_H

#include <vector>
using namespace std;

#define Field (FieldData::getInstance())

typedef vector<int> CellColumn;
typedef vector<CellColumn> CellMatrix;

class FieldData
{
public:
    ~FieldData();
    static FieldData * getInstance();
    inline int getWidth(){return _width;}
    inline int getHeight(){return _height;}
    inline int getMines(){return _mines;}
    const CellMatrix & getCells(){return _cells;}
    void reset();
    void initCells();//��ʼ��������ռ�
    void deployMines();//����
    void initVisited();//��ʼ��visited

    void customizeWHM(int cw, int ch, int cm);//ÿ�ε������£����������ߣ��ף�

    //void dump();//����֮���ӡ

    CellMatrix _cells;
    CellMatrix _visited;//�Ƿ��Ѿ�ɨ��(ɨ����Ϊ1������Ϊ0)

protected:
    int _width;
    int _height;
    int _mines;
    //    CellMatrix _cells;

    void updateSurrounding(int x, int y);

private:
    FieldData();//����ģʽ
    static FieldData *_ins;
};

#endif // FIELDDATA_H
