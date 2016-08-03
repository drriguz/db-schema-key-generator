#include "app.h"
#include "generator.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    App w;
    w.show();
    srand((unsigned)time(NULL));
    return a.exec();
}

