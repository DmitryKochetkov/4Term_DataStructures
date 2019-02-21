#pragma once

namespace Lab1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StackForm
	/// </summary>
	public ref class StackForm : public System::Windows::Forms::Form
	{
	private: 
		Stack^ s1 = gcnew Stack();
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  Push1Button;
	private: System::Windows::Forms::Button^  Push2Button;
	private: System::Windows::Forms::Button^  Pop1Button;
	private: System::Windows::Forms::Button^  Pop2Button;




	private: System::Windows::Forms::Button^  SwapButton;

			 Stack^ s2 = gcnew Stack();
	public:
		StackForm(void)
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
		~StackForm()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Push1Button = (gcnew System::Windows::Forms::Button());
			this->Push2Button = (gcnew System::Windows::Forms::Button());
			this->Pop1Button = (gcnew System::Windows::Forms::Button());
			this->Pop2Button = (gcnew System::Windows::Forms::Button());
			this->SwapButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(67, 86);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(159, 204);
			this->listBox1->TabIndex = 0;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 20;
			this->listBox2->Location = System::Drawing::Point(269, 86);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(159, 204);
			this->listBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(110, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Stack 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(312, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Stack 2";
			// 
			// Push1Button
			// 
			this->Push1Button->Location = System::Drawing::Point(162, 321);
			this->Push1Button->Name = L"Push1Button";
			this->Push1Button->Size = System::Drawing::Size(62, 28);
			this->Push1Button->TabIndex = 4;
			this->Push1Button->Text = L"Push";
			this->Push1Button->UseVisualStyleBackColor = true;
			// 
			// Push2Button
			// 
			this->Push2Button->Location = System::Drawing::Point(366, 321);
			this->Push2Button->Name = L"Push2Button";
			this->Push2Button->Size = System::Drawing::Size(62, 28);
			this->Push2Button->TabIndex = 5;
			this->Push2Button->Text = L"Push";
			this->Push2Button->UseVisualStyleBackColor = true;
			// 
			// Pop1Button
			// 
			this->Pop1Button->Location = System::Drawing::Point(67, 357);
			this->Pop1Button->Name = L"Pop1Button";
			this->Pop1Button->Size = System::Drawing::Size(157, 28);
			this->Pop1Button->TabIndex = 6;
			this->Pop1Button->Text = L"Pop";
			this->Pop1Button->UseVisualStyleBackColor = true;
			// 
			// Pop2Button
			// 
			this->Pop2Button->Location = System::Drawing::Point(269, 357);
			this->Pop2Button->Name = L"Pop2Button";
			this->Pop2Button->Size = System::Drawing::Size(157, 28);
			this->Pop2Button->TabIndex = 7;
			this->Pop2Button->Text = L"Pop";
			this->Pop2Button->UseVisualStyleBackColor = true;
			// 
			// SwapButton
			// 
			this->SwapButton->Location = System::Drawing::Point(176, 423);
			this->SwapButton->Name = L"SwapButton";
			this->SwapButton->Size = System::Drawing::Size(157, 28);
			this->SwapButton->TabIndex = 8;
			this->SwapButton->Text = L"Swap elements";
			this->SwapButton->UseVisualStyleBackColor = true;
			// 
			// StackForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(517, 482);
			this->Controls->Add(this->SwapButton);
			this->Controls->Add(this->Pop2Button);
			this->Controls->Add(this->Pop1Button);
			this->Controls->Add(this->Push2Button);
			this->Controls->Add(this->Push1Button);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"StackForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lab 1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
