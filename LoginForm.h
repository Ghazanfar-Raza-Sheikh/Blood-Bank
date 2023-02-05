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
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
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
	private: System::Windows::Forms::Label^ lbEmail;
	private: System::Windows::Forms::Label^ lbPass;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::TextBox^ tbPass;
	private: System::Windows::Forms::Label^ lgbt;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnRegister;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->lbSTitle = (gcnew System::Windows::Forms::Label());
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->pbLogo = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbEmail = (gcnew System::Windows::Forms::Label());
			this->lbPass = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbPass = (gcnew System::Windows::Forms::TextBox());
			this->lgbt = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
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
			this->lbSTitle->Location = System::Drawing::Point(222, 137);
			this->lbSTitle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbSTitle->Name = L"lbSTitle";
			this->lbSTitle->Size = System::Drawing::Size(490, 25);
			this->lbSTitle->TabIndex = 5;
			this->lbSTitle->Text = L"\"The Bond of Blood is Stronger than Anything\"";
			// 
			// lbTitle
			// 
			this->lbTitle->AutoSize = true;
			this->lbTitle->BackColor = System::Drawing::Color::Transparent;
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Harrington", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTitle->ForeColor = System::Drawing::Color::White;
			this->lbTitle->Location = System::Drawing::Point(185, 64);
			this->lbTitle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(572, 51);
			this->lbTitle->TabIndex = 4;
			this->lbTitle->Text = L"Blood Donation Community";
			// 
			// pbLogo
			// 
			this->pbLogo->BackColor = System::Drawing::Color::Transparent;
			this->pbLogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbLogo.Image")));
			this->pbLogo->Location = System::Drawing::Point(21, 19);
			this->pbLogo->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->pbLogo->Name = L"pbLogo";
			this->pbLogo->Size = System::Drawing::Size(173, 158);
			this->pbLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbLogo->TabIndex = 3;
			this->pbLogo->TabStop = false;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->Location = System::Drawing::Point(12, 180);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(758, 59);
			this->label1->TabIndex = 6;
			this->label1->Text = L"LOGIN FORM";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbEmail
			// 
			this->lbEmail->AutoSize = true;
			this->lbEmail->BackColor = System::Drawing::Color::Transparent;
			this->lbEmail->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEmail->ForeColor = System::Drawing::Color::White;
			this->lbEmail->Location = System::Drawing::Point(75, 290);
			this->lbEmail->Name = L"lbEmail";
			this->lbEmail->Size = System::Drawing::Size(203, 32);
			this->lbEmail->TabIndex = 7;
			this->lbEmail->Text = L"Email or CNIC:";
			// 
			// lbPass
			// 
			this->lbPass->BackColor = System::Drawing::Color::Transparent;
			this->lbPass->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPass->ForeColor = System::Drawing::Color::White;
			this->lbPass->Location = System::Drawing::Point(81, 386);
			this->lbPass->Name = L"lbPass";
			this->lbPass->Size = System::Drawing::Size(197, 32);
			this->lbPass->TabIndex = 8;
			this->lbPass->Text = L"Password:";
			this->lbPass->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbEmail
			// 
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbEmail->Location = System::Drawing::Point(308, 282);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(404, 39);
			this->tbEmail->TabIndex = 9;
			// 
			// tbPass
			// 
			this->tbPass->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPass->Location = System::Drawing::Point(308, 378);
			this->tbPass->Name = L"tbPass";
			this->tbPass->PasswordChar = '*';
			this->tbPass->Size = System::Drawing::Size(404, 39);
			this->tbPass->TabIndex = 10;
			// 
			// lgbt
			// 
			this->lgbt->BackColor = System::Drawing::Color::Transparent;
			this->lgbt->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lgbt->ForeColor = System::Drawing::Color::White;
			this->lgbt->Location = System::Drawing::Point(12, 457);
			this->lgbt->Name = L"lgbt";
			this->lgbt->Size = System::Drawing::Size(758, 48);
			this->lgbt->TabIndex = 11;
			this->lgbt->Text = L"Do not have an account\?";
			this->lgbt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// linkLabel1
			// 
			this->linkLabel1->ActiveLinkColor = System::Drawing::Color::White;
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->linkLabel1->Location = System::Drawing::Point(11, 505);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(758, 48);
			this->linkLabel1->TabIndex = 12;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Get Registered";
			this->linkLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::linkLabel1_LinkClicked);
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::Color::Maroon;
			this->btnCancel->Location = System::Drawing::Point(443, 599);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(204, 59);
			this->btnCancel->TabIndex = 29;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &LoginForm::btnCancel_Click_1);
			// 
			// btnRegister
			// 
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegister->ForeColor = System::Drawing::Color::Maroon;
			this->btnRegister->Location = System::Drawing::Point(187, 599);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(204, 59);
			this->btnRegister->TabIndex = 28;
			this->btnRegister->Text = L"Login";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Click += gcnew System::EventHandler(this, &LoginForm::btnRegister_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 37);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(782, 753);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->lgbt);
			this->Controls->Add(this->tbPass);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->lbPass);
			this->Controls->Add(this->lbEmail);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbSTitle);
			this->Controls->Add(this->lbTitle);
			this->Controls->Add(this->pbLogo);
			this->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(8, 9, 8, 9);
			this->MaximumSize = System::Drawing::Size(800, 800);
			this->MinimumSize = System::Drawing::Size(800, 800);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLogo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:User^ user = nullptr;

	public:bool switchToRegister = false;

	private: System::Void btnCancel_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = this->tbEmail->Text;
		String^ pwd = this->tbPass->Text;
		String^ cnic = this->tbEmail->Text;


		if (email->Length == 0 || pwd->Length == 0) {
			MessageBox::Show("Please Enter Email or Password", "Data Entry Error", MessageBoxButtons::OK);
		}
		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=data;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM Users WHERE email=@email OR cnic=@cnic AND password = @pwd";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@cnic", cnic);
			command.Parameters->AddWithValue("@pwd", pwd);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->name = reader->GetString(1);
				user->email = reader->GetString(2);
				user->phone = reader->GetString(3);
				user->age = reader->GetString(4);
				user->password = reader->GetString(5);
				user->cnic = reader->GetString(6);
				user->bloodgroup = reader->GetString(7);

				this->Close();
			}
			else {
				MessageBox::Show("Incorrect Email or Password", "Data Entry Error", MessageBoxButtons::OK);
			}

		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to Connect to Database", "Database Error", MessageBoxButtons::OK);
		}
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->switchToRegister = true;
		this->Close();
	}
	};
}
