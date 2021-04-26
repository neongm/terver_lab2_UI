#include "Statistics.h"


#define LEGACY

double Statistics::mid_value(const std::vector<double>& _array)
{
	return std::accumulate(_array.begin(), _array.end(), 0) / _array.size();
}
double Statistics::sum(const std::vector<double>& _array)
{
	return std::accumulate(_array.begin(), _array.end(), 0);
}

#ifdef LEGACY
double Statistics::coefficient_of_correlation(const std::vector<double>& _first_array, const std::vector<double>& _second_array)
{
	double mid_x = mid_value(_first_array);
	double mid_y = mid_value(_second_array);

	std::vector<long double> xi_minus_mid_x;
	for (auto el : _first_array) xi_minus_mid_x.push_back(el - mid_x);

	std::vector<long double> xi_minus_mid_y;
	for (auto el : _second_array) xi_minus_mid_y.push_back(el - mid_y);

	long double upper_part = 0;
	for (size_t i = 0; i < xi_minus_mid_x.size(); i++) upper_part += xi_minus_mid_x.at(i) * xi_minus_mid_y.at(i);

	long double x_sum = 0;
	for (auto el : xi_minus_mid_x) x_sum += pow(el, 2);

	long double y_sum = 0;
	for (auto el : xi_minus_mid_y) y_sum += pow(el, 2);

	return  (double)upper_part / pow(x_sum * y_sum, 0.5);

}
#else

double Statistics::coefficient_of_correlation(const std::vector<double>& _first_array, const std::vector<double>& _second_array)
{
	double mid_x = mid_value(_first_array);
	double mid_y = mid_value(_second_array);

	std::vector<double> xi_minus_mid_x;
	for (auto el : _first_array) xi_minus_mid_x.push_back(el - mid_x);

	std::vector<double> yi_minus_mid_y;
	for (auto el : _second_array) yi_minus_mid_y.push_back(el - mid_y);

	//long double upper_part = 0;
	//for (size_t i = 0; i < xi_minus_mid_x.size(); i++) upper_part += xi_minus_mid_x.at(i) * xi_minus_mid_y.at(i);

	double sum_xi_minus_mid_x = sum(xi_minus_mid_x);
	double sum_yi_minus_mid_y = sum(yi_minus_mid_y);

	double upper_part_value = 0;
	for (size_t i = 0; i < yi_minus_mid_y.size(); i++) upper_part_value += (sum_xi_minus_mid_x * sum_yi_minus_mid_y);

	
	double xi_minus_mid_x_sq;
	for (size_t i = 0; i < xi_minus_mid_x.size(); i++) xi_minus_mid_x_sq += pow((_first_array[i] - mid_x), 2);
	double yi_minus_mid_y_sq;
	for (size_t i = 0; i < yi_minus_mid_y.size(); i++) yi_minus_mid_y_sq += pow((_second_array[i] - mid_y), 2);

	double lower_part_value = xi_minus_mid_x_sq * yi_minus_mid_y_sq;

	return  upper_part_value / pow(lower_part_value, 0.5);
}

#endif

double Statistics::coefficient_of_correlation(MyPointSeries& _points_array)
{
	return coefficient_of_correlation(_points_array.x_values(), _points_array.y_values());
}