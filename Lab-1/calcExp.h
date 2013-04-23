#pragma once

namespace Lab1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for calcExp
	/// </summary>
	public ref class calcExp : public System::Windows::Forms::Form
	{
	public:
		calcExp(void)
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
		~calcExp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  inputBox;
	protected: 

	private: System::Windows::Forms::Button^  expButton;
	private: System::Windows::Forms::Button^  pow2Button;
	private: System::Windows::Forms::TextBox^  resultBox;
	protected: 



	private: System::Windows::Forms::Label^  inputLabel;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  resLogBox;
	private: System::Windows::Forms::Label^  resLogLabel;
	private: System::Windows::Forms::Button^  clearResLogButton;



	private: System::Windows::Forms::Button^  clearRes;

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
			this->inputBox = (gcnew System::Windows::Forms::TextBox());
			this->expButton = (gcnew System::Windows::Forms::Button());
			this->pow2Button = (gcnew System::Windows::Forms::Button());
			this->resultBox = (gcnew System::Windows::Forms::TextBox());
			this->inputLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->resLogBox = (gcnew System::Windows::Forms::TextBox());
			this->resLogLabel = (gcnew System::Windows::Forms::Label());
			this->clearResLogButton = (gcnew System::Windows::Forms::Button());
			this->clearRes = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// inputBox
			// 
			this->inputBox->Location = System::Drawing::Point(13, 34);
			this->inputBox->Name = L"inputBox";
			this->inputBox->Size = System::Drawing::Size(100, 20);
			this->inputBox->TabIndex = 0;
			// 
			// expButton
			// 
			this->expButton->Location = System::Drawing::Point(119, 30);
			this->expButton->Name = L"expButton";
			this->expButton->Size = System::Drawing::Size(54, 23);
			this->expButton->TabIndex = 1;
			this->expButton->Text = L"exp";
			this->expButton->UseVisualStyleBackColor = true;
			this->expButton->Click += gcnew System::EventHandler(this, &calcExp::expButton_Click);
			// 
			// pow2Button
			// 
			this->pow2Button->Location = System::Drawing::Point(179, 31);
			this->pow2Button->Name = L"pow2Button";
			this->pow2Button->Size = System::Drawing::Size(53, 23);
			this->pow2Button->TabIndex = 2;
			this->pow2Button->Text = L"2^x";
			this->pow2Button->UseVisualStyleBackColor = true;
			// 
			// resultBox
			// 
			this->resultBox->Location = System::Drawing::Point(13, 89);
			this->resultBox->Name = L"resultBox";
			this->resultBox->Size = System::Drawing::Size(100, 20);
			this->resultBox->TabIndex = 3;
			// 
			// inputLabel
			// 
			this->inputLabel->AutoSize = true;
			this->inputLabel->Location = System::Drawing::Point(13, 13);
			this->inputLabel->Name = L"inputLabel";
			this->inputLabel->Size = System::Drawing::Size(31, 13);
			this->inputLabel->TabIndex = 4;
			this->inputLabel->Text = L"Input";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Result";
			// 
			// resLogBox
			// 
			this->resLogBox->Location = System::Drawing::Point(247, 34);
			this->resLogBox->Multiline = true;
			this->resLogBox->Name = L"resLogBox";
			this->resLogBox->Size = System::Drawing::Size(245, 175);
			this->resLogBox->TabIndex = 6;
			// 
			// resLogLabel
			// 
			this->resLogLabel->AutoSize = true;
			this->resLogLabel->Location = System::Drawing::Point(268, 13);
			this->resLogLabel->Name = L"resLogLabel";
			this->resLogLabel->Size = System::Drawing::Size(63, 13);
			this->resLogLabel->TabIndex = 7;
			this->resLogLabel->Text = L"Results Log";
			// 
			// clearResLogButton
			// 
			this->clearResLogButton->Location = System::Drawing::Point(247, 215);
			this->clearResLogButton->Name = L"clearResLogButton";
			this->clearResLogButton->Size = System::Drawing::Size(245, 35);
			this->clearResLogButton->TabIndex = 8;
			this->clearResLogButton->Text = L"Clear Results Log";
			this->clearResLogButton->UseVisualStyleBackColor = true;
			// 
			// clearRes
			// 
			this->clearRes->Location = System::Drawing::Point(120, 89);
			this->clearRes->Name = L"clearRes";
			this->clearRes->Size = System::Drawing::Size(75, 23);
			this->clearRes->TabIndex = 9;
			this->clearRes->Text = L"Clear";
			this->clearRes->UseVisualStyleBackColor = true;
			// 
			// calcExp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(504, 262);
			this->Controls->Add(this->clearRes);
			this->Controls->Add(this->clearResLogButton);
			this->Controls->Add(this->resLogLabel);
			this->Controls->Add(this->resLogBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->inputLabel);
			this->Controls->Add(this->resultBox);
			this->Controls->Add(this->pow2Button);
			this->Controls->Add(this->expButton);
			this->Controls->Add(this->inputBox);
			this->Name = L"calcExp";
			this->Text = L"calcExp";
			this->Load += gcnew System::EventHandler(this, &calcExp::calcExp_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void calcExp_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void expButton_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			  double temp = System::Convert::ToDouble(this->inputBox->Text);
			  this->resultBox->Text = System::Convert::ToString(exp(temp));
			  this->resLogBox->Text->Concat()
		 }
};
}

