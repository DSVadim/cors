#include <stdio.h>
#include <stdlib.h>
#include "RegisterForm.h"

#pragma once





namespace My1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbUsername;
	private: System::Windows::Forms::TextBox^ tblPassword;


	private: System::Windows::Forms::Button^ btOK;
	private: System::Windows::Forms::Label^ label4;






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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->tblPassword = (gcnew System::Windows::Forms::TextBox());
			this->btOK = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(291, 53);
			this->label1->TabIndex = 0;
			this->label1->Text = L"����";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(135, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"��\'�";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(119, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 25);
			this->label3->TabIndex = 1;
			this->label3->Text = L"������";
			// 
			// tbUsername
			// 
			this->tbUsername->Location = System::Drawing::Point(21, 103);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(281, 31);
			this->tbUsername->TabIndex = 2;
			// 
			// tblPassword
			// 
			this->tblPassword->Location = System::Drawing::Point(21, 165);
			this->tblPassword->Name = L"tblPassword";
			this->tblPassword->Size = System::Drawing::Size(281, 31);
			this->tblPassword->TabIndex = 2;
			// 
			// btOK
			// 
			this->btOK->BackColor = System::Drawing::Color::Gray;
			this->btOK->ForeColor = System::Drawing::Color::White;
			this->btOK->Location = System::Drawing::Point(111, 239);
			this->btOK->Name = L"btOK";
			this->btOK->Size = System::Drawing::Size(94, 33);
			this->btOK->TabIndex = 3;
			this->btOK->Text = L"OK";
			this->btOK->UseVisualStyleBackColor = false;
			this->btOK->Click += gcnew System::EventHandler(this, &LoginForm::btOK_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(178, 199);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 25);
			this->label4->TabIndex = 4;
			this->label4->Text = L"����������";
			this->label4->Click += gcnew System::EventHandler(this, &LoginForm::label4_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(315, 284);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btOK);
			this->Controls->Add(this->tblPassword);
			this->Controls->Add(this->tbUsername);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"LoginForm";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
		CreateAdmin();
		char* temp_path = getenv("TEMP");
		char file_name[255];

		sprintf(file_name, "%s\\Testify", temp_path);

		int result = mkdir(file_name);

		char* folder_path2 = "\\Testify\\Current info";
		char file_name2[255];

		sprintf(file_name2, "%s%s", temp_path, folder_path2);
		int result2 = mkdir(file_name2);

		char* folder_path_result = "\\Testify\\Result";
		char file_name3[255];

		sprintf(file_name3, "%s%s", temp_path, folder_path_result);
		int result3 = mkdir(file_name3);

		char* folder_path_questions = "\\Testify\\Questions";

		sprintf(file_name3, "%s%s", temp_path, folder_path_questions);
		result3 = mkdir(file_name3);

		char* folder_path_answers = "\\Testify\\Questions Answers";

		sprintf(file_name3, "%s%s", temp_path, folder_path_questions);
		result3 = mkdir(file_name3);

	}
	private: System::Void btOK_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();

		RegisterForm^ registerform = gcnew RegisterForm();
		registerform->ShowDialog();
		this->Show();
	}
	};
}