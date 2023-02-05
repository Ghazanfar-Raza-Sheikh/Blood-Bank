#pragma once
#include"User.h"

namespace Testing {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(User^ user)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::LinkLabel^ llBloodReq;
	protected:











	private: System::Windows::Forms::LinkLabel^ llLeader;

	private: System::Windows::Forms::Label^ lbSTitle;
	private: System::Windows::Forms::Label^ lbTitle;
	private: System::Windows::Forms::PictureBox^ pbLogo;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::LinkLabel^ linkLabel4;
	private: System::Windows::Forms::LinkLabel^ linkLabel5;
	private: System::Windows::Forms::LinkLabel^ linkLabel6;
	private: System::Windows::Forms::LinkLabel^ linkLabel7;
	private: System::Windows::Forms::LinkLabel^ linkLabel8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ llAnalytics;

	private: System::Windows::Forms::LinkLabel^ llBloodFacts;
	private: System::Windows::Forms::LinkLabel^ llBloodDisorders;


	private: System::Windows::Forms::LinkLabel^ llABD;





	private: System::Windows::Forms::LinkLabel^ llVisit;
	private: System::Windows::Forms::Label^ lbusername;
	private: System::Windows::Forms::LinkLabel^ llClose;
	private: System::Windows::Forms::LinkLabel^ linkLabel3;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;






	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lbusername = (gcnew System::Windows::Forms::Label());
			this->linkLabel3 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel5 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel6 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel7 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel8 = (gcnew System::Windows::Forms::LinkLabel());
			this->llClose = (gcnew System::Windows::Forms::LinkLabel());
			this->llBloodReq = (gcnew System::Windows::Forms::LinkLabel());
			this->llLeader = (gcnew System::Windows::Forms::LinkLabel());
			this->lbSTitle = (gcnew System::Windows::Forms::Label());
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->pbLogo = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->llAnalytics = (gcnew System::Windows::Forms::LinkLabel());
			this->llBloodFacts = (gcnew System::Windows::Forms::LinkLabel());
			this->llBloodDisorders = (gcnew System::Windows::Forms::LinkLabel());
			this->llABD = (gcnew System::Windows::Forms::LinkLabel());
			this->llVisit = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->flowLayoutPanel1->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLogo))->BeginInit();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->flowLayoutPanel1->Controls->Add(this->flowLayoutPanel2);
			this->flowLayoutPanel1->Controls->Add(this->linkLabel3);
			this->flowLayoutPanel1->Controls->Add(this->linkLabel4);
			this->flowLayoutPanel1->Controls->Add(this->linkLabel5);
			this->flowLayoutPanel1->Controls->Add(this->linkLabel6);
			this->flowLayoutPanel1->Controls->Add(this->linkLabel7);
			this->flowLayoutPanel1->Controls->Add(this->linkLabel8);
			this->flowLayoutPanel1->Controls->Add(this->llClose);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(186, 800);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->pictureBox1);
			this->flowLayoutPanel2->Controls->Add(this->lbusername);
			this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->flowLayoutPanel2->Location = System::Drawing::Point(3, 3);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(183, 144);
			this->flowLayoutPanel2->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(180, 103);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// lbusername
			// 
			this->lbusername->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbusername->ForeColor = System::Drawing::Color::White;
			this->lbusername->Location = System::Drawing::Point(3, 109);
			this->lbusername->Name = L"lbusername";
			this->lbusername->Size = System::Drawing::Size(176, 35);
			this->lbusername->TabIndex = 1;
			this->lbusername->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// linkLabel3
			// 
			this->linkLabel3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel3->LinkColor = System::Drawing::Color::White;
			this->linkLabel3->Location = System::Drawing::Point(3, 150);
			this->linkLabel3->Name = L"linkLabel3";
			this->linkLabel3->Size = System::Drawing::Size(179, 63);
			this->linkLabel3->TabIndex = 1;
			this->linkLabel3->TabStop = true;
			this->linkLabel3->Text = L"Banks";
			this->linkLabel3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->linkLabel3->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::linkLabel3_LinkClicked);
			// 
			// linkLabel4
			// 
			this->linkLabel4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel4->LinkColor = System::Drawing::Color::White;
			this->linkLabel4->Location = System::Drawing::Point(3, 213);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(179, 63);
			this->linkLabel4->TabIndex = 2;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"Emergency Number";
			this->linkLabel4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// linkLabel5
			// 
			this->linkLabel5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel5->LinkColor = System::Drawing::Color::White;
			this->linkLabel5->Location = System::Drawing::Point(3, 276);
			this->linkLabel5->Name = L"linkLabel5";
			this->linkLabel5->Size = System::Drawing::Size(179, 63);
			this->linkLabel5->TabIndex = 3;
			this->linkLabel5->TabStop = true;
			this->linkLabel5->Text = L"Articles";
			this->linkLabel5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// linkLabel6
			// 
			this->linkLabel6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel6->LinkColor = System::Drawing::Color::White;
			this->linkLabel6->Location = System::Drawing::Point(3, 339);
			this->linkLabel6->Name = L"linkLabel6";
			this->linkLabel6->Size = System::Drawing::Size(179, 63);
			this->linkLabel6->TabIndex = 4;
			this->linkLabel6->TabStop = true;
			this->linkLabel6->Text = L"FAQs";
			this->linkLabel6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// linkLabel7
			// 
			this->linkLabel7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel7->LinkColor = System::Drawing::Color::White;
			this->linkLabel7->Location = System::Drawing::Point(3, 402);
			this->linkLabel7->Name = L"linkLabel7";
			this->linkLabel7->Size = System::Drawing::Size(179, 63);
			this->linkLabel7->TabIndex = 5;
			this->linkLabel7->TabStop = true;
			this->linkLabel7->Text = L"Contact Us";
			this->linkLabel7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->linkLabel7->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::linkLabel7_LinkClicked);
			// 
			// linkLabel8
			// 
			this->linkLabel8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel8->LinkColor = System::Drawing::Color::White;
			this->linkLabel8->Location = System::Drawing::Point(3, 465);
			this->linkLabel8->Name = L"linkLabel8";
			this->linkLabel8->Size = System::Drawing::Size(179, 63);
			this->linkLabel8->TabIndex = 6;
			this->linkLabel8->TabStop = true;
			this->linkLabel8->Text = L"Plasma Donations";
			this->linkLabel8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// llClose
			// 
			this->llClose->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->llClose->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llClose->LinkColor = System::Drawing::Color::White;
			this->llClose->Location = System::Drawing::Point(3, 528);
			this->llClose->Name = L"llClose";
			this->llClose->Size = System::Drawing::Size(179, 216);
			this->llClose->TabIndex = 7;
			this->llClose->TabStop = true;
			this->llClose->Text = L"Exit";
			this->llClose->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->llClose->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::llClose_LinkClicked);
			// 
			// llBloodReq
			// 
			this->llBloodReq->AutoSize = true;
			this->llBloodReq->BackColor = System::Drawing::Color::Transparent;
			this->llBloodReq->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llBloodReq->LinkColor = System::Drawing::Color::AntiqueWhite;
			this->llBloodReq->Location = System::Drawing::Point(238, 276);
			this->llBloodReq->Name = L"llBloodReq";
			this->llBloodReq->Size = System::Drawing::Size(200, 32);
			this->llBloodReq->TabIndex = 9;
			this->llBloodReq->TabStop = true;
			this->llBloodReq->Text = L"Blood Requests";
			this->llBloodReq->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::llBloodReq_LinkClicked);
			// 
			// llLeader
			// 
			this->llLeader->AutoSize = true;
			this->llLeader->BackColor = System::Drawing::Color::Transparent;
			this->llLeader->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llLeader->LinkColor = System::Drawing::Color::AntiqueWhite;
			this->llLeader->Location = System::Drawing::Point(725, 289);
			this->llLeader->Name = L"llLeader";
			this->llLeader->Size = System::Drawing::Size(171, 32);
			this->llLeader->TabIndex = 10;
			this->llLeader->TabStop = true;
			this->llLeader->Text = L"Leaderboard";
			this->llLeader->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::llLeader_LinkClicked);
			// 
			// lbSTitle
			// 
			this->lbSTitle->AutoSize = true;
			this->lbSTitle->BackColor = System::Drawing::Color::Transparent;
			this->lbSTitle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSTitle->ForeColor = System::Drawing::Color::White;
			this->lbSTitle->Location = System::Drawing::Point(388, 116);
			this->lbSTitle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbSTitle->Name = L"lbSTitle";
			this->lbSTitle->Size = System::Drawing::Size(490, 25);
			this->lbSTitle->TabIndex = 13;
			this->lbSTitle->Text = L"\"The Bond of Blood is Stronger than Anything\"";
			// 
			// lbTitle
			// 
			this->lbTitle->AutoSize = true;
			this->lbTitle->BackColor = System::Drawing::Color::Transparent;
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Harrington", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTitle->ForeColor = System::Drawing::Color::White;
			this->lbTitle->Location = System::Drawing::Point(353, 58);
			this->lbTitle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(572, 51);
			this->lbTitle->TabIndex = 12;
			this->lbTitle->Text = L"Blood Donation Community";
			// 
			// pbLogo
			// 
			this->pbLogo->BackColor = System::Drawing::Color::Transparent;
			this->pbLogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbLogo.Image")));
			this->pbLogo->Location = System::Drawing::Point(189, 13);
			this->pbLogo->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->pbLogo->Name = L"pbLogo";
			this->pbLogo->Size = System::Drawing::Size(173, 158);
			this->pbLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbLogo->TabIndex = 11;
			this->pbLogo->TabStop = false;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(192, 213);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(728, 50);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Home Page";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// llAnalytics
			// 
			this->llAnalytics->AutoSize = true;
			this->llAnalytics->BackColor = System::Drawing::Color::Transparent;
			this->llAnalytics->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llAnalytics->LinkColor = System::Drawing::Color::AntiqueWhite;
			this->llAnalytics->Location = System::Drawing::Point(725, 380);
			this->llAnalytics->Name = L"llAnalytics";
			this->llAnalytics->Size = System::Drawing::Size(126, 32);
			this->llAnalytics->TabIndex = 16;
			this->llAnalytics->TabStop = true;
			this->llAnalytics->Text = L"Analytics";
			this->llAnalytics->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::llAnalytics_LinkClicked);
			// 
			// llBloodFacts
			// 
			this->llBloodFacts->AutoSize = true;
			this->llBloodFacts->BackColor = System::Drawing::Color::Transparent;
			this->llBloodFacts->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llBloodFacts->LinkColor = System::Drawing::Color::AntiqueWhite;
			this->llBloodFacts->Location = System::Drawing::Point(238, 370);
			this->llBloodFacts->Name = L"llBloodFacts";
			this->llBloodFacts->Size = System::Drawing::Size(157, 32);
			this->llBloodFacts->TabIndex = 15;
			this->llBloodFacts->TabStop = true;
			this->llBloodFacts->Text = L"Blood Facts";
			this->llBloodFacts->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::llBloodFacts_LinkClicked);
			// 
			// llBloodDisorders
			// 
			this->llBloodDisorders->AutoSize = true;
			this->llBloodDisorders->BackColor = System::Drawing::Color::Transparent;
			this->llBloodDisorders->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llBloodDisorders->LinkColor = System::Drawing::Color::AntiqueWhite;
			this->llBloodDisorders->Location = System::Drawing::Point(725, 485);
			this->llBloodDisorders->Name = L"llBloodDisorders";
			this->llBloodDisorders->Size = System::Drawing::Size(209, 32);
			this->llBloodDisorders->TabIndex = 18;
			this->llBloodDisorders->TabStop = true;
			this->llBloodDisorders->Text = L"Blood Disorders";
			this->llBloodDisorders->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::llBloodDisorders_LinkClicked);
			// 
			// llABD
			// 
			this->llABD->BackColor = System::Drawing::Color::Transparent;
			this->llABD->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llABD->LinkColor = System::Drawing::Color::AntiqueWhite;
			this->llABD->Location = System::Drawing::Point(223, 459);
			this->llABD->Name = L"llABD";
			this->llABD->Size = System::Drawing::Size(200, 83);
			this->llABD->TabIndex = 17;
			this->llABD->TabStop = true;
			this->llABD->Text = L"About Blood Donations";
			this->llABD->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->llABD->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::llABD_LinkClicked);
			// 
			// llVisit
			// 
			this->llVisit->AutoSize = true;
			this->llVisit->BackColor = System::Drawing::Color::Transparent;
			this->llVisit->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llVisit->LinkColor = System::Drawing::Color::AntiqueWhite;
			this->llVisit->Location = System::Drawing::Point(238, 592);
			this->llVisit->Name = L"llVisit";
			this->llVisit->Size = System::Drawing::Size(159, 32);
			this->llVisit->TabIndex = 19;
			this->llVisit->TabStop = true;
			this->llVisit->Text = L"Book a Visit";
			this->llVisit->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::llVisit_LinkClicked);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::AntiqueWhite;
			this->linkLabel1->Location = System::Drawing::Point(731, 592);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(180, 32);
			this->linkLabel1->TabIndex = 20;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Compatibility";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MainForm::linkLabel1_LinkClicked);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(950, 800);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->llVisit);
			this->Controls->Add(this->llBloodDisorders);
			this->Controls->Add(this->llABD);
			this->Controls->Add(this->llAnalytics);
			this->Controls->Add(this->llBloodFacts);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbSTitle);
			this->Controls->Add(this->lbTitle);
			this->Controls->Add(this->pbLogo);
			this->Controls->Add(this->llLeader);
			this->Controls->Add(this->llBloodReq);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximumSize = System::Drawing::Size(950, 800);
			this->MinimumSize = System::Drawing::Size(950, 800);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLogo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:User^ user = nullptr;
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	public: bool switchToBloodRequests = false, switchToLeaderboard = false, switchToBloodFacts = false, switchToAnalytics = false,
		switchToABD = false, switchToBloodDisorders = false, switchToBookAVisit = false, endProgram = false, switchToContactUs = false, switchToCompatibility = false,
		switchToProfile = false;

	private: System::Void llBloodReq_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToBloodRequests = true;
		this->Close();
	}
	private: System::Void llLeader_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToLeaderboard = true;
		this->Close();
	}
	private: System::Void llBloodFacts_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToBloodFacts = true;
		this->Close();
	}

	private: System::Void llAnalytics_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToAnalytics = true;
		this->Close();
	}
	private: System::Void llABD_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToABD = true;
		this->Close();
	}
	private: System::Void llBloodDisorders_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToBloodDisorders = true;
		this->Close();
	}
	private: System::Void llVisit_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToBookAVisit = true;
		this->Close();
	}
	private: System::Void llReq_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToBloodRequests = true;
		this->Close();
	}
	private: System::Void llClose_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		endProgram = true;
		this->Close();
	}
	private: System::Void linkLabel7_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		switchToContactUs = true;
		this->Close();
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		switchToCompatibility = true;
		this->Close();
	}
	private: System::Void linkLabel3_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		switchToProfile = true;
		this->Close();
	}
	};
}
