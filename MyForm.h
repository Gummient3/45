#pragma once
#include <stdlib.h>

namespace HelloWord {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		String^ outdata;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		void myFunc() {

		}


	protected:

		//String outdata;

		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
		void findFunc() {
			
			try {
				
				String^ tmp;
				//array< Double >^ mas = gcnew array< Double >(10);
				tmp = textBox5->Text;
				Int32 n;
				n = System::Convert::ToInt32(textBox1->Text);
				array<String^>^ data = gcnew array<String^>(n);
				array<Int32^>^ newdata = gcnew array<Int32^>(n);
				
				//
				
				data = (tmp->Split());
				
				for (int i = 0; i < n; i++) {
					newdata[i] = System::Convert::ToInt32(data[i]);
				}
				for (int i = 0; i < n; i++) {
					

					if (System::Convert::ToInt32(data[i]) % 10 == System::Convert::ToInt32(textBox8->Text)) {
						//MessageBox::Show(Convert::ToString(System::Convert::ToInt32(data[i]) % 10));
						outdata += data[i];
;						outdata += " ";

					}
				}
				if (tmp != "") {

					//MessageBox::Show(tmp);
				}
				//MessageBox::Show("outdata\n" + outdata);
				button6->PerformClick();
				result->Text = outdata;
				outdata = "";
				
			}
			catch (...) {

			}

		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ result;










	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Button^ button6;



	protected:

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->result = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->ForeColor = System::Drawing::Color::Blue;
			this->groupBox1->Location = System::Drawing::Point(16, 15);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(459, 201);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Исходные данные:";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::Black;
			this->label8->Location = System::Drawing::Point(8, 184);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(14, 16);
			this->label8->TabIndex = 7;
			this->label8->Text = L"k";
			// 
			// textBox8
			// 
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox8->Location = System::Drawing::Point(279, 181);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(153, 22);
			this->textBox8->TabIndex = 6;
			this->textBox8->Text = L"2";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(8, 154);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(249, 16);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Максимальное значение диапазона:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(8, 98);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(243, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Минимальное значение диапазона:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(8, 43);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(221, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Количество элементов массива:";
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox3->Location = System::Drawing::Point(279, 151);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(153, 22);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"20";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox2->Location = System::Drawing::Point(279, 96);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(153, 22);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"1";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Location = System::Drawing::Point(279, 41);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(153, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"100";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// result
			// 
			this->result->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->result->Location = System::Drawing::Point(28, 523);
			this->result->Margin = System::Windows::Forms::Padding(4);
			this->result->Name = L"result";
			this->result->ReadOnly = true;
			this->result->Size = System::Drawing::Size(446, 22);
			this->result->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->Location = System::Drawing::Point(29, 344);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(446, 22);
			this->textBox5->TabIndex = 4;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox5_KeyPress);
			// 
			// textBox6
			// 
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox6->Location = System::Drawing::Point(509, 113);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(169, 22);
			this->textBox6->TabIndex = 5;
			// 
			// textBox7
			// 
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox7->Location = System::Drawing::Point(509, 369);
			this->textBox7->Margin = System::Windows::Forms::Padding(4);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(169, 22);
			this->textBox7->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 309);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Исходный массив:";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(24, 503);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(147, 16);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Результат операции:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(505, 94);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(125, 16);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Имя файла ввода:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(505, 350);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(134, 16);
			this->label7->TabIndex = 9;
			this->label7->Text = L"Имя файла вывода:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(509, 50);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(169, 30);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Генерация массива";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(509, 161);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(169, 30);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Ввод из файла";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->Location = System::Drawing::Point(509, 295);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(169, 30);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Выполнить";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(509, 406);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(169, 30);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Сохранить в файл";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button5->Location = System::Drawing::Point(509, 518);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(169, 30);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Закрыть";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button6->Location = System::Drawing::Point(508, 244);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(169, 30);
			this->button6->TabIndex = 15;
			this->button6->Text = L"clear";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(707, 576);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->result);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Обработка массива";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
String^ FileName = "";

     //Ввод из файла
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
		FileName = openFileDialog1->FileName;
		textBox6->Text = openFileDialog1->SafeFileName;
	}

	try {
		StreamReader^ file = File::OpenText(FileName);

		textBox5->Text = file->ReadToEnd();

		if (textBox5->Text->EndsWith(" -"))
			textBox5->Text = textBox5->Text->Remove(textBox5->Text->Length - 2);

		if (textBox5->Text[textBox5->Text->Length - 1] == ' ' || textBox5->Text[textBox5->Text->Length - 1] == '-')
			textBox5->Text = textBox5->Text->Remove(textBox5->Text->Length - 1);

		array<String^>^ str = textBox5->Text->Split(' ');
		int asd = Convert::ToInt32(str->Length);
		array<int>^ a = gcnew array<int>(asd);
		for (int j = 0; j < asd; j++) {
			if (!Int32::TryParse(str[j], a[j]))
				textBox5->Text = textBox5->Text->Replace(str[j] + " ", "");
		}

		file->Close();
	}
	catch (Exception^ e)
	{
		MessageBox::Show(this, "Файл не был открыт", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}



}

