#pragma once

namespace Testing {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Leaderboard
	/// </summary>
	public ref class Leaderboard : public System::Windows::Forms::Form
	{
	public:
		Leaderboard(void)
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
		~Leaderboard()
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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Serial;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ BloodGroup;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Donations;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Score;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Leaderboard::typeid));
			this->lbSTitle = (gcnew System::Windows::Forms::Label());
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->pbLogo = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Serial = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->BloodGroup = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Donations = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Score = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLogo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// lbSTitle
			// 
			this->lbSTitle->AutoSize = true;
			this->lbSTitle->BackColor = System::Drawing::Color::Transparent;
			this->lbSTitle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSTitle->ForeColor = System::Drawing::Color::White;
			this->lbSTitle->Location = System::Drawing::Point(299, 167);
			this->lbSTitle->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lbSTitle->Name = L"lbSTitle";
			this->lbSTitle->Size = System::Drawing::Size(490, 25);
			this->lbSTitle->TabIndex = 8;
			this->lbSTitle->Text = L"\"The Bond of Blood is Stronger than Anything\"";
			// 
			// lbTitle
			// 
			this->lbTitle->AutoSize = true;
			this->lbTitle->BackColor = System::Drawing::Color::Transparent;
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Harrington", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTitle->ForeColor = System::Drawing::Color::White;
			this->lbTitle->Location = System::Drawing::Point(249, 78);
			this->lbTitle->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(572, 51);
			this->lbTitle->TabIndex = 7;
			this->lbTitle->Text = L"Blood Donation Community";
			// 
			// pbLogo
			// 
			this->pbLogo->BackColor = System::Drawing::Color::Transparent;
			this->pbLogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbLogo.Image")));
			this->pbLogo->Location = System::Drawing::Point(31, 22);
			this->pbLogo->Margin = System::Windows::Forms::Padding(5, 4, 5, 4);
			this->pbLogo->Name = L"pbLogo";
			this->pbLogo->Size = System::Drawing::Size(231, 194);
			this->pbLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbLogo->TabIndex = 6;
			this->pbLogo->TabStop = false;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->Location = System::Drawing::Point(16, 220);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1011, 126);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Leaderboard";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Serial,
					this->Name, this->BloodGroup, this->Donations, this->Score
			});
			this->dataGridView1->Location = System::Drawing::Point(85, 372);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(908, 94);
			this->dataGridView1->TabIndex = 10;
			// 
			// Serial
			// 
			this->Serial->HeaderText = L"Sr#";
			this->Serial->MinimumWidth = 6;
			this->Serial->Name = L"Serial";
			this->Serial->Width = 125;
			// 
			// Name
			// 
			this->Name->HeaderText = L"Name";
			this->Name->MinimumWidth = 6;
			this->Name->Name = L"Name";
			this->Name->Width = 125;
			// 
			// BloodGroup
			// 
			this->BloodGroup->HeaderText = L"Blood Group";
			this->BloodGroup->MinimumWidth = 6;
			this->BloodGroup->Name = L"BloodGroup";
			this->BloodGroup->Width = 125;
			// 
			// Donations
			// 
			this->Donations->HeaderText = L"Donations";
			this->Donations->MinimumWidth = 6;
			this->Donations->Name = L"Donations";
			this->Donations->Width = 125;
			// 
			// Score
			// 
			this->Score->HeaderText = L"Score";
			this->Score->MinimumWidth = 6;
			this->Score->Name = L"Score";
			this->Score->Width = 125;
			// 
			// linkLabel1
			// 
			this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->LinkColor = System::Drawing::Color::White;
			this->linkLabel1->Location = System::Drawing::Point(12, 536);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(1019, 23);
			this->linkLabel1->TabIndex = 11;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Back to Dashboard";
			this->linkLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Leaderboard::linkLabel1_LinkClicked);
			// 
			// Leaderboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1061, 851);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbSTitle);
			this->Controls->Add(this->lbTitle);
			this->Controls->Add(this->pbLogo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximumSize = System::Drawing::Size(1061, 851);
			this->MinimumSize = System::Drawing::Size(1061, 851);
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Leaderboard";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbLogo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool switchToMainForm = false;
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		switchToMainForm = true;
		this->Close();
	}
	};
}
