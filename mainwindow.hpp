#ifndef MAIN_WINDOW_HPP
#define MAIN_WINDOW_HPP

#include <QListWidget>
#include <QMainWindow>


class MainWindow: public QMainWindow {
    Q_OBJECT

    QListWidget* m_list;

public:
    MainWindow(QWidget* parent = nullptr);
};

#endif

