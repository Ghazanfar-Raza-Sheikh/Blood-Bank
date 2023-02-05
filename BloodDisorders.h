#pragma once

namespace Testing {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BloodDisorders
	/// </summary>
	public ref class BloodDisorders : public System::Windows::Forms::Form
	{
	public:
		BloodDisorders(void)
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
		~BloodDisorders()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ lbDis1;
	private: System::Windows::Forms::Label^ lbDis2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Required method for Designer support - do not modify
		   /// the contents of this method with the code editor.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BloodDisorders::typeid));
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->lbDis1 = (gcnew System::Windows::Forms::Label());
			   this->lbDis2 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   this->label1->BackColor = System::Drawing::Color::Transparent;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Castellar", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label1->ForeColor = System::Drawing::Color::White;
			   this->label1->Location = System::Drawing::Point(16, 11);
			   this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(1944, 129);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"Blood Disorders";
			   this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   this->label1->Click += gcnew System::EventHandler(this, &BloodDisorders::label1_Click);
			   // 
			   // lbDis1
			   // 
			   this->lbDis1->AutoSize = true;
			   this->lbDis1->BackColor = System::Drawing::Color::Transparent;
			   this->lbDis1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbDis1->ForeColor = System::Drawing::Color::Khaki;
			   this->lbDis1->Location = System::Drawing::Point(16, 172);
			   this->lbDis1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lbDis1->Name = L"lbDis1";
			   this->lbDis1->Size = System::Drawing::Size(0, 25);
			   this->lbDis1->TabIndex = 1;
			   this->lbDis1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // lbDis2
			   // 
			   this->lbDis2->AutoSize = true;
			   this->lbDis2->BackColor = System::Drawing::Color::Transparent;
			   this->lbDis2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lbDis2->ForeColor = System::Drawing::Color::Khaki;
			   this->lbDis2->Location = System::Drawing::Point(1277, 172);
			   this->lbDis2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			   this->lbDis2->Name = L"lbDis2";
			   this->lbDis2->Size = System::Drawing::Size(0, 25);
			   this->lbDis2->TabIndex = 2;
			   this->lbDis2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(665, 186);
			   this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(533, 492);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox1->TabIndex = 3;
			   this->pictureBox1->TabStop = false;
			   // 
			   // linkLabel1
			   // 
			   this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			   this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->linkLabel1->LinkColor = System::Drawing::Color::White;
			   this->linkLabel1->Location = System::Drawing::Point(12, 819);
			   this->linkLabel1->Name = L"linkLabel1";
			   this->linkLabel1->Size = System::Drawing::Size(1900, 23);
			   this->linkLabel1->TabIndex = 12;
			   this->linkLabel1->TabStop = true;
			   this->linkLabel1->Text = L"Back to Dashboard";
			   this->linkLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &BloodDisorders::linkLabel1_LinkClicked);
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->BackColor = System::Drawing::Color::Transparent;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label2->ForeColor = System::Drawing::Color::Khaki;
			   this->label2->Location = System::Drawing::Point(66, 200);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(512, 475);
			   this->label2->TabIndex = 13;
			   this->label2->Text = resources->GetString(L"label2.Text");
			   this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->BackColor = System::Drawing::Color::Transparent;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->label3->ForeColor = System::Drawing::Color::Khaki;
			   this->label3->Location = System::Drawing::Point(1332, 198);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(578, 475);
			   this->label3->TabIndex = 14;
			   this->label3->Text = resources->GetString(L"label3.Text");
			   this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			   // 
			   // BloodDisorders
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->ClientSize = System::Drawing::Size(1924, 865);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->linkLabel1);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->lbDis2);
			   this->Controls->Add(this->lbDis1);
			   this->Controls->Add(this->label1);
			   this->Margin = System::Windows::Forms::Padding(4);
			   this->MaximumSize = System::Drawing::Size(1994, 912);
			   this->MinimumSize = System::Drawing::Size(1918, 912);
			   this->Name = L"BloodDisorders";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"BloodDisorders";
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
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
