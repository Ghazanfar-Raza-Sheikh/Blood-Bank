#pragma once

namespace Testing {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Compatibility
	/// </summary>
	public ref class Compatibility : public System::Windows::Forms::Form
	{
	public:
		Compatibility(void)
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
		~Compatibility()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbHeading;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Compatibility::typeid));
			this->lbHeading = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// lbHeading
			// 
			this->lbHeading->BackColor = System::Drawing::Color::Transparent;
			this->lbHeading->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbHeading->ForeColor = System::Drawing::Color::White;
			this->lbHeading->Location = System::Drawing::Point(12, 42);
			this->lbHeading->Name = L"lbHeading";
			this->lbHeading->Size = System::Drawing::Size(976, 71);
			this->lbHeading->TabIndex = 0;
			this->lbHeading->Text = L"Compatibility Table";
			this->lbHeading->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(257, 247);
			this->pictureBox1->MaximumSize = System::Drawing::Size(500, 500);
			this->pictureBox1->MinimumSize = System::Drawing::Size(500, 500);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(500, 500);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// linkLabel1
			// 
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->ForeColor = System::Drawing::Color::White;
			this->linkLabel1->LinkColor = System::Drawing::Color::White;
			this->linkLabel1->Location = System::Drawing::Point(21, 783);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(967, 23);
			this->linkLabel1->TabIndex = 2;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Return to Dashboard";
			this->linkLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Compatibility::linkLabel1_LinkClicked);
			// 
			// Compatibility
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 1000);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->lbHeading);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(1000, 1000);
			this->MinimumSize = System::Drawing::Size(1000, 1000);
			this->Name = L"Compatibility";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Compatibility";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public:bool switchToDashboard = false;
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		switchToDashboard = true;
		this->Close();
	}
	};
}
