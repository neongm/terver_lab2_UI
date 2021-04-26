#pragma once
#include "MyPointSeries.h"
#include <vector>
#include <algorithm>
#include <numeric>

class Statistics
{
public:
	static double mid_value(const std::vector<double>& _array);
	static double sum(const std::vector<double>& _array);
	static double coefficient_of_correlation(const std::vector<double>& _first_array, const std::vector<double>& _second_array);
	static double coefficient_of_correlation(MyPointSeries& _points_array);
};

