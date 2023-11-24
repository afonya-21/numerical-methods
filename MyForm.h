#pragma once
#include <cmath>
#include <iostream>
#include <iomanip>




namespace chislmetlab1komanda4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	double calculateTest(double Vi, double hi);
	double calculateOSN_1(double V, double x, double h);
	double supportOSN_1(double V, double x);
	double  calculateOSN_2(double a, double b, double c, double Vi, double Vi_pr, double hi);
	double  calculateOSN_2_pr(double V, double x);
	double  supportOSN_2(double a, double b, double c, double Vi, double Vi_pr);
	double  supportOSN_2_pr(double Vi);


	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			// Add the following code to create columns for dataGridView1

		}


	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;


	private:
		// Add these declarations for the columns
		System::Windows::Forms::DataGridViewTextBoxColumn^ i;
		System::Windows::Forms::DataGridViewTextBoxColumn^ xi;
		System::Windows::Forms::DataGridViewTextBoxColumn^ Vi;
		System::Windows::Forms::DataGridViewTextBoxColumn^ V2i;
		System::Windows::Forms::DataGridViewTextBoxColumn^ Vi_minus_V2i;
		System::Windows::Forms::DataGridViewTextBoxColumn^ OLP;
		System::Windows::Forms::DataGridViewTextBoxColumn^ hi;
		System::Windows::Forms::DataGridViewTextBoxColumn^ C1;
		System::Windows::Forms::DataGridViewTextBoxColumn^ C2;
		System::Windows::Forms::DataGridViewTextBoxColumn^ Ui;
		System::Windows::Forms::DataGridViewTextBoxColumn^ Ui_minus_Vi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Columni;











	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Columi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnXi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnVi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnV2i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnViMinusV2i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnOLP;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnHi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnC1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnC2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnUi;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ColumnUiMinusVi;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox10;





	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea19 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend19 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series25 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series26 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title19 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea20 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend20 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series27 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title20 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea21 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend21 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series28 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title21 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Columi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnXi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnVi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnV2i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnViMinusV2i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnOLP = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnHi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnC1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnC2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnUi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ColumnUiMinusVi = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(15, 25);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 15);
			this->label2->TabIndex = 2;
			this->label2->Text = L"x0: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(38, 25);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(72, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(15, 49);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(18, 15);
			this->label3->TabIndex = 4;
			this->label3->Text = L"X:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(38, 49);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(72, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"1";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(38, 74);
			this->textBox3->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(72, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"1";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 74);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(26, 15);
			this->label4->TabIndex = 7;
			this->label4->Text = L"U0:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(148, 22);
			this->textBox4->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(92, 20);
			this->textBox4->TabIndex = 8;
			this->textBox4->Text = L"0,01";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Control;
			this->label5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(124, 22);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 15);
			this->label5->TabIndex = 9;
			this->label5->Text = L"h0:";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(2, 25);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(81, 19);
			this->radioButton1->TabIndex = 10;
			this->radioButton1->Text = L"с контр. h";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Checked = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(2, 1);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(95, 19);
			this->radioButton2->TabIndex = 11;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"без контр. h";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Location = System::Drawing::Point(260, 103);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(113, 49);
			this->panel1->TabIndex = 12;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(58, 98);
			this->textBox5->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(51, 20);
			this->textBox5->TabIndex = 13;
			this->textBox5->Text = L"10000";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(15, 98);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 15);
			this->label6->TabIndex = 14;
			this->label6->Text = L"max i:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(134, 52);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(113, 15);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Кон. лок. погрешн:";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(126, 71);
			this->textBox6->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(114, 20);
			this->textBox6->TabIndex = 15;
			this->textBox6->Text = L"0,0001";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(1034, 19);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->groupBox1->Size = System::Drawing::Size(342, 116);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Задача имеет вид:";
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(25, 57);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 17);
			this->label9->TabIndex = 1;
			this->label9->Text = L"U(0) = U0";
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(25, 40);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(78, 17);
			this->label8->TabIndex = 0;
			this->label8->Text = L"dU/dx = 2U";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(126, 161);
			this->button1->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(317, 21);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// chart1
			// 
			chartArea19->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea19);
			this->chart1->Dock = System::Windows::Forms::DockStyle::Fill;
			legend19->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			legend19->IsTextAutoFit = false;
			legend19->ItemColumnSpacing = 100;
			legend19->MaximumAutoSize = 100;
			legend19->Name = L"Legend1";
			this->chart1->Legends->Add(legend19);
			this->chart1->Location = System::Drawing::Point(2, 1);
			this->chart1->Name = L"chart1";
			series25->BorderWidth = 3;
			series25->ChartArea = L"ChartArea1";
			series25->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series25->Color = System::Drawing::Color::LightSkyBlue;
			series25->Legend = L"Legend1";
			series25->LegendText = L"Ui";
			series25->Name = L"Series1";
			series26->BorderWidth = 3;
			series26->ChartArea = L"ChartArea1";
			series26->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series26->Color = System::Drawing::Color::Red;
			series26->LabelBorderColor = System::Drawing::Color::Black;
			series26->Legend = L"Legend1";
			series26->LegendText = L"Vi";
			series26->Name = L"Series2";
			this->chart1->Series->Add(series25);
			this->chart1->Series->Add(series26);
			this->chart1->Size = System::Drawing::Size(948, 582);
			this->chart1->TabIndex = 20;
			this->chart1->Text = L"chart1";
			title19->Name = L"Title1";
			title19->Text = L"График численного решения";
			this->chart1->Titles->Add(title19);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->Location = System::Drawing::Point(458, 19);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(501, 115);
			this->richTextBox1->TabIndex = 21;
			this->richTextBox1->Text = L"";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Location = System::Drawing::Point(260, 10);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->groupBox2->Size = System::Drawing::Size(183, 85);
			this->groupBox2->TabIndex = 22;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Задача:";
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(5, 58);
			this->radioButton5->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(133, 17);
			this->radioButton5->TabIndex = 2;
			this->radioButton5->Text = L"Основная задача №2";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(5, 38);
			this->radioButton4->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(133, 17);
			this->radioButton4->TabIndex = 1;
			this->radioButton4->Text = L"Основная задача №1\r\n";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Checked = true;
			this->radioButton3->Location = System::Drawing::Point(5, 16);
			this->radioButton3->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(111, 17);
			this->radioButton3->TabIndex = 0;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Тестовая задача";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->Columi,
					this->ColumnXi, this->ColumnVi, this->ColumnV2i, this->ColumnViMinusV2i, this->ColumnOLP, this->ColumnHi, this->ColumnC1, this->ColumnC2,
					this->ColumnUi, this->ColumnUiMinusVi
			});
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Default;
			this->dataGridView1->Location = System::Drawing::Point(17, 194);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(426, 586);
			this->dataGridView1->TabIndex = 19;
			// 
			// Columi
			// 
			this->Columi->HeaderText = L"i";
			this->Columi->MinimumWidth = 6;
			this->Columi->Name = L"Columi";
			this->Columi->Width = 80;
			// 
			// ColumnXi
			// 
			this->ColumnXi->HeaderText = L"xi";
			this->ColumnXi->MinimumWidth = 6;
			this->ColumnXi->Name = L"ColumnXi";
			this->ColumnXi->Width = 80;
			// 
			// ColumnVi
			// 
			this->ColumnVi->HeaderText = L"Vi";
			this->ColumnVi->MinimumWidth = 6;
			this->ColumnVi->Name = L"ColumnVi";
			this->ColumnVi->Width = 80;
			// 
			// ColumnV2i
			// 
			this->ColumnV2i->HeaderText = L"V2i";
			this->ColumnV2i->MinimumWidth = 6;
			this->ColumnV2i->Name = L"ColumnV2i";
			this->ColumnV2i->Width = 80;
			// 
			// ColumnViMinusV2i
			// 
			this->ColumnViMinusV2i->HeaderText = L"Vi - V2i";
			this->ColumnViMinusV2i->MinimumWidth = 6;
			this->ColumnViMinusV2i->Name = L"ColumnViMinusV2i";
			this->ColumnViMinusV2i->Width = 80;
			// 
			// ColumnOLP
			// 
			this->ColumnOLP->HeaderText = L"ОЛП";
			this->ColumnOLP->MinimumWidth = 6;
			this->ColumnOLP->Name = L"ColumnOLP";
			this->ColumnOLP->Width = 80;
			// 
			// ColumnHi
			// 
			this->ColumnHi->HeaderText = L"hi";
			this->ColumnHi->MinimumWidth = 6;
			this->ColumnHi->Name = L"ColumnHi";
			this->ColumnHi->Width = 80;
			// 
			// ColumnC1
			// 
			this->ColumnC1->HeaderText = L"C1";
			this->ColumnC1->MinimumWidth = 6;
			this->ColumnC1->Name = L"ColumnC1";
			this->ColumnC1->Width = 80;
			// 
			// ColumnC2
			// 
			this->ColumnC2->HeaderText = L"C2";
			this->ColumnC2->MinimumWidth = 6;
			this->ColumnC2->Name = L"ColumnC2";
			this->ColumnC2->Width = 80;
			// 
			// ColumnUi
			// 
			this->ColumnUi->HeaderText = L"Ui";
			this->ColumnUi->MinimumWidth = 6;
			this->ColumnUi->Name = L"ColumnUi";
			this->ColumnUi->Width = 80;
			// 
			// ColumnUiMinusVi
			// 
			this->ColumnUiMinusVi->HeaderText = L"|Ui - Vi|";
			this->ColumnUiMinusVi->MinimumWidth = 6;
			this->ColumnUiMinusVi->Name = L"ColumnUiMinusVi";
			this->ColumnUiMinusVi->Width = 80;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(474, 170);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(960, 610);
			this->tabControl1->TabIndex = 23;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->chart1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->tabPage1->Size = System::Drawing::Size(952, 584);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->chart3);
			this->tabPage2->Controls->Add(this->chart2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->tabPage2->Size = System::Drawing::Size(952, 584);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(344, 252);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(249, 24);
			this->label10->TabIndex = 2;
			this->label10->Text = L"*для основной задачи №2 ";
			// 
			// chart3
			// 
			chartArea20->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea20);
			legend20->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend20->Name = L"Legend1";
			this->chart3->Legends->Add(legend20);
			this->chart3->Location = System::Drawing::Point(450, 0);
			this->chart3->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->chart3->Name = L"chart3";
			series27->ChartArea = L"ChartArea1";
			series27->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series27->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series27->Legend = L"Legend1";
			series27->Name = L"Series1";
			this->chart3->Series->Add(series27);
			this->chart3->Size = System::Drawing::Size(439, 593);
			this->chart3->TabIndex = 1;
			this->chart3->Text = L"chart3";
			title20->Name = L"Title1";
			title20->Text = L"Фазовый портрет";
			this->chart3->Titles->Add(title20);
			// 
			// chart2
			// 
			chartArea21->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea21);
			legend21->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend21->Name = L"Legend1";
			this->chart2->Legends->Add(legend21);
			this->chart2->Location = System::Drawing::Point(4, 0);
			this->chart2->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->chart2->Name = L"chart2";
			series28->ChartArea = L"ChartArea1";
			series28->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series28->Color = System::Drawing::Color::Violet;
			series28->LabelForeColor = System::Drawing::Color::Bisque;
			series28->Legend = L"Legend1";
			series28->Name = L"Series1";
			this->chart2->Series->Add(series28);
			this->chart2->Size = System::Drawing::Size(439, 593);
			this->chart2->TabIndex = 0;
			this->chart2->Text = L"chart2";
			title21->Name = L"Title1";
			title21->Text = L"График первой производной";
			this->chart2->Titles->Add(title21);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(148, 98);
			this->textBox7->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(92, 20);
			this->textBox7->TabIndex = 24;
			this->textBox7->Text = L"-";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(119, 99);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 15);
			this->label1->TabIndex = 25;
			this->label1->Text = L"U\'0:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(23, 129);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(17, 15);
			this->label11->TabIndex = 27;
			this->label11->Text = L"a:";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(47, 127);
			this->textBox8->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(62, 20);
			this->textBox8->TabIndex = 26;
			this->textBox8->Text = L"-";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(124, 129);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(17, 15);
			this->label12->TabIndex = 29;
			this->label12->Text = L"b:";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(148, 127);
			this->textBox9->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(62, 20);
			this->textBox9->TabIndex = 28;
			this->textBox9->Text = L"-";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(24, 163);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(16, 15);
			this->label13->TabIndex = 31;
			this->label13->Text = L"c:";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(48, 161);
			this->textBox10->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(62, 20);
			this->textBox10->TabIndex = 30;
			this->textBox10->Text = L"-";
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(647, 258);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
	
		

		dataGridView1->Rows->Clear();
		this->chart1->Series[0]->Points->Clear();
		this->chart1->Series[1]->Points->Clear();
		this->chart2->Series[0]->Points->Clear();
		this->chart3->Series[0]->Points->Clear();


		if (this->radioButton3->Checked)
		{
			//тестовая + без контроля h
			if (this->radioButton2->Checked)
			{
				dataGridView1->Rows->Clear();
				this->chart1->Series[0]->Points->Clear();
				this->chart1->Series[1]->Points->Clear();

				int i = 0;
				double V2i, V2i_step1, Vi_sup, xi_sup, S, OLP = 0, p = 4, Ui, V0, Ui_minus_Vi, max_hi, min_hi, max_Ui_minus_Vi, min_xi = 0, max_xi = 0;
				double xi = Convert::ToDouble(textBox1->Text);
				double X = Convert::ToDouble(textBox2->Text);
				double Vi = Convert::ToDouble(textBox3->Text);
				double hi = Convert::ToDouble(textBox4->Text);
				double i_max_double = Convert::ToDouble(textBox5->Text);;
				int i_max = static_cast<int>(i_max_double);

				V2i = Vi;
				Ui = Vi;
				V0 = Ui;
				max_hi = hi;

				dataGridView1->Rows->Add(i, xi, Vi, V2i, Vi - V2i, OLP, hi, 0, 0, Ui, Ui_minus_Vi);
				this->chart1->Series[0]->Points->AddXY(xi, Ui);
				this->chart1->Series[1]->Points->AddXY(xi, Vi);


				while (xi <= X) {



					xi_sup = xi;
					Vi_sup = Vi;

					xi = xi + hi;


					if (xi >= X) {
						hi = X - xi_sup;
						xi = xi_sup + hi;
						if (hi != 0) { min_hi = hi; min_xi = xi; }
					}
					if (hi < 0.000000000000001) { break; };


					Vi = Vi + (hi / 6) * calculateTest(Vi, hi);

					V2i_step1 = Vi_sup + ((hi / 2) / 6) * calculateTest(Vi_sup, hi / 2);
					V2i = V2i_step1 + ((hi / 2) / 6) * calculateTest(V2i_step1, hi / 2);

					S = (V2i - Vi) / 15;
					OLP = S * 16;


					Ui = V0 * exp(2 * xi);

					Ui_minus_Vi = abs(Ui - Vi);

					if (Ui_minus_Vi > max_Ui_minus_Vi) { max_Ui_minus_Vi = Ui_minus_Vi; }

					i++;
					if (i > i_max) { break; }

					this->chart1->Series[0]->Points->AddXY(xi, Ui);
					this->chart1->Series[1]->Points->AddXY(xi, Vi);

					dataGridView1->Rows->Add(i, xi, Vi, V2i, Vi - V2i, OLP, hi, 0, 0, Ui, Ui_minus_Vi);
				}
				this->richTextBox1->Text = "Делений шага: " + 0 + "\n";
				this->richTextBox1->Text += "Удвоений шага: " + 0 + "\n";
				this->richTextBox1->Text += "Всего i: " + i + "\n";
				this->richTextBox1->Text += "Максимальный шаг: " + max_hi + " при xi = " + max_xi +"\n";
				this->richTextBox1->Text += "Минимальный шаг: " + min_hi + " при xi = "+ min_xi + "\n";
				this->richTextBox1->Text += "Максимальная ошибка: " + max_Ui_minus_Vi + "\n";
			}



			//тестовая + контроль h
			if (this->radioButton1->Checked)
			{
				dataGridView1->Rows->Clear();
				this->chart1->Series[0]->Points->Clear();
				this->chart1->Series[1]->Points->Clear();

				int i = 0, C1 = 0, C2 = 0, C1_moment, C2_moment;
				double V2i, V2i_step1, Vi_sup, xi_sup, hi_sup, S, OLP = 0, p = 4, Ui, V0, Ui_minus_Vi, max_hi, min_hi, max_Ui_minus_Vi, min_xi = 0, max_xi = 0;

				double xi = Convert::ToDouble(textBox1->Text);
				double X = Convert::ToDouble(textBox2->Text);
				double Vi = Convert::ToDouble(textBox3->Text);
				double hi = Convert::ToDouble(textBox4->Text);
				double E = Convert::ToDouble(textBox6->Text);
				double i_max_double = Convert::ToDouble(textBox5->Text);;
				int i_max = static_cast<int>(i_max_double);

				V2i = Vi;
				Ui = Vi;
				V0 = Ui;
				max_hi = hi;
				min_hi = hi;

				dataGridView1->Rows->Add(i, xi, Vi, V2i, Vi - V2i, OLP, hi, 0, 0, Ui, Ui_minus_Vi);
				this->chart1->Series[0]->Points->AddXY(xi, Ui);
				this->chart1->Series[1]->Points->AddXY(xi, Vi);
				C1_moment = 0;
				C2_moment = 0;


				while (xi <= X) {




					xi_sup = xi;
					Vi_sup = Vi;
					hi_sup = hi;

					xi = xi + hi;

					if (xi >= X) {
						hi = X - xi_sup;
						xi = xi_sup + hi;
						if ((hi < min_hi) && (hi > 0)) { min_hi = hi; }
					}
					if (hi < 0.000000000000001) { break; };


					Vi = Vi + (hi / 6) * calculateTest(Vi, hi);

					V2i_step1 = Vi_sup + ((hi / 2) / 6) * calculateTest(Vi_sup, hi / 2);
					V2i = V2i_step1 + ((hi / 2) / 6) * calculateTest(V2i_step1, hi / 2);

					S = (V2i - Vi) / 15;
					OLP = S * 16;


					C1_moment = 0;
					C2_moment = 0;

					if (abs(S) < E / 32) {
						hi = hi * 2;
						C2++;
						C2_moment = 1;
						if (hi > max_hi) { max_hi = hi; max_xi = xi+hi;}
					}

					if (abs(S) > E) {
						hi = hi / 2;
						C1++;
						C1_moment = 1;
						if ((hi < min_hi) && (hi > 0)) { min_hi = hi; min_xi = xi;}
					}

					Ui = V0 * exp(2 * xi);

					Ui_minus_Vi = abs(Ui - Vi);
					if (max_Ui_minus_Vi < Ui_minus_Vi) { max_Ui_minus_Vi = Ui_minus_Vi; }

					i++;
					if (i > i_max) { break; }

					this->chart1->Series[0]->Points->AddXY(xi, Ui);
					this->chart1->Series[1]->Points->AddXY(xi, Vi);

					dataGridView1->Rows->Add(i, xi, Vi, V2i, Vi - V2i, OLP, hi_sup, C1_moment, C2_moment, Ui, Ui_minus_Vi);



				}
				this->richTextBox1->Text = "Делений шага: " + C1 + "\n";
				this->richTextBox1->Text += "Удвоений шага: " + C2 + "\n";
				this->richTextBox1->Text += "Всего i: " + i + "\n";
				this->richTextBox1->Text += "Максимальный шаг: " + max_hi + " при xi = " + max_xi + "\n";
				this->richTextBox1->Text += "Минимальный шаг: " + min_hi + " при xi = " + min_xi +"\n";
				this->richTextBox1->Text += "Максимальная ошибка: " + max_Ui_minus_Vi + "\n";
			}
		}




		if (this->radioButton4->Checked)
		{
			//Основная 1 + без контроля h
			if (this->radioButton2->Checked)
			{
				dataGridView1->Rows->Clear();
				this->chart1->Series[0]->Points->Clear();
				this->chart1->Series[1]->Points->Clear();

				int i = 0;
				double V2i, V2i_step1, Vi_sup, xi_sup, S, OLP = 0, V0, max_hi, min_hi, PI = 3.1415926535, min_xi = 0, max_xi = 0;
				double xi = Convert::ToDouble(textBox1->Text);
				double X = Convert::ToDouble(textBox2->Text);
				double Vi = Convert::ToDouble(textBox3->Text);
				double hi = Convert::ToDouble(textBox4->Text);
				double i_max_double = Convert::ToDouble(textBox5->Text);;
				int i_max = static_cast<int>(i_max_double);

				V2i = Vi;
				V0 = Vi;
				max_hi = hi;
				

				dataGridView1->Rows->Add(i, xi, Vi, V2i, Vi - V2i, OLP, hi, 0, 0, "-", "-");
				this->chart1->Series[1]->Points->AddXY(xi, Vi);


				while (xi <= X) {



					xi_sup = xi;
					Vi_sup = Vi;

					xi = xi + hi;


					if (xi >= X) {
						hi = X - xi_sup;
						xi = xi_sup + hi;
						if (hi != 0) { min_hi = hi; min_xi = xi; }
					}
					if (hi < 0.000000000000001) { break; };


					Vi = Vi + (hi / 6) * calculateOSN_1(xi, Vi, hi);

					V2i_step1 = Vi_sup + ((hi / 2) / 6) * calculateOSN_1(xi, Vi_sup, hi / 2);
					V2i = V2i_step1 + ((hi / 2) / 6) * calculateOSN_1(xi + (hi / 2), V2i_step1, hi / 2);

					S = (V2i - Vi) / 15;
					OLP = S * 16;



					i++;
					if (i > i_max) { break; }

					this->chart1->Series[0]->Points->AddXY(xi, Ui);
					this->chart1->Series[1]->Points->AddXY(xi, Vi);

					dataGridView1->Rows->Add(i, xi, Vi, V2i, Vi - V2i, OLP, hi, 0, 0, Ui, Ui_minus_Vi);
				}
				this->richTextBox1->Text = "Делений шага: " + 0 + "\n";
				this->richTextBox1->Text += "Удвоений шага: " + 0 + "\n";
				this->richTextBox1->Text += "Всего i: " + i + "\n";
				this->richTextBox1->Text += "Максимальный шаг: " + max_hi + " при xi = " + max_xi + "\n";
				this->richTextBox1->Text += "Минимальный шаг: " + min_hi + " при xi = " + min_xi + "\n";
			}



			//Оснвная 1 + контроль h
			if (this->radioButton1->Checked)
			{
				dataGridView1->Rows->Clear();
				this->chart1->Series[0]->Points->Clear();
				this->chart1->Series[1]->Points->Clear();

				int i = 0, C1 = 0, C2 = 0, C1_moment, C2_moment;
				double V2i, V2i_step1, Vi_sup, xi_sup, hi_sup, S, OLP = 0, p = 4, Ui, V0, Ui_minus_Vi, max_hi, min_hi, max_Ui_minus_Vi, max_xi = 0, min_xi = 0;

				double xi = Convert::ToDouble(textBox1->Text);
				double X = Convert::ToDouble(textBox2->Text);
				double Vi = Convert::ToDouble(textBox3->Text);
				double hi = Convert::ToDouble(textBox4->Text);
				double E = Convert::ToDouble(textBox6->Text);
				double i_max_double = Convert::ToDouble(textBox5->Text);;
				int i_max = static_cast<int>(i_max_double);

				V2i = Vi;
				Ui = Vi;
				V0 = Ui;
				max_hi = hi;
				min_hi = hi;

				dataGridView1->Rows->Add(i, xi, Vi, V2i, Vi - V2i, OLP, hi, 0, 0, "-", "-");
				this->chart1->Series[0]->Points->AddXY(xi, Ui);
				this->chart1->Series[1]->Points->AddXY(xi, Vi);


				while (xi <= X) {

					C1_moment = 0;
					C2_moment = 0;


					xi_sup = xi;
					Vi_sup = Vi;
					hi_sup = hi;

					xi = xi + hi;

					
					if (xi >= X) {
						hi = X - xi_sup;
						xi = xi_sup + hi;
						if ((hi < min_hi) && (hi > 0)) { min_hi = hi; }
					}
					if (hi < 0.000000000000001) { break; };


					Vi = Vi + (hi / 6) * calculateOSN_1(xi, Vi, hi);

					V2i_step1 = Vi_sup + ((hi / 2) / 6) * calculateOSN_1(xi, Vi_sup, hi / 2);
					V2i = V2i_step1 + ((hi / 2) / 6) * calculateOSN_1(xi + (hi / 2), V2i_step1, hi / 2);

					S = (V2i - Vi) / (pow(2, p) - 1);
					OLP = S * pow(2, p);

					if (abs(S) < E / pow(2, p + 1)) {
						hi = hi * 2;
						C2++;
						C2_moment = 1;
						if (hi > max_hi) { max_hi = hi; max_xi = xi+hi; }
					}

					if (abs(S) > E) {
						hi = hi / 2;
						C1++;
						C1_moment = 1;
						if ((hi < min_hi) && (hi > 0)) { min_hi = hi;  min_xi = xi;}
					}


					Ui = V0 * exp(2 * xi);

					Ui_minus_Vi = abs(Ui - Vi);
					if (max_Ui_minus_Vi < Ui_minus_Vi) { max_Ui_minus_Vi = Ui_minus_Vi; }

					i++;
					if (i > i_max) { break; }

					this->chart1->Series[1]->Points->AddXY(xi, Vi);

					dataGridView1->Rows->Add(i, xi, Vi, V2i, Vi - V2i, OLP, hi_sup, C1_moment, C2_moment, "-", "-");

				}
				this->richTextBox1->Text = "Делений шага: " + C1 + "\n";
				this->richTextBox1->Text += "Удвоений шага: " + C2 + "\n";
				this->richTextBox1->Text += "Всего i: " + i + "\n";
				this->richTextBox1->Text += "Максимальный шаг: " + max_hi +" при xi = "+ max_xi + "\n";
				this->richTextBox1->Text += "Минимальный шаг: " + min_hi + " при xi = " + min_xi + "\n";
			}

		}




		if (this->radioButton5->Checked)
		{
			//Основная 2 + без контроля h
			if (this->radioButton2->Checked)
			{
				dataGridView1->Rows->Clear();
				this->chart1->Series[0]->Points->Clear();
				this->chart1->Series[1]->Points->Clear();
				this->chart2->Series[0]->Points->Clear();
				this->chart3->Series[0]->Points->Clear();

				int i = 0;
				double V2i, V2i_step1, Vi_sup, xi_sup, S, OLP = 0, V0, max_hi, min_hi, Vi_pr_sup, V2i_pr, V2i_pr_step1, min_xi = 0, max_xi = 0;
				double xi = Convert::ToDouble(textBox1->Text);
				double X = Convert::ToDouble(textBox2->Text);
				double Vi = Convert::ToDouble(textBox3->Text);
				double Vi_pr = Convert::ToDouble(textBox7->Text);
				double a = Convert::ToDouble(textBox8->Text);
				double b = Convert::ToDouble(textBox9->Text);
				double c = Convert::ToDouble(textBox10->Text);
				double hi = Convert::ToDouble(textBox4->Text);
				double Ui = Convert::ToDouble(textBox3->Text);
				double Ui_pr = Convert::ToDouble(textBox7->Text);
				double i_max_double = Convert::ToDouble(textBox5->Text);;
				int i_max = static_cast<int>(i_max_double);

				V2i = Vi;
				V0 = Vi;
				max_hi = hi;

				dataGridView1->Rows->Add(i, xi, Vi, V2i, Vi - V2i, OLP, hi, 0, 0, "-", "-");
				this->chart1->Series[1]->Points->AddXY(xi, Vi);
				this->chart2->Series[0]->Points->AddXY(xi, Vi_pr);
				this->chart3->Series[0]->Points->AddXY(Vi, Vi_pr);


				while (xi <= X) {



					xi_sup = xi;
					Vi_sup = Vi;
					Vi_pr_sup = Vi_pr;

					xi = xi + hi;


					if (xi >= X) {
						hi = X - xi_sup;
						xi = xi_sup + hi;
						if (hi != 0) { min_hi = hi; min_xi = xi; }
					}
					if (hi < 0.000000000000001) { break; };


					Vi = Vi + (hi / 6) * calculateOSN_2(a, b, c, Vi, Vi_pr, hi);
					Vi_pr = Vi_pr + (hi / 6) * calculateOSN_2_pr(Vi, hi);

					V2i_step1 = Vi_sup + ((hi / 2) / 6) * calculateOSN_2(a, b, c, Vi_sup, Vi_pr_sup, hi/2);
					V2i_pr_step1 = Vi_pr_sup + ((hi/2) / 6) * calculateOSN_2_pr(Vi_sup, hi/2);

					V2i = V2i_step1 + ((hi / 2) / 6) * calculateOSN_2(a, b, c, V2i_step1, V2i_pr_step1, hi/2);
					V2i_pr = V2i_pr_step1 + ((hi / 2) / 6) * calculateOSN_2_pr(V2i_step1, hi / 2);

					S = (V2i - Vi) / 15;
					OLP = S * 16;


					i++;
					if (i > i_max) { break; }

					this->chart2->Series[0]->Points->AddXY(xi, Vi_pr);
					this->chart1->Series[1]->Points->AddXY(xi, Vi);
					this->chart3->Series[0]->Points->AddXY(Vi, Vi_pr);

					dataGridView1->Rows->Add(i, xi, Vi, V2i, Vi - V2i, OLP, hi, 0, 0, "-", " - ");
				}

				this->richTextBox1->Text = "Делений шага: " + 0 + "\n";
				this->richTextBox1->Text += "Удвоений шага: " + 0 + "\n";
				this->richTextBox1->Text += "Всего i: " + i + "\n";
				this->richTextBox1->Text += "Максимальный шаг: " + max_hi + " при xi = " + max_xi + "\n";
				this->richTextBox1->Text += "Минимальный шаг: " + min_hi + " при xi = " + min_xi + "\n";
			}



			//Оснвная 2 + контроль h
			if (this->radioButton1->Checked)
			{
				dataGridView1->Rows->Clear();
				this->chart1->Series[0]->Points->Clear();
				this->chart1->Series[1]->Points->Clear();
				this->chart2->Series[0]->Points->Clear();
				this->chart3->Series[0]->Points->Clear();

				int i = 0, C1 = 0, C2 = 0, C1_moment, C2_moment;
				double V2i, V2i_step1, Vi_sup, xi_sup, S, OLP = 0, V0, max_hi, min_hi, Vi_pr_sup, V2i_pr, V2i_pr_step1, min_xi = 0, max_xi = 0;
				double xi = Convert::ToDouble(textBox1->Text);
				double X = Convert::ToDouble(textBox2->Text);
				double Vi = Convert::ToDouble(textBox3->Text);
				double Vi_pr = Convert::ToDouble(textBox7->Text);
				double a = Convert::ToDouble(textBox8->Text);
				double b = Convert::ToDouble(textBox9->Text);
				double c = Convert::ToDouble(textBox10->Text);
				double hi = Convert::ToDouble(textBox4->Text);
				double Ui = Convert::ToDouble(textBox3->Text);
				double Ui_pr = Convert::ToDouble(textBox7->Text);
				double E = Convert::ToDouble(textBox6->Text);
				double i_max_double = Convert::ToDouble(textBox5->Text);;
				int i_max = static_cast<int>(i_max_double);

				V2i = Vi;
				V0 = Vi;
				max_hi = hi;

				dataGridView1->Rows->Add(i, xi, Vi, V2i, Vi - V2i, OLP, hi, 0, 0, "-", "-");
				this->chart1->Series[1]->Points->AddXY(xi, Vi);
				this->chart2->Series[0]->Points->AddXY(xi, Vi_pr);
				this->chart3->Series[0]->Points->AddXY(Vi, Vi_pr);


				while (xi <= X) {

					

					C1_moment = 0;
					C2_moment = 0;

					xi_sup = xi;
					Vi_sup = Vi;
					Vi_pr_sup = Vi_pr;

					xi = xi + hi;


					if (xi >= X) {
						hi = X - xi_sup;
						xi = xi_sup + hi;
						if (hi != 0) { min_hi = hi; }
					}
					if (hi < 0.000000000000001) { break; };


					Vi = Vi_sup + (hi / 6) * calculateOSN_2(a, b, c, Vi_sup, Vi_pr_sup, hi);
					Vi_pr = Vi_pr_sup + (hi / 6) * calculateOSN_2_pr(Vi_sup, hi);

					V2i_step1 = Vi_sup + ((hi / 2) / 6) * calculateOSN_2(a, b, c, Vi_sup, Vi_pr_sup, hi / 2);
					V2i_pr_step1 = Vi_pr_sup + ((hi / 2) / 6) * calculateOSN_2_pr(Vi_sup, hi / 2);

					V2i = V2i_step1 + ((hi / 2) / 6) * calculateOSN_2(a, b, c, V2i_step1, V2i_pr_step1, hi / 2);
					V2i_pr = V2i_pr_step1 + ((hi / 2) / 6) * calculateOSN_2_pr(V2i_step1, hi / 2);

					S = (V2i - Vi) / 15;
					OLP = S * 16;

					if (abs(S) < E / pow(2, 5)) {
						hi = hi * 2;
						C2++;
						C2_moment = 1;
						if (hi > max_hi) { max_hi = hi; max_xi = xi + hi; }
					}

					if (abs(S) > E) {
						hi = hi / 2;
						C1++;
						C1_moment = 1;
						if ((hi < min_hi) && (hi > 0)) { min_hi = hi; min_hi = hi; }
					}

					i++;
					if (i >= i_max) { break; }
					

					this->chart2->Series[0]->Points->AddXY(xi, Vi_pr);
					this->chart1->Series[1]->Points->AddXY(xi, Vi);
					this->chart3->Series[0]->Points->AddXY(Vi, Vi_pr);

					dataGridView1->Rows->Add(i, xi, Vi, V2i, Vi - V2i, OLP, hi, C1_moment, C2_moment, "-", " - ");
					
				}

				this->richTextBox1->Text = "Делений шага: " + C1 + "\n";
				this->richTextBox1->Text += "Удвоений шага: " + C2 + "\n";
				this->richTextBox1->Text += "Всего i: " + i + "\n";
				this->richTextBox1->Text += "Максимальный шаг: " + max_hi+ " при xi = "+ max_xi + "\n";
				this->richTextBox1->Text += "Минимальный шаг: " + min_hi + " при xi = " + min_xi + "\n";
			}

		}





	}

	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->textBox7->ReadOnly = true;
		this->textBox7->Text = "-";

		this->label10->Text = "*для основной задачи №2 ";

		this->textBox8->ReadOnly = true;
		this->textBox8->Text = "-";

		this->textBox9->ReadOnly = true;
		this->textBox9->Text = "-";

		this->textBox10->ReadOnly = true;
		this->textBox10->Text = "-";

		this->label8->Text = "dU/dx = 2U";
		this->label9->Text = "U(0) = U0";
	}

	private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->textBox7->ReadOnly = true;
		this->textBox7->Text = "-";

		this->label10->Text = "*для основной задачи №2 ";

		this->textBox8->ReadOnly = true;
		this->textBox8->Text = "-";

		this->textBox9->ReadOnly = true;
		this->textBox9->Text = "-";

		this->textBox10->ReadOnly = true;
		this->textBox10->Text = "-";

		this->label8 -> Text = "dU/dx = (x^3+1)*U^2/(x^5+1)+U-U^3*sin(10x)";
		this->label9->Text = "U(0) = U0";

	}


	private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		this->textBox7->ReadOnly = false;
		this->textBox7->Text = "1";

		this->label10->Text = "";

		this->textBox8->ReadOnly = false;
		this->textBox8->Text = "1";

		this->textBox9->ReadOnly = false;
		this->textBox9->Text = "1";

		this->textBox10->ReadOnly = false;
		this->textBox10->Text = "1";

		this->label8->Text = "d^2U/dx^2 + a*U'*|U'| + b*U' + CU = 0";
		this->label9->Text = "U(0) = U0; U'(0) = U'0";
	}


	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
