#include "hotelwindow.h"
#include <QApplication>
#include "lde.h"
#include "les.h"
#include "no.h"

int main(int argc, char *argv[])
{


    QApplication a(argc, argv);
    HotelWindow w;
    w.show();

    return a.exec();
}
