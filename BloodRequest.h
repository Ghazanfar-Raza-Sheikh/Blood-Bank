#pragma once

namespace Testing {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BloodRequest
	/// </summary>
	public ref class BloodRequest : public System::Windows::Forms::Form
	{
	public:
		BloodRequest(void)
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
		~BloodRequest()
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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cbCity;
	private: System::Windows::Forms::ComboBox^ cbBlood;


	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnAddRequest;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BloodRequest::typeid));
			this->lbSTitle = (gcnew System::Windows::Forms::Label());
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->pbLogo = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cbCity = (gcnew System::Windows::Forms::ComboBox());
			this->cbBlood = (gcnew System::Windows::Forms::ComboBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnAddRequest = (gcnew System::Windows::Forms::Button());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLogo))->BeginInit();
			this->SuspendLayout();
			// 
			// lbSTitle
			// 
			this->lbSTitle->AutoSize = true;
			this->lbSTitle->BackColor = System::Drawing::Color::Transparent;
			this->lbSTitle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSTitle->ForeColor = System::Drawing::Color::White;
			this->lbSTitle->Location = System::Drawing::Point(175, 91);
			this->lbSTitle->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lbSTitle->Name = L"lbSTitle";
			this->lbSTitle->Size = System::Drawing::Size(357, 19);
			this->lbSTitle->TabIndex = 8;
			this->lbSTitle->Text = L"\"The Bond of Blood is Stronger than Anything\"";
			// 
			// lbTitle
			// 
			this->lbTitle->AutoSize = true;
			this->lbTitle->BackColor = System::Drawing::Color::Transparent;
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Harrington", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTitle->ForeColor = System::Drawing::Color::White;
			this->lbTitle->Location = System::Drawing::Point(149, 37);
			this->lbTitle->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(401, 35);
			this->lbTitle->TabIndex = 7;
			this->lbTitle->Text = L"Blood Donation Community";
			// 
			// pbLogo
			// 
			this->pbLogo->BackColor = System::Drawing::Color::Transparent;
			this->pbLogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbLogo.Image")));
			this->pbLogo->Location = System::Drawing::Point(37, 15);
			this->pbLogo->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->pbLogo->Name = L"pbLogo";
			this->pbLogo->Size = System::Drawing::Size(152, 128);
			this->pbLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbLogo->TabIndex = 6;
			this->pbLogo->TabStop = false;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(16, 164);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(755, 44);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Blood Requests";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label2->Location = System::Drawing::Point(16, 242);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(755, 44);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Select Your City";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label3->Location = System::Drawing::Point(11, 353);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(755, 44);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Select Blood Group";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// cbCity
			// 
			this->cbCity->FormattingEnabled = true;
			this->cbCity->Items->AddRange(gcnew cli::array< System::Object^  >(143) {
				L"Abottabad", L"", L"AhmadPur East ", L"", L"BhawalNagar",
					L"", L"BhawalPur", L"", L"Burewala", L"", L"Chakdara", L"", L"Chakwal ", L"", L"Chamman", L"", L"Chiniot", L"", L"Chistian",
					L"", L"Dadu", L"", L"Daska", L"", L"Dera Ghazi Khan ", L"", L"Dera Ismail Khan ", L"", L"Faisalabad ", L"", L"Gojra", L"", L"GujranWala ",
					L"", L"Gujrat", L"", L"HafizAbad", L"", L"Hyderabad", L"", L"Islamabad", L"", L"Jacobbad", L"", L"Jaranwala ", L"", L"Jhang",
					L"", L"Jhelum", L"", L"Kamalia", L"", L"Kamoke", L"", L"Kandhkote", L"", L"Karachi ", L"", L"Kasur", L"", L"Khairpur", L"", L"Khanewal",
					L"", L"Khanpur", L"", L"Khushab ", L"", L"Khuzdar ", L"", L"Kohat ", L"", L"Kot ", L"Addu", L"", L"Lahore", L"", L"Larkana ",
					L"", L"Mandi Bahuddin ", L"", L"Mardan ", L"", L"Mingora ", L"", L"Mirpur Khas", L"", L"Multan ", L"", L"Mureedkai ", L"", L"Muzaffargarh",
					L"", L"NawabShah", L"", L"Naushera ", L"", L"Okara ", L"", L"Pak Pattan", L"", L"Peshawar", L"", L"Quetta", L"", L"Rahim Yar Khan ",
					L"", L"Rawalpindi ", L"", L"Rawalpini ", L"", L"Sadiqabad", L"", L"Sahiwal", L"", L"Sargodha", L"", L"Sheikhupura", L"", L"Shikar Pur",
					L"", L"Sialkot", L"", L"Sukker", L"", L"Swabi", L"", L"Tand o Ala Yar", L"", L"Taxila", L"", L"Temargar", L"", L"Toba ", L"Taek ",
					L"Singh", L"", L"Vihari ", L"", L"Wah ", L"Cantonment", L"", L"WazirAbad"
			});
			this->cbCity->Location = System::Drawing::Point(289, 306);
			this->cbCity->Margin = System::Windows::Forms::Padding(4);
			this->cbCity->Name = L"cbCity";
			this->cbCity->Size = System::Drawing::Size(207, 24);
			this->cbCity->TabIndex = 12;
			// 
			// cbBlood
			// 
			this->cbBlood->FormattingEnabled = true;
			this->cbBlood->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"A+", L"A-", L"B+", L"B-", L"AB+", L"AB-", L"O+",
					L"O-"
			});
			this->cbBlood->Location = System::Drawing::Point(289, 414);
			this->cbBlood->Margin = System::Windows::Forms::Padding(4);
			this->cbBlood->Name = L"cbBlood";
			this->cbBlood->Size = System::Drawing::Size(207, 24);
			this->cbBlood->TabIndex = 13;
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::Color::Maroon;
			this->btnCancel->Location = System::Drawing::Point(445, 517);
			this->btnCancel->Margin = System::Windows::Forms::Padding(4);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(272, 50);
			this->btnCancel->TabIndex = 31;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &BloodRequest::btnCancel_Click);
			// 
			// btnAddRequest
			// 
			this->btnAddRequest->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddRequest->ForeColor = System::Drawing::Color::Maroon;
			this->btnAddRequest->Location = System::Drawing::Point(104, 517);
			this->btnAddRequest->Margin = System::Windows::Forms::Padding(4);
			this->btnAddRequest->Name = L"btnAddRequest";
			this->btnAddRequest->Size = System::Drawing::Size(272, 50);
			this->btnAddRequest->TabIndex = 30;
			this->btnAddRequest->Text = L"Add Request";
			this->btnAddRequest->UseVisualStyleBackColor = true;
			this->btnAddRequest->Click += gcnew System::EventHandler(this, &BloodRequest::btnAddRequest_Click);
			// 
			// linkLabel2
			// 
			this->linkLabel2->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel2->LinkColor = System::Drawing::Color::White;
			this->linkLabel2->Location = System::Drawing::Point(12, 470);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(752, 23);
			this->linkLabel2->TabIndex = 33;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Back to Dashboard";
			this->linkLabel2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &BloodRequest::linkLabel2_LinkClicked);
			// 
			// BloodRequest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(794, 666);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnAddRequest);
			this->Controls->Add(this->cbBlood);
			this->Controls->Add(this->cbCity);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbSTitle);
			this->Controls->Add(this->lbTitle);
			this->Controls->Add(this->pbLogo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(794, 666);
			this->MinimumSize = System::Drawing::Size(794, 666);
			this->Name = L"BloodRequest";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BloodRequest";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLogo))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool switchToMainForm = false;
	private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		switchToMainForm = true;
		this->Close();
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		switchToMainForm = true;
		this->Close();
	}
	private: System::Void btnAddRequest_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Request has been Submitted for Blood Group " + cbBlood->Text + " in " + cbCity->Text, "Confirmation",
			MessageBoxButtons::OK);
	}
	};
}
