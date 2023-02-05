#pragma once

namespace Testing {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Analytics
	/// </summary>
	public ref class Analytics : public System::Windows::Forms::Form
	{
	public:
		Analytics(void)
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
		~Analytics()
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
	private: System::Windows::Forms::Label^ label1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Analytics::typeid));
			this->lbSTitle = (gcnew System::Windows::Forms::Label());
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->pbLogo = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLogo))->BeginInit();
			this->SuspendLayout();
			// 
			// lbSTitle
			// 
			this->lbSTitle->AutoSize = true;
			this->lbSTitle->BackColor = System::Drawing::Color::Transparent;
			this->lbSTitle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSTitle->ForeColor = System::Drawing::Color::White;
			this->lbSTitle->Location = System::Drawing::Point(261, 146);
			this->lbSTitle->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lbSTitle->Name = L"lbSTitle";
			this->lbSTitle->Size = System::Drawing::Size(490, 25);
			this->lbSTitle->TabIndex = 16;
			this->lbSTitle->Text = L"\"The Bond of Blood is Stronger than Anything\"";
			// 
			// lbTitle
			// 
			this->lbTitle->AutoSize = true;
			this->lbTitle->BackColor = System::Drawing::Color::Transparent;
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Harrington", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTitle->ForeColor = System::Drawing::Color::White;
			this->lbTitle->Location = System::Drawing::Point(212, 57);
			this->lbTitle->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(572, 51);
			this->lbTitle->TabIndex = 15;
			this->lbTitle->Text = L"Blood Donation Community";
			// 
			// pbLogo
			// 
			this->pbLogo->BackColor = System::Drawing::Color::Transparent;
			this->pbLogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbLogo.Image")));
			this->pbLogo->Location = System::Drawing::Point(17, 15);
			this->pbLogo->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->pbLogo->Name = L"pbLogo";
			this->pbLogo->Size = System::Drawing::Size(184, 172);
			this->pbLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbLogo->TabIndex = 14;
			this->pbLogo->TabStop = false;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(16, 203);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(944, 84);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Analytics";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// linkLabel1
			// 
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::White;
			this->linkLabel1->Location = System::Drawing::Point(20, 762);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(944, 23);
			this->linkLabel1->TabIndex = 19;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Back to Dashboard";
			this->linkLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Analytics::linkLabel1_LinkClicked_1);
			// 
			// Analytics
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(994, 851);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbSTitle);
			this->Controls->Add(this->lbTitle);
			this->Controls->Add(this->pbLogo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(994, 851);
			this->MinimumSize = System::Drawing::Size(994, 851);
			this->Name = L"Analytics";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Analytics";
			this->Load += gcnew System::EventHandler(this, &Analytics::Analytics_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLogo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool switchToMainForm = false;
	private: System::Void linkLabel1_LinkClicked_1(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		switchToMainForm = true;
		this->Close();
	}
	private: System::Void Analytics_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
