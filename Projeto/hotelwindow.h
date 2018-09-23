#ifndef HOTELWINDOW_H
#define HOTELWINDOW_H

#include <QMainWindow>

namespace Ui {
class HotelWindow;
}

class HotelWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit HotelWindow(QWidget *parent = nullptr);
    ~HotelWindow();

private slots:
    void on_pushButton_cadastro_clicked();

    void on_pushButton_remover_clicked();

    void on_pushButton_buscar_clicked();

private:
    Ui::HotelWindow *ui;
};

#endif // HOTELWINDOW_H
