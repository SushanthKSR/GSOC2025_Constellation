/*
 * ChartView Implementation
 * ------------------------
 * This file implements the ChartView class, which extends QChartView to visualize
 * the process of sorting a set of integers using the Bubble Sort algorithm.
 * 
 * Key Features:
 * - Initializes a fixed dataset of integers.
 * - Displays the dataset as a vertical bar chart using QtCharts (QBarSet + QBarSeries).
 * - Uses a QTimer to animate the sorting process step-by-step.
 * - On each timer tick, one pass of the Bubble Sort algorithm is executed.
 * 
 * Methods:
 * - startSortAnimation(): Resets the sorting state and starts the animation timer.
 * - sortStep(): Performs one iteration of the sorting logic and updates the chart.
 * 
 */

#include "chartview.h"

#include <QtCharts/QChart>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>

#include <algorithm>
#include <cstdlib>
#include <ctime>

ChartView::ChartView(QWidget* parent)
    : QChartView(parent),
      series(new QBarSeries),
      currentIndex(0) {

    srand(static_cast<unsigned>(time(nullptr)));
    data = {30, 10, 50, 40, 20};

    auto* set = new QBarSet("Data");
    for (int val : data) {
        *set << val;
    }

    series->append(set);

    QChart* chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Sorting Visualization");
    chart->createDefaultAxes();

    setChart(chart);
    timer.setInterval(300);
    connect(&timer, &QTimer::timeout, this, &ChartView::sortStep);
}
// Public method to begin the sorting animation
void ChartView::startSortAnimation() {
    currentIndex = 0;
    timer.start();
}

// performs one iteration of the bubble sort algorithm
void ChartView::sortStep() {
    if (currentIndex >= data.size() - 1) {
        timer.stop();
        return;
    }

    for (int j = 0; j < data.size() - currentIndex - 1; ++j) {
        if (data[j] > data[j + 1]) {
            std::swap(data[j], data[j + 1]);
        }
    }

    series->clear();
    QBarSet* set = new QBarSet("Data");
    for (int val : data) {
        *set << val;
    }
    series->append(set);

    currentIndex++;
}