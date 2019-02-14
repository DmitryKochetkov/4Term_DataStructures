#pragma once
#include <cstdlib>
#include "ArraySearch.h"

namespace Practice1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// —водка дл€ AnalysisForm
	/// </summary>
	public ref class AnalysisForm : public System::Windows::Forms::Form
	{
	private: Form^ source;
	public:
		AnalysisForm(Form^ s)
		{
			source = s;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~AnalysisForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox_Amount;
	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  Start_Analysis;


	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox_Amount = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Start_Analysis = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox_Amount
			// 
			this->textBox_Amount->Location = System::Drawing::Point(251, 100);
			this->textBox_Amount->Margin = System::Windows::Forms::Padding(4);
			this->textBox_Amount->MaxLength = 10;
			this->textBox_Amount->Name = L"textBox_Amount";
			this->textBox_Amount->Size = System::Drawing::Size(148, 24);
			this->textBox_Amount->TabIndex = 0;
			this->textBox_Amount->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AnalysisForm::textBox_Amount_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(95, 103);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Amount of elements:";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(30, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(451, 52);
			this->label2->TabIndex = 2;
			this->label2->Text = L"This program measures the time required to perform varoius types of search in arr"
				L"ay. Use a large set of input data for best results.";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Start_Analysis
			// 
			this->Start_Analysis->Location = System::Drawing::Point(208, 149);
			this->Start_Analysis->Name = L"Start_Analysis";
			this->Start_Analysis->Size = System::Drawing::Size(82, 30);
			this->Start_Analysis->TabIndex = 3;
			this->Start_Analysis->Text = L"Start";
			this->Start_Analysis->UseVisualStyleBackColor = true;
			this->Start_Analysis->Click += gcnew System::EventHandler(this, &AnalysisForm::Start_Analysis_Click);
			// 
			// AnalysisForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(499, 197);
			this->Controls->Add(this->Start_Analysis);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox_Amount);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AnalysisForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Algorithms Analysis";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Start_Analysis_Click(System::Object^  sender, System::EventArgs^  e) {
		if (textBox_Amount->Text == "")
			return;
		int amount = Int32::Parse(textBox_Amount->Text);
		ArraySearch<int>^ arr = gcnew ArraySearch<int>();
		for (int i = 0; i < amount; i++)
			arr->Add(i);
		int key = rand() % 100000;
		Stopwatch^ w = gcnew Stopwatch();
		array<System::TimeSpan>^ t = gcnew array<System::TimeSpan>(4);

		w->Start();
		arr->LinearSearch(key);
		w->Stop();
		t[0] = w->Elapsed;

		w->Restart();
		arr->BarrierSearch(key);
		w->Stop();
		t[1] = w->Elapsed;

		w->Restart();
		arr->BinarySearch(key);
		w->Stop();
		t[2] = w->Elapsed;

		w->Restart();
		arr->BinarySearch_GoldenRatio(key);
		w->Stop();
		t[3] = w->Elapsed;

		MessageBox::Show("Linear search completed at " + t[0].TotalMilliseconds + " ms\nBarrier Search completed at " + t[1].TotalMilliseconds + " ms\nBinary Search (Standard Key) completed at " + t[2].TotalMilliseconds + " ms\nBinary Search (Golden Ratio Key) completed at " + t[3].TotalMilliseconds + " ms", "Analysis Results", MessageBoxButtons::OK);
		this->Close();
		source->Show();
	}
private: System::Void textBox_Amount_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if (Char::IsDigit(e->KeyChar))
		return;
	if (e->KeyChar == (char)Keys::Back)
		return;
	e->Handled = true;
}
};
}
