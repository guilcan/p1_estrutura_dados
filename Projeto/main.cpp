#include "hotelwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    HotelWindow w;
    w.show();

    return a.exec();
}
