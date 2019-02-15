#pragma once
#include "User.h"
#include "ArraySearch.h"
#include "StringConverter.h"

namespace Practice1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UserForm
	/// </summary>
	public ref class UserForm : public System::Windows::Forms::Form
	{
	private: ArraySearch<User>^ source;
	private: ListBox^ out;
	public:
		UserForm(ArraySearch<User>^ s, ListBox^ o)
		{
			this->source = s;
			this->out = o;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  ButtonEnter;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBoxLogin;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBoxPassword;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ButtonEnter = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxLogin = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// ButtonEnter
			// 
			this->ButtonEnter->Location = System::Drawing::Point(155, 203);
			this->ButtonEnter->Margin = System::Windows::Forms::Padding(4);
			this->ButtonEnter->Name = L"ButtonEnter";
			this->ButtonEnter->Size = System::Drawing::Size(94, 32);
			this->ButtonEnter->TabIndex = 2;
			this->ButtonEnter->Text = L"OK";
			this->ButtonEnter->UseVisualStyleBackColor = true;
			this->ButtonEnter->Click += gcnew System::EventHandler(this, &UserForm::ButtonEnter_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(55, 59);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Login";
			// 
			// textBoxLogin
			// 
			this->textBoxLogin->Location = System::Drawing::Point(173, 56);
			this->textBoxLogin->Name = L"textBoxLogin";
			this->textBoxLogin->Size = System::Drawing::Size(187, 28);
			this->textBoxLogin->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(55, 130);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password";
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Location = System::Drawing::Point(173, 127);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(187, 28);
			this->textBoxPassword->TabIndex = 1;
			// 
			// UserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(412, 278);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxLogin);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->ButtonEnter);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"UserForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"New User";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ButtonEnter_Click(System::Object^  sender, System::EventArgs^  e) {
		source->Add(User(source->Length(), SystemToStd(textBoxLogin->Text), SystemToStd(textBoxPassword->Text)));
		this->Close();
		out->Items->Add(Practice1::StdToSystem(source->At(source->Length() - 1).ToString()));
	}
};
}
