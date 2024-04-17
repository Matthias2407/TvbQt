#ifndef STATDISPLAY_H
#define STATDISPLAY_H

#include <QWidget>

namespace Ui {
class statDisplay;
}

class statDisplay : public QWidget
{
    Q_OBJECT

public:
    explicit statDisplay(QWidget *parent = nullptr);
    ~statDisplay();

private:
    Ui::statDisplay *ui;
};

#endif // STATDISPLAY_H
