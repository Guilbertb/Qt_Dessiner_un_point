#ifndef MYVIEW_H
#define MYVIEW_H

#include <QWidget>

class myview : public QWidget
{
    Q_OBJECT
public:
    explicit myview(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *); // surcharge par sous typage (subclass) de paintEvent de la class QWidget

signals:

public slots:
};

#endif // MYVIEW_H
