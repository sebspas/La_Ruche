#include "Graphics/mainwindow.h"
#include <QApplication>

#include "Objects/abeille.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow window;

    Abeille* a = new Abeille();
    a->setPos(500,500);
    window.addObject(a);
    window.show();

    return app.exec();
}
