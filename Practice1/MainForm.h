#pragma once
#include "ArraySearch.h"
#include "AnalysisForm.h"
#include <cstdlib>

namespace Practice1 {

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
		ArraySearch<int>^ arr;
		MainForm(void)
		{
			InitializeComponent();
			arr = gcnew ArraySearch<int>();
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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  ButtonLinearSearch;
	private: System::Windows::Forms::Button^  ButtonBarrierSearch;

	protected:


	private: System::Windows::Forms::Button^  ButtonBinarySearch;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  ButtonAdd;
	private: System::Windows::Forms::Button^  ButtonRemove;
	private: System::Windows::Forms::Button^  ButtonAnalyze;

	private: System::Windows::Forms::Button^  ButtonGoldenRatioSearch;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;




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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ButtonLinearSearch = (gcnew System::Windows::Forms::Button());
			this->ButtonBarrierSearch = (gcnew System::Windows::Forms::Button());
			this->ButtonBinarySearch = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->ButtonAdd = (gcnew System::Windows::Forms::Button());
			this->ButtonRemove = (gcnew System::Windows::Forms::Button());
			this->ButtonAnalyze = (gcnew System::Windows::Forms::Button());
			this->ButtonGoldenRatioSearch = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(108, 24);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Array";
			// 
			// ButtonLinearSearch
			// 
			this->ButtonLinearSearch->Location = System::Drawing::Point(18, 60);
			this->ButtonLinearSearch->Margin = System::Windows::Forms::Padding(4);
			this->ButtonLinearSearch->Name = L"ButtonLinearSearch";
			this->ButtonLinearSearch->Size = System::Drawing::Size(197, 29);
			this->ButtonLinearSearch->TabIndex = 1;
			this->ButtonLinearSearch->Text = L"Linear Search";
			this->ButtonLinearSearch->UseVisualStyleBackColor = true;
			this->ButtonLinearSearch->Click += gcnew System::EventHandler(this, &MainForm::ButtonLinearSearch_Click);
			// 
			// ButtonBarrierSearch
			// 
			this->ButtonBarrierSearch->Location = System::Drawing::Point(18, 110);
			this->ButtonBarrierSearch->Margin = System::Windows::Forms::Padding(4);
			this->ButtonBarrierSearch->Name = L"ButtonBarrierSearch";
			this->ButtonBarrierSearch->Size = System::Drawing::Size(197, 29);
			this->ButtonBarrierSearch->TabIndex = 2;
			this->ButtonBarrierSearch->Text = L"Barrier Search";
			this->ButtonBarrierSearch->UseVisualStyleBackColor = true;
			this->ButtonBarrierSearch->Click += gcnew System::EventHandler(this, &MainForm::ButtonBarrierSearch_Click);
			// 
			// ButtonBinarySearch
			// 
			this->ButtonBinarySearch->Location = System::Drawing::Point(18, 159);
			this->ButtonBinarySearch->Margin = System::Windows::Forms::Padding(4);
			this->ButtonBinarySearch->Name = L"ButtonBinarySearch";
			this->ButtonBinarySearch->Size = System::Drawing::Size(197, 29);
			this->ButtonBinarySearch->TabIndex = 3;
			this->ButtonBinarySearch->Text = L"Binary Search";
			this->ButtonBinarySearch->UseVisualStyleBackColor = true;
			this->ButtonBinarySearch->Click += gcnew System::EventHandler(this, &MainForm::ButtonBinarySearch_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 17;
			this->listBox1->Location = System::Drawing::Point(43, 56);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(191, 276);
			this->listBox1->TabIndex = 4;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::listBox1_SelectedIndexChanged);
			// 
			// ButtonAdd
			// 
			this->ButtonAdd->Location = System::Drawing::Point(18, 23);
			this->ButtonAdd->Margin = System::Windows::Forms::Padding(4);
			this->ButtonAdd->Name = L"ButtonAdd";
			this->ButtonAdd->Size = System::Drawing::Size(197, 29);
			this->ButtonAdd->TabIndex = 5;
			this->ButtonAdd->Text = L"Add New Item";
			this->ButtonAdd->UseVisualStyleBackColor = true;
			this->ButtonAdd->Click += gcnew System::EventHandler(this, &MainForm::ButtonAdd_Click);
			// 
			// ButtonRemove
			// 
			this->ButtonRemove->Enabled = false;
			this->ButtonRemove->Location = System::Drawing::Point(18, 64);
			this->ButtonRemove->Margin = System::Windows::Forms::Padding(4);
			this->ButtonRemove->Name = L"ButtonRemove";
			this->ButtonRemove->Size = System::Drawing::Size(197, 29);
			this->ButtonRemove->TabIndex = 6;
			this->ButtonRemove->Text = L"Remove Selected Items";
			this->ButtonRemove->UseVisualStyleBackColor = true;
			this->ButtonRemove->Click += gcnew System::EventHandler(this, &MainForm::ButtonRemove_Click);
			// 
			// ButtonAnalyze
			// 
			this->ButtonAnalyze->Location = System::Drawing::Point(37, 358);
			this->ButtonAnalyze->Margin = System::Windows::Forms::Padding(4);
			this->ButtonAnalyze->Name = L"ButtonAnalyze";
			this->ButtonAnalyze->Size = System::Drawing::Size(197, 29);
			this->ButtonAnalyze->TabIndex = 7;
			this->ButtonAnalyze->Text = L"Analyze efficiency";
			this->ButtonAnalyze->UseVisualStyleBackColor = true;
			this->ButtonAnalyze->Click += gcnew System::EventHandler(this, &MainForm::ButtonAnalyze_Click);
			// 
			// ButtonGoldenRatioSearch
			// 
			this->ButtonGoldenRatioSearch->Location = System::Drawing::Point(18, 203);
			this->ButtonGoldenRatioSearch->Margin = System::Windows::Forms::Padding(4);
			this->ButtonGoldenRatioSearch->Name = L"ButtonGoldenRatioSearch";
			this->ButtonGoldenRatioSearch->Size = System::Drawing::Size(197, 29);
			this->ButtonGoldenRatioSearch->TabIndex = 8;
			this->ButtonGoldenRatioSearch->Text = L"Binary Search: Golden Ratio";
			this->ButtonGoldenRatioSearch->UseVisualStyleBackColor = true;
			this->ButtonGoldenRatioSearch->Click += gcnew System::EventHandler(this, &MainForm::ButtonGoldenRatioSearch_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->ButtonAdd);
			this->groupBox1->Controls->Add(this->ButtonRemove);
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox1->Location = System::Drawing::Point(289, 36);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(228, 116);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Edit Array";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->ButtonLinearSearch);
			this->groupBox2->Controls->Add(this->ButtonBarrierSearch);
			this->groupBox2->Controls->Add(this->ButtonGoldenRatioSearch);
			this->groupBox2->Controls->Add(this->ButtonBinarySearch);
			this->groupBox2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox2->Location = System::Drawing::Point(289, 158);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(228, 242);
			this->groupBox2->TabIndex = 10;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Search Item";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(69, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(135, 23);
			this->textBox1->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(48, 17);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Value:";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(546, 428);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->ButtonAnalyze);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MainForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Practice 1";
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void DataRefresh()
		{
			listBox1->Items->Clear();
			for (int i = 0; i < arr->Length(); i++)
				listBox1->Items->Add(arr->At(i));
		}

	private: System::Void ButtonAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		int x = rand() % 100;
		arr->Add(x);
		listBox1->Items->Add(x);
	}
private: System::Void ButtonRemove_Click(System::Object^  sender, System::EventArgs^  e) {
	arr->Remove(listBox1->SelectedIndex);
	listBox1->Items->RemoveAt(listBox1->SelectedIndex);
}
private: System::Void ButtonLinearSearch_Click(System::Object^  sender, System::EventArgs^  e) {
	int x;
	Int32::TryParse(textBox1->Text, x);
	int res = arr->LinearSearch(x);
	if (res == -1)
		MessageBox::Show("Element does not exist", "Linear Search Result", MessageBoxButtons::OK);
	else
	{
		MessageBox::Show("Position: " + res.ToString(), "Linear Search Result", MessageBoxButtons::OK);
		listBox1->SelectedIndex = res;
	}
}
private: System::Void ButtonBarrierSearch_Click(System::Object^  sender, System::EventArgs^  e) {
	int x;
	Int32::TryParse(textBox1->Text, x);
	int res = arr->BarrierSearch(x);
	if (res == -1)
		MessageBox::Show("Element does not exist", "Barrier Search Result", MessageBoxButtons::OK);
	else
	{
		MessageBox::Show("Position: " + arr->BarrierSearch(x).ToString(), "Barrier Search Result", MessageBoxButtons::OK);
		listBox1->SelectedIndex = res;
	}
}
private: System::Void ButtonBinarySearch_Click(System::Object^  sender, System::EventArgs^  e) {
	int x;
	Int32::TryParse(textBox1->Text, x);
	System::Windows::Forms::DialogResult result = MessageBox::Show("Warning: array will be sorted", "Binary Search", MessageBoxButtons::OKCancel);
	if (result == System::Windows::Forms::DialogResult::Cancel)
		return;
	int res = arr->BinarySearch(x);
	DataRefresh();
	if (res == -1)
		MessageBox::Show("Element does not exist", "Binary Search (Standard Key) Result", MessageBoxButtons::OK);
	else
	{
		MessageBox::Show("Position: " + arr->BinarySearch(x).ToString(), "Binary Search (Standard Key) Result", MessageBoxButtons::OK);
		listBox1->SelectedIndex = res;
	}
}
private: System::Void ButtonGoldenRatioSearch_Click(System::Object^  sender, System::EventArgs^  e) {
	int x;
	Int32::TryParse(textBox1->Text, x);
	System::Windows::Forms::DialogResult result = MessageBox::Show("Warning: array will be sorted", "Binary Search", MessageBoxButtons::OKCancel);
	if (result == System::Windows::Forms::DialogResult::Cancel)
		return;
	int res = arr->BinarySearch_GoldenRatio(x);
	DataRefresh();
	if (res == -1)
		MessageBox::Show("Element does not exist", "Binary Search (Golden Ratio Key) Result", MessageBoxButtons::OK);
	else
	{
		MessageBox::Show("Position: " + arr->BinarySearch_GoldenRatio(x).ToString(), "Binary Search (Golden Ratio Key) Result", MessageBoxButtons::OK);
		listBox1->SelectedIndex = res;
	}
}
private: System::Void ButtonAnalyze_Click(System::Object^  sender, System::EventArgs^  e) {
	AnalysisForm^ form = gcnew AnalysisForm(this);
	this->Hide();
	form->Show();
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	ButtonRemove->Enabled = listBox1->SelectedIndex != -1;
}
};
}
