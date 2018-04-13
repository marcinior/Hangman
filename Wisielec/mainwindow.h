#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void cross(int random);
    void check();
    int score(int lev,int len,int li);
    void clear();
    void rnd(int l);
private slots:
    void on_start_clicked();
    void on_check_clicked();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
