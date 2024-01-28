#ifndef CELLITEM_H
#define CELLITEM_H

#include <QGraphicsPixmapItem>
#include <QPixmap>

//һ��С���ӵ���Ϊ
enum cellStatus {
  INITIAL, FLAG, QUESTION, EXPLODE, DIGIT, BLANK
};

class cellItem : public QGraphicsPixmapItem {
public:
  cellItem(int x, int y,
           enum cellStatus status = INITIAL, QGraphicsItem *parent = Q_NULLPTR);
  ~cellItem();

  enum cellStatus getStatus();
  void setStatus(enum cellStatus status, int digit = -2);

  //staticֻ��ʼ��һ��
  static QPixmap * _initial;
  static QPixmap * _flag;
  static QPixmap * _question;
  static QPixmap * _blank;
  static QPixmap * _explode;
  static QPixmap * _digits[9];

  static int _refCount;

protected:
  int cx;
  int cy;
  enum cellStatus _status;

};

#endif // CELLITEM_H
