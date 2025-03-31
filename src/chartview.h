/*
 * ChartView Class Definition
 * --------------------------
 * a real-time visualization of the Bubble Sort algorithm using Qt Charts.
 * 
 * Responsibilities:
 * - Initializes a bar chart with a predefined set of integer values.
 * - Animates the sorting process using a QTimer and updates the chart view.
 * 
 * Key Members:
 * - QBarSeries* series       : The bar series representing the data on the chart.
 * - QVector<int> data        : The actual data being sorted and visualized.
 * - QTimer timer             : Controls the step-by-step execution of the sort.
 * - int currentIndex         : Tracks progress through the sort algorithm.
 *
 * - sortStep()               : Executes one step of the Bubble Sort and updates the chart.
 */

#pragma once

#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QTimer>
#include <QVector>


// ChartView class: A custom QChartView that visualizes a sorting algorithm
class ChartView : public QChartView {
    Q_OBJECT
public:
    ChartView(QWidget* parent = nullptr);
    void startSortAnimation();

private:
    QBarSeries* series;
    QVector<int> data;
    QTimer timer;
    int currentIndex;

private slots:
    void sortStep();
};