#include "mainwindow.hpp"


MainWindow::MainWindow(QWidget* parent): QMainWindow(parent) {
    m_list = new QListWidget(this);

    // Enable drag and drop
    // https://doc.qt.io/qt-6/model-view-programming.html#using-convenience-views
    m_list->setSelectionMode(QAbstractItemView::SingleSelection);
    m_list->setDragEnabled(true);
    m_list->viewport()->setAcceptDrops(true);
    m_list->setDropIndicatorShown(true);
    m_list->setDragDropMode(QAbstractItemView::InternalMove);

    // Add sample data
    m_list->addItem("A");
    m_list->addItem("B");
    m_list->addItem("C");

    setCentralWidget(m_list);
}

