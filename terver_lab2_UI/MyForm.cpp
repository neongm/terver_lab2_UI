#include "MyForm.h"
#include <windows.h>

#define WTF // using wtfs

using namespace terverlab2UI;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}


System::Void terverlab2UI::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	// for the situatuon when y are independent

	MyPointSeries points = MyPointSeries();
	size_t points_amount = conv::dec_to_int(numeric_points_amount->Value);
	double normal_expectation = conv::cs_to_double(textbox_n_expectation->Text);
	double normal_deviation = conv::cs_to_double(textbox_n_deviation->Text);
	bool is_equal_bounds = checkbox_is_squared->Checked;

	for (size_t i = 0; i < points_amount; i++) {
		//double x = Rnd::random_norm(normal_expectation, normal_deviation);
		double x = Rnd::random_real(0, 1);
		double y = Rnd::random_real(0, 1);
		//double y = Rnd::random_norm(normal_expectation, normal_deviation);
		points.push_back(x, y);
	}

	GraphManager::draw_bounded(chart1, "points", points, points.min_x(), points.max_x(), points.min_y(), points.max_y(), is_equal_bounds);
	label_cor_coeff->Text = conv::cs(Statistics::coefficient_of_correlation(points));
}


System::Void terverlab2UI::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	// for the situatuon when y = x+n

	MyPointSeries points = MyPointSeries();
	size_t points_amount = conv::dec_to_int(numeric_points_amount->Value);
	double normal_expectation = conv::cs_to_double(textbox_n_expectation->Text);
	double normal_deviation = conv::cs_to_double(textbox_n_deviation->Text);
	bool is_equal_bounds = checkbox_is_squared->Checked;

	for (size_t i = 0; i < points_amount; i++) {
#ifdef WTF
		double x = Rnd::random_norm(normal_expectation, normal_deviation);
		double y = 3 * x + 2 + Rnd::random_norm(normal_expectation, normal_deviation); // 3*x+2+rnn
#else
		double x = Rnd::random_norm(normal_expectation, normal_deviation);
		double y = x + Rnd::random_norm(normal_expectation, normal_deviation);
#endif
		points.push_back(x, y);
	}

	GraphManager::draw_bounded(chart1, "points", points, points.min_x(), points.max_x(), points.min_y(), points.max_y(), is_equal_bounds);
	label_cor_coeff->Text = conv::cs(Statistics::coefficient_of_correlation(points));
}

System::Void terverlab2UI::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	// for the situatuon when y = x*n

	MyPointSeries points = MyPointSeries();
	size_t points_amount = conv::dec_to_int(numeric_points_amount->Value);
	double normal_expectation = conv::cs_to_double(textbox_n_expectation->Text);
	double normal_deviation = conv::cs_to_double(textbox_n_deviation->Text);
	bool is_equal_bounds = checkbox_is_squared->Checked;

	for (size_t i = 0; i < points_amount; i++) {
#ifdef WTF
		double v = Rnd::random_norm(normal_expectation, normal_deviation);
		double w = Rnd::random_norm(normal_expectation, normal_deviation);
		double z = Rnd::random_norm(normal_expectation, normal_deviation);
		double x = v + w;
		double y = w + z;  
#else
		double x = Rnd::random_norm(normal_expectation, normal_deviation);
		double y = x * Rnd::random_norm(normal_expectation, normal_deviation);
#endif
		points.push_back(x, y);
	}

	GraphManager::draw_bounded(chart1, "points", points, points.min_x(), points.max_x(), points.min_y(), points.max_y(), is_equal_bounds);
	label_cor_coeff->Text = conv::cs(Statistics::coefficient_of_correlation(points));
}

System::Void terverlab2UI::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	// for the situatuon when y = x*n

	MyPointSeries points = MyPointSeries();
	size_t points_amount = conv::dec_to_int(numeric_points_amount->Value);
	double normal_expectation = conv::cs_to_double(textbox_n_expectation->Text);
	double normal_deviation = conv::cs_to_double(textbox_n_deviation->Text);
	bool is_equal_bounds = checkbox_is_squared->Checked;

	for (size_t i = 0; i < points_amount; i++) {
#ifdef WTF
		double v = Rnd::random_norm(normal_expectation, normal_deviation);
		double w = Rnd::random_norm(normal_expectation, normal_deviation);
		double z = Rnd::random_norm(normal_expectation, normal_deviation);
		double x = v * w;
		double y = w * z;
#else
		double x = Rnd::random_norm(normal_expectation, normal_deviation);
		double y = x * Rnd::random_norm(normal_expectation, normal_deviation);
#endif
		points.push_back(x, y);
	}

	GraphManager::draw_bounded(chart1, "points", points, points.min_x(), points.max_x(), points.min_y(), points.max_y(), is_equal_bounds);
	label_cor_coeff->Text = conv::cs(Statistics::coefficient_of_correlation(points));
}

