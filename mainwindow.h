#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void mWmousePressEvent(QMouseEvent *event);
    void mWmouseReleaseEvent(QMouseEvent *event);
    void mWmouseMoveEvent(QMouseEvent *event);
    void mWmouseDoubleClickEvent(QMouseEvent *event);

    ~MainWindow();

private slots:
    void loadImageAction();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
