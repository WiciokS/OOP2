#pragma once

#include "Person.h"


namespace OOP2Wiciok {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbname;
	protected:
	private: System::Windows::Forms::Label^ lbsurname;
	private: System::Windows::Forms::TextBox^ tbname;
	private: System::Windows::Forms::TextBox^ tbsurname;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^ tbyear;
	private: System::Windows::Forms::TextBox^ tbmonth;
	private: System::Windows::Forms::TextBox^ tbday;
	private: System::Windows::Forms::Button^ Enterdata;
	private: System::Windows::Forms::Label^ Curage;
	private: System::Windows::Forms::Label^ Curday;
	private: System::Windows::Forms::Label^ Curname;
	private: System::Windows::Forms::Label^ Cursurname;

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
			this->lbname = (gcnew System::Windows::Forms::Label());
			this->lbsurname = (gcnew System::Windows::Forms::Label());
			this->tbname = (gcnew System::Windows::Forms::TextBox());
			this->tbsurname = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tbyear = (gcnew System::Windows::Forms::TextBox());
			this->tbmonth = (gcnew System::Windows::Forms::TextBox());
			this->tbday = (gcnew System::Windows::Forms::TextBox());
			this->Enterdata = (gcnew System::Windows::Forms::Button());
			this->Curage = (gcnew System::Windows::Forms::Label());
			this->Curday = (gcnew System::Windows::Forms::Label());
			this->Curname = (gcnew System::Windows::Forms::Label());
			this->Cursurname = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbname
			// 
			this->lbname->AutoSize = true;
			this->lbname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbname->Location = System::Drawing::Point(117, 27);
			this->lbname->Name = L"lbname";
			this->lbname->Size = System::Drawing::Size(64, 25);
			this->lbname->TabIndex = 0;
			this->lbname->Text = L"Name";
			// 
			// lbsurname
			// 
			this->lbsurname->AutoSize = true;
			this->lbsurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbsurname->Location = System::Drawing::Point(89, 81);
			this->lbsurname->Name = L"lbsurname";
			this->lbsurname->Size = System::Drawing::Size(92, 25);
			this->lbsurname->TabIndex = 0;
			this->lbsurname->Text = L"Surname";
			// 
			// tbname
			// 
			this->tbname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbname->Location = System::Drawing::Point(187, 27);
			this->tbname->Name = L"tbname";
			this->tbname->Size = System::Drawing::Size(496, 30);
			this->tbname->TabIndex = 1;
			this->tbname->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tbname_KeyPress);
			// 
			// tbsurname
			// 
			this->tbsurname->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbsurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbsurname->Location = System::Drawing::Point(187, 81);
			this->tbsurname->Name = L"tbsurname";
			this->tbsurname->Size = System::Drawing::Size(496, 30);
			this->tbsurname->TabIndex = 1;
			this->tbsurname->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tbsurname_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 167);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 50);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Date of birth\r\n(Year;Month;Day)";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel1->Controls->Add(this->tbyear, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->tbmonth, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->tbday, 2, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(187, 177);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(496, 29);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// tbyear
			// 
			this->tbyear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbyear->Location = System::Drawing::Point(3, 3);
			this->tbyear->Name = L"tbyear";
			this->tbyear->Size = System::Drawing::Size(159, 22);
			this->tbyear->TabIndex = 0;
			this->tbyear->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tbyear_KeyPress);
			// 
			// tbmonth
			// 
			this->tbmonth->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbmonth->Location = System::Drawing::Point(168, 3);
			this->tbmonth->Name = L"tbmonth";
			this->tbmonth->Size = System::Drawing::Size(159, 22);
			this->tbmonth->TabIndex = 0;
			this->tbmonth->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tbmonth_KeyPress);
			// 
			// tbday
			// 
			this->tbday->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbday->Location = System::Drawing::Point(333, 3);
			this->tbday->Name = L"tbday";
			this->tbday->Size = System::Drawing::Size(160, 22);
			this->tbday->TabIndex = 0;
			this->tbday->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tbday_KeyPress);
			// 
			// Enterdata
			// 
			this->Enterdata->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Enterdata->Location = System::Drawing::Point(187, 231);
			this->Enterdata->Name = L"Enterdata";
			this->Enterdata->Size = System::Drawing::Size(243, 57);
			this->Enterdata->TabIndex = 3;
			this->Enterdata->Text = L"Enter Data";
			this->Enterdata->UseVisualStyleBackColor = true;
			this->Enterdata->Click += gcnew System::EventHandler(this, &MyForm::Enterdata_Click);
			// 
			// Curage
			// 
			this->Curage->AutoSize = true;
			this->Curage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Curage->Location = System::Drawing::Point(89, 360);
			this->Curage->Name = L"Curage";
			this->Curage->Size = System::Drawing::Size(48, 25);
			this->Curage->TabIndex = 0;
			this->Curage->Text = L"Age";
			// 
			// Curday
			// 
			this->Curday->AutoSize = true;
			this->Curday->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Curday->Location = System::Drawing::Point(89, 385);
			this->Curday->Name = L"Curday";
			this->Curday->Size = System::Drawing::Size(75, 25);
			this->Curday->TabIndex = 0;
			this->Curday->Text = L"Days til";
			// 
			// Curname
			// 
			this->Curname->AutoSize = true;
			this->Curname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Curname->Location = System::Drawing::Point(89, 313);
			this->Curname->Name = L"Curname";
			this->Curname->Size = System::Drawing::Size(64, 25);
			this->Curname->TabIndex = 0;
			this->Curname->Text = L"Name";
			// 
			// Cursurname
			// 
			this->Cursurname->AutoSize = true;
			this->Cursurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cursurname->Location = System::Drawing::Point(89, 338);
			this->Cursurname->Name = L"Cursurname";
			this->Cursurname->Size = System::Drawing::Size(92, 25);
			this->Cursurname->TabIndex = 0;
			this->Cursurname->Text = L"Surname";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(695, 434);
			this->Controls->Add(this->Enterdata);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->tbsurname);
			this->Controls->Add(this->tbname);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Cursurname);
			this->Controls->Add(this->Curday);
			this->Controls->Add(this->Curname);
			this->Controls->Add(this->Curage);
			this->Controls->Add(this->lbsurname);
			this->Controls->Add(this->lbname);
			this->MinimumSize = System::Drawing::Size(713, 481);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void tbyear_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		tbyear->MaxLength = 4;
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
			e->Handled = true;
		
	}
	private: System::Void tbmonth_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		tbmonth->MaxLength = 2;
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
			e->Handled = true;
	}
	private: System::Void tbday_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		tbday->MaxLength = 2;
		if (!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
			e->Handled = true;
	}
	private: System::Void tbsurname_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		tbsurname->MaxLength = 12;
		if (!Char::IsLetter(e->KeyChar) && e->KeyChar != 0x08)
			e->Handled = true;
	}
	private: System::Void tbname_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		tbname->MaxLength = 12;
		if (!Char::IsLetter(e->KeyChar) && e->KeyChar != 0x08)
			e->Handled = true;
	}
	private: System::Void Enterdata_Click(System::Object^ sender, System::EventArgs^ e)
	{
		std::string name = msclr::interop::marshal_as<std::string>(this->tbname->Text);
		std::string surname = msclr::interop::marshal_as<std::string>(this->tbsurname->Text);
		std::string year = msclr::interop::marshal_as<std::string>(this->tbyear->Text);
		std::string month = msclr::interop::marshal_as<std::string>(this->tbmonth->Text);
		std::string day = msclr::interop::marshal_as<std::string>(this->tbday->Text);

		if (this->tbname->Text->Length == 0 || this->tbsurname->Text->Length == 0
			|| this->tbyear->Text->Length == 0 || this->tbmonth->Text->Length == 0
			|| this->tbday->Text->Length == 0)
		{
			MessageBox::Show("Please enter all the fields",
				"Empty fields Error", MessageBoxButtons::OK);
			return;
		}
		try
		{
			auto* person = new Person(name, surname, stoi(year), stoi(month), stoi(day));
			Curname->Text = "Your name is: " + msclr::interop::marshal_as<String^>(person->getName());
			Cursurname->Text = "Your surname is: " + msclr::interop::marshal_as<String^>(person->getSurname());
			Curage->Text = "Your age is: " + person->Age();
			Curday->Text = "Days left til birthday: " + person->DaysUntil();
		}
		catch (int e)
		{
			if (e == 404)
			{
				MessageBox::Show("Please enter birthday data correctly",
					"Birthday Error", MessageBoxButtons::OK);
				return;
			}
		}
	}
};
}
