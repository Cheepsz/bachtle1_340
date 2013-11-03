/**
* @file
* @author Ben Bachtler
* @version 1.1
* @section LICENSE
*  ...
* @section DESCRIPTION
*  Documentation for HW 1
*/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

/*! \brief Main class
 *         of my application for project CS340.
 *
 *  Inherits for QMainWindow from Qt
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
     /**
      * Constructor for MainWindow !!!!!!
      *
      * @param parent a parent widget, can be null
      */
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    /**
     * Slot for pushButton when clicked
     */
    void on_pushButton_clicked();
    /**
     * Slot for btn_back when clicked
     */
    void on_back_clicked();
    /**
     * Slot for btn_next when clicked
     */
    void on_next_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