	 //Генерация массива
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (textBox1->Text != "") {
		int a1 = Convert::ToInt32(textBox2->Text);
		int b1 = Convert::ToInt32(textBox3->Text);
		int xzl = Convert::ToInt32(textBox1->Text);
		array<double>^ a = gcnew array<double>(xzl);
		array<double>^ b = gcnew array<double>(xzl);
		Random^ rand = gcnew Random();
		textBox5->Text = L"";
		for (int j = 0; j < xzl; j++) {
			String^ clr = Convert::ToString(textBox5->Text);
			if (j == xzl - 1) {
				textBox5->Text = clr + rand->Next(a1, b1).ToString();
				b[j] = System::Convert::ToDouble(clr);
				
				
			}
			else {
				textBox5->Text = clr + rand->Next(a1, b1).ToString() + " ";
				if (clr != "") {
					b[j] = System::Convert::ToDouble(clr);
					
				}
				
			}
			
			
		}
		
	}
	else {
		MessageBox::Show("Поле должно быть заполнено");
	}
}

	 //Кнопка закрыть
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	findFunc();

	this->Close();
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	
}



	 /*//Кнопка выполнить
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox5->Text == "") return;

	if (textBox5->Text->EndsWith(" -"))
		textBox5->Text = textBox5->Text->Remove(textBox5->Text->Length - 2);

	if (textBox5->Text[textBox5->Text->Length - 1] == ' ' || textBox5->Text[textBox5->Text->Length - 1] == '-')
		textBox5->Text = textBox5->Text->Remove(textBox5->Text->Length - 1);

		if (textBox5->Text != "") {
			array<String^>^ str;
			str = textBox5->Text->Split(' ');
			int asd = Convert::ToInt32(str->Length);
			array<int>^ a = gcnew array<int>(asd);
			for (int j = 0; j < asd; j++) {
				if (!Int32::TryParse(str[j], a[j]))
					textBox5->Text = textBox5->Text->Replace(str[j] + " ", "");
			}


			if (radioButton1->Checked == true) {
				result->Text = L"";
				int azx = 0;
				for (int j = 0; j < asd; j++) {
					azx += a[j];
				}
				result->Text = Convert::ToString(azx);
			}

			if (radioButton2->Checked == true) {
				result->Text = L"";
				double azx = 0;
				double kolvo = 0;
				for (int j = 0; j < asd; j++) {
					azx += a[j];
					kolvo++;
				}
				azx = azx / kolvo;
				result->Text = Convert::ToString(azx);
			}

			if (
				radioButton3->Checked == true) {
				result->Text = L"";
				int azx = a[0];
				for (int j = 1; j < asd; j++) {
					if (azx < a[j])
						azx = a[j];
				}
				result->Text = Convert::ToString(azx);
			}

			if (radioButton4->Checked == true) {
				result->Text = L"";
				int azx = a[0];
				for (int j = 1; j < asd; j++) {
					if (azx > a[j])
						azx = a[j];
				}
				result->Text = Convert::ToString(azx);
			}

			if (radioButton5->Checked == true) {
				result->Text = L"";
				for (int i = 1; i < asd; ++i)
				{
					for (int r = 0; r < asd - i; r++)
					{
						if (a[r] < a[r + 1])
						{
							// Обмен местами
							int temp = a[r];
							a[r] = a[r + 1];
							a[r + 1] = temp;
						}
					}
				}
				for (int j = 0; j < asd; j++) {
					result->Text = result->Text + Convert::ToString(a[j]) + " ";
				}
			}

			if (radioButton6->Checked == true) {
				result->Text = L"";
				int tmp = 0;
				for (int i = 0; i < asd; i++) {
					for (int j = (asd - 1); j >= (i + 1); j--) {
						if (a[j] < a[j - 1]) {
							tmp = a[j];
							a[j] = a[j - 1];
							a[j - 1] = tmp;
						}
					}
				}
				for (int j = 0; j < asd; j++) {
					result->Text = result->Text + Convert::ToString(a[j]) + " ";
				}
			}

			if (radioButton7->Checked == true) {
				result->Text = L"";
				for (int j = 0; j < asd; j++) {
					if (a[j] % 2 == 1)
						result->Text = result->Text + Convert::ToString(a[j]) + " ";
				}
			}

			if (radioButton8->Checked == true) {
				result->Text = L"";
				for (int j = 0; j < asd; j++) {
					if (a[j]%2 == 0)
						result->Text = result->Text + Convert::ToString(a[j]) + " ";
				}
			}
		}
	}
	*/	 //Сохраняем в файл
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (openFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
		FileName = openFileDialog1->FileName;
	}
	try {
		StreamWriter^ sw = gcnew StreamWriter(FileName);
		sw->Write(result->Text);
		sw->Close();
		delete sw;
		textBox7->Text = FileName;
	}
	catch (...) {

	}
	
	
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	Int32 input;
	if (!(Int32::TryParse(e->KeyChar.ToString(), input) || e->KeyChar == ''))
	{
		e->Handled = true;
	}
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	Int32 input;
	if (!(Int32::TryParse(e->KeyChar.ToString(), input) || e->KeyChar == '-' || e->KeyChar == ''))
	{
		e->Handled = true;
	}
}
private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	Int32 input;
	if (!(Int32::TryParse(e->KeyChar.ToString(), input) || e->KeyChar == '-' || e->KeyChar == ''))
	{
		e->Handled = true;
	}
}
private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	Int32 input;
	if (!(Int32::TryParse(e->KeyChar.ToString(), input) || e->KeyChar == ' ' || e->KeyChar == '-' || e->KeyChar == ''))
	{
		e->Handled = true;
	}

	if (textBox5->Text->Length == 0 && e->KeyChar == ' ') e->Handled = true;

	if (textBox5->Text->Length == 0) return;

	if ((textBox5->Text[textBox5->Text->Length - 1] + e->KeyChar.ToString() == "--"))
	{
		e->Handled = true;
	}
	
	if ((textBox5->Text[textBox5->Text->Length - 1] + e->KeyChar.ToString() == "  "))
	{
		e->Handled = true;
	}
	
	if ((textBox5->Text[textBox5->Text->Length - 1] + e->KeyChar.ToString() == "- "))
	{
		e->Handled = true;
	}
}
private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("from 471 string");
	
	findFunc();

	
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	result->Text = "";
	
}
};
}
