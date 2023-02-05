#pragma once

namespace Testing {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ThingsToKnow
	/// </summary>
	public ref class ThingsToKnow : public System::Windows::Forms::Form
	{
	public:
		ThingsToKnow(void)
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
		~ThingsToKnow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbSTitle;
	protected:
	private: System::Windows::Forms::Label^ lbTitle;
	private: System::Windows::Forms::PictureBox^ pbLogo;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ThingsToKnow::typeid));
			this->lbSTitle = (gcnew System::Windows::Forms::Label());
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->pbLogo = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLogo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lbSTitle
			// 
			this->lbSTitle->AutoSize = true;
			this->lbSTitle->BackColor = System::Drawing::Color::Transparent;
			this->lbSTitle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSTitle->ForeColor = System::Drawing::Color::White;
			this->lbSTitle->Location = System::Drawing::Point(517, 160);
			this->lbSTitle->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lbSTitle->Name = L"lbSTitle";
			this->lbSTitle->Size = System::Drawing::Size(490, 25);
			this->lbSTitle->TabIndex = 11;
			this->lbSTitle->Text = L"\"The Bond of Blood is Stronger than Anything\"";
			// 
			// lbTitle
			// 
			this->lbTitle->AutoSize = true;
			this->lbTitle->BackColor = System::Drawing::Color::Transparent;
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Harrington", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTitle->ForeColor = System::Drawing::Color::White;
			this->lbTitle->Location = System::Drawing::Point(468, 70);
			this->lbTitle->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(572, 51);
			this->lbTitle->TabIndex = 10;
			this->lbTitle->Text = L"Blood Donation Community";
			// 
			// pbLogo
			// 
			this->pbLogo->BackColor = System::Drawing::Color::Transparent;
			this->pbLogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbLogo.Image")));
			this->pbLogo->Location = System::Drawing::Point(249, 15);
			this->pbLogo->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->pbLogo->Name = L"pbLogo";
			this->pbLogo->Size = System::Drawing::Size(231, 194);
			this->pbLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbLogo->TabIndex = 9;
			this->pbLogo->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(813, 238);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(667, 353);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(17, 238);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(788, 444);
			this->label1->TabIndex = 13;
			this->label1->Text = resources->GetString(L"label1.Text");
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(17, 611);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(1475, 198);
			this->label2->TabIndex = 14;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// linkLabel1
			// 
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::White;
			this->linkLabel1->Location = System::Drawing::Point(12, 809);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(1480, 23);
			this->linkLabel1->TabIndex = 15;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Back to Dashboard";
			this->linkLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &ThingsToKnow::linkLabel1_LinkClicked);
			// 
			// ThingsToKnow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1514, 974);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->lbSTitle);
			this->Controls->Add(this->lbTitle);
			this->Controls->Add(this->pbLogo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1514, 974);
			this->MinimumSize = System::Drawing::Size(1514, 974);
			this->Name = L"ThingsToKnow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ThingsToKnow";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLogo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:bool switchToMainForm = false;
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		switchToMainForm = true;
		this->Close();
	}
	};
}
