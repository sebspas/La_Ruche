#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QHBoxLayout>

#include "Objects/objet.h"

using namespace std;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void init();
    void update();
    void paint();

    void addObject(Objet* obj);

    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);

    void paintObjects(QPainter *painter);

private:
    vector<Objet*> objets;

};

#endif // MAINWINDOW_H
