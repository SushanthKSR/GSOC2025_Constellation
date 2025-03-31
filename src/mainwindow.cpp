/*
 * MainWindow Implementation
 * -------------------------
 * This file defines the behavior of the MainWindow class, which serves as the main
 * user interface for the AlgorithmSorting application. The UI consists of:
 * 
 * - A custom ChartView widget that visualizes sorting algorithms.
 * - A "Sort" QPushButton that triggers the sorting animation.
 * 
 * The layout is organized using a QVBoxLayout, stacking the chart on top and 
 * the button below. When the user clicks the "Sort" button, a slot function 
 * (`onSortClicked`) is called, which invokes `startSortAnimation()` on the ChartView.
 * 
 * This structure provides a clean and interactive way for users to visualize 
 * sorting algorithms in action using Qt's powerful widget and signal-slot system.
 */

#include "mainwindow.h"
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent) {
    
    auto* widget = new QWidget;
    
    // Create a vertical layout for stacking widgets top to bottom
    auto* layout = new QVBoxLayout(widget);

    auto* button = new QPushButton("Sort");
    chart = new ChartView();

    layout->addWidget(chart);
    layout->addWidget(button);

    // Connect button's clicked signal to MainWindow's slot method
    connect(button, &QPushButton::clicked, this, &MainWindow::onSortClicked);

    setCentralWidget(widget);
}

void MainWindow::onSortClicked() {
    chart->startSortAnimation();
}