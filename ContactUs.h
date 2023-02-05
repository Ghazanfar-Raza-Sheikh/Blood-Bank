#pragma once

namespace Testing {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ContactUs
	/// </summary>
	public ref class ContactUs : public System::Windows::Forms::Form
	{
	public:
		ContactUs(void)
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
		~ContactUs()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ContactUs::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(626, 39);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Contact Us";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(107, 96);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Your Name: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(107, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 22);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Your Email:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(107, 179);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 22);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Contact #:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(107, 223);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 22);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Subject:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(107, 290);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(85, 22);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Message:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(230, 96);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(291, 21);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(230, 141);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(291, 21);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(230, 181);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(291, 21);
			this->textBox3->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(230, 272);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(340, 109);
			this->textBox4->TabIndex = 9;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Inquiry ", L"Suggestion or Comments", L"Advertise Us",
					L"Link Exchange or Banner Exchange", L"Login Problem", L"WebMaster", L"Other"
			});
			this->comboBox1->Location = System::Drawing::Point(230, 230);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(290, 23);
			this->comboBox1->TabIndex = 10;
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::Color::Maroon;
			this->btnCancel->Location = System::Drawing::Point(366, 418);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(204, 48);
			this->btnCancel->TabIndex = 31;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &ContactUs::btnCancel_Click);
			// 
			// btnRegister
			// 
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegister->ForeColor = System::Drawing::Color::Maroon;
			this->btnRegister->Location = System::Drawing::Point(108, 418);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(204, 48);
			this->btnRegister->TabIndex = 30;
			this->btnRegister->Text = L"Send";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Click += gcnew System::EventHandler(this, &ContactUs::btnRegister_Click);
			// 
			// ContactUs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(650, 500);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 7.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->MaximumSize = System::Drawing::Size(650, 500);
			this->MinimumSize = System::Drawing::Size(650, 500);
			this->Name = L"ContactUs";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Contact Us";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:bool switchToMainForm = false;
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		switchToMainForm = true;
		this->Close();
	}
	private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Your Message has been submitted from the email", "Confirmation", MessageBoxButtons::OK);
	}
};
};

