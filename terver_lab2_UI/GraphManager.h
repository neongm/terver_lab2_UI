#pragma once
#include "MyForm.h"
// for my stuff:
#include "MyPointSeries.h"



class GraphManager
{
public:
	static void draw(System::Windows::Forms::DataVisualization::Charting::Chart^ _chart, System::String^ _series_name, MyPointSeries& points_array);
	static void draw_bounded(System::Windows::Forms::DataVisualization::Charting::Chart^ _chart, System::String^ _series_name, MyPointSeries& points_array, double x_min, double x_max, double y_min, double y_max, bool squared = false);
};

