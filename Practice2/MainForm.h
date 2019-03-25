#pragma once
#include "StringSearching.h"

namespace Practice2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  Search_Button;

	private: System::Windows::Forms::CheckBox^  checkBox1;

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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Search_Button = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(33, 49);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(502, 136);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::richTextBox1_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(108, 215);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(427, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(30, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"String:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(30, 215);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Substring:";
			// 
			// Search_Button
			// 
			this->Search_Button->Enabled = false;
			this->Search_Button->Location = System::Drawing::Point(204, 302);
			this->Search_Button->Name = L"Search_Button";
			this->Search_Button->Size = System::Drawing::Size(156, 38);
			this->Search_Button->TabIndex = 4;
			this->Search_Button->Text = L"Search";
			this->Search_Button->UseVisualStyleBackColor = true;
			this->Search_Button->Click += gcnew System::EventHandler(this, &MainForm::Search_Button_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(207, 264);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(150, 21);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"Register Sensitivity";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(564, 370);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->Search_Button);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->richTextBox1);
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Practice 2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Search_Button_Click(System::Object^  sender, System::EventArgs^  e) {
		int out[4];
		bool reg = checkBox1->Checked;
		MessageBox::Show("Brute Force Search: \n\tPosition: " + BruteForce(richTextBox1->Text, textBox1->Text, out[0], reg) + "\n\tIterations: " + out[0] + "\nKMP Search: \n\tPosition: " + KMP(richTextBox1->Text, textBox1->Text, out[1], reg) + "\n\tIterations: " + out[1] + "\nBM Search: \n\tPosition: " + BM(richTextBox1->Text, textBox1->Text, out[2], reg) + "\n\tIterations: " + out[2] + "\nKMP + BM Search: \n\tPosition: " + Perfect(richTextBox1->Text, textBox1->Text, out[3], reg) + "\n\tIterations: " + out[3], "Result");
	}
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Search_Button->Enabled = richTextBox1->Text != "" && textBox1->Text != "";
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	Search_Button->Enabled = richTextBox1->Text != "" && textBox1->Text != "";
}
};
}
