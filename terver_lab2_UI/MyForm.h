#pragma once
#include "validators.h"

// mystuff
#include "MyPointSeries.h"
#include "Statistics.h"
#include "GraphManager.h"
#include "Rnd.h"
#include "conv.h"
#include "validators.h"

namespace terverlab2UI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	protected:

	protected:

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;


	private: System::Windows::Forms::Label^ independent;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numeric_points_amount;
	private: System::Windows::Forms::TextBox^ textbox_n_expectation;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textbox_n_deviation;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label_cor_coeff;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::CheckBox^ checkbox_is_squared;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label9;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->checkbox_is_squared = (gcnew System::Windows::Forms::CheckBox());
			this->textbox_n_deviation = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textbox_n_expectation = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numeric_points_amount = (gcnew System::Windows::Forms::NumericUpDown());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->independent = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label_cor_coeff = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_points_amount))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(-1, -2);
			this->chart1->Name = L"chart1";
			series2->BorderColor = System::Drawing::Color::Red;
			series2->BorderWidth = 20;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastPoint;
			series2->Color = System::Drawing::Color::Red;
			series2->Legend = L"Legend1";
			series2->MarkerSize = 15;
			series2->Name = L"points";
			series2->YValuesPerPoint = 2;
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(712, 490);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Location = System::Drawing::Point(730, 13);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(241, 489);
			this->panel1->TabIndex = 1;
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->button3);
			this->panel6->Controls->Add(this->label5);
			this->panel6->Location = System::Drawing::Point(3, 220);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(233, 46);
			this->panel6->TabIndex = 3;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(3, 16);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(224, 23);
			this->button3->TabIndex = 1;
			this->button3->Text = L"draw";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(70, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"x = v+w, y = w+z";
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->button2);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Location = System::Drawing::Point(3, 167);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(233, 47);
			this->panel5->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(3, 16);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(224, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"draw";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(70, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"y = x + rand_norm";
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->label8);
			this->panel4->Controls->Add(this->checkbox_is_squared);
			this->panel4->Controls->Add(this->textbox_n_deviation);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Controls->Add(this->textbox_n_expectation);
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->numeric_points_amount);
			this->panel4->Location = System::Drawing::Point(3, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(233, 106);
			this->panel4->TabIndex = 3;
			// 
			// checkbox_is_squared
			// 
			this->checkbox_is_squared->AutoSize = true;
			this->checkbox_is_squared->Checked = true;
			this->checkbox_is_squared->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkbox_is_squared->Location = System::Drawing::Point(109, 82);
			this->checkbox_is_squared->Name = L"checkbox_is_squared";
			this->checkbox_is_squared->Size = System::Drawing::Size(100, 17);
			this->checkbox_is_squared->TabIndex = 8;
			this->checkbox_is_squared->Text = L"is bounds equal";
			this->checkbox_is_squared->UseVisualStyleBackColor = true;
			// 
			// textbox_n_deviation
			// 
			this->textbox_n_deviation->Location = System::Drawing::Point(109, 30);
			this->textbox_n_deviation->Name = L"textbox_n_deviation";
			this->textbox_n_deviation->Size = System::Drawing::Size(119, 20);
			this->textbox_n_deviation->TabIndex = 7;
			this->textbox_n_deviation->Text = L"1";
			this->textbox_n_deviation->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textbox_n_deviation_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(4, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(87, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"normal deviation:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"normal expectation:";
			// 
			// textbox_n_expectation
			// 
			this->textbox_n_expectation->Location = System::Drawing::Point(109, 56);
			this->textbox_n_expectation->Name = L"textbox_n_expectation";
			this->textbox_n_expectation->Size = System::Drawing::Size(119, 20);
			this->textbox_n_expectation->TabIndex = 4;
			this->textbox_n_expectation->Text = L"5";
			this->textbox_n_expectation->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textbox_real_values_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"points amount:";
			// 
			// numeric_points_amount
			// 
			this->numeric_points_amount->Location = System::Drawing::Point(109, 3);
			this->numeric_points_amount->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numeric_points_amount->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numeric_points_amount->Name = L"numeric_points_amount";
			this->numeric_points_amount->Size = System::Drawing::Size(119, 20);
			this->numeric_points_amount->TabIndex = 1;
			this->numeric_points_amount->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->button1);
			this->panel3->Controls->Add(this->independent);
			this->panel3->Location = System::Drawing::Point(3, 115);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(233, 46);
			this->panel3->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(4, 16);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(224, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"draw";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// independent
			// 
			this->independent->AutoSize = true;
			this->independent->Location = System::Drawing::Point(56, 0);
			this->independent->Name = L"independent";
			this->independent->Size = System::Drawing::Size(121, 13);
			this->independent->TabIndex = 0;
			this->independent->Text = L"x and y are independent";
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->label_cor_coeff);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->chart1);
			this->panel2->Location = System::Drawing::Point(12, 13);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(712, 489);
			this->panel2->TabIndex = 2;
			// 
			// label_cor_coeff
			// 
			this->label_cor_coeff->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label_cor_coeff->AutoSize = true;
			this->label_cor_coeff->Location = System::Drawing::Point(599, 465);
			this->label_cor_coeff->Name = L"label_cor_coeff";
			this->label_cor_coeff->Size = System::Drawing::Size(10, 13);
			this->label_cor_coeff->TabIndex = 2;
			this->label_cor_coeff->Text = L"-";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(485, 465);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(108, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"corelation coefficient:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(731, 1);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 13);
			this->label7->TabIndex = 4;
			this->label7->Text = L"props";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(4, 83);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(63, 13);
			this->label8->TabIndex = 9;
			this->label8->Text = L"don\'t touch:";
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->button4);
			this->panel7->Controls->Add(this->label9);
			this->panel7->Location = System::Drawing::Point(3, 272);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(233, 46);
			this->panel7->TabIndex = 4;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(3, 16);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(224, 23);
			this->button4->TabIndex = 1;
			this->button4->Text = L"draw";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(70, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(82, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"x = v*w, y = w*z";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(983, 514);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numeric_points_amount))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);


	private: System::Void textbox_real_values_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e){
		if (validators::IsDigit(e->KeyChar) ||  e->KeyChar == ',' || e->KeyChar == (char)Keys::Back)
		{
			if (e->KeyChar == ',' && textbox_n_expectation->Text == "") e->Handled = true;
			else if (e->KeyChar == ',' && validators::IsThereADot(conv::s(textbox_n_expectation->Text))) e->Handled = true;
			else e->Handled = false;
		}
		else 
		{
			e->Handled = true;
		}
	}
	private: System::Void textbox_n_deviation_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (validators::IsDigit(e->KeyChar) || e->KeyChar == ',' || e->KeyChar == (char)Keys::Back)
		{
			if (e->KeyChar == ',' && textbox_n_deviation->Text == "") e->Handled = true;
			else if (e->KeyChar == ',' && validators::IsThereADot(conv::s(textbox_n_deviation->Text))) e->Handled = true;
			else e->Handled = false;
		}
		else
		{
			e->Handled = true;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e);
};
}
