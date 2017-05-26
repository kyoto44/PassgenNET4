#pragma once

#include <string>
#include <iostream>
#include <time.h>
#include <ctime>
#include <cstdlib>


namespace PassgenNET4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для passgenhard
	/// </summary>
	public ref class passgenhard : public System::Windows::Forms::Form
	{
	public:
		passgenhard(void)
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
		~passgenhard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox2;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(45, 224);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ваш пароль: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Количество символов: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(152, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(33, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(7, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(139, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Используемые символы: ";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Все имеющиеся", L"Английские буквы верхнего регистра",
					L"Английские буквы нижнего регистра", L"Цифры", L"Спец. символы"
			});
			this->checkedListBox1->Location = System::Drawing::Point(152, 62);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(230, 79);
			this->checkedListBox1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(152, 162);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(192, 37);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Сгенерировать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &passgenhard::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(124, 221);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(258, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &passgenhard::textBox2_MouseClick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(195, 256);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 23);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Сохранить в файл";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &passgenhard::button2_Click);
			// 
			// passgenhard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(415, 291);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"passgenhard";
			this->Text = L"PassGEN - Expert mode";
			this->Load += gcnew System::EventHandler(this, &passgenhard::passgenhard_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: static int count;
	public: static String^ pass;
	private: System::Void passgenhard_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		int i;
		srand(time(0));
		String^ all = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890~!@#$%*()+`-=:;";
		String^ engbig = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		String^ engsmall = "abcdefghijklmnopqrstuvwxyz";
		String^ numbers = "1234567890";
		String^ symbols = "~!@#$%*()`-:;";
		
		count = Convert::ToInt32(textBox1->Text);


		if (checkedListBox1->SelectedIndex == 0) {
			pass = "";
			for (i = 0; i < count; i++) {
				int riall = rand() % 77;
				pass = pass + all[riall];
			}
		}

		if (checkedListBox1->SelectedIndex == 1) {
			pass = "";
			for (i = 0; i < count; i++) {
				int rieng = rand() % 26;
				pass += engbig[rieng];
			}
		}
		if (checkedListBox1->SelectedIndex == 2) {
			pass = "";
			for (i = 0; i < count; i++) {
				int rieng = rand() % 26;
				pass += engsmall[rieng];
			}
		}
		if (checkedListBox1->SelectedIndex == 3) {
			pass = "";
			for (i = 0; i < count; i++) {
				int rinum = rand() % 10;
				pass += numbers[rinum];
			}
		}

		if (checkedListBox1->SelectedIndex == 4) {
			pass = "";
			for (i = 0; i < count; i++) {
				int risym = rand() % 13;
				pass += symbols[risym];
			}
		}
		textBox2->Text = pass;


	}
	private: System::Void textBox2_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

		textBox2->SelectAll();
		textBox2->Copy();
		textBox2->DeselectAll();
	}
 private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

        
		
   /* passgeneasy^ changef = gcnew passgeneasy();
		changef->Show();
		this->Hide(); */


}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {



	SaveFileDialog ^saveFileDialog1 = gcnew SaveFileDialog();

	saveFileDialog1->Filter = "Text Files|*.txt";
	saveFileDialog1->FilterIndex = 2;
	saveFileDialog1->RestoreDirectory = true;
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		IO::File::WriteAllText(saveFileDialog1->FileName, textBox2->Text);
	}


	


	
}
};
}