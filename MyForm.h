#pragma once
#include <stdio.h>
#include <string>
#include <windows.h>
#include <time.h>
#include <msclr/marshal_cppstd.h>
unsigned char yokonum[256][129] = {};
unsigned char tatenum[256][129] = {};
unsigned char tate = 30;
unsigned char yoko = 30;
unsigned char inpnum;
unsigned char inputretu[3] = {};

namespace Project2 {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;



	/// <summary>
	/// U_Logi の概要
	/// </summary>
	public ref class U_Logi : public System::Windows::Forms::Form
	{
	public:
		U_Logi(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~U_Logi()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label4;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label5;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;




	protected:

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 41);
			this->button1->TabIndex = 0;
			this->button1->Text = L"開く";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &U_Logi::button1_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label1->Location = System::Drawing::Point(215, 180);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(4400, 4200);
			this->label1->TabIndex = 1;
			this->label1->Text = L"テキスト見本";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L".lgd";
			this->openFileDialog1->Filter = L"LogiNeko Files (*.lgd)|*.lgd";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &U_Logi::openFileDialog1_FileOk);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label2->Location = System::Drawing::Point(-3000, 180);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(3210, 4200);
			this->label2->TabIndex = 2;
			this->label2->Text = L"　　　　　　　　0\r\n0\r\n0\r\n0\r\n0\r\n0\r\n0\r\n0\r\n0\r\n0\r\n0\r\n0\r\n0\r\n0\r\n0\r\n0\r\n0\r\n0\r\n0\r\n0\r\n0\r\n0\r\n0\r\n0\r\n0"
				L"\r\n0\r\n0\r\n0\r\n0\r\n0\r\n";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->label2->Click += gcnew System::EventHandler(this, &U_Logi::label2_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label3->Location = System::Drawing::Point(215, -2400);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(4400, 2580);
			this->label3->TabIndex = 3;
			this->label3->Text = L"  0    0    0    0    0    0    0    0    0    0    0    0    0    0    0    0   "
				L" 0    0    0    0    0    0    0    0    0    0    0    0    0    0  \r\n";
			this->label3->TextAlign = System::Drawing::ContentAlignment::BottomLeft;
			this->label3->Click += gcnew System::EventHandler(this, &U_Logi::label3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 72);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 43);
			this->button2->TabIndex = 4;
			this->button2->Text = L"解く！";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &U_Logi::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label4->Location = System::Drawing::Point(93, 72);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 16);
			this->label4->TabIndex = 5;
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->WorkerReportsProgress = true;
			this->backgroundWorker1->WorkerSupportsCancellation = true;
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &U_Logi::backgroundWorker1_DoWork);
			this->backgroundWorker1->ProgressChanged += gcnew System::ComponentModel::ProgressChangedEventHandler(this, &U_Logi::backgroundWorker1_ProgressChanged);
			this->backgroundWorker1->RunWorkerCompleted += gcnew System::ComponentModel::RunWorkerCompletedEventHandler(this, &U_Logi::backgroundWorker1_RunWorkerCompleted_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 155);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 22);
			this->button3->TabIndex = 6;
			this->button3->Text = L"初期化";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &U_Logi::button3_Click);
			this->button3->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &U_Logi::hannyou_PreviewKeyDown);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 121);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 30);
			this->button4->TabIndex = 7;
			this->button4->Text = L"深さ1モード";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &U_Logi::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(96, 25);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 41);
			this->button5->TabIndex = 8;
			this->button5->Text = L"数字モード";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &U_Logi::button5_Click);
			this->button5->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &U_Logi::hannyou_PreviewKeyDown);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"ＭＳ Ｐゴシック", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->label5->ForeColor = System::Drawing::Color::Red;
			this->label5->Location = System::Drawing::Point(9, 6);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"□";
			this->label5->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(106, 127);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 12);
			this->label6->TabIndex = 12;
			this->label6->Text = L"タテ";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(107, 153);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 12);
			this->label7->TabIndex = 13;
			this->label7->Text = L"ヨコ";
			this->label7->Visible = false;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown1->Location = System::Drawing::Point(131, 121);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->ReadOnly = true;
			this->numericUpDown1->Size = System::Drawing::Size(50, 23);
			this->numericUpDown1->TabIndex = 16;
			this->numericUpDown1->Visible = false;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->numericUpDown2->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			this->numericUpDown2->Location = System::Drawing::Point(131, 147);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->ReadOnly = true;
			this->numericUpDown2->Size = System::Drawing::Size(50, 23);
			this->numericUpDown2->TabIndex = 17;
			this->numericUpDown2->Visible = false;
			// 
			// label8
			// 
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label8->Location = System::Drawing::Point(0, 260);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(210, 1);
			this->label8->TabIndex = 18;
			// 
			// label9
			// 
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label9->Location = System::Drawing::Point(0, 340);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(210, 1);
			this->label9->TabIndex = 19;
			// 
			// label10
			// 
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label10->Location = System::Drawing::Point(0, 420);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(210, 1);
			this->label10->TabIndex = 20;
			// 
			// label11
			// 
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label11->Location = System::Drawing::Point(0, 500);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(210, 1);
			this->label11->TabIndex = 21;
			// 
			// label12
			// 
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label12->Location = System::Drawing::Point(0, 580);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(210, 1);
			this->label12->TabIndex = 22;
			// 
			// label13
			// 
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label13->Location = System::Drawing::Point(0, 660);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(210, 1);
			this->label13->TabIndex = 23;
			// 
			// label14
			// 
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label14->Location = System::Drawing::Point(0, 740);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(210, 1);
			this->label14->TabIndex = 24;
			// 
			// label15
			// 
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label15->Location = System::Drawing::Point(0, 820);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(210, 1);
			this->label15->TabIndex = 25;
			// 
			// label16
			// 
			this->label16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label16->Location = System::Drawing::Point(0, 900);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(210, 1);
			this->label16->TabIndex = 26;
			// 
			// label17
			// 
			this->label17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label17->Location = System::Drawing::Point(0, 980);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(210, 1);
			this->label17->TabIndex = 27;
			// 
			// label18
			// 
			this->label18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label18->Location = System::Drawing::Point(0, 1060);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(210, 1);
			this->label18->TabIndex = 28;
			// 
			// label19
			// 
			this->label19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label19->Location = System::Drawing::Point(0, 1140);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(210, 1);
			this->label19->TabIndex = 29;
			// 
			// label20
			// 
			this->label20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label20->Location = System::Drawing::Point(299, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(1, 180);
			this->label20->TabIndex = 30;
			// 
			// label21
			// 
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label21->Location = System::Drawing::Point(381, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(1, 180);
			this->label21->TabIndex = 31;
			// 
			// label22
			// 
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label22->Location = System::Drawing::Point(464, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(1, 180);
			this->label22->TabIndex = 32;
			// 
			// label23
			// 
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label23->Location = System::Drawing::Point(546, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(1, 180);
			this->label23->TabIndex = 33;
			this->label23->Text = L"label23";
			// 
			// label24
			// 
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label24->Location = System::Drawing::Point(629, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(1, 180);
			this->label24->TabIndex = 34;
			// 
			// label25
			// 
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label25->Location = System::Drawing::Point(711, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(1, 180);
			this->label25->TabIndex = 35;
			// 
			// label26
			// 
			this->label26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label26->Location = System::Drawing::Point(794, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(1, 180);
			this->label26->TabIndex = 36;
			// 
			// label27
			// 
			this->label27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label27->Location = System::Drawing::Point(876, 0);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(1, 180);
			this->label27->TabIndex = 37;
			// 
			// label28
			// 
			this->label28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label28->Location = System::Drawing::Point(959, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(1, 180);
			this->label28->TabIndex = 38;
			// 
			// label29
			// 
			this->label29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label29->Location = System::Drawing::Point(1041, 0);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(1, 180);
			this->label29->TabIndex = 39;
			// 
			// label30
			// 
			this->label30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label30->Location = System::Drawing::Point(1124, 0);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(1, 180);
			this->label30->TabIndex = 40;
			// 
			// label31
			// 
			this->label31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label31->Location = System::Drawing::Point(1206, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(1, 180);
			this->label31->TabIndex = 41;
			// 
			// U_Logi
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1081, 788);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->KeyPreview = true;
			this->Name = L"U_Logi";
			this->Text = L"U_Logi";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &U_Logi::U_Logi_KeyDown);
			this->PreviewKeyDown += gcnew System::Windows::Forms::PreviewKeyDownEventHandler(this, &U_Logi::hannyou_PreviewKeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		String^ w;
		String^ w2;
		int  hairi1, hairi2;

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		int readfile[32768];
		char paint[256][256];
		int  readsub, readsub2, sonota, i, ii;
		int paintsize, numsize;
		int keynum = -1;
		array<Byte>^ dataArray = gcnew array<Byte>(32768);

		w = L"";
		String^ wyoko = L"";
		String^ wtate = L"";

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			FileStream^ fs = gcnew FileStream(openFileDialog1->FileName, FileMode::Open);
			System::IO::BinaryReader^ br = gcnew BinaryReader(fs);
			w = L"";
			wyoko = L"";
			wtate = L"";

			//LOGINEKOの8文字取得

			for (i = 0; i < 8; i++) {
				readfile[i] = br->ReadByte();
			}
			if (readfile[0] != 76 || readfile[1] != 79) {
				w += L"It's not LogiNeko file!" + L"\n";
			}
			else {
				sonota = br->Read(dataArray, 0, 2);

				//各種サイズ取得

				yoko = br->ReadByte();
				tate = br->ReadByte();
				for (i = 0; i < 4; i++) {
					readfile[i] = br->ReadByte();
				}
				paintsize = readfile[1] * 256 + readfile[0];
				for (i = 0; i < 4; i++) {
					readfile[i] = br->ReadByte();
				}
				numsize = readfile[1] * 256 + readfile[0];
				sonota = br->Read(dataArray, 0, 4);

				//絵柄取得

				for (i = 0; i < paintsize; i++) {
					readsub = br->ReadByte();

					if (readsub > 239) {
						paint[(2 * i) % yoko][(2 * i) / yoko] = 2;
					}
					else if (readsub > 15) {
						paint[(2 * i) % yoko][(2 * i) / yoko] = 1;
					}
					else {
						paint[(2 * i) % yoko][(2 * i) / yoko] = 0;
					}
					readsub = readsub % 16;
					if (readsub > 14) {
						paint[((2 * i) + 1) % yoko][((2 * i) + 1) / yoko] = 2;
					}
					else if (readsub > 0) {
						paint[((2 * i) + 1) % yoko][((2 * i) + 1) / yoko] = 1;
					}
					else {
						paint[((2 * i) + 1) % yoko][((2 * i) + 1) / yoko] = 0;
					}
				}

				//絵柄描写

				for (i = 0; i < yoko*tate; i++) {
					if (paint[i % yoko][i / yoko] == 1) {
						w += L"■‌";
					}
					else if (paint[i % yoko][i / yoko] == 2) {
						w += L"×‌";
					}
					else {
						w += L"        ";
					}
					if (i % yoko == yoko - 1) {
						w += L"\n";
					}
				}

				//数字取得

				for (i = 0; i < numsize; i++) {
					readfile[i] = br->ReadByte();
				}
				readsub = 0;
				for (ii = 0; ii < tate; ii++) {
					for (i = 0; i < readfile[readsub]+1; i++) {
						yokonum[ii][i] = readfile[readsub + i];
					}

					//数字描写

					for (i = 0; i < readfile[readsub]; i++) {
						if (yokonum[ii][readfile[readsub] - i] < 10) { wyoko += L" "; }
						wyoko += L" " + yokonum[ii][readfile[readsub] - i];
					}
					wyoko +=L"\n";
					readsub += 1 + readfile[readsub];
				}
				readsub2 = 0;
				for (ii = 0; ii < yoko; ii++) {
					for (i = 0; i < readfile[readsub]+1; i++) {
						tatenum[ii][i] = readfile[readsub + i];
					}
					if (readsub2 < readfile[readsub]) {
						readsub2 = readfile[readsub];
					}
					readsub += 1 + readfile[readsub];
				}
				for (ii = 0; ii < readsub2; ii++) {
					for (i = 0; i < yoko; i++ ) {
						if (tatenum[i][0]+ii <readsub2) { wtate += L"        "; }
						else if (tatenum[i][readsub2 - ii] > 9) {
							wtate += tatenum[i][readsub2 - ii];
						}
						else { wtate += L"  " + tatenum[i][readsub2 - ii] + L"  "; }
					}
					wtate += L"\n";
				}

			}

			delete br;
			delete fs;
			
			label1->Text = w;
			label2->Text = wyoko;
			label3->Text = wtate;
		}

	}
	private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
	}

private: System::Void backgroundWorker1_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {

	//実際計算するバックグラウンドワーカーさん
	clock_t t = clock();
	clock_t t2;
	unsigned char paint[256][256] = {};
	unsigned char paint2[256][256] = {};
	unsigned char paint3[256][256] = {};
	unsigned char paint4[256][256] = {};
	unsigned char paint5[256][256] = {};
	unsigned char yokonummin[256][129] = {};
	unsigned char yokonummax[256][129] = {};
	unsigned char tatenummin[256][129] = {};
	unsigned char tatenummax[256][129] = {};
	unsigned char yokonummin2[256][129] = {};
	unsigned char yokonummax2[256][129] = {};
	unsigned char tatenummin2[256][129] = {};
	unsigned char tatenummax2[256][129] = {};
	unsigned char yokonummin3[256][129] = {};
	unsigned char yokonummax3[256][129] = {};
	unsigned char tatenummin3[256][129] = {};
	unsigned char tatenummax3[256][129] = {};
	unsigned char yokonummin4[256][129] = {};
	unsigned char yokonummax4[256][129] = {};
	unsigned char tatenummin4[256][129] = {};
	unsigned char tatenummax4[256][129] = {};
	unsigned char yokochk[256];
	unsigned char tatechk[256];
	unsigned char yokochk2[256];
	unsigned char tatechk2[256];

	unsigned char komatta, komatta3, komatta5, komatta7;
	unsigned char yokotatemax, est, est2, est3, tuyogari;
	int komatta2, komatta4, komatta6;
	int i, ii, iii, iiii, i5, i6, i7, i8, i9;
	int k1, k2, k3, timer, repotime, umatta;
	int estp, estp2, estp3, count1, err, pn, pn2, pn3, estc, estc2, estc3;
	int estnum, estmm, estmmchk, estnum2, estmm2, estmmchk2, estnum3, estmm3, estmmchk3;
	int errnum[20] = {};

	w = L"";
	w2 = L"";
	backgroundWorker1->ReportProgress(0);

	for (i = 0; i < tate; i++) { yokochk[i] = 2; }
	for (i = 0; i < yoko; i++) { tatechk[i] = 2; }

	err = 0;
	komatta = 0;
	komatta3 = 0;
	komatta5 = 0;
	komatta7 = 0;
	tuyogari = 0;
	umatta = 0;
	estmmchk = 0;
	estmmchk2 = 0;
	estmmchk3 = 0;
	repotime = 0;

	yokotatemax = 0;
	for (i = 0; i < tate; i++) {
		if (yokonum[i][0] > yokotatemax) { yokotatemax = yokonum[i][0]; }
	}
	for (i = 0; i < yoko; i++) {
		if (tatenum[i][0] > yokotatemax) { yokotatemax = tatenum[i][0]; }
	}

	//0のみの列の処理
	for (i = 0; i < tate; i++) {
		if (yokonum[i][1] == 0) { yokonum[i][0] = 0; }
		if (yokonum[i][0] == 0) {
			for (ii = 0; ii < yoko; ii++) { paint[ii][i] = 10; }
		}
	}
	for (i = 0; i < yoko; i++) {
		if (tatenum[i][1] == 0) { tatenum[i][0] = 0; }
		if (tatenum[i][0] == 0) {
			for (ii = 0; ii < tate; ii++) { paint[i][ii] = 10; }
		}
	}


	//背理法深さ３！
	est3 = 0;
	komatta6 = 0;
	estp3 = 0;
	pn3 = 0;
	estnum3 = 0;
	estmm3 = 0;
	for (i9 = 0; i9 < hairi2 && komatta7 == 0; i9++) {

		//背理法でエラーが出ていた時にまず局面戻す
		if (est3 > 0 && err == 1) {
			for (i = 0; i < yoko*tate; i++) {
				paint[i % yoko][i / yoko] = paint4[i % yoko][i / yoko];
			}
			for (i = 1; i < tate*(yokotatemax + 1); i++) {
				yokonummin[i % tate][i / tate] = yokonummin4[i % tate][i / tate];
				yokonummax[i % tate][i / tate] = yokonummax4[i % tate][i / tate];
			}
			for (i = 1; i < yoko*(yokotatemax + 1); i++) {
				tatenummin[i % yoko][i / yoko] = tatenummin4[i % yoko][i / yoko];
				tatenummax[i % yoko][i / yoko] = tatenummax4[i % yoko][i / yoko];
			}

			//通常背理法では嬉々として1マス塗って一度は通常探索に行ってもらう
			if (est3 == 1) {
				if (pn3 == 1) { paint[estp3 % yoko][estp3 / yoko] = 10; }
				else if (pn3 == 2) { paint[estp3 % yoko][estp3 / yoko] = 1; }
				err = 0;
				est3 = 0;
				komatta6 = estp3;
				pn3 = 0;
				yokochk[estp3 / yoko] = 2;
				tatechk[estp3 % yoko] = 2;
				estnum3++;
				komatta5 = 0;
			}

			//お手製背理法では次のちょっとずれた仮定にそのままうつる
			else if (estnum3 < 260 * tate) {
				estmm3++;
				err = 0;
				komatta6 = estnum3;
				yokochk[estc3] = 2;
				if (estnum3 < 130 * tate) {
					if (yokonummax[estc3][estp3] == yoko - estmm3 - yokonum[estc3][estp3]) {
						est3 = 0;
						estmmchk3 = 0;
						yokonummin[estc3][estp3] = estmm3;
					}
					else {
						yokonummin4[estc3][estp3] = estmm3;
						yokonummin[estc3][estp3] = estmm3;
						yokonummax[estc3][estp3] = yoko - estmm3 - yokonum[estc3][estp3];
						estmmchk3 = 1;
					}
				}
				else {
					if (yokonummin[estc3][estp3] == yoko - estmm3 - yokonum[estc3][estp3]) {
						est3 = 0;
						estmmchk3 = 0;
						yokonummax[estc3][estp3] = estmm3;
					}
					else {
						yokonummax4[estc3][estp3] = estmm3;
						yokonummin[estc3][estp3] = yoko - estmm3 - yokonum[estc3][estp3];
						yokonummax[estc3][estp3] = estmm3;
						estmmchk3 = 1;
					}
				}
			}
			else {
				estmm3++;
				err = 0;
				komatta6 = estnum3;
				tatechk[estc3] = 2;
				if (estnum3 < 260 * tate + 130 * yoko) {
					if (tatenummax[estc3][estp3] == tate - estmm3 - tatenum[estc3][estp3]) {
						est3 = 0;
						estmmchk3 = 0;
						tatenummin[estc3][estp3] = estmm3;
					}
					else {
						tatenummin4[estc3][estp3] = estmm3;
						tatenummin[estc3][estp3] = estmm3;
						tatenummax[estc3][estp3] = tate - estmm3 - tatenum[estc3][estp3];
						estmmchk3 = 1;
					}
				}
				else {
					if (tatenummin[estc3][estp3] == tate - estmm3 - tatenum[estc3][estp3]) {
						est3 = 0;
						estmmchk3 = 0;
						tatenummax[estc3][estp3] = estmm3;
					}
					else {
						tatenummax4[estc3][estp3] = estmm3;
						tatenummin[estc3][estp3] = tate - estmm3 - tatenum[estc3][estp3];
						tatenummax[estc3][estp3] = estmm3;
						estmmchk3 = 1;
					}
				}
			}
		}

		else if (komatta5 == 1) {

			//手詰まりの時、仮定してなかったら現局面保存して仮定に備える
			if (est3 == 0) {
				for (i = 0; i < yoko*tate; i++) {
					paint4[i % yoko][i / yoko] = paint[i % yoko][i / yoko];
				}
				for (i = 1; i < tate*(yokotatemax + 1); i++) {
					yokonummin4[i % tate][i / tate] = yokonummin[i % tate][i / tate];
					yokonummax4[i % tate][i / tate] = yokonummax[i % tate][i / tate];
				}
				for (i = 1; i < yoko*(yokotatemax + 1); i++) {
					tatenummin4[i % yoko][i / yoko] = tatenummin[i % yoko][i / yoko];
					tatenummax4[i % yoko][i / yoko] = tatenummax[i % yoko][i / yoko];
				}
			}

			//手詰まりの時、仮定してたら局面を戻して次に備える
			else {

				//お手製背理法のときは少しでも局面を戻す処理を減らすため細かい努力をする
				iii = 0;
				if (est3 == 2 && estmmchk3 == 0) {
					if (estnum3 < 130 * tate) {
						i = estnum3 / 130;
						ii = estnum3 % 130;
						if (ii < yokonum[i][0] && ii > 0 && yokonummin[i][ii + 1] == yokonummin[i][ii] + yokonum[i][ii] + 1) {
							if (yokonummax[i][ii + 1] == yoko - yokonum[i][ii + 1] - yokonummin[i][ii + 1]) {
								estnum3++;
							}
							else {
								iii = 1;
							}
						}
					}
					else if (estnum3 < 260 * tate) {
						i = estnum3 / 130 - tate;
						ii = yokonum[i][0] - estnum3 % 130 + 1;
						if (ii > 1 && ii < yokonum[i][0] + 1 && yokonummax[i][ii - 1] == yokonummax[i][ii] + yokonum[i][ii] + 1) {
							if (yokonummax[i][ii - 1] == yoko - yokonum[i][ii - 1] - yokonummin[i][ii - 1]) {
								estnum3++;
							}
							else {
								iii = 1;
							}
						}
					}
					else if (estnum3 < 260 * tate - yoko) {
						i = estnum3 / 130 - 2 * tate;
						ii = estnum3 % 130;
						if (ii < tatenum[i][0] && ii > 0 && tatenummin[i][ii + 1] == tatenummin[i][ii] + tatenum[i][ii] + 1) {
							if (tatenummax[i][ii + 1] == tate - tatenum[i][ii + 1] - tatenummin[i][ii + 1]) {
								estnum3++;
							}
							else {
								iii = 1;
							}
						}
					}
					else {
						i = estnum3 / 130 - 2 * tate - yoko;
						ii = tatenum[i][0] - estnum3 % 130 + 1;
						if (ii > 1 && ii < tatenum[i][0] + 1 && tatenummax[i][ii - 1] == tatenummax[i][ii] + tatenum[i][ii] + 1) {
							if (tatenummax[i][ii - 1] == tate - tatenum[i][ii - 1] - tatenummin[i][ii - 1]) {
								estnum3++;
							}
							else {
								iii = 1;
							}
						}
					}
				}

				//いざ局面を戻す
				if (iii == 0) {
					for (i = 0; i < yoko*tate; i++) {
						paint[i % yoko][i / yoko] = paint4[i % yoko][i / yoko];
					}
					for (i = 0; i < tate*(yokotatemax + 1); i++) {
						yokonummin[i % tate][i / tate] = yokonummin4[i % tate][i / tate];
						yokonummax[i % tate][i / tate] = yokonummax4[i % tate][i / tate];
					}
					for (i = 0; i < yoko*(yokotatemax + 1); i++) {
						tatenummin[i % yoko][i / yoko] = tatenummin4[i % yoko][i / yoko];
						tatenummax[i % yoko][i / yoko] = tatenummax4[i % yoko][i / yoko];
					}
				}
			}

			//背理法の闇への入り口
			komatta5 = 0;

			//お手製背理法が成功していたら一度は仮定なしで通常探索
			if (estmmchk3 == 1) {
				est3 = 0;
				estmmchk3 = 0;
				if (estnum3 < 260 * tate) { yokochk[estc3] = 2; }
				else { tatechk[estc3] = 2; }
			}

			//お手製背理法の仮定4連
			else if (estnum3 < 130 * tate) {
				est3 = 0;
				for (i = estnum3 / 130; i < tate; i++) {
					for (ii = estnum3 % 130 + 1; ii < yokonum[i][0] + 1; ii++) {
						estmm3 = yokonummin[i][ii];
						if (yokonummax[i][ii] != yoko - yokonum[i][ii] - estmm3) {
							est3 = 2;
							estc3 = i;
							estp3 = ii;
							estnum3 = i * 130 + ii;
							if (komatta6 + yoko * tate + 260 * (tate + yoko) < estnum3) {
								komatta7 = 1;
								break;
							}
							yokonummax[i][ii] = yoko - yokonum[i][ii] - estmm3;
							yokochk[i] = 2;
							break;
						}
					}
					if (est3 == 2 || komatta7 == 1) { break; }
					estnum3 = estnum3 - estnum3 % 130 + 130;
				}
			}
			else if (estnum3 < 260 * tate) {
				est3 = 0;
				for (i = estnum3 / 130 - tate; i < tate; i++) {
					for (ii = yokonum[i][0] - estnum3 % 130; ii > 0; ii--) {
						estmm3 = yokonummax[i][ii];
						if (yokonummin[i][ii] != yoko - yokonum[i][ii] - estmm3) {
							est3 = 2;
							estc3 = i;
							estp3 = ii;
							estnum3 = (tate + i) * 130 + yokonum[i][0] - ii + 1;
							if (komatta6 + yoko * tate + 260 * (tate + yoko) < estnum3) {
								komatta7 = 1;
								break;
							}
							yokonummin[i][ii] = yoko - yokonum[i][ii] - estmm3;
							yokochk[i] = 2;
							break;
						}
					}
					if (est3 == 2 || komatta7 == 1) { break; }
					estnum3 = estnum3 - estnum3 % 130 + 130;
				}
			}
			else if (estnum3 < 130 * (2 * tate + yoko)) {
				est3 = 0;
				for (i = estnum3 / 130 - 2 * tate; i < yoko; i++) {
					for (ii = estnum3 % 130 + 1; ii < tatenum[i][0] + 1; ii++) {
						estmm3 = tatenummin[i][ii];
						if (tatenummax[i][ii] != tate - tatenum[i][ii] - estmm3) {
							est3 = 2;
							estc3 = i;
							estp3 = ii;
							estnum3 = (2 * tate + i) * 130 + ii;
							if (komatta6 + yoko * tate + 260 * (tate + yoko) < estnum3) {
								komatta7 = 1;
								break;
							}
							tatenummax[i][ii] = tate - tatenum[i][ii] - estmm3;
							tatechk[i] = 2;
							break;
						}
					}
					if (est3 == 2 || komatta7 == 1) { break; }
					estnum3 = estnum3 - estnum3 % 130 + 130;
				}
			}
			else if (estnum3 < 260 * (tate + yoko)) {
				est3 = 0;
				for (i = estnum3 / 130 - 2 * tate - yoko; i < yoko; i++) {
					for (ii = tatenum[i][0] - estnum3 % 130; ii > 0; ii--) {
						estmm3 = tatenummax[i][ii];
						if (tatenummin[i][ii] != tate - tatenum[i][ii] - estmm3) {
							est3 = 2;
							estc3 = i;
							estp3 = ii;
							estnum3 = (2 * tate + yoko + i) * 130 + tatenum[i][0] - ii + 1;
							if (komatta6 + yoko * tate + 260 * (tate + yoko) < estnum3) {
								komatta7 = 1;
								break;
							}
							tatenummin[i][ii] = tate - tatenum[i][ii] - estmm3;
							tatechk[i] = 2;
							break;
						}
					}
					if (est3 == 2 || komatta7 == 1) { break; }
					estnum3 = estnum3 - estnum3 % 130 + 130;
				}
			}

			//通常背理法。まず仮定する1マスを選ぶ
			else {
				est3 = 1;
				if (pn3 == 2) { estnum3 += 1; }
				for (i = estnum3 - 260 * (tate + yoko); i < yoko*tate; i++) {
					if (paint[i % yoko][i / yoko] == 0) {
						estnum3 = i + 260 * (tate + yoko);
						estp3 = i;
						break;
					}
				}
				if (komatta6 + yoko * tate + 260 * (tate + yoko) < estnum3) {
					komatta7 = 1;
					break;
				}
				if (i == yoko * tate) {
					est3 = 0;
					estp3 = 0;
					pn3 = 0;
					komatta6 -= yoko * tate + 260 * (tate + yoko);
				}

				//黒塗りを仮定するのか×を仮定するのか
				else if (pn3 == 0 || pn3 == 2) {
					paint[estp3 % yoko][estp3 / yoko] = 1;
					pn3 = 1;
				}
				else {
					paint[estp3 % yoko][estp3 / yoko] = 10;
					pn3 = 2;
				}
				yokochk[estp3 / yoko] = 2;
				tatechk[estp3 % yoko] = 2;
			}

			//お手製背理法は局面を戻さず横着していることがあるのでその対策
			if (komatta7 == 1) {
				for (i = 0; i < yoko*tate; i++) {
					paint[i % yoko][i / yoko] = paint4[i % yoko][i / yoko];
				}
				for (i = 0; i < tate*(yokotatemax + 1); i++) {
					yokonummin[i % tate][i / tate] = yokonummin4[i % tate][i / tate];
					yokonummax[i % tate][i / tate] = yokonummax4[i % tate][i / tate];
				}
				for (i = 0; i < yoko*(yokotatemax + 1); i++) {
					tatenummin[i % yoko][i / yoko] = tatenummin4[i % yoko][i / yoko];
					tatenummax[i % yoko][i / yoko] = tatenummax4[i % yoko][i / yoko];
				}
				break;
			}
		}

		else if (est3 == 0 && err == 1) { break; }
		else if (i9 != 0) { komatta7 = 1; break; }

		//背理法深さ２
		est2 = 0;
		komatta4 = 0;
		pn2 = 0;
		estnum2 = 0;
		estmm2 = 0;
		for (i7 = 0; i7 < hairi2 && komatta5 == 0; i7++) {

			t2 = clock();
			timer = t2 - t;
			//計算進捗報告＋終われボタンの処理
			if (timer > repotime + 80) {
				repotime = timer;
				w = L"";
				for (i = 0; i < yoko*tate; i++) {
					if (paint[i % yoko][i / yoko] == 1) {
						w += L"■‌";
					}
					else if (paint[i % yoko][i / yoko] > 9) {
						w += L"×‌";
					}
					else {
						w += L"        ";
					}
					if (i % yoko == yoko - 1) {
						w += L"\n";
					}
				}
				w2 = L"i7 = " + i7 + L"\ni9 = " + i9 + L"\ntimer=\n" + timer;
				backgroundWorker1->ReportProgress(0);
				if (backgroundWorker1->CancellationPending) {
					goto theend;
				}
			}

			//背理法でエラーが出ていた時にまず局面戻す
			if (est2 > 0 && err == 1) {
				for (i = 0; i < yoko*tate; i++) {
					paint[i % yoko][i / yoko] = paint3[i % yoko][i / yoko];
				}
				for (i = 0; i < tate*(yokotatemax + 1); i++) {
					yokonummin[i % tate][i / tate] = yokonummin3[i % tate][i / tate];
					yokonummax[i % tate][i / tate] = yokonummax3[i % tate][i / tate];
				}
				for (i = 0; i < yoko*(yokotatemax + 1); i++) {
					tatenummin[i % yoko][i / yoko] = tatenummin3[i % yoko][i / yoko];
					tatenummax[i % yoko][i / yoko] = tatenummax3[i % yoko][i / yoko];
				}

				//通常背理法では嬉々として1マス塗って一度は通常探索に行ってもらう
				if (est2 == 1) {
					if (pn2 == 1) { paint[estp2 % yoko][estp2 / yoko] = 10; }
					else if (pn2 == 2) { paint[estp2 % yoko][estp2 / yoko] = 1; }
					err = 0;
					est2 = 0;
					komatta4 = estnum2;
					pn2 = 0;
					yokochk[estp2 / yoko] = 2;
					tatechk[estp2 % yoko] = 2;
					estnum2++;
					komatta3 = 0;
				}

				//お手製背理法では次のちょっとずれた仮定にそのままうつる
				else if (estnum2 < 260 * tate) {
					estmm2++;
					err = 0;
					komatta4 = estnum2;
					yokochk[estc2] = 2;
					if (estnum2 < 130 * tate) {
						if (yokonummax[estc2][estp2] == yoko - estmm2 - yokonum[estc2][estp2]) {
							est2 = 0;
							estmmchk2 = 0;
							yokonummin[estc2][estp2] = estmm2;
						}
						else {
							yokonummin3[estc2][estp2] = estmm2;
							yokonummin[estc2][estp2] = estmm2;
							yokonummax[estc2][estp2] = yoko - estmm2 - yokonum[estc2][estp2];
							estmmchk2 = 1;
						}
					}
					else {
						if (yokonummin[estc2][estp2] == yoko - estmm2 - yokonum[estc2][estp2]) {
							est2 = 0;
							estmmchk2 = 0;
							yokonummax[estc2][estp2] = estmm2;
						}
						else {
							yokonummax3[estc2][estp2] = estmm2;
							yokonummin[estc2][estp2] = yoko - estmm2 - yokonum[estc2][estp2];
							yokonummax[estc2][estp2] = estmm2;
							estmmchk2 = 1;
						}
					}
				}
				else {
					estmm2++;
					err = 0;
					komatta4 = estnum2;
					tatechk[estc2] = 2;
					if (estnum2 < 260 * tate + 130 * yoko) {
						if (tatenummax[estc2][estp2] == tate - estmm2 - tatenum[estc2][estp2]) {
							est2 = 0;
							estmmchk2 = 0;
							tatenummin[estc2][estp2] = estmm2;
						}
						else {
							tatenummin3[estc2][estp2] = estmm2;
							tatenummin[estc2][estp2] = estmm2;
							tatenummax[estc2][estp2] = tate - estmm2 - tatenum[estc2][estp2];
							estmmchk2 = 1;
						}
					}
					else {
						if (tatenummin[estc2][estp2] == tate - estmm2 - tatenum[estc2][estp2]) {
							est2 = 0;
							estmmchk2 = 0;
							tatenummax[estc2][estp2] = estmm2;
						}
						else {
							tatenummax3[estc2][estp2] = estmm2;
							tatenummin[estc2][estp2] = tate - estmm2 - tatenum[estc2][estp2];
							tatenummax[estc2][estp2] = estmm2;
							estmmchk2 = 1;
						}
					}
				}
			}

			else if (komatta3 == 1) {

				//手詰まりの時、仮定してなかったら現局面保存して仮定に備える
				if (est2 == 0) {
					for (i = 0; i < yoko*tate; i++) {
						paint3[i % yoko][i / yoko] = paint[i % yoko][i / yoko];
					}
					for (i = 0; i < tate*(yokotatemax + 1); i++) {
						yokonummin3[i % tate][i / tate] = yokonummin[i % tate][i / tate];
						yokonummax3[i % tate][i / tate] = yokonummax[i % tate][i / tate];
					}
					for (i = 0; i < yoko*(yokotatemax + 1); i++) {
						tatenummin3[i % yoko][i / yoko] = tatenummin[i % yoko][i / yoko];
						tatenummax3[i % yoko][i / yoko] = tatenummax[i % yoko][i / yoko];
					}
				}

				//手詰まりの時、仮定してたら局面を戻して次に備える
				else {

					//お手製背理法のときは少しでも局面を戻す処理を減らすため細かい努力をする
					iii = 0;
					if (est2 == 2 && estmmchk2 == 0) {
						if (estnum2 < 130 * tate) {
							i = estnum2 / 130;
							ii = estnum2 % 130;
							if (ii < yokonum[i][0] && ii > 0 && yokonummin[i][ii + 1] == yokonummin[i][ii] + yokonum[i][ii] + 1) {
								if (yokonummax[i][ii + 1] == yoko - yokonum[i][ii + 1] - yokonummin[i][ii + 1]) {
									estnum2++;
								}
								else {
									iii = 1;
								}
							}
						}
						else if (estnum2 < 260 * tate) {
							i = estnum2 / 130 - tate;
							ii = yokonum[i][0] - estnum2 % 130 + 1;
							if (ii > 1 && ii < yokonum[i][0] + 1 && yokonummax[i][ii - 1] == yokonummax[i][ii] + yokonum[i][ii] + 1) {
								if (yokonummax[i][ii - 1] == yoko - yokonum[i][ii - 1] - yokonummin[i][ii - 1]) {
									estnum2++;
								}
								else {
									iii = 1;
								}
							}
						}
						else if (estnum2 < 260 * tate - yoko) {
							i = estnum2 / 130 - 2 * tate;
							ii = estnum2 % 130;
							if (ii < tatenum[i][0] && ii > 0 && tatenummin[i][ii + 1] == tatenummin[i][ii] + tatenum[i][ii] + 1) {
								if (tatenummax[i][ii + 1] == tate - tatenum[i][ii + 1] - tatenummin[i][ii + 1]) {
									estnum2++;
								}
								else {
									iii = 1;
								}
							}
						}
						else {
							i = estnum2 / 130 - 2 * tate - yoko;
							ii = tatenum[i][0] - estnum2 % 130 + 1;
							if (ii > 1 && ii < tatenum[i][0] + 1 && tatenummax[i][ii - 1] == tatenummax[i][ii] + tatenum[i][ii] + 1) {
								if (tatenummax[i][ii - 1] == tate - tatenum[i][ii - 1] - tatenummin[i][ii - 1]) {
									estnum2++;
								}
								else {
									iii = 1;
								}
							}
						}
					}

					//いざ局面を戻す
					if (iii == 0) {
						for (i = 0; i < yoko*tate; i++) {
							paint[i % yoko][i / yoko] = paint3[i % yoko][i / yoko];
						}
						for (i = 0; i < tate*(yokotatemax + 1); i++) {
							yokonummin[i % tate][i / tate] = yokonummin3[i % tate][i / tate];
							yokonummax[i % tate][i / tate] = yokonummax3[i % tate][i / tate];
						}
						for (i = 0; i < yoko*(yokotatemax + 1); i++) {
							tatenummin[i % yoko][i / yoko] = tatenummin3[i % yoko][i / yoko];
							tatenummax[i % yoko][i / yoko] = tatenummax3[i % yoko][i / yoko];
						}
					}
				}

				//背理法の闇への入り口
				komatta3 = 0;

				//お手製背理法が成功していたら一度は仮定なしで通常探索
				if (estmmchk2 == 1) {
					est2 = 0;
					estmmchk2 = 0;
					if (estnum2 < 260 * tate) { yokochk[estc2] = 2; }
					else { tatechk[estc2] = 2; }
				}

				//お手製背理法の仮定4連
				else if (estnum2 < 130 * tate) {
					est2 = 0;
					for (i = estnum2 / 130; i < tate; i++) {
						for (ii = estnum2 % 130 + 1; ii < yokonum[i][0] + 1; ii++) {
							estmm2 = yokonummin[i][ii];
							if (yokonummax[i][ii] != yoko - yokonum[i][ii] - estmm2) {
								est2 = 2;
								estc2 = i;
								estp2 = ii;
								estnum2 = i * 130 + ii;
								if (komatta4 + yoko * tate + 260 * (tate + yoko) < estnum2) {
									komatta5 = 1;
									break;
								}
								yokonummax[i][ii] = yoko - yokonum[i][ii] - estmm2;
								yokochk[i] = 2;
								break;
							}
						}
						if (est2 == 2 || komatta5 == 1) { break; }
						estnum2 = estnum2 - estnum2 % 130 + 130;
					}
				}
				else if (estnum2 < 260 * tate) {
					est2 = 0;
					for (i = estnum2 / 130 - tate; i < tate; i++) {
						for (ii = yokonum[i][0] - estnum2 % 130; ii > 0; ii--) {
							estmm2 = yokonummax[i][ii];
							if (yokonummin[i][ii] != yoko - yokonum[i][ii] - estmm2) {
								est2 = 2;
								estc2 = i;
								estp2 = ii;
								estnum2 = (tate + i) * 130 + yokonum[i][0] - ii + 1;
								if (komatta4 + yoko * tate + 260 * (tate + yoko) < estnum2) {
									komatta5 = 1;
									break;
								}
								yokonummin[i][ii] = yoko - yokonum[i][ii] - estmm2;
								yokochk[i] = 2;
								break;
							}
						}
						if (est2 == 2 || komatta5 == 1) { break; }
						estnum2 = estnum2 - estnum2 % 130 + 130;
					}
				}
				else if (estnum2 < 130 * (2 * tate + yoko)) {
					est2 = 0;
					for (i = estnum2 / 130 - 2 * tate; i < yoko; i++) {
						for (ii = estnum2 % 130 + 1; ii < tatenum[i][0] + 1; ii++) {
							estmm2 = tatenummin[i][ii];
							if (tatenummax[i][ii] != tate - tatenum[i][ii] - estmm2) {
								est2 = 2;
								estc2 = i;
								estp2 = ii;
								estnum2 = (2 * tate + i) * 130 + ii;
								if (komatta4 + yoko * tate + 260 * (tate + yoko) < estnum2) {
									komatta5 = 1;
									break;
								}
								tatenummax[i][ii] = tate - tatenum[i][ii] - estmm2;
								tatechk[i] = 2;
								break;
							}
						}
						if (est2 == 2 || komatta5 == 1) { break; }
						estnum2 = estnum2 - estnum2 % 130 + 130;
					}
				}
				else if (estnum2 < 260 * (tate + yoko)) {
					est2 = 0;
					for (i = estnum2 / 130 - 2 * tate - yoko; i < yoko; i++) {
						for (ii = tatenum[i][0] - estnum2 % 130; ii > 0; ii--) {
							estmm2 = tatenummax[i][ii];
							if (tatenummin[i][ii] != tate - tatenum[i][ii] - estmm2) {
								est2 = 2;
								estc2 = i;
								estp2 = ii;
								estnum2 = (2 * tate + yoko + i) * 130 + tatenum[i][0] - ii + 1;
								if (komatta4 + yoko * tate + 260 * (tate + yoko) < estnum2) {
									komatta5 = 1;
									break;
								}
								tatenummin[i][ii] = tate - tatenum[i][ii] - estmm2;
								tatechk[i] = 2;
								break;
							}
						}
						if (est2 == 2 || komatta5 == 1) { break; }
						estnum2 = estnum2 - estnum2 % 130 + 130;
					}
				}

				//通常背理法。まず仮定する1マスを選ぶ
				else {
					est2 = 1;
					if (pn2 == 2) { estnum2 += 1; }
					for (i = estnum2 - 260 * (tate + yoko); i < yoko*tate; i++) {
						if (paint[i % yoko][i / yoko] == 0) {
							estnum2 = i + 260 * (tate + yoko);
							estp2 = i;
							break;
						}
					}
					if (komatta4 + yoko * tate + 260 * (tate + yoko) < estnum2) {
						komatta5 = 1;
						break;
					}
					if (i == yoko * tate) {
						est2 = 0;
						estnum2 = 0;
						pn2 = 0;
						komatta4 -= yoko * tate + 260 * (tate + yoko);
					}

					//黒塗りを仮定するのか×を仮定するのか
					else if (pn2 == 0 || pn2 == 2) {
						paint[estp2 % yoko][estp2 / yoko] = 1;
						pn2 = 1;
					}
					else {
						paint[estp2 % yoko][estp2 / yoko] = 10;
						pn2 = 2;
					}
					yokochk[estp2 / yoko] = 2;
					tatechk[estp2 % yoko] = 2;
				}

				//お手製背理法は局面を戻さず横着していることがあるのでその対策
				if (komatta5 == 1 && iii == 1) {
					for (i = 0; i < yoko*tate; i++) {
						paint[i % yoko][i / yoko] = paint3[i % yoko][i / yoko];
					}
					for (i = 0; i < tate*(yokotatemax + 1); i++) {
						yokonummin[i % tate][i / tate] = yokonummin3[i % tate][i / tate];
						yokonummax[i % tate][i / tate] = yokonummax3[i % tate][i / tate];
					}
					for (i = 0; i < yoko*(yokotatemax + 1); i++) {
						tatenummin[i % yoko][i / yoko] = tatenummin3[i % yoko][i / yoko];
						tatenummax[i % yoko][i / yoko] = tatenummax3[i % yoko][i / yoko];
					}
					break;
				}
			}

			else if (est2 == 0 && err == 1) { break; }
			else if (i7 != 0) { komatta5 = 1; break; }

			//背理法深さ１
			est = 0;
			komatta2 = 0;
			pn = 0;
			estnum = 0;
			estmm = 0;
			for (i = 0; i < tate; i++) { yokochk2[i] = 1; }
			for (i = 0; i < yoko; i++) { tatechk2[i] = 1; }
			for (i5 = 0; i5 < hairi1 && komatta3 == 0; i5++) {

				//背理法でエラーが出ていた時にまず局面戻す
				if (est > 0 && err == 1) {
					for (i = 0; i < tate; i++) {
						yokochk[i] = 0;
						if (yokochk2[i] == 1) {
							for (ii = 0; ii < yoko; ii++) {
								paint[ii][i] = paint2[ii][i];
							}
							for (ii = 1; ii < yokonum[i][0] + 1; ii++) {
								yokonummin[i][ii] = yokonummin2[i][ii];
								yokonummax[i][ii] = yokonummax2[i][ii];
							}
							yokochk2[i] = 0;
						}
					}
					for (i = 0; i < yoko; i++) {
						tatechk[i] = 0;
						if (tatechk2[i] == 1) {
							for (ii = 0; ii < tate; ii++) {
								paint[i][ii] = paint2[i][ii];
							}
							for (ii = 1; ii < tatenum[i][0] + 1; ii++) {
								tatenummin[i][ii] = tatenummin2[i][ii];
								tatenummax[i][ii] = tatenummax2[i][ii];
							}
							tatechk2[i] = 0;
						}
					}

					//通常背理法では嬉々として1マス塗って一度は通常探索に行ってもらう
					if (est == 1) {
						if (pn == 1) { paint[estp % yoko][estp / yoko] = 10; }
						else if (pn == 2) { paint[estp % yoko][estp / yoko] = 1; }
						err = 0;
						est = 0;
						komatta2 = estnum;
						pn = 0;
						yokochk[estp / yoko] = 2;
						tatechk[estp % yoko] = 2;
						yokochk2[estp / yoko] = 1;
						tatechk2[estp % yoko] = 1;
						estnum++;
						komatta = 0;
					}

					//お手製背理法では次のちょっとずれた仮定にそのままうつる
					else if (estnum < 260 * tate) {
						estmm++;
						err = 0;
						komatta2 = estnum;
						yokochk[estc] = 2;
						yokochk2[estc] = 1;
						if (estnum < 130 * tate) {
							if (yokonummax[estc][estp] == yoko - estmm - yokonum[estc][estp]) {
								est = 0;
								estmmchk = 0;
								yokonummin[estc][estp] = estmm;
							}
							else {
								yokonummin2[estc][estp] = estmm;
								yokonummin[estc][estp] = estmm;
								yokonummax[estc][estp] = yoko - estmm - yokonum[estc][estp];
								estmmchk = 1;
							}
						}
						else {
							if (yokonummin[estc][estp] == yoko - estmm - yokonum[estc][estp]) { 
								est = 0;
								estmmchk = 0;
								yokonummax[estc][estp] = estmm;
							}
							else {
								yokonummax2[estc][estp] = estmm;
								yokonummin[estc][estp] = yoko - estmm - yokonum[estc][estp];
								yokonummax[estc][estp] = estmm;
								estmmchk = 1;
							}
						}
					}
					else {
						estmm++;
						err = 0;
						komatta2 = estnum;
						tatechk[estc] = 2;
						tatechk2[estc] = 1;
						if (estnum < 260 * tate + 130 * yoko) {
							if (tatenummax[estc][estp] == tate - estmm - tatenum[estc][estp]) {
								est = 0;
								estmmchk = 0;
								tatenummin[estc][estp] = estmm;
							}
							else {
								tatenummin2[estc][estp] = estmm;
								tatenummin[estc][estp] = estmm;
								tatenummax[estc][estp] = tate - estmm - tatenum[estc][estp];
								estmmchk = 1;
							}
						}
						else {
							if (tatenummin[estc][estp] == tate - estmm - tatenum[estc][estp]) {
								est = 0;
								estmmchk = 0;
								tatenummax[estc][estp] = estmm;
							}
							else {
								tatenummax2[estc][estp] = estmm;
								tatenummin[estc][estp] = tate - estmm - tatenum[estc][estp];
								tatenummax[estc][estp] = estmm;
								estmmchk = 1;
							}
						}
					}
				}

				//なんらかの手詰まりのとき
				else if (komatta == 1) {

					//仮定中に完成局面が一度みえたら保存しておき、次にみえたら二つを比較する。同じなら何もしない。違うなら計算終わり。
					//仮定せずに完成局面がみえたら計算終わり。
					if (est == 0 && est2 == 0 && est3 == 0) {
						for (i = umatta; i < yoko*tate && paint[i % yoko][i / yoko] > 0; i++) {
							umatta = i + 1;
						}
						if (i == yoko * tate) { goto theend; }
					}
					else {
						for (i = umatta; i < yoko*tate && paint[i % yoko][i / yoko] > 0; i++) {}
						if (i == yoko * tate) {
							if (tuyogari == 1) {
								for (ii = 0; ii < yoko*tate && paint[ii % yoko][ii / yoko] == paint5[ii % yoko][ii / yoko]; ii++) {}
								if (ii != yoko * tate) { tuyogari = 2; goto theend; }
							}
							else {
								tuyogari = 1;
								for (i = 0; i < yoko*tate; i++) {
									paint5[i % yoko][i / yoko] = paint[i % yoko][i / yoko];
								}
							}
						}
					}

					//背理法の闇への入り口
					komatta = 0;

					//手詰まりの時、仮定してなかったら現局面保存して仮定に備える
					if (est == 0) {
						for (i = 0; i < tate; i++) {
							if (yokochk2[i] == 1) {
								for (ii = 0; ii < yoko; ii++) {
									paint2[ii][i] = paint[ii][i];
								}
								for (ii = 1; ii < yokonum[i][0] + 1; ii++) {
									yokonummin2[i][ii] = yokonummin[i][ii];
									yokonummax2[i][ii] = yokonummax[i][ii];
								}
								yokochk2[i] = 0;
							}
						}
						for (i = 0; i < yoko; i++) {
							if (tatechk2[i] == 1) {
								for (ii = 0; ii < tate; ii++) {
									paint2[i][ii] = paint[i][ii];
								}
								for (ii = 1; ii < tatenum[i][0] + 1; ii++) {
									tatenummin2[i][ii] = tatenummin[i][ii];
									tatenummax2[i][ii] = tatenummax[i][ii];
								}
								tatechk2[i] = 0;
							}
						}
					}

					//手詰まりの時、仮定してたら局面を戻して次に備える
					else {

						//お手製背理法のときは少しでも局面を戻す処理を減らすため細かい努力をする
						iii = 0;
						if (est == 2 && estmmchk == 0) {
							if (estnum < 130 * tate) {
								i = estnum / 130;
								ii = estnum % 130;
								if (ii < yokonum[i][0] && ii > 0 && yokonummin[i][ii + 1] == yokonummin[i][ii] + yokonum[i][ii] + 1) {
									if (yokonummax[i][ii + 1] == yoko - yokonum[i][ii + 1] - yokonummin[i][ii + 1]) {
										estnum++;
									}
									else {
										iii = 1;
									}
								}
							}
							else if (estnum < 260 * tate) {
								i = estnum / 130 - tate;
								ii = yokonum[i][0] - estnum % 130 + 1;
								if (ii > 1 && ii < yokonum[i][0] + 1 && yokonummax[i][ii - 1] == yokonummax[i][ii] + yokonum[i][ii] + 1) {
									if (yokonummax[i][ii - 1] == yoko - yokonum[i][ii - 1] - yokonummin[i][ii - 1]) {
										estnum++;
									}
									else {
										iii = 1;
									}
								}
							}
							else if (estnum < 260 * tate - yoko) {
								i = estnum / 130 - 2 * tate;
								ii = estnum % 130;
								if (ii < tatenum[i][0] && ii > 0 && tatenummin[i][ii + 1] == tatenummin[i][ii] + tatenum[i][ii] + 1) {
									if (tatenummax[i][ii + 1] == tate - tatenum[i][ii + 1] - tatenummin[i][ii + 1]) {
										estnum++;
									}
									else {
										iii = 1;
									}
								}
							}
							else {
								i = estnum / 130 - 2 * tate - yoko;
								ii = tatenum[i][0] - estnum % 130 + 1;
								if (ii > 1 && ii < tatenum[i][0] + 1 && tatenummax[i][ii - 1] == tatenummax[i][ii] + tatenum[i][ii] + 1) {
									if (tatenummax[i][ii - 1] == tate - tatenum[i][ii - 1] - tatenummin[i][ii - 1]) {
										estnum++;
									}
									else {
										iii = 1;
									}
								}
							}
						}

						//いざ局面を戻す
						if (iii == 0) {
							for (i = 0; i < tate; i++) {
								if (yokochk2[i] == 1) {
									for (ii = 0; ii < yoko; ii++) {
										paint[ii][i] = paint2[ii][i];
									}
									for (ii = 1; ii < yokonum[i][0] + 1; ii++) {
										yokonummin[i][ii] = yokonummin2[i][ii];
										yokonummax[i][ii] = yokonummax2[i][ii];
									}
									yokochk2[i] = 0;
								}
							}
							for (i = 0; i < yoko; i++) {
								if (tatechk2[i] == 1) {
									for (ii = 0; ii < tate; ii++) {
										paint[i][ii] = paint2[i][ii];
									}
									for (ii = 1; ii < tatenum[i][0] + 1; ii++) {
										tatenummin[i][ii] = tatenummin2[i][ii];
										tatenummax[i][ii] = tatenummax2[i][ii];
									}
									tatechk2[i] = 0;
								}
							}
						}
					}

					//お手製背理法が成功していたら一度は仮定なしで通常探索
					if (estmmchk == 1) {
						est = 0;
						estmmchk = 0;
						if (estnum < 260 * tate) {
							yokochk[estc] = 2;
							yokochk2[estc] = 1;
						}
						else {
							tatechk[estc] = 2;
							tatechk2[estc] = 1;
						}
					}

					//お手製背理法の仮定4連
					else if (estnum < 130 * tate) {
						est = 0;
						for (i = estnum / 130; i < tate; i++) {
							for (ii = estnum % 130 + 1; ii < yokonum[i][0] + 1; ii++) {
								estmm = yokonummin[i][ii];
								if (yokonummax[i][ii] != yoko - yokonum[i][ii] - estmm) {
									est = 2;
									estc = i;
									estp = ii;
									estnum = i * 130 + ii;
									if (komatta2 + yoko * tate + 260 * (tate + yoko) < estnum) {
										komatta3 = 1;
										break;
									}
									yokonummax[i][ii] = yoko - yokonum[i][ii] - estmm;
									yokochk[i] = 2;
									yokochk2[i] = 1;
									break;
								}
							}
							if (est == 2 || komatta3 == 1) { break; }
							estnum = estnum - estnum % 130 + 130;
						}
					}
					else if (estnum < 260 * tate) {
						est = 0;
						for (i = estnum / 130 - tate; i < tate; i++) {
							for (ii = yokonum[i][0] - estnum % 130; ii > 0; ii--) {
								estmm = yokonummax[i][ii];
								if (yokonummin[i][ii] != yoko - yokonum[i][ii] - estmm) {
									est = 2;
									estc = i;
									estp = ii;
									estnum = (tate + i) * 130 + yokonum[i][0] - ii + 1;
									if (komatta2 + yoko * tate + 260 * (tate + yoko) < estnum) {
										komatta3 = 1;
										break;
									}
									yokonummin[i][ii] = yoko - yokonum[i][ii] - estmm;
									yokochk[i] = 2;
									yokochk2[i] = 1;
									break;
								}
							}
							if (est == 2 || komatta3 == 1) { break; }
							estnum = estnum - estnum % 130 + 130;
						}
					}
					else if (estnum < 130 * (2 * tate + yoko)) {
						est = 0;
						for (i = estnum / 130 - 2 * tate; i < yoko; i++) {
							for (ii = estnum % 130 + 1; ii < tatenum[i][0] + 1; ii++) {
								estmm = tatenummin[i][ii];
								if (tatenummax[i][ii] != tate - tatenum[i][ii] - estmm) {
									est = 2;
									estc = i;
									estp = ii;
									estnum = (2 * tate + i) * 130 + ii;
									if (komatta2 + yoko * tate + 260 * (tate + yoko) < estnum) {
										komatta3 = 1;
										break;
									}
									tatenummax[i][ii] = tate - tatenum[i][ii] - estmm;
									tatechk[i] = 2;
									tatechk2[i] = 1;
									break;
								}
							}
							if (est == 2 || komatta3 == 1) { break; }
							estnum = estnum - estnum % 130 + 130;
						}
					}
					else if (estnum < 260 * (tate + yoko)) {
						est = 0;
						for (i = estnum / 130 - 2 * tate - yoko; i < yoko; i++) {
							for (ii = tatenum[i][0] - estnum % 130; ii > 0; ii--) {
								estmm = tatenummax[i][ii];
								if (tatenummin[i][ii] != tate - tatenum[i][ii] - estmm) {
									est = 2;
									estc = i;
									estp = ii;
									estnum = (2 * tate + yoko + i) * 130 + tatenum[i][0] - ii + 1;
									if (komatta2 + yoko * tate + 260 * (tate + yoko) < estnum) {
										komatta3 = 1;
										break;
									}
									tatenummin[i][ii] = tate - tatenum[i][ii] - estmm;
									tatechk[i] = 2;
									tatechk2[i] = 1;
									break;
								}
							}
							if (est == 2 || komatta3 == 1) { break; }
							estnum = estnum - estnum % 130 + 130;
						}
					}

					//通常背理法。まず仮定する1マスを選ぶ
					else {
						est = 1;
						if (pn == 2) { estnum += 1; }
						for (i = estnum - 260 * (tate + yoko); i < yoko*tate; i++) {
							if (paint[i % yoko][i / yoko] == 0) {
								estnum = i + 260 * (tate + yoko);
								estp = i;
								break;
							}
						}
						if (komatta2 + yoko * tate + 260 * (tate + yoko) < estnum) {
							komatta3 = 1;
							break;
						}
						if (i == yoko * tate) {
							est = 0;
							estnum = 0;
							pn = 0;
							komatta2 -= yoko * tate + 260 * (tate + yoko);
						}

						//黒塗りを仮定するのか×を仮定するのか
						else if (pn == 0 || pn == 2) {
							paint[estp % yoko][estp / yoko] = 1;
							pn = 1;
						}
						else {
							paint[estp % yoko][estp / yoko] = 10;
							pn = 2;
						}
						yokochk[estp / yoko] = 2;
						tatechk[estp % yoko] = 2;
						yokochk2[estp / yoko] = 1;
						tatechk2[estp % yoko] = 1;
					}

					//お手製背理法は局面を戻さず横着していることがあるのでその対策
					if (komatta3 == 1 && iii == 1) {
						for (i = 0; i < tate; i++) {
							if (yokochk2[i] == 1) {
								for (ii = 0; ii < yoko; ii++) {
									paint[ii][i] = paint2[ii][i];
								}
								for (ii = 1; ii < yokonum[i][0] + 1; ii++) {
									yokonummin[i][ii] = yokonummin2[i][ii];
									yokonummax[i][ii] = yokonummax2[i][ii];
								}
								yokochk2[i] = 0;
							}
						}
						for (i = 0; i < yoko; i++) {
							if (tatechk2[i] == 1) {
								for (ii = 0; ii < tate; ii++) {
									paint[i][ii] = paint2[i][ii];
								}
								for (ii = 1; ii < tatenum[i][0] + 1; ii++) {
									tatenummin[i][ii] = tatenummin2[i][ii];
									tatenummax[i][ii] = tatenummax2[i][ii];
								}
								tatechk2[i] = 0;
							}
						}
						break;
					}
				}
				else if (est == 0 && err == 1) { break; }
				else if (i5 != 0) { komatta3 = 1; break; }

				count1 = 1;

				//背理法以外のメインアルゴリズム
				for (iiii = 0; iiii < 10000 && err == 0 && count1>0; iiii++) {

					//チェックする横の行は変化が予想されるところだけ
					for (i = 0; i < tate; i++) {
						if (yokochk[i] > 0) {

							//黒や×をつける前に精一杯minとmaxの調整を行う
							for (i8 = 0; yokochk[i] == 2 && i8 < 1000; i8++) {
								yokochk[i] = 1;

								//黒地をスキャンして、横のminとmaxを調整
								iii = 1;
								for (ii = yokonummin[i][1]; ii + yokonum[i][yokonum[i][0]] + 1 < yoko; ii++) {
									if (paint[yoko - ii - 1][i] == 1) {
										if (iii > yokonum[i][0]) { err = 1; goto errend; }

										//maxを見ながら黒地を担当できる数字じゃなかったら却下して次の数字へ
										while (yokonummax[i][iii] > yoko - ii - 1) {
											iii++;
											if (iii > yokonum[i][0]) { err = 1; goto errend; }
										}
										if (yokonummax[i][iii] + yokonum[i][iii] > yoko - ii) {
											ii = yoko - yokonummax[i][iii] - yokonum[i][iii];
										}

										//その数字を一方に寄せて並べようとしてみて更新してたら新しいmaxに
										k1 = 1;
										while (k1 != 0) {
											k1 = 0;
											k2 = 0;
											if (paint[yoko - yokonum[i][iii] - ii + k2 - 1][i] == 1 && yoko + k2 > yokonum[i][iii] + ii) { k2++; }
											if (paint[yoko - ii + k2][i] == 1 && k2 < ii) { k1 = k2 + 1; }
											else { k1 = k2; }
											for (i6 = 0; i6 < yokonum[i][iii]; i6++) {
												if (paint[yoko - yokonum[i][iii] - ii + i6 + k2][i] > 9) { k1 = k2 + i6 + 1; }
											}
											if (ii < k1 + yokonummin[i][iii]) { err = 1; goto errend; }
											ii = ii - k1;
										}
										if (yokonummax[i][iii] + yokonum[i][iii] + ii < yoko) {
											yokonummax[i][iii] = yoko - yokonum[i][iii] - ii;
											yokochk[i] = 2;
										}
										ii += yokonum[i][iii];
										iii += 1;
									}
								}
								iii = 0;
								for (ii = yokonummax[i][yokonum[i][0]]; ii + yokonum[i][1] + 1 < yoko; ii++) {
									if (paint[ii][i] == 1) {
										if (iii + 1 > yokonum[i][0]) { err = 1; goto errend; }

										//minを見ながら黒地を担当できる数字じゃなかったら却下して次の数字へ
										while (yokonummin[i][yokonum[i][0] - iii] > yoko - ii - 1) {
											iii++;
											if (iii + 1 > yokonum[i][0]) { err = 1; goto errend; }
										}
										if (yokonummin[i][yokonum[i][0] - iii] + yokonum[i][yokonum[i][0] - iii] > yoko - ii) {
											ii = yoko - yokonummin[i][yokonum[i][0] - iii] - yokonum[i][yokonum[i][0] - iii];
										}

										//その数字を一方に寄せて並べようとしてみて更新してたら新しいminに
										k1 = 1;
										while (k1 != 0) {
											k1 = 0;
											k2 = 0;
											if (paint[yokonum[i][yokonum[i][0] - iii] + ii - k2][i] == 1 && yoko > yokonum[i][yokonum[i][0] - iii] + ii - k2) { k2++; }
											if (paint[ii - k2 - 1][i] == 1 && k2 < ii) { k1 = k2 + 1; }
											else { k1 = k2; }
											for (i6 = 0; i6 < yokonum[i][yokonum[i][0] - iii]; i6++) {
												if (paint[yokonum[i][yokonum[i][0] - iii] + ii - k2 - i6 - 1][i] > 9) { k1 = k2 + i6 + 1; }
											}
											if (ii < k1 + yokonummax[i][yokonum[i][0] - iii]) { err = 1; goto errend; }
											ii = ii - k1;
										}
										if (yokonummin[i][yokonum[i][0] - iii] + yokonum[i][yokonum[i][0] - iii] + ii < yoko) {
											yokonummin[i][yokonum[i][0] - iii] = yoko - yokonum[i][yokonum[i][0] - iii] - ii;
											yokochk[i] = 2;
										}
										ii += yokonum[i][yokonum[i][0] - iii];
										iii += 1;
									}
								}

								//minとmaxの調整の両輪、「黒地スキャン」「数字スキャン」を交互に繰り返させているが
								//繰り返し中に黒地スキャンで変化が無いなら数字スキャンはしなくて良いはずである。
								//ただし、一回目のスキャンは両方必須。
								if (yokochk[i] == 1 && i8 > 0) { break; }
								else { yokochk[i] = 1; }

								//ヒントの数字をスキャンして、横のminとmaxを調整。
								for (ii = 0; ii < yokonum[i][0]; ii++) {

									//min方向に敷き詰める
									k2 = 1;
									while (k2 != 0) {
										k1 = 0;
										k2 = 0;
										if (paint[yoko - yokonummin[i][ii + 1] - k1][i] == 1 && yokonummin[i][ii + 1] > 0) { k1 += 1; }
										if (paint[yoko - yokonummin[i][ii + 1] - yokonum[i][ii + 1] - k1 - 1][i] == 1 && yoko > yokonummin[i][ii + 1] + yokonum[i][ii + 1] + k1) {
											k2 = k1 + 1;
										}
										else { k2 = k1; }
										for (iii = 0; iii < yokonum[i][ii + 1]; iii++) {
											if (paint[yoko - yokonummin[i][ii + 1] - iii - k1 - 1][i] > 9) { k2 = k1 + iii + 1; }
										}
										if (yokonummin[i][ii + 1] + yokonummax[i][ii + 1] + yokonum[i][ii + 1] > yoko) { err = 1; goto errend; }
										if (k2 > 0) {
											yokonummin[i][ii + 1] += k2;
											yokochk[i] = 2;
										}
									}
									if (yokonummin[i][ii + 2] < yokonummin[i][ii + 1] + yokonum[i][ii + 1] + 1) {
										yokonummin[i][ii + 2] = yokonummin[i][ii + 1] + yokonum[i][ii + 1] + 1;
										yokochk[i] = 2;
									}

									//max方向に敷き詰める
									k2 = 1;
									while (k2 != 0) {
										k1 = 0;
										k2 = 0;
										if (paint[yokonummax[i][yokonum[i][0] - ii] + k1 - 1][i] == 1 && yokonummax[i][yokonum[i][0] - ii] > 0) { k1 += 1; }
										if (paint[yokonummax[i][yokonum[i][0] - ii] + yokonum[i][yokonum[i][0] - ii] + k1][i] == 1 && yokonummax[i][yokonum[i][0] - ii] + yokonum[i][yokonum[i][0] - ii] + k1 < yoko) {
											k2 = k1 + 1;
										}
										else { k2 = k1; }
										for (iii = 0; iii < yokonum[i][yokonum[i][0] - ii]; iii++) {
											if (paint[yokonummax[i][yokonum[i][0] - ii] + iii + k1][i] > 9) { k2 = k1 + iii + 1; }
										}
										if (yokonummin[i][yokonum[i][0] - ii] + yokonummax[i][yokonum[i][0] - ii] + yokonum[i][yokonum[i][0] - ii] > yoko) { err = 1; goto errend; }
										if (k2 > 0) {
											yokonummax[i][yokonum[i][0] - ii] += k2;
											yokochk[i] = 2;
										}
									}
									if (yokonummax[i][yokonum[i][0] - ii - 1] < yokonummax[i][yokonum[i][0] - ii] + yokonum[i][yokonum[i][0] - ii] + 1) {
										yokonummax[i][yokonum[i][0] - ii - 1] = yokonummax[i][yokonum[i][0] - ii] + yokonum[i][yokonum[i][0] - ii] + 1;
										yokochk[i] = 2;
									}
								}
							}

							//やっと黒地を塗る
							for (ii = 0; ii < yokonum[i][0]; ii++) {
								k1 = yokonummin[i][ii + 1] + yokonum[i][ii + 1];
								k2 = yokonummax[i][ii + 1] + yokonum[i][ii + 1];
								for (iii = yoko; iii < k1 + k2; iii++) {
									if (paint[iii - k1][i] == 0) {
										tatechk[iii - k1] = 2;
										tatechk2[iii - k1] = 1;
										paint[iii - k1][i] = 1;
									}
								}
							}

							//横の各数字の間や壁との間に空白が確定してたら×をつける
							for (ii = 1; ii < yokonum[i][0]; ii++) {
								for (iii = 0; yokonummax[i][ii] + yokonummin[i][ii + 1] > yoko + iii; iii++) {
									if (paint[yokonummax[i][ii] - iii - 1][i] == 0) {
										tatechk[yokonummax[i][ii] - iii - 1] = 2;
										tatechk2[yokonummax[i][ii] - iii - 1] = 1;
										paint[yokonummax[i][ii] - iii - 1][i] = 10;
									}
								}
							}
							for (iii = 0; yokonummin[i][1] > iii; iii++) {
								if (paint[yoko - iii - 1][i] == 0) {
									tatechk[yoko - iii - 1] = 2;
									tatechk2[yoko - iii - 1] = 1;
									paint[yoko - iii - 1][i] = 10;
								}
							}
							for (iii = 0; yokonummax[i][yokonum[i][0]] > iii; iii++) {
								if (paint[iii][i] == 0) {
									tatechk[iii] = 2;
									tatechk2[iii] = 1;
									paint[iii][i] = 10;
								}
							}

							//単純なminとmaxだけでは無理だが、実は確定するマスを気合で書きだす（横）

							//まずは黒地の位置と長さをスキャンし、その黒地に当てはまる可能性のある数字を全てリストアップしつつ
							//そこから「黒地の長さ以上の数字の中の最小値」と「最大値(二つに分ける。ギリギリ黒地にあてはまる数字は片方だけに採用)」を求める
							for (ii = 2; ii < yoko - 2; ii++) {
								if (paint[yoko - ii - 1][i] == 1) {
									for (i6 = 1; i6 + ii < yoko && paint[yoko - ii - i6 - 1][i] == 1; i6++) {}
									k1 = yoko;
									k2 = i6;
									k3 = i6;
									for (iii = 0; iii < yokonum[i][0]; iii++) {
										if (yokonummin[i][iii + 1] < ii + 1 && yokonummax[i][iii + 1] < yoko - ii) {
											if (k1 > yokonum[i][iii + 1] && i6 < yokonum[i][iii + 1] + 1) {
												k1 = yokonum[i][iii + 1];
											}
											if (k2 < yokonum[i][iii + 1] && yokonummin[i][iii + 1] != ii) {
												k2 = yokonum[i][iii + 1];
											}
											if (k3 < yokonum[i][iii + 1] && yokonummax[i][iii + 1] + 1 != yoko - ii) {
												k3 = yokonum[i][iii + 1];
											}
										}
									}

									//「黒地の長さ以上の数字の中の最小値」が黒地の長さより大きければ
									//近辺に×があれば黒がいくらか確定する
									for (iii = 0; iii + i6 < k1; iii++) {
										if (paint[yoko - ii - i6 - iii - 1][i] > 9) {
											for (i8 = 0; i8 + i6 + iii < k1; i8++) {
												if (paint[yoko - ii + i8][i] == 0 && i8 < ii) {
													paint[yoko - ii + i8][i] = 1;
													tatechk[yoko - ii + i8] = 2;
													tatechk2[yoko - ii + i8] = 1;
												}
											}
										}
										if (paint[yoko - ii + iii][i] > 9) {
											for (i8 = 0; i8 + i6 + iii < k1; i8++) {
												if (paint[yoko - ii - i6 - i8 - 1][i] == 0 && yoko > ii + i6 + i8) {
													paint[yoko - ii - i6 - i8 - 1][i] = 1;
													tatechk[yoko - ii - i6 - i8 - 1] = 2;
													tatechk2[yoko - ii - i6 - i8 - 1] = 1;
												}
											}
										}
									}

									//候補の数字の最大値が黒地の長さと等しければ、
									//どの数字かはわからないが長さは確定し黒地を×ではさめる
									if (k2 == i6 && paint[yoko - ii][i] == 0 && 0 < ii) {
										paint[yoko - ii][i] = 10;
										tatechk[yoko - ii] = 2;
										tatechk2[yoko - ii] = 1;
									}
									if (k3 == i6 && paint[yoko - ii - i6 - 1][i] == 0 && ii + i6 < yoko) {
										paint[yoko - ii - i6 - 1][i] = 10;
										tatechk[yoko - ii - i6 - 1] = 2;
										tatechk2[yoko - ii - i6 - 1] = 1;
									}
									ii += i6;
								}
							}

							//×ではさまれた空間を×で埋め尽くせる可能性
							for (ii = 2; ii < yoko - 4; ii++) {
								if (paint[yoko - ii - 1][i] > 9) {
									for (iii = 0; paint[yoko - ii - iii - 2][i] > 9 && ii + iii + 4 < yoko; iii++) {}
									ii += iii;
									if (ii + 5 > yoko) { break; }
									if (paint[yoko - ii - 2][i] == 0) {
										for (iii = 1; paint[yoko - ii - iii - 2][i] == 0 && ii + iii + 3 < yoko; iii++) {}
										if (ii + iii + 4 > yoko) { break; }
										if (paint[yoko - ii - iii - 2][i] > 9) {
											k1 = yoko;
											for (i6 = 0; i6 < yokonum[i][0]; i6++) {
												if (yokonummin[i][i6 + 1] < ii + iii + 1 && yokonummax[i][i6 + 1] < yoko - ii) {
													if (k1 > yokonum[i][i6 + 1]) {
														k1 = yokonum[i][i6 + 1];
													}
												}
											}
											if (iii < k1) {
												for (i6 = 0; i6 < iii; i6++) {
													paint[yoko - ii - i6 - 2][i] = 10;
													tatechk[yoko - ii - i6 - 2] = 2;
													tatechk2[yoko - ii - i6 - 2] = 1;
												}
											}
											ii += iii;
										}
										else {
											ii += iii + 1;
										}
									}
									else {
										ii += 1;
									}
								}
							}
						}
						yokochk[i] = 0;
					}

					//手詰まり処理(2周目以降なら縦への影響ある変化がなければここでbreak)
//					if (iiii > 0) {
//						count1 = 0;
//						for (i = 0; i < yoko && count1 == 0; i++) { count1 = tatechk[i]; }
//						if (count1 == 0) {
//							break;
//						}
//					}

					//チェックする縦の列は変化が予想されるところだけ
					for (i = 0; i < yoko; i++) {
						if (tatechk[i] > 0) {

							//黒や×をつける前に精一杯minとmaxの調整を行う
							for (i8 = 0; tatechk[i] == 2 && i8 < 20; i8++) {
								tatechk[i] = 1;

								//黒地をスキャンして、縦のminとmaxを調整
								iii = 1;
								for (ii = tatenummin[i][1]; ii + tatenum[i][tatenum[i][0]] + 1 < tate; ii++) {
									if (paint[i][tate - ii - 1] == 1) {
										if (iii > tatenum[i][0]) { err = 1; goto errend; }

										//maxを見ながら黒地を担当できる数字じゃなかったら却下して次の数字へ
										while (tatenummax[i][iii] > tate - ii - 1) {
											iii++;
											if (iii > tatenum[i][0]) { err = 1; goto errend; }
										}
										if (tatenummax[i][iii] + tatenum[i][iii] > tate - ii) {
											ii = tate - tatenummax[i][iii] - tatenum[i][iii];
										}

										//その数字を一方に寄せて並べようとしてみて更新してたら新しいmaxに
										k1 = 1;
										while (k1 != 0) {
											k1 = 0;
											k2 = 0;
											if (paint[i][tate - tatenum[i][iii] - ii + k2 - 1] == 1 && tate + k2 > tatenum[i][iii] + ii) { k2++; }
											if (paint[i][tate - ii + k2] == 1 && k2 < ii) { k1 = k2 + 1; }
											else { k1 = k2; }
											for (i6 = 0; i6 < tatenum[i][iii]; i6++) {
												if (paint[i][tate - tatenum[i][iii] - ii + i6 + k2] > 9) { k1 = k2 + i6 + 1; }
											}
											if (ii < k1 + tatenummin[i][iii]) { err = 1; goto errend; }
											ii = ii - k1;
										}
										if (tatenummax[i][iii] + tatenum[i][iii] + ii < tate) {
											tatenummax[i][iii] = tate - tatenum[i][iii] - ii;
											tatechk[i] = 2;
										}
										ii += tatenum[i][iii];
										iii += 1;
									}
								}

								iii = 0;
								for (ii = tatenummax[i][tatenum[i][0]]; ii + tatenum[i][1] + 1 < tate; ii++) {
									if (paint[i][ii] == 1) {
										if (iii + 1 > tatenum[i][0]) { err = 1; goto errend; }

										//minを見ながら黒地を担当できる数字じゃなかったら却下して次の数字へ
										while (tatenummin[i][tatenum[i][0] - iii] > tate - ii - 1) {
											iii++;
											if (iii + 1 > tatenum[i][0]) { err = 1; goto errend; }
										}
										if (tatenummin[i][tatenum[i][0] - iii] + tatenum[i][tatenum[i][0] - iii] > tate - ii) {
											ii = tate - tatenummin[i][tatenum[i][0] - iii] - tatenum[i][tatenum[i][0] - iii];
										}

										//その数字を一方に寄せて並べようとしてみて更新してたら新しいminに
										k1 = 1;
										while (k1 != 0) {
											k1 = 0;
											k2 = 0;
											if (paint[i][tatenum[i][tatenum[i][0] - iii] + ii - k2] == 1 && tate > tatenum[i][tatenum[i][0] - iii] + ii - k2) { k2++; }
											if (paint[i][ii - k2 - 1] == 1 && k2 < ii) { k1 = k2 + 1; }
											else { k1 = k2; }
											for (i6 = 0; i6 < tatenum[i][tatenum[i][0] - iii]; i6++) {
												if (paint[i][tatenum[i][tatenum[i][0] - iii] + ii - k2 - i6 - 1] > 9) { k1 = k2 + i6 + 1; }
											}
											if (ii < k1 + tatenummax[i][tatenum[i][0] - iii]) { err = 1; goto errend; }
											ii = ii - k1;
										}
										if (tatenummin[i][tatenum[i][0] - iii] + tatenum[i][tatenum[i][0] - iii] + ii < tate) {
											tatenummin[i][tatenum[i][0] - iii] = tate - tatenum[i][tatenum[i][0] - iii] - ii;
											tatechk[i] = 2;
										}
										ii += tatenum[i][tatenum[i][0] - iii];
										iii += 1;
									}
								}

								//minとmaxの調整の両輪、「黒地スキャン」「数字スキャン」を交互に繰り返させているが
								//繰り返し中に黒地スキャンで変化が無いなら数字スキャンはしなくて良いはずである。
								//ただし、一回目のスキャンは両方必須。
								if (tatechk[i] == 1 && i8 > 0) { break; }
								else { tatechk[i] = 1; }

								//ヒントの数字をスキャンして、縦のminとmaxを調整。
								for (ii = 0; ii < tatenum[i][0]; ii++) {

									//min方向に敷き詰める
									k2 = 1;
									while (k2 != 0) {
										k1 = 0;
										k2 = 0;
										if (paint[i][tate - tatenummin[i][ii + 1] - k1] == 1 && tatenummin[i][ii + 1] > 0) { k1 += 1; }
										if (paint[i][tate - tatenummin[i][ii + 1] - tatenum[i][ii + 1] - 1 - k1] == 1 && tate > tatenummin[i][ii + 1] + tatenum[i][ii + 1] + k1) {
											k2 = k1 + 1;
										}
										else { k2 = k1; }
										for (iii = 0; iii < tatenum[i][ii + 1]; iii++) {
											if (paint[i][tate - tatenummin[i][ii + 1] - iii - 1 - k1] > 9) { k2 = k1 + iii + 1; }
										}
										if (tatenummin[i][ii + 1] + tatenummax[i][ii + 1] + tatenum[i][ii + 1] > tate) { err = 1; goto errend; }
										if (k2 > 0) {
											tatenummin[i][ii + 1] += k2;
											tatechk[i] = 2;
										}
									}
									if (tatenummin[i][ii + 2] < tatenummin[i][ii + 1] + tatenum[i][ii + 1] + 1) {
										tatenummin[i][ii + 2] = tatenummin[i][ii + 1] + tatenum[i][ii + 1] + 1;
										tatechk[i] = 2;
									}

									//max方向に敷き詰める
									k2 = 1;
									while (k2 != 0) {
										k1 = 0;
										k2 = 0;
										if (paint[i][tatenummax[i][tatenum[i][0] - ii] + k1 - 1] == 1 && tatenummax[i][tatenum[i][0] - ii] > 0) { k1 += 1; }
										if (paint[i][tatenummax[i][tatenum[i][0] - ii] + tatenum[i][tatenum[i][0] - ii] + k1] == 1 && tatenummax[i][tatenum[i][0] - ii] + tatenum[i][tatenum[i][0] - ii] + k1 < tate) {
											k2 = k1 + 1;
										}
										else { k2 = k1; }
										for (iii = 0; iii < tatenum[i][tatenum[i][0] - ii]; iii++) {
											if (paint[i][tatenummax[i][tatenum[i][0] - ii] + iii + k1] > 9) { k2 = k1 + iii + 1; }
										}
										if (tatenummin[i][tatenum[i][0] - ii] + tatenummax[i][tatenum[i][0] - ii] + tatenum[i][tatenum[i][0] - ii] > tate) { err = 1;  goto errend; }
										if (k2 > 0) {
											tatenummax[i][tatenum[i][0] - ii] += k2;
											tatechk[i] = 2;
										}
									}
									if (tatenummax[i][tatenum[i][0] - ii - 1] < tatenummax[i][tatenum[i][0] - ii] + tatenum[i][tatenum[i][0] - ii] + 1) {
										tatenummax[i][tatenum[i][0] - ii - 1] = tatenummax[i][tatenum[i][0] - ii] + tatenum[i][tatenum[i][0] - ii] + 1;
										tatechk[i] = 2;
									}
								}
							}

							//やっと黒地を塗る
							for (ii = 0; ii < tatenum[i][0]; ii++) {
								k1 = tatenummin[i][ii + 1] + tatenum[i][ii + 1];
								k2 = tatenummax[i][ii + 1] + tatenum[i][ii + 1];
								for (iii = tate; iii < k1 + k2; iii++) {
									if (paint[i][iii - k1] == 0) {
										yokochk[iii - k1] = 2;
										yokochk2[iii - k1] = 1;
										paint[i][iii - k1] = 1;
									}
								}
							}

							//縦の各数字の間や壁との間に空白が確定してたら×をつける
							for (ii = 1; ii < tatenum[i][0]; ii++) {
								for (iii = 0; tatenummax[i][ii] + tatenummin[i][ii + 1] > tate + iii; iii++) {
									if (paint[i][tatenummax[i][ii] - iii - 1] == 0) {
										yokochk[tatenummax[i][ii] - iii - 1] = 2;
										yokochk2[tatenummax[i][ii] - iii - 1] = 1;
										paint[i][tatenummax[i][ii] - iii - 1] = 10;
									}
								}
							}
							for (iii = 0; tatenummin[i][1] > iii; iii++) {
								if (paint[i][tate - iii - 1] == 0) {
									yokochk[tate - iii - 1] = 2;
									yokochk2[tate - iii - 1] = 1;
									paint[i][tate - iii - 1] = 10;
								}
							}
							for (iii = 0; tatenummax[i][tatenum[i][0]] > iii; iii++) {
								if (paint[i][iii] == 0) {
									yokochk[iii] = 2;
									yokochk2[iii] = 1;
									paint[i][iii] = 10;
								}
							}

							//単純なminとmaxだけでは無理だが、実は確定するマスを気合で書きだす（縦）

							//まずは黒地の位置と長さをスキャンし、その黒地に当てはまる可能性のある数字を全てリストアップしつつ
							//そこから「黒地の長さ以上の数字の中の最小値」と「最大値(ギリギリの場合片方)」を求める
							for (ii = 2; ii < tate - 2; ii++) {
								if (paint[i][tate - ii - 1] == 1) {
									for (i6 = 1; i6 + ii < tate && paint[i][tate - ii - i6 - 1] == 1; i6++) {}
									k1 = tate;
									k2 = i6;
									k3 = i6;
									for (iii = 0; iii < tatenum[i][0]; iii++) {
										if (tatenummin[i][iii + 1] < ii + 1 && tatenummax[i][iii + 1] < tate - ii) {
											if (k1 > tatenum[i][iii + 1] && i6 < tatenum[i][iii + 1] + 1) {
												k1 = tatenum[i][iii + 1];
											}
											if (k2 < tatenum[i][iii + 1] && tatenummin[i][iii + 1] != ii) {
												k2 = tatenum[i][iii + 1];
											}
											if (k3 < tatenum[i][iii + 1] && tatenummax[i][iii + 1] + 1 != tate - ii) {
												k3 = tatenum[i][iii + 1];
											}
										}
									}

									//「黒地の長さ以上の数字の中の最小値」が黒地の長さより大きければ
									//近辺に×があれば黒がいくらか確定する
									for (iii = 0; iii + i6 < k1; iii++) {
										if (paint[i][tate - ii - i6 - iii - 1] > 9) {
											for (i8 = 0; i8 + i6 + iii < k1; i8++) {
												if (paint[i][tate - ii + i8] == 0 && i8 < ii) {
													paint[i][tate - ii + i8] = 1;
													yokochk[tate - ii + i8] = 2;
													yokochk2[tate - ii + i8] = 1;
												}
											}
										}
										if (paint[i][tate - ii + iii] > 9) {
											for (i8 = 0; i8 + i6 + iii < k1; i8++) {
												if (paint[i][tate - ii - i6 - i8 - 1] == 0 && tate > ii + i6 + i8) {
													paint[i][tate - ii - i6 - i8 - 1] = 1;
													yokochk[tate - ii - i6 - i8 - 1] = 2;
													yokochk2[tate - ii - i6 - i8 - 1] = 1;
												}
											}
										}
									}

									//候補の数字の最大値が黒地の長さと等しければ、
									//どの数字かはわからないが長さは確定し黒地を×ではさめる
									if (k2 == i6 && paint[i][tate - ii] == 0 && 0 < ii) {
										paint[i][tate - ii] = 10;
										yokochk[tate - ii] = 2;
										yokochk2[tate - ii] = 1;
									}
									if (k3 == i6 && paint[i][tate - ii - i6 - 1] == 0 && ii + i6 < tate) {
										paint[i][tate - ii - i6 - 1] = 10;
										yokochk[tate - ii - i6 - 1] = 2;
										yokochk2[tate - ii - i6 - 1] = 1;
									}
									ii += i6;
								}
							}

							//×ではさまれた空間を×で埋め尽くせる可能性
							for (ii = 2; ii < tate - 4; ii++) {
								if (paint[i][tate - ii - 1] > 9) {
									for (iii = 0; paint[i][tate - ii - iii - 2] > 9 && ii + iii + 4 < tate; iii++) {}
									ii += iii;
									if (ii + 5 > tate) { break; }
									if (paint[i][tate - ii - 2] == 0) {
										for (iii = 1; paint[i][tate - ii - iii - 2] == 0 && ii + iii + 3 < tate; iii++) {}
										if (ii + iii + 4 > tate) { break; }
										if (paint[i][tate - ii - iii - 2] > 9) {
											k1 = tate;
											for (i6 = 0; i6 < tatenum[i][0]; i6++) {
												if (tatenummin[i][i6 + 1] < ii + iii + 1 && tatenummax[i][i6 + 1] < tate - ii) {
													if (k1 > tatenum[i][i6 + 1]) {
														k1 = tatenum[i][i6 + 1];
													}
												}
											}
											if (iii < k1) {
												for (i6 = 0; i6 < iii; i6++) {
													paint[i][tate - ii - i6 - 2] = 10;
													yokochk[tate - ii - i6 - 2] = 2;
													yokochk2[tate - ii - i6 - 2] = 1;
												}
											}
											ii += iii;
										}
										else {
											ii += iii + 1;
										}
									}
									else {
										ii += 1;
									}
								}
							}
						}
						tatechk[i] = 0;
					}

					//手詰まり処理
					count1 = 0;
					for (i = 0; i < tate && count1 == 0; i++) { count1 = yokochk[i]; }
				}

			errend:
				if (count1 == 0) { komatta = 1; }
			}
		}
	}
theend:

	//結果表示
	w = L"";
	if (backgroundWorker1->CancellationPending) {
		if (i9 > 0) {
			for (i = 0; i < yoko*tate; i++) {
				if (paint4[i % yoko][i / yoko] == 1) {
					w += L"■‌";
				}
				else if (paint4[i % yoko][i / yoko] > 9) {
					w += L"×‌";
				}
				else {
					w += L"        ";
				}
				if (i % yoko == yoko - 1) {
					w += L"\n";
				}
			}
		}
		else{
			for (i = 0; i < yoko*tate; i++) {
				if (paint3[i % yoko][i / yoko] == 1) {
					w += L"■‌";
				}
				else if (paint3[i % yoko][i / yoko] > 9) {
					w += L"×‌";
				}
				else {
					w += L"        ";
				}
				if (i % yoko == yoko - 1) {
					w += L"\n";
				}
			}
		}
	}
	else {
		for (i = 0; i < yoko*tate; i++) {
			if (paint[i % yoko][i / yoko] == 1) {
				w += L"■‌";
			}
			else if (paint[i % yoko][i / yoko] > 9) {
				w += L"×‌";
			}
			else {
				w += L"        ";
			}
			if (i % yoko == yoko - 1) {
				w += L"\n";
			}
		}
	}

	t2 = clock();
	timer = t2 - t;
	double timer2 = timer / 1000.0;
	w2 = L"timer = \n" + timer + L" ms\ni9 = " + i9 + L"\ni7 = " + i7 + L"\ni5 = " + i5;

	for (i = 0; i < yoko*tate && paint[i % yoko][i / yoko] > 0; i++) {}
	if (tuyogari == 2) {
		w += L"この味は！・・・複数解の『味』だぜ　(下に複数解を表示します)\n\n";
	}
	else if (err == 1) {
		w += L"矛盾発生？何かがおかしいです。\n";
	}
	else if (backgroundWorker1->CancellationPending) {
		w += L"計算強制終了\n";
	}
	else if (i == yoko * tate) {
		w += L"計算完了！複数解なし！\n計算時間 " + timer2.ToString() + L"秒\n" ;
	}
	else {
		w += L"体力の限界・・・！(解けませんでした)\n計算時間 " + timer2.ToString() + L"秒\n";
	}
	if (tuyogari == 1 && i != yoko * tate) {
		w += L"い、いや俺は答えとか分かってたし！\n(厳密な解は求められませんでしたが一つの解は見つかりました)\n";
	}
	if (tuyogari == 2 || (tuyogari == 1 && i != yoko * tate)) {
		for (i = 0; i < yoko*tate; i++) {
			if (paint5[i % yoko][i / yoko] == 1) {
				w += L"■‌";
			}
			else if (paint5[i % yoko][i / yoko] > 9) {
				w += L"×‌";
			}
			else {
				w += L"        ";
			}
			if (i % yoko == yoko - 1) {
				w += L"\n";
			}
		}
	}

//	w += L"  estmm=" + estmm + L" estnum=" + estnum + L"  estmmchk=" + estmmchk + L"  est=" + est + L" komatta=" + komatta + L" err=" + err + L"\n";
//	w += L"errnum[1]=" + errnum[1] + L" ii= " + ii + L" iii= " + iii + L" komatta3= " + komatta3 + L" est= " + est + L"\n";
//	w += L"errnum[2]=" + errnum[2] + L"errnum[3]=" + errnum[3] + L"errnum[4]=" + errnum[4] + L"errnum[5]=" + errnum[5] + L"errnum[6]=" + errnum[6] + L"\n";
//	w += L"errnum[7]=" + errnum[7] + L"errnum[8]=" + errnum[8] + L"errnum[9]=" + errnum[9] + L"errnum[10]=" + errnum[10] + L"errnum[11]=" + errnum[11] + L"\n";

}

private: System::Void backgroundWorker1_RunWorkerCompleted_1(System::Object^  sender, System::ComponentModel::RunWorkerCompletedEventArgs^  e) {

	//バックグラウンドワーカー完了時の処理
	label1->Text = w;
	label4->Text = w2;
	button1->Enabled = true;
	button2->Enabled = true;
	button3->Text = L"初期化";
	button4->Enabled = true;
	button5->Enabled = true;
}
private: System::Void backgroundWorker1_ProgressChanged(System::Object^  sender, System::ComponentModel::ProgressChangedEventArgs^  e) {
	
	//バックグラウンドワーカーによる途中経過報告
	label1->Text = w;
	label4->Text = w2;
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

	int i,ii;

	if (button3->Text == L"初期化") {
		tate = 30;
		yoko = 30;
		numericUpDown1->Value = tate;
		numericUpDown2->Value = yoko;
		label1->Text = L"";
		label5->Text = L"□";
		inpnum = 0;
		inputretu[0] = 0;
		inputretu[1] = 0;
		inputretu[2] = 1;

		label2->Text = L"";
		label3->Text = L"";
		for (i = 0; i < tate; i++) { label2->Text += L"0\n"; }
		for (i = 0; i < yoko; i++) { label3->Text += L"  0  "; }
		label3->Text += L"\n";
		for (i = 0; i < 256; i++) {
			for (ii = 0; ii < 129; ii++) {
				tatenum[i][ii] = 0;
				yokonum[i][ii] = 0;
			}
		}
		label5->Location = System::Drawing::Point(192 + AutoScrollPosition.X, AutoScrollPosition.Y + 179);

	}
	else if (button3->Text == L"終われ") {

		//バックグラウンドワーカーを途中で終了させる
		backgroundWorker1->CancelAsync();
		button1->Enabled = true;
		button2->Enabled = true;
		button3->Text = L"初期化";
		button4->Enabled = true;
		button5->Enabled = true;
	}
	


}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	//解く！ボタンでバックグラウンドワーカーさんに頑張ってもらう
	hairi1 = 1000000;
	hairi2 = 1000000;
	backgroundWorker1->RunWorkerAsync();
	button1->Enabled = false;
	button2->Enabled = false;
	button3->Text = L"終われ";
	button4->Enabled = false;
	button5->Enabled = false;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

	//深さ1モード
	hairi1 = 1000000;
	hairi2 = 1;
	backgroundWorker1->RunWorkerAsync();
	button1->Enabled = false;
	button2->Enabled = false;
	button3->Text = L"終われ";
	button4->Enabled = false;
	button5->Enabled = false;
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

	//数字モードボタン
	unsigned char i, iii, counti, tatemax;
	int ii,yokotot,tatetot;
	String^ yokokaki = L"";
	String^ tatekaki = L"";

	//数字モードに入るとき
	if (button5->Text == L"数字モード"){
		button1->Enabled = false;
		button2->Enabled = false;
		button4->Enabled = false;
		button5->Text = L"戻る";
		label4->Text = L"";
		label5->Visible = true;
		label6->Visible = true;
		label7->Visible = true;
		numericUpDown1->Visible = true;
		numericUpDown2->Visible = true;
		numericUpDown1->Value = tate;
		numericUpDown2->Value = yoko;
		label4->Text = L"方向キーが\n移動の基本！";
		label5->Text = L"□";
		inpnum = 0;
		inputretu[0] = 0;
		inputretu[1] = 0;
		inputretu[2] = 1;
		label5->Location = System::Drawing::Point(210 - inputretu[2] * 18 + AutoScrollPosition.X, inputretu[1] * 16 + AutoScrollPosition.Y + 179);
	}

	//数字モードから終わるとき
	else {
		button1->Enabled = true;
		button2->Enabled = true;
		button4->Enabled = true;
		button5->Text = L"数字モード";
		label5->Visible = false;
		label6->Visible = false;
		label7->Visible = false;
		numericUpDown1->Visible = false;
		numericUpDown2->Visible = false;

		//最後の数字入力を反映させる
		if (label5->Text != L"□") {
			if (inputretu[0] == 0) {
				yokonum[inputretu[1]][inputretu[2]] = inpnum;
				if (yokonum[inputretu[1]][0] < inputretu[2]) {
					for (i = 0; i + 1 < inputretu[2] - yokonum[inputretu[1]][0]; i++) {
						yokonum[inputretu[1]][inputretu[2] - i - 1] = 0;
					}
					yokonum[inputretu[1]][0] = inputretu[2];
				}
			}
			else {
				tatenum[inputretu[1]][inputretu[2]] = inpnum;
				if (tatenum[inputretu[1]][0] < inputretu[2]) {
					for (i = 0; i + 1 < inputretu[2] - tatenum[inputretu[1]][0]; i++) {
						tatenum[inputretu[1]][inputretu[2] - i - 1] = 0;
					}
					tatenum[inputretu[1]][0] = inputretu[2];
				}
			}
		}
		tate = Decimal::ToByte(numericUpDown1->Value);
		yoko = Decimal::ToByte(numericUpDown2->Value);

		//余分な0が入っていたら亡き者とする
		for (i = 0; i < tate; i++) {
			counti = 0;
			for (ii = 0; ii < yokonum[i][0]; ii++) {
				if (yokonum[i][ii - counti + 1] == 0) {
					for (iii = 0; iii < yokonum[i][0] - ii - 1; iii++) {
						yokonum[i][ii + iii - counti + 1] = yokonum[i][ii + iii - counti + 2];
					}
					counti++;
				}
			}
			yokonum[i][0] -= counti;
		}
		for (i = 0; i < yoko; i++) {
			counti = 0;
			for (ii = 0; ii < tatenum[i][0]; ii++) {
				if (tatenum[i][ii - counti + 1] == 0) {
					for (iii = 0; iii < tatenum[i][0] - ii - 1; iii++) {
						tatenum[i][ii + iii - counti + 1] = tatenum[i][ii + iii - counti + 2];
					}
					counti++;
				}
			}
			tatenum[i][0] -= counti;
		}

		//横の数字を書く
		for (i = 0; i < tate; i++) {
			for (ii = 0; ii < yokonum[i][0]; ii++) {
				if (yokonum[i][yokonum[i][0] - ii] < 10) { yokokaki += L" "; }
				yokokaki += L" " + yokonum[i][yokonum[i][0] - ii];
			}
			if (yokonum[i][0] == 0) { yokokaki += L"0"; }
			yokokaki += L"\n";
		}
		label2->Text = yokokaki;

		//縦の数字を書く
		tatemax = 1;
		for (i = 0; i < yoko; i++) {
			if (tatemax < tatenum[i][0]) { tatemax = tatenum[i][0]; }
		}
		for (ii = 0; ii < tatemax; ii++) {
			for (i = 0; i < yoko; i++) {
				if (tatenum[i][0] + ii < tatemax && ii + 1 != tatemax) { tatekaki += L"        "; }
				else if (tatenum[i][tatemax - ii] > 9) {
					tatekaki += tatenum[i][tatemax - ii] + L"";
				}
				else if (tatenum[i][0] == 0) { tatekaki += L"  0  "; }
				else { tatekaki += L"  " + tatenum[i][tatemax - ii] + L"  "; }
			}
			tatekaki += L"\n";
		}
		label3->Text = tatekaki;

		//数字を合計して間違いを教える
		yokotot = 0;
		for (i = 0; i < tate; i++) {
			for (ii = 0; ii < yokonum[i][0]; ii++) {
				yokotot += yokonum[i][ii + 1];
			}
		}
		tatetot = 0;
		for (i = 0; i < yoko; i++) {
			for (ii = 0; ii < tatenum[i][0]; ii++) {
				tatetot += tatenum[i][ii + 1];
			}
		}
		if (yokotot != tatetot) {
			label4->Text = L"\n～注意～\n\n縦と横の\n数字の合計が\n異なっています";
		}
		else {label4->Text = L"";}
	}

}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	//数字モードで横の数字をクリックしたときの処理
	unsigned char i, ii, tatemax;
	int mousex, mousey;
	String^ yokokaki = L"";
	String^ tatekaki = L"";

	if (button5->Text == L"戻る") {

		tate = Decimal::ToByte(numericUpDown1->Value);
		yoko = Decimal::ToByte(numericUpDown2->Value);

		//最後にされてた数字入力を反映
		if (label5->Text != L"□") {
			if (inputretu[0] == 0) {
				yokonum[inputretu[1]][inputretu[2]] = inpnum;
				if (yokonum[inputretu[1]][0] < inputretu[2]) {
					for (i = 0; i + 1 < inputretu[2] - yokonum[inputretu[1]][0]; i++) {
						yokonum[inputretu[1]][inputretu[2] - i - 1] = 0;
					}
					yokonum[inputretu[1]][0] = inputretu[2];
				}
			}
			else {
				tatenum[inputretu[1]][inputretu[2]] = inpnum;
				if (tatenum[inputretu[1]][0] < inputretu[2]) {
					for (i = 0; i + 1 < inputretu[2] - tatenum[inputretu[1]][0]; i++) {
						tatenum[inputretu[1]][inputretu[2] - i - 1] = 0;
					}
					tatenum[inputretu[1]][0] = inputretu[2];
				}
			}
		}
		label5->Text = L"□";
		inpnum = 0;

		//横の数字を書く
		for (i = 0; i < tate; i++) {
			for (ii = 0; ii < yokonum[i][0]; ii++) {
				if (yokonum[i][yokonum[i][0] - ii] < 10) { yokokaki += L" "; }
				yokokaki += L" " + yokonum[i][yokonum[i][0] - ii];
			}
			if (yokonum[i][0] == 0) { yokokaki += L"0"; }
			yokokaki += L"\n";
		}
		label2->Text = yokokaki;

		//縦の数字を書く
		tatemax = 1;
		for (i = 0; i < yoko; i++) {
			if (tatemax < tatenum[i][0]) { tatemax = tatenum[i][0]; }
		}
		for (ii = 0; ii < tatemax; ii++) {
			for (i = 0; i < yoko; i++) {
				if (tatenum[i][0] + ii < tatemax && ii + 1 != tatemax) { tatekaki += L"        "; }
				else if (tatenum[i][tatemax - ii] > 9) {
					tatekaki += tatenum[i][tatemax - ii] + L"";
				}
				else if (tatenum[i][0] == 0) { tatekaki += L"  0  "; }
				else { tatekaki += L"  " + tatenum[i][tatemax - ii] + L"  "; }
			}
			tatekaki += L"\n";
		}
		label3->Text = tatekaki;

		//マウスカーソルの位置の辺りにインプット先を設定して、ラベルも移動させる
		mousex = ((218 - this->PointToClient(System::Windows::Forms::Cursor::Position).X + AutoScrollPosition.X) + 8) / 18;
		mousey = ((this->PointToClient(System::Windows::Forms::Cursor::Position).Y - 183) - AutoScrollPosition.Y + 8) / 16;
		if (mousex < 1) { mousex = 1; }
		if (mousex > 128) { mousex = 128; }
		if (mousey < 0) { mousey = 0; }
		if (mousey > tate - 1) { mousey = tate - 1; }
		inputretu[0] = 0;
		inputretu[1] = mousey;
		inputretu[2] = mousex;
		label5->Location = System::Drawing::Point(210 - mousex * 18 + AutoScrollPosition.X, mousey * 16 + AutoScrollPosition.Y + 179);
	}

}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {

	//数字モードで横の数字をクリックしたときの処理
	unsigned char i, ii, tatemax;
	int mousey;
	int mousex;
	String^ yokokaki = L"";
	String^ tatekaki = L"";

	if (button5->Text == L"戻る") {

		tate = Decimal::ToByte(numericUpDown1->Value);
		yoko = Decimal::ToByte(numericUpDown2->Value);

		//最後にされてた数字入力を反映
		if (label5->Text != L"□") {
			if (inputretu[0] == 0) {
				yokonum[inputretu[1]][inputretu[2]] = inpnum;
				if (yokonum[inputretu[1]][0] < inputretu[2]) {
					for (i = 0; i + 1 < inputretu[2] - yokonum[inputretu[1]][0]; i++) {
						yokonum[inputretu[1]][inputretu[2] - i - 1] = 0;
					}
					yokonum[inputretu[1]][0] = inputretu[2];
				}
			}
			else {
				tatenum[inputretu[1]][inputretu[2]] = inpnum;
				if (tatenum[inputretu[1]][0] < inputretu[2]) {
					for (i = 0; i + 1 < inputretu[2] - tatenum[inputretu[1]][0]; i++) {
						tatenum[inputretu[1]][inputretu[2] - i - 1] = 0;
					}
					tatenum[inputretu[1]][0] = inputretu[2];
				}
			}
		}
		label5->Text = L"□";
		inpnum = 0;

		//横の数字を書く
		for (i = 0; i < tate; i++) {
			for (ii = 0; ii < yokonum[i][0]; ii++) {
				if (yokonum[i][yokonum[i][0] - ii] < 10) { yokokaki += L" "; }
				yokokaki += L" " + yokonum[i][yokonum[i][0] - ii];
			}
			if (yokonum[i][0] == 0) { yokokaki += L"0"; }
			yokokaki += L"\n";
		}
		label2->Text = yokokaki;

		//縦の数字を書く
		tatemax = 1;
		for (i = 0; i < yoko; i++) {
			if (tatemax < tatenum[i][0]) { tatemax = tatenum[i][0]; }
		}
		for (ii = 0; ii < tatemax; ii++) {
			for (i = 0; i < yoko; i++) {
				if (tatenum[i][0] + ii < tatemax && ii + 1 != tatemax) { tatekaki += L"        "; }
				else if (tatenum[i][tatemax - ii] > 9) {
					tatekaki += tatenum[i][tatemax - ii] + L"";
				}
				else if (tatenum[i][0] == 0) { tatekaki += L"  0  "; }
				else { tatekaki += L"  " + tatenum[i][tatemax - ii] + L"  "; }
			}
			tatekaki += L"\n";
		}
		label3->Text = tatekaki;

		//マウスカーソルの位置の辺りにインプット先を設定して、ラベルも移動させる
		mousex = int(((this->PointToClient(System::Windows::Forms::Cursor::Position).X - 215 - AutoScrollPosition.X) / 16.49));
		mousey = (190 - this->PointToClient(System::Windows::Forms::Cursor::Position).Y + AutoScrollPosition.Y) / 16;
		if (mousey < 1) { mousey = 1; }
		if (mousey > 128) { mousey = 128; }
		if (mousex < 0) { mousex = 0; }
		if (mousex > yoko - 1) { mousex = yoko - 1; }
		inputretu[0] = 1;
		inputretu[1] = mousex;
		inputretu[2] = mousey;
		label5->Location = System::Drawing::Point(215 + int(mousex * 16.49 + 1) + AutoScrollPosition.X, 178 - mousey * 16 + AutoScrollPosition.Y );
	}
}
private: System::Void hannyou_PreviewKeyDown(System::Object^  sender, System::Windows::Forms::PreviewKeyDownEventArgs^ e) {

	//デフォルトだと方向キーが使えなかったので色々しているところ
	switch (e->KeyCode) {
	case Keys::Up:
	case Keys::Down:
	case Keys::Right:
	case Keys::Left:
		e->IsInputKey = true;
		break;
	}
}
private: System::Void U_Logi_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^ e) {

	//数字モードでなんらかのキーボードが押されたときの処理
	String^ keystringsharp;
	String^ yokokaki;
	String^ tatekaki;
	std::string keystring;
	unsigned char keynum, i, ii,tatemax;
	
	if (button5->Text == L"戻る") {

		tate = Decimal::ToByte(numericUpDown1->Value);
		yoko = Decimal::ToByte(numericUpDown2->Value);

		//数字のボタンもしくはテンキーの数字のボタンが押されたとき
		if ((e->KeyCode > Keys::Delete && e->KeyCode < Keys::A) || (e->KeyCode > Keys::Z && e->KeyCode < Keys::Multiply)) {

			//やり方が分からなかったがとにかく無理やり数字にした
			keystringsharp = e->KeyCode.ToString();
			keystring = msclr::interop::marshal_as<std::string>( keystringsharp );
			if (keystring.length() == 2) {
				keynum = keystring[1] - 48;
			}
			else if (keystring.length() == 7) {
				keynum = keystring[6] - 48;
			}
			if (inpnum == 0) {
				inpnum = keynum;
			}
			else {
				if (inpnum < 25 || (inpnum == 25 && keynum < 6)) {
					inpnum = inpnum * 10 + keynum;
				}
				else {
					inpnum = 255;
				}
			}
			label5->Text = inpnum.ToString();
		}

		//DeleteかBackSpaceが押されたとき
		else if (e->KeyCode == Keys::Delete || e->KeyCode == Keys::Back) {
			if (inpnum == 0) {
				label5->Text = L"■";
			}
			else {
				inpnum = 0;
				label5->Text = L"□";
			}
		}

		//方向キーが押されたとき
		else if (e->KeyCode > Keys::Home && e->KeyCode < Keys::Insert) {

			//最後の数字入力を反映
			if (label5->Text != L"□") {
				if (inputretu[0] == 0) {
					yokonum[inputretu[1]][inputretu[2]] = inpnum;
					if (yokonum[inputretu[1]][0] < inputretu[2]) {
						for (i = 0; i + 1 < inputretu[2] - yokonum[inputretu[1]][0]; i++) {
							yokonum[inputretu[1]][inputretu[2] - i - 1] = 0;
						}
						yokonum[inputretu[1]][0] = inputretu[2];
					}
				}
				else {
					tatenum[inputretu[1]][inputretu[2]] = inpnum;
					if (tatenum[inputretu[1]][0] < inputretu[2]) {
						for (i = 0; i + 1 < inputretu[2] - tatenum[inputretu[1]][0]; i++) {
							tatenum[inputretu[1]][inputretu[2] - i - 1] = 0;
						}
						tatenum[inputretu[1]][0] = inputretu[2];
					}
				}
			}
			label5->Text = L"□";
			inpnum = 0;

			//横の数字を書く
			if (inputretu[0] == 0) {
				for (i = 0; i < tate; i++) {
					for (ii = 0; ii < yokonum[i][0]; ii++) {
						if (yokonum[i][yokonum[i][0] - ii] < 10) { yokokaki += L" "; }
						yokokaki += L" " + yokonum[i][yokonum[i][0] - ii];
					}
					if (yokonum[i][0] == 0) { yokokaki += L"0"; }
					yokokaki += L"\n";
				}
				label2->Text = yokokaki;
			}

			//縦の数字を書く
			if (inputretu[0] == 1) {
				tatemax = 1;
				for (i = 0; i < yoko; i++) {
					if (tatemax < tatenum[i][0]) { tatemax = tatenum[i][0]; }
				}
				for (ii = 0; ii < tatemax; ii++) {
					for (i = 0; i < yoko; i++) {
						if (tatenum[i][0] + ii < tatemax && ii + 1 != tatemax) { tatekaki += L"        "; }
						else if (tatenum[i][tatemax - ii] > 9) {
							tatekaki += tatenum[i][tatemax - ii] + L"";
						}
						else if (tatenum[i][0] == 0) { tatekaki += L"  0  "; }
						else { tatekaki += L"  " + tatenum[i][tatemax - ii] + L"  "; }
					}
					tatekaki += L"\n";
				}
				label3->Text = tatekaki;
			}

			//方向キーの方向にインプット先を移動させる
			if (inputretu[0] == 0) {
				if (e->KeyCode == Keys::Left && inputretu[2] < 128) { inputretu[2]++; }
				if (e->KeyCode == Keys::Right && inputretu[2] > 1) { inputretu[2]--; }
				if (e->KeyCode == Keys::Up && inputretu[1] > 0) { inputretu[1]--; }
				if (e->KeyCode == Keys::Down && inputretu[1] + 1 < tate) { inputretu[1]++; }
			}
			else {
				if (e->KeyCode == Keys::Up && inputretu[2] < 128) { inputretu[2]++; }
				if (e->KeyCode == Keys::Down && inputretu[2] > 1) { inputretu[2]--; }
				if (e->KeyCode == Keys::Left && inputretu[1] > 0) { inputretu[1]--; }
				if (e->KeyCode == Keys::Right && inputretu[1] + 1 < yoko) { inputretu[1]++; }
			}
			if (inputretu[0] == 0) {
				label5->Location = System::Drawing::Point(210 - inputretu[2] * 18 + AutoScrollPosition.X, inputretu[1] * 16 + AutoScrollPosition.Y + 179);
			}
			else {
				label5->Location = System::Drawing::Point(215 + int(inputretu[1] * 16.49 + 1) + AutoScrollPosition.X, 178 - inputretu[2] * 16 + AutoScrollPosition.Y);
			}
		}

	}
	e->Handled = true;

}
};
}
