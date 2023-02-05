#pragma once
#include"User.h"

namespace Testing {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pbLogo;
	protected:
	private: System::Windows::Forms::Label^ lbTitle;
	private: System::Windows::Forms::Label^ lbSTitle;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbName;

	private: System::Windows::Forms::TextBox^ tbName;
	private: System::Windows::Forms::Label^ lbAge;


	private: System::Windows::Forms::TextBox^ tbAge;
	private: System::Windows::Forms::Label^ lbcnic;


	private: System::Windows::Forms::TextBox^ tbCNIC;
	private: System::Windows::Forms::Label^ lbbloodgroup;


	private: System::Windows::Forms::TextBox^ tbBloodGroup;
	private: System::Windows::Forms::Label^ lbdisease;


	private: System::Windows::Forms::TextBox^ tbDisease;
	private: System::Windows::Forms::Label^ lbweight;


	private: System::Windows::Forms::TextBox^ tbWeight;
	private: System::Windows::Forms::Label^ lbemail;


	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::Label^ lbcontact;


	private: System::Windows::Forms::TextBox^ tbContact;
	private: System::Windows::Forms::Label^ lbpass;


	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Label^ lbcpass;


	private: System::Windows::Forms::TextBox^ tbConfirmPassword;
	private: System::Windows::Forms::Label^ lgbt;



	private: System::Windows::Forms::LinkLabel^ llLogin;

