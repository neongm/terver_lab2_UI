#include "MyPointSeries.h"

struct pred_bigger
{
	bool operator() (myPoint x1, myPoint x2)
	{
		return x1.x > x2.x;
	}
};


MyPointSeries::MyPointSeries() {}

MyPointSeries::MyPointSeries(std::vector<myPoint> _vector_of_myPoints)
{
	points_array = _vector_of_myPoints;
}

void MyPointSeries::push_back(myPoint _point)
{
	points_array.push_back(_point);
}

void MyPointSeries::push_back(double _x, double _y)
{
	points_array.emplace_back(myPoint(_x, _y));
}

std::vector<myPoint>::iterator MyPointSeries::begin()
{
	return points_array.begin();
}

std::vector<myPoint>::iterator MyPointSeries::end()
{
	return points_array.end();
}

void MyPointSeries::clear()
{
	points_array.resize(0);
}

std::vector<double> MyPointSeries::x_values()
{
	std::vector<double> x_values;
	for (auto el : points_array) x_values.push_back(el.x);
	return x_values;
}

std::vector<double> MyPointSeries::y_values()
{
	std::vector<double> y_values;
	for (auto el : points_array) y_values.push_back(el.y);
	return y_values;
}

myPoint MyPointSeries::at(size_t _index)
{
	return points_array.at(_index);
}

size_t MyPointSeries::size()
{
	return points_array.size();
}

size_t  MyPointSeries::count_from_x1_to_x2(double _x1, double _x2)
{
	size_t counter = 0;
	for (auto el : points_array) if (el.x < _x2 && el.x > _x1) counter++;
	return counter;
}

size_t  MyPointSeries::count_from_y1_to_y2(double _y1, double _y2)
{
	size_t counter = 0;
	for (auto el : points_array) if (el.y < _y2 && el.y > _y1) counter++;
	return counter;
}

double MyPointSeries::min_x()
{
	double min = points_array[0].x;
	for (auto el : points_array) if (el.x < min) min = el.x;
	return min;
}

double MyPointSeries::max_x()
{
	double max = points_array[0].x;
	for (auto el : points_array) if (el.x > max) max = el.x;
	return max;
}

double MyPointSeries::min_y()
{
	double min = points_array[0].y;
	for (auto el : points_array) if (el.y < min) min = el.y;
	return min;
}

double MyPointSeries::max_y()
{
	double max = points_array[0].y;
	for (auto el : points_array) if (el.y > max) max = el.y;
	return max;
}


void MyPointSeries::sort_by_x()
{
	pred_bigger pred = pred_bigger();
	std::sort(points_array.begin(), points_array.end(), pred);
}
