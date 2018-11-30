#include "teladosistema.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TelaDoSistema w;
    w.show();

    return a.exec();
}
