#ifndef CITYLINEEDIT_H
#define CITYLINEEDIT_H

#include <QKeyEvent>
#include <QLineEdit>




//自定义类继承QLineEdit，输入栏


class CityLineEdit : public QLineEdit
{
    Q_OBJECT

public:
    explicit CityLineEdit(QWidget* parent = nullptr) : QLineEdit(parent) {}  // explicit防止隐式转换，只能显式传参，需要什么类型传递什么类型

signals:
    void enterKeyPressed();

protected:
    void keyPressEvent(QKeyEvent* event) override
    {
        if (event->key() == Qt::Key_Return || event->key() == Qt::Key_Enter) {
            if (hasFocus())
            {
                emit enterKeyPressed();
            }
        }
        else
        {
            QLineEdit::keyPressEvent(event);
        }

    }
};

#endif // CITYLINEEDIT_H
