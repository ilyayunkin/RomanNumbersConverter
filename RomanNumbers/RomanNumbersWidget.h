#ifndef ROMANNUMBERSWIDGET_H
#define ROMANNUMBERSWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class RomanNumbersWidget; }
QT_END_NAMESPACE

class RomanNumbersWidget : public QWidget
{
    Q_OBJECT

public:
    RomanNumbersWidget(QWidget *parent = nullptr);
    ~RomanNumbersWidget();

private slots:
    void toString(int value);
    void toInt();

private:
    Ui::RomanNumbersWidget *ui;
};
#endif // ROMANNUMBERSWIDGET_H
