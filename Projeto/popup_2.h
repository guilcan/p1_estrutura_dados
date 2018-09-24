#ifndef POPUP_2_H
#define POPUP_2_H

#include <QDialog>

namespace Ui {
class popup_2;
}

class popup_2 : public QDialog
{
    Q_OBJECT

public:
    explicit popup_2(QWidget *parent = nullptr);
    ~popup_2();

private:
    Ui::popup_2 *ui;
};

#endif // POPUP_2_H
