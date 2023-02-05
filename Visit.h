#pragma once

namespace Testing {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Visit
	/// </summary>
	public ref class Visit : public System::Windows::Forms::Form
	{
	public:
		Visit(void)
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
		~Visit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ cbDay;
	private: System::Windows::Forms::ComboBox^ cbTimeSlot;
	private: System::Windows::Forms::ComboBox^ cbPurpose;



	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnBook;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Visit::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cbDay = (gcnew System::Windows::Forms::ComboBox());
			this->cbTimeSlot = (gcnew System::Windows::Forms::ComboBox());
			this->cbPurpose = (gcnew System::Windows::Forms::ComboBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnBook = (gcnew System::Windows::Forms::Button());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(16, 11);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(811, 65);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Book a Visit";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(365, 127);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(102, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Select Day:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(305, 182);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(147, 22);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Select Time Slot:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(323, 236);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(134, 22);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Select Purpose:";
			// 
			// cbDay
			// 
			this->cbDay->FormattingEnabled = true;
			this->cbDay->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Saturday", L"Sunday", L"Monday", L"Tuesday", L"Wednesday",
					L"Thursday", L"Friday"
			});
			this->cbDay->Location = System::Drawing::Point(523, 124);
			this->cbDay->Margin = System::Windows::Forms::Padding(4);
			this->cbDay->Name = L"cbDay";
			this->cbDay->Size = System::Drawing::Size(160, 24);
			this->cbDay->TabIndex = 4;
			// 
			// cbTimeSlot
			// 
			this->cbTimeSlot->FormattingEnabled = true;
			this->cbTimeSlot->Items->AddRange(gcnew cli::array< System::Object^  >(23) {
				L"09:00 - 09:30", L"", L"09:30 - 10:00", L"",
					L"10:00 - 10:30", L"", L"10:30 - 11:00", L"", L"11:00 - 11:30", L"", L"11:30 - 12:00", L"", L"14:00 - 14:30", L"", L"14:30 - 15:00",
					L"", L"15:30 - 15:30", L"", L"15:30  -  16:00", L"", L"16:00 - 16:30", L"", L"16:30  - 17:00"
			});
			this->cbTimeSlot->Location = System::Drawing::Point(523, 182);
			this->cbTimeSlot->Margin = System::Windows::Forms::Padding(4);
			this->cbTimeSlot->Name = L"cbTimeSlot";
			this->cbTimeSlot->Size = System::Drawing::Size(160, 24);
			this->cbTimeSlot->TabIndex = 5;
			// 
			// cbPurpose
			// 
			this->cbPurpose->FormattingEnabled = true;
			this->cbPurpose->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Blood Donation", L"Blood Collection", L"Blood Consultance",
					L"Others..."
			});
			this->cbPurpose->Location = System::Drawing::Point(523, 240);
			this->cbPurpose->Margin = System::Windows::Forms::Padding(4);
			this->cbPurpose->Name = L"cbPurpose";
			this->cbPurpose->Size = System::Drawing::Size(160, 24);
			this->cbPurpose->TabIndex = 6;
			// 
			// btnCancel
			// 
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::Color::Maroon;
			this->btnCancel->Location = System::Drawing::Point(460, 367);
			this->btnCancel->Margin = System::Windows::Forms::Padding(4);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(175, 39);
			this->btnCancel->TabIndex = 31;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &Visit::btnCancel_Click);
			// 
			// btnBook
			// 
			this->btnBook->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBook->ForeColor = System::Drawing::Color::Maroon;
			this->btnBook->Location = System::Drawing::Point(265, 367);
			this->btnBook->Margin = System::Windows::Forms::Padding(4);
			this->btnBook->Name = L"btnBook";
			this->btnBook->Size = System::Drawing::Size(175, 39);
			this->btnBook->TabIndex = 30;
			this->btnBook->Text = L"Book";
			this->btnBook->UseVisualStyleBackColor = true;
			this->btnBook->Click += gcnew System::EventHandler(this, &Visit::btnBook_Click);
			// 
			// linkLabel1
			// 
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::White;
			this->linkLabel1->Location = System::Drawing::Point(12, 533);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(819, 23);
			this->linkLabel1->TabIndex = 32;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Back to Dashboard";
			this->linkLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Visit::linkLabel1_LinkClicked);
			// 
			// Visit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(861, 666);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnBook);
			this->Controls->Add(this->cbPurpose);
			this->Controls->Add(this->cbTimeSlot);
			this->Controls->Add(this->cbDay);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(861, 666);
			this->MinimumSize = System::Drawing::Size(861, 666);
			this->Name = L"Visit";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Visit";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:bool switchToMainForm = false;
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		switchToMainForm = true;
		this->Close();
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		switchToMainForm = true;
		this->Close();
	}
	private: System::Void btnBook_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Your Booking has been made of " + cbDay->Text + ", " + cbTimeSlot->Text, "Confirmation", MessageBoxButtons::OK);
	}
	};
}
