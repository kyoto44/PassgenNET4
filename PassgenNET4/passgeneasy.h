#pragma once

#include <string>
#include <iostream>
#include <time.h>
#include <ctime>
#include <cstdlib>
#include "passgenhard.h"

namespace PassgenNET4 {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для passgeneasy
	/// </summary>
	public ref class passgeneasy : public System::Windows::Forms::Form
	{
	public:
		passgeneasy(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~passgeneasy()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label14;
	protected:
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TrackBar^  trackBar2;

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->SuspendLayout();
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(351, 101);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(84, 13);
			this->label14->TabIndex = 30;
			this->label14->Text = L"Максимальная";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(254, 101);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(50, 13);
			this->label13->TabIndex = 29;
			this->label13->Text = L"Средняя";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(137, 101);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(44, 13);
			this->label12->TabIndex = 28;
			this->label12->Text = L"Легкая";
			// 
			// trackBar2
			// 
			this->trackBar2->LargeChange = 4;
			this->trackBar2->Location = System::Drawing::Point(149, 69);
			this->trackBar2->Maximum = 2;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(258, 45);
			this->trackBar2->TabIndex = 27;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(149, 185);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(258, 20);
			this->textBox3->TabIndex = 25;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(181, 132);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(192, 37);
			this->button4->TabIndex = 24;
			this->button4->Text = L"Сгенерировать";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &passgeneasy::button4_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 69);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(108, 13);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Сложность пароля: ";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(257, 34);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(37, 20);
			this->textBox5->TabIndex = 22;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(239, 9);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(82, 13);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Длина пароля:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 185);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(73, 13);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Ваш пароль: ";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(7, 220);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(113, 23);
			this->button3->TabIndex = 31;
			this->button3->Text = L"Режим эксперта";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &passgeneasy::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(225, 220);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 23);
			this->button2->TabIndex = 32;
			this->button2->Text = L"Сохранить в файл";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &passgeneasy::button2_Click);
			// 
			// passgeneasy
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(440, 255);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label6);
			this->Name = L"passgeneasy";
			this->Text = L"PassGEN - Easy mode";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: static int count;
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {

		int i;
		srand(time(0));
		String^ all = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890~!@#$%*()+`-=:;";
		String^ medium = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890";
		String^ easy = "1234567890abcdefghijklmnopqrstuvwxyz";
		String^ pass;
		count = Convert::ToInt32(textBox5->Text);


		if (trackBar2->Value == 2) {
			pass = "";
			for (i = 0; i < count; i++) {
				int riall = rand() % 77;
				pass = pass + all[riall];
			}
		}

		if (trackBar2->Value == 1) {
			pass = "";
			for (i = 0; i < count; i++) {
				int rimed = rand() % 62;
				pass += medium[rimed];
			}
		}
		if (trackBar2->Value == 0) {
			pass = "";
			for (i = 0; i < count; i++) {
				int riez = rand() % 36;
				pass += easy[riez];
			}
		}
		
		textBox3->Text = pass;


	}

			 private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

				 

				 passgenhard^ changef1 = gcnew passgenhard();
				 changef1->Show();
				 this->Hide();
			


			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {


	SaveFileDialog ^saveFileDialog1 = gcnew SaveFileDialog();

	saveFileDialog1->Filter = "Text Files|*.txt";
	saveFileDialog1->FilterIndex = 2;
	saveFileDialog1->RestoreDirectory = true;
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		IO::File::WriteAllText(saveFileDialog1->FileName, textBox3->Text);
	}




}
};
}
