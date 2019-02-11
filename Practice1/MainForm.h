#pragma once
#include "ArraySearch.h"
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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(112, 37);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Array";
			// 
			// ButtonLinearSearch
			// 
			this->ButtonLinearSearch->Location = System::Drawing::Point(360, 173);
			this->ButtonLinearSearch->Margin = System::Windows::Forms::Padding(4);
			this->ButtonLinearSearch->Name = L"ButtonLinearSearch";
			this->ButtonLinearSearch->Size = System::Drawing::Size(197, 29);
			this->ButtonLinearSearch->TabIndex = 1;
			this->ButtonLinearSearch->Text = L"Linear Search";
			this->ButtonLinearSearch->UseVisualStyleBackColor = true;
			// 
			// ButtonBarrierSearch
			// 
			this->ButtonBarrierSearch->Location = System::Drawing::Point(360, 231);
			this->ButtonBarrierSearch->Margin = System::Windows::Forms::Padding(4);
			this->ButtonBarrierSearch->Name = L"ButtonBarrierSearch";
			this->ButtonBarrierSearch->Size = System::Drawing::Size(197, 29);
			this->ButtonBarrierSearch->TabIndex = 2;
			this->ButtonBarrierSearch->Text = L"Barrier Search";
			this->ButtonBarrierSearch->UseVisualStyleBackColor = true;
			// 
			// ButtonBinarySearch
			// 
			this->ButtonBinarySearch->Location = System::Drawing::Point(360, 281);
			this->ButtonBinarySearch->Margin = System::Windows::Forms::Padding(4);
			this->ButtonBinarySearch->Name = L"ButtonBinarySearch";
			this->ButtonBinarySearch->Size = System::Drawing::Size(197, 29);
			this->ButtonBinarySearch->TabIndex = 3;
			this->ButtonBinarySearch->Text = L"Binary Search";
			this->ButtonBinarySearch->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(47, 69);
			this->listBox1->Name = L"listBox1";
			this->listBox1->SelectionMode = System::Windows::Forms::SelectionMode::MultiSimple;
			this->listBox1->Size = System::Drawing::Size(191, 284);
			this->listBox1->TabIndex = 4;
			// 
			// ButtonAdd
			// 
			this->ButtonAdd->Location = System::Drawing::Point(360, 58);
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
			this->ButtonRemove->Location = System::Drawing::Point(360, 110);
			this->ButtonRemove->Margin = System::Windows::Forms::Padding(4);
			this->ButtonRemove->Name = L"ButtonRemove";
			this->ButtonRemove->Size = System::Drawing::Size(197, 29);
			this->ButtonRemove->TabIndex = 6;
			this->ButtonRemove->Text = L"Remove Selected Items";
			this->ButtonRemove->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(41, 371);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(197, 29);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Analyze efficiency";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(360, 333);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(197, 29);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Binary Search: Golden";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(590, 413);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->ButtonRemove);
			this->Controls->Add(this->ButtonAdd);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->ButtonBinarySearch);
			this->Controls->Add(this->ButtonBarrierSearch);
			this->Controls->Add(this->ButtonLinearSearch);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MainForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Practice 1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ButtonAdd_Click(System::Object^  sender, System::EventArgs^  e) {
		int x = rand() % 100;
		arr->Add(x);
		listBox1->Items->Add(x);
	}
};
}
