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
	/// Summary for ProfileForm
	/// </summary>

	  public ref class ProfileForm : public System::Windows::Forms::Form
	  {

	  public:
		  ProfileForm(void)
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
		  ~ProfileForm()
		  {
			  if (components)
			  {
				  delete components;
			  }
		  }
	  private: System::Windows::Forms::Label^ label1;
	  protected:
















	  private:
		  /// <summary>
		  /// Required designer variable.
		  /// </summary>
		  System::ComponentModel::Container^ components;
	  private: System::Windows::Forms::DataGridView^ dataGridView1;
	  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Banks;
	  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Timings;
	  private: System::Windows::Forms::DataGridViewTextBoxColumn^ Location;
	  private: System::Windows::Forms::DataGridViewTextBoxColumn^ PlusCode;
	  private: System::Windows::Forms::LinkLabel^ linkLabel1;






#pragma region Windows Form Designer generated code

			 /// <summary>
			 /// Required method for Designer support - do not modify
			 /// the contents of this method with the code editor.
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ProfileForm::typeid));
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
				 this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
				 this->Banks = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->Timings = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->Location = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 this->PlusCode = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // label1
				 // 
				 this->label1->BackColor = System::Drawing::Color::Transparent;
				 this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->label1->ForeColor = System::Drawing::Color::White;
				 this->label1->Location = System::Drawing::Point(12, 26);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(958, 50);
				 this->label1->TabIndex = 0;
				 this->label1->Text = L"Profile";
				 this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 // 
				 // linkLabel1
				 // 
				 this->linkLabel1->BackColor = System::Drawing::Color::Transparent;
				 this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					 static_cast<System::Byte>(0)));
				 this->linkLabel1->LinkColor = System::Drawing::Color::White;
				 this->linkLabel1->Location = System::Drawing::Point(21, 560);
				 this->linkLabel1->Name = L"linkLabel1";
				 this->linkLabel1->Size = System::Drawing::Size(949, 23);
				 this->linkLabel1->TabIndex = 11;
				 this->linkLabel1->TabStop = true;
				 this->linkLabel1->Text = L"Return to Dashboard";
				 this->linkLabel1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
				 this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &ProfileForm::linkLabel1_LinkClicked);
				 // 
				 // dataGridView1
				 // 
				 this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
				 this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
					 this->Banks,
						 this->Timings, this->Location, this->PlusCode
				 });
				 this->dataGridView1->Location = System::Drawing::Point(220, 202);
				 this->dataGridView1->Name = L"dataGridView1";
				 this->dataGridView1->RowHeadersWidth = 51;
				 this->dataGridView1->RowTemplate->Height = 24;
				 this->dataGridView1->Size = System::Drawing::Size(580, 257);
				 this->dataGridView1->TabIndex = 12;
				 // 
				 // Banks
				 // 
				 this->Banks->HeaderText = L"Banks";
				 this->Banks->MinimumWidth = 6;
				 this->Banks->Name = L"Banks";
				 this->Banks->ReadOnly = true;
				 this->Banks->Width = 125;
				 // 
				 // Timings
				 // 
				 this->Timings->HeaderText = L"Timings";
				 this->Timings->MinimumWidth = 6;
				 this->Timings->Name = L"Timings";
				 this->Timings->ReadOnly = true;
				 this->Timings->Width = 125;
				 // 
				 // Location
				 // 
				 this->Location->HeaderText = L"Location";
				 this->Location->MinimumWidth = 6;
				 this->Location->Name = L"Location";
				 this->Location->ReadOnly = true;
				 this->Location->Width = 125;
				 // 
				 // PlusCode
				 // 
				 this->PlusCode->HeaderText = L"Plus Code";
				 this->PlusCode->MinimumWidth = 6;
				 this->PlusCode->Name = L"PlusCode";
				 this->PlusCode->ReadOnly = true;
				 this->PlusCode->Width = 125;
				 // 
				 // ProfileForm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
				 this->ClientSize = System::Drawing::Size(982, 953);
				 this->Controls->Add(this->dataGridView1);
				 this->Controls->Add(this->linkLabel1);
				 this->Controls->Add(this->label1);
				 this->MaximumSize = System::Drawing::Size(1000, 1000);
				 this->MinimumSize = System::Drawing::Size(1000, 1000);
				 this->Name = L"ProfileForm";
				 this->Text = L"ProfileForm";
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
				 this->ResumeLayout(false);

			 }
#pragma endregion
	  public: bool switchToDashboard = false;
	  private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		  switchToDashboard = true;
		  this->Close();
	  }
	  };
}