	private: System::Windows::Forms::Button^ btnRegister;
	private: System::Windows::Forms::Button^ btnCancel;



	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisterForm::typeid));
			this->pbLogo = (gcnew System::Windows::Forms::PictureBox());
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->lbSTitle = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbName = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->lbAge = (gcnew System::Windows::Forms::Label());
			this->tbAge = (gcnew System::Windows::Forms::TextBox());
			this->lbcnic = (gcnew System::Windows::Forms::Label());
			this->tbCNIC = (gcnew System::Windows::Forms::TextBox());
			this->lbbloodgroup = (gcnew System::Windows::Forms::Label());
			this->tbBloodGroup = (gcnew System::Windows::Forms::TextBox());
			this->lbdisease = (gcnew System::Windows::Forms::Label());
			this->tbDisease = (gcnew System::Windows::Forms::TextBox());
			this->lbweight = (gcnew System::Windows::Forms::Label());
			this->tbWeight = (gcnew System::Windows::Forms::TextBox());
			this->lbemail = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->lbcontact = (gcnew System::Windows::Forms::Label());
			this->tbContact = (gcnew System::Windows::Forms::TextBox());
			this->lbpass = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->lbcpass = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->lgbt = (gcnew System::Windows::Forms::Label());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLogo))->BeginInit();
			this->SuspendLayout();
			// 
			// pbLogo
			// 
			this->pbLogo->BackColor = System::Drawing::Color::Transparent;
			this->pbLogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbLogo.Image")));
			this->pbLogo->Location = System::Drawing::Point(30, 29);
			this->pbLogo->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->pbLogo->Name = L"pbLogo";
			this->pbLogo->Size = System::Drawing::Size(173, 158);
			this->pbLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbLogo->TabIndex = 0;
			this->pbLogo->TabStop = false;
			// 
			// lbTitle
			// 
			this->lbTitle->AutoSize = true;
			this->lbTitle->BackColor = System::Drawing::Color::Transparent;
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Harrington", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTitle->ForeColor = System::Drawing::Color::White;
			this->lbTitle->Location = System::Drawing::Point(194, 74);
			this->lbTitle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(572, 51);
			this->lbTitle->TabIndex = 1;
			this->lbTitle->Text = L"Blood Donation Community";
			// 
			// lbSTitle
			// 
			this->lbSTitle->AutoSize = true;
			this->lbSTitle->BackColor = System::Drawing::Color::Transparent;
			this->lbSTitle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSTitle->ForeColor = System::Drawing::Color::White;
			this->lbSTitle->Location = System::Drawing::Point(231, 147);
			this->lbSTitle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbSTitle->Name = L"lbSTitle";
			this->lbSTitle->Size = System::Drawing::Size(490, 25);
			this->lbSTitle->TabIndex = 2;
			this->lbSTitle->Text = L"\"The Bond of Blood is Stronger than Anything\"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->Location = System::Drawing::Point(214, 199);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(403, 37);
			this->label1->TabIndex = 3;
			this->label1->Text = L"REGISTERATION FORM";
			// 
			// lbName
			// 
			this->lbName->AutoSize = true;
			this->lbName->BackColor = System::Drawing::Color::Transparent;
			this->lbName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbName->ForeColor = System::Drawing::Color::White;
			this->lbName->Location = System::Drawing::Point(125, 266);
			this->lbName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbName->Name = L"lbName";
			this->lbName->Size = System::Drawing::Size(78, 26);
			this->lbName->TabIndex = 4;
			this->lbName->Text = L"Name: ";
			// 
			// tbName
			// 
			this->tbName->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbName->Location = System::Drawing::Point(203, 258);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(246, 30);
			this->tbName->TabIndex = 5;
			// 
			// lbAge
			// 
			this->lbAge->AutoSize = true;
			this->lbAge->BackColor = System::Drawing::Color::Transparent;
			this->lbAge->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAge->ForeColor = System::Drawing::Color::White;
			this->lbAge->Location = System::Drawing::Point(477, 266);
			this->lbAge->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbAge->Name = L"lbAge";
			this->lbAge->Size = System::Drawing::Size(61, 26);
			this->lbAge->TabIndex = 6;
			this->lbAge->Text = L"Age: ";
			// 
			// tbAge
			// 
			this->tbAge->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbAge->Location = System::Drawing::Point(545, 258);
			this->tbAge->Name = L"tbAge";
			this->tbAge->Size = System::Drawing::Size(138, 30);
			this->tbAge->TabIndex = 7;
			// 
			// lbcnic
			// 
			this->lbcnic->AutoSize = true;
			this->lbcnic->BackColor = System::Drawing::Color::Transparent;
			this->lbcnic->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbcnic->ForeColor = System::Drawing::Color::White;
			this->lbcnic->Location = System::Drawing::Point(125, 316);
			this->lbcnic->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbcnic->Name = L"lbcnic";
			this->lbcnic->Size = System::Drawing::Size(78, 26);
			this->lbcnic->TabIndex = 8;
			this->lbcnic->Text = L"CNIC: ";
			// 
			// tbCNIC
			// 
			this->tbCNIC->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbCNIC->Location = System::Drawing::Point(203, 312);
			this->tbCNIC->Name = L"tbCNIC";
			this->tbCNIC->Size = System::Drawing::Size(246, 30);
			this->tbCNIC->TabIndex = 9;
			// 
			// lbbloodgroup
			// 
			this->lbbloodgroup->AutoSize = true;
			this->lbbloodgroup->BackColor = System::Drawing::Color::Transparent;
			this->lbbloodgroup->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbbloodgroup->ForeColor = System::Drawing::Color::White;
			this->lbbloodgroup->Location = System::Drawing::Point(477, 316);
			this->lbbloodgroup->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbbloodgroup->Name = L"lbbloodgroup";
			this->lbbloodgroup->Size = System::Drawing::Size(140, 26);
			this->lbbloodgroup->TabIndex = 10;
			this->lbbloodgroup->Text = L"Blood Group:";
			// 
			// tbBloodGroup
			// 
			this->tbBloodGroup->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbBloodGroup->Location = System::Drawing::Point(624, 312);
			this->tbBloodGroup->Name = L"tbBloodGroup";
			this->tbBloodGroup->Size = System::Drawing::Size(58, 30);
			this->tbBloodGroup->TabIndex = 11;
			// 
			// lbdisease
			// 
			this->lbdisease->AutoSize = true;
			this->lbdisease->BackColor = System::Drawing::Color::Transparent;
			this->lbdisease->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbdisease->ForeColor = System::Drawing::Color::White;
			this->lbdisease->Location = System::Drawing::Point(68, 371);
			this->lbdisease->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbdisease->Name = L"lbdisease";
			this->lbdisease->Size = System::Drawing::Size(188, 26);
			this->lbdisease->TabIndex = 12;
			this->lbdisease->Text = L"Disease(s) (if any):";
			// 
			// tbDisease
			// 
			this->tbDisease->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbDisease->Location = System::Drawing::Point(263, 367);
			this->tbDisease->Name = L"tbDisease";
			this->tbDisease->Size = System::Drawing::Size(186, 30);
			this->tbDisease->TabIndex = 13;
			// 
			// lbweight
			// 
			this->lbweight->AutoSize = true;
			this->lbweight->BackColor = System::Drawing::Color::Transparent;
			this->lbweight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbweight->ForeColor = System::Drawing::Color::White;
			this->lbweight->Location = System::Drawing::Point(477, 371);
			this->lbweight->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbweight->Name = L"lbweight";
			this->lbweight->Size = System::Drawing::Size(88, 26);
			this->lbweight->TabIndex = 14;
			this->lbweight->Text = L"Weight: ";
			// 
			// tbWeight
			// 
			this->tbWeight->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbWeight->Location = System::Drawing::Point(572, 371);
			this->tbWeight->Name = L"tbWeight";
			this->tbWeight->Size = System::Drawing::Size(115, 30);
			this->tbWeight->TabIndex = 15;
			// 
			// lbemail
			// 
			this->lbemail->AutoSize = true;
			this->lbemail->BackColor = System::Drawing::Color::Transparent;
			this->lbemail->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbemail->ForeColor = System::Drawing::Color::White;
			this->lbemail->Location = System::Drawing::Point(125, 425);
			this->lbemail->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbemail->Name = L"lbemail";
			this->lbemail->Size = System::Drawing::Size(71, 26);
			this->lbemail->TabIndex = 16;
			this->lbemail->Text = L"Email:";
			// 
			// tbEmail
			// 
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbEmail->Location = System::Drawing::Point(203, 425);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(484, 30);
			this->tbEmail->TabIndex = 17;
			// 
			// lbcontact
			// 
			this->lbcontact->AutoSize = true;
			this->lbcontact->BackColor = System::Drawing::Color::Transparent;
			this->lbcontact->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbcontact->ForeColor = System::Drawing::Color::White;
			this->lbcontact->Location = System::Drawing::Point(125, 468);
			this->lbcontact->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbcontact->Name = L"lbcontact";
			this->lbcontact->Size = System::Drawing::Size(89, 26);
			this->lbcontact->TabIndex = 18;
			this->lbcontact->Text = L"Contact:";
			// 
			// tbContact
			// 
			this->tbContact->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbContact->Location = System::Drawing::Point(221, 473);
			this->tbContact->Name = L"tbContact";
			this->tbContact->Size = System::Drawing::Size(466, 30);
			this->tbContact->TabIndex = 19;
			// 
			// lbpass
			// 
			this->lbpass->AutoSize = true;
			this->lbpass->BackColor = System::Drawing::Color::Transparent;
			this->lbpass->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbpass->ForeColor = System::Drawing::Color::White;
			this->lbpass->Location = System::Drawing::Point(125, 511);
			this->lbpass->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbpass->Name = L"lbpass";
			this->lbpass->Size = System::Drawing::Size(108, 26);
			this->lbpass->TabIndex = 20;
			this->lbpass->Text = L"Password:";
			// 
			// tbPassword
			// 
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->Location = System::Drawing::Point(240, 516);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(447, 30);
			this->tbPassword->TabIndex = 21;
			// 
			// lbcpass
			// 
			this->lbcpass->AutoSize = true;
			this->lbcpass->BackColor = System::Drawing::Color::Transparent;
			this->lbcpass->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbcpass->ForeColor = System::Drawing::Color::White;
			this->lbcpass->Location = System::Drawing::Point(40, 555);
			this->lbcpass->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbcpass->Name = L"lbcpass";
			this->lbcpass->Size = System::Drawing::Size(193, 26);
			this->lbcpass->TabIndex = 22;
			this->lbcpass->Text = L"Confirm Password:";
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbConfirmPassword->Location = System::Drawing::Point(240, 555);
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(447, 30);
			this->tbConfirmPassword->TabIndex = 23;
			// 
			// lgbt
			// 
			this->lgbt->AutoSize = true;
			this->lgbt->BackColor = System::Drawing::Color::Transparent;
			this->lgbt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lgbt->ForeColor = System::Drawing::Color::White;
			this->lgbt->Location = System::Drawing::Point(173, 598);
			this->lgbt->Name = L"lgbt";
			this->lgbt->Size = System::Drawing::Size(302, 33);
			this->lgbt->TabIndex = 24;
			this->lgbt->Text = L"Already have an Account\?";
			// 
			// llLogin
			// 
			this->llLogin->AutoSize = true;
			this->llLogin->BackColor = System::Drawing::Color::Transparent;
			this->llLogin->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->llLogin->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->llLogin->Location = System::Drawing::Point(471, 597);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(139, 33);
			this->llLogin->TabIndex = 25;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Login Here";
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::llLogin_LinkClicked);
			// 
			// btnRegister
			// 
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegister->ForeColor = System::Drawing::Color::Maroon;
			this->btnRegister->Location = System::Drawing::Point(179, 666);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(204, 59);
			this->btnRegister->TabIndex = 26;
			this->btnRegister->Text = L"Register";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Click += gcnew System::EventHandler(this, &RegisterForm::btnRegister_Click_1);
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::Color::Maroon;
			this->btnCancel->Location = System::Drawing::Point(435, 666);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(204, 59);
			this->btnCancel->TabIndex = 27;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegisterForm::btnCancel_Click_1);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(800, 800);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->llLogin);
			this->Controls->Add(this->lgbt);
			this->Controls->Add(this->tbConfirmPassword);
			this->Controls->Add(this->lbcpass);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->lbpass);
			this->Controls->Add(this->tbContact);
			this->Controls->Add(this->lbcontact);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->lbemail);
			this->Controls->Add(this->tbWeight);
			this->Controls->Add(this->lbweight);
			this->Controls->Add(this->tbDisease);
			this->Controls->Add(this->lbdisease);
			this->Controls->Add(this->tbBloodGroup);
			this->Controls->Add(this->lbbloodgroup);
			this->Controls->Add(this->tbCNIC);
			this->Controls->Add(this->lbcnic);
			this->Controls->Add(this->tbAge);
			this->Controls->Add(this->lbAge);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->lbName);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbSTitle);
			this->Controls->Add(this->lbTitle);
			this->Controls->Add(this->pbLogo);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximumSize = System::Drawing::Size(800, 800);
			this->MinimumSize = System::Drawing::Size(800, 800);
			this->Name = L"RegisterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registeration Form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLogo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool switchToLogin = false;
	public:User^ user = nullptr;
	private: System::Void btnCancel_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnRegister_Click_1(System::Object^ sender, System::EventArgs^ e) {
		String^ name = tbName->Text;
		String^ age = tbAge->Text;
		String^ cnic = tbCNIC->Text;
		String^ bloodgroup = tbBloodGroup->Text;
		String^ disease = tbDisease->Text;
		String^ weight = tbWeight->Text;
		String^ email = tbEmail->Text;
		String^ phone = tbContact->Text;
		String^ password = tbPassword->Text;
		String^ confirmpassword = tbConfirmPassword->Text;

		if (name->Length == 0 || age->Length == 0 || cnic->Length == 0 || weight->Length == 0 ||
			email->Length == 0 || phone->Length == 0 || password->Length == 0 || confirmpassword->Length == 0 || bloodgroup->Length == 0) {
			MessageBox::Show("Please Fill Out All The Fields", "Data Entry Error", MessageBoxButtons::OK);
			return;
		}

		if (String::Compare(password, confirmpassword) != 0) {
			MessageBox::Show("Password and Confirm Password Donot Match", "Data Entry Error"
				, MessageBoxButtons::OK);
			return;
		}

		if (!(bloodgroup == "A+" || bloodgroup == "A-" || bloodgroup == "B+" || bloodgroup == "B-"
			|| bloodgroup == "AB+" || bloodgroup == "AB-" || bloodgroup == "O+" || bloodgroup == "O-")) {
			MessageBox::Show("Invalid Blood Group", "Data Entry Error", MessageBoxButtons::OK);
			return;
		}
		if (cnic->Length > 13) {
			MessageBox::Show("Invalid CNIC Number", "Data Entry Error", MessageBoxButtons::OK);
			return;
		}
		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=data;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO dbo.[Users] " +
				"(Name, Email, Phone, Password, Cnic, Bloodgroup, Age, Disease, Weight) VALUES " +
				"(@name, @email, @phone, @password, @cnic, @bloodgroup, @age , @disease, @weight);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@phone", phone);
			command.Parameters->AddWithValue("@password", password);
			command.Parameters->AddWithValue("@cnic", cnic);
			command.Parameters->AddWithValue("@bloodgroup", bloodgroup);
			command.Parameters->AddWithValue("@age", age);
			command.Parameters->AddWithValue("@disease", disease);
			command.Parameters->AddWithValue("@weight", weight);


			command.ExecuteNonQuery();
			user = gcnew User;
			user->name = name;
			user->age = age;
			user->cnic = cnic;
			user->bloodgroup = bloodgroup;
			user->disease = disease;
			user->weight = weight;
			user->email = email;
			user->phone = phone;
			user->password = password;

			this->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to Register New User", "Registeration Error", MessageBoxButtons::OK);
		}
	}
	private: System::Void llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		switchToLogin = true;
		this->Close();
	}
	};
	//test
}
