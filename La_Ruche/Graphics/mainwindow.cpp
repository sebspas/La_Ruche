#include "Graphics/mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent){
    init();
}

MainWindow::~MainWindow(){

}

void MainWindow::init(){
    this->resize(1024,780);
}

void MainWindow::update(){

}

void MainWindow::paint(){
    QPainter *painter = new QPainter(this);
    painter->setRenderHint(QPainter::Antialiasing, true);
    painter->setPen(Qt::black);
    painter->setBrush(Qt::gray);
    paintObjects(painter);
    delete painter;
}

void MainWindow::addObject(Objet *obj)
{
    this->objets.push_back(obj);
}

void MainWindow::paintEvent(QPaintEvent *){
    paint();
}

void MainWindow::timerEvent(QTimerEvent *){
    update();
    repaint();
}

void MainWindow::paintObjects(QPainter *painter)
{
    int i;
    for(i = 0; i < this->objets.size(); i++) {
        this->objets[i]->paint(painter);
    }
}
