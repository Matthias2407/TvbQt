#ifndef STATLISTDISPLAY_H
#define STATLISTDISPLAY_H

#include <QWidget>

namespace Ui {
class statListDisplay;
}

class statListDisplay : public QWidget
{
    Q_OBJECT

public:
    explicit statListDisplay(QWidget *parent = nullptr);
    ~statListDisplay();

private:
    Ui::statListDisplay *ui;
};

#endif // STATLISTDISPLAY_H
