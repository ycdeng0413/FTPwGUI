#include <string>
#include <direct.h>
#include <iostream>

#pragma once
int x=0;

///this function help us to get the path of executalbe
std::string address(void)
{
	char *getcwd(char *buffer, int maxlen);
	char buf[2000];
	getcwd(buf, sizeof(buf) - 1);
	return buf;
}

///this function help us to convert the System::String^ to std:string data type
void MarshalString(System::String ^ s, std::string& os)
{
	using namespace std;
	using namespace System;
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

///////////////////////////////////////////////////////////////////////////////
namespace Ver2012 {

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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;

	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Location = System::Drawing::Point(108, 175);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(180, 40);
			this->textBox1->TabIndex = 5;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(108, 123);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(180, 20);
			this->textBox3->TabIndex = 3;
			this->textBox3->Text = L"12345678";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(108, 97);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(180, 20);
			this->textBox4->TabIndex = 2;
			this->textBox4->Text = L"vsftp";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(108, 71);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(180, 20);
			this->textBox5->TabIndex = 1;
			this->textBox5->Text = L"10.10.18.33";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(290, 176);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Browse";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(265, 277);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 50);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Upload";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::Info;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(30, 176);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(75, 20);
			this->textBox6->TabIndex = 21;
			this->textBox6->TabStop = false;
			this->textBox6->Text = L"File Path";
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::Info;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(30, 149);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(75, 20);
			this->textBox7->TabIndex = 22;
			this->textBox7->TabStop = false;
			this->textBox7->Text = L"Destination";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::SystemColors::Info;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(30, 123);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(75, 20);
			this->textBox8->TabIndex = 23;
			this->textBox8->TabStop = false;
			this->textBox8->Text = L"Password";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::SystemColors::Info;
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(30, 97);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(75, 20);
			this->textBox9->TabIndex = 24;
			this->textBox9->TabStop = false;
			this->textBox9->Text = L"User Name";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::SystemColors::Info;
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(30, 71);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(75, 20);
			this->textBox10->TabIndex = 25;
			this->textBox10->TabStop = false;
			this->textBox10->Text = L"IP address";
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox11
			// 
			this->textBox11->Enabled = false;
			this->textBox11->Location = System::Drawing::Point(265, 219);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 10;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(108, 222);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(43, 17);
			this->radioButton1->TabIndex = 7;
			this->radioButton1->TabStop = true;
			this->radioButton1->Tag = L"";
			this->radioButton1->Text = L"Log";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(154, 222);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(40, 17);
			this->radioButton2->TabIndex = 8;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Txt";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(203, 222);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(56, 17);
			this->radioButton3->TabIndex = 9;
			this->radioButton3->Text = L"Others";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton3_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(108, 245);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(92, 17);
			this->checkBox1->TabIndex = 11;
			this->checkBox1->Text = L"Save Settings";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// textBox12
			// 
			this->textBox12->Enabled = false;
			this->textBox12->Location = System::Drawing::Point(203, 242);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(150, 20);
			this->textBox12->TabIndex = 12;
			// 
			// textBox13
			// 
			this->textBox13->Enabled = false;
			this->textBox13->Location = System::Drawing::Point(30, 333);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(180, 20);
			this->textBox13->TabIndex = 16;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(213, 330);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 17;
			this->button3->Text = L"Load File";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(290, 330);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Reset";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->DecimalPlaces = 2;
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 131072});
			this->numericUpDown1->Location = System::Drawing::Point(154, 281);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {300, 0, 0, 0});
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 131072});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(105, 20);
			this->numericUpDown1->TabIndex = 13;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::SystemColors::Info;
			this->textBox14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox14->Location = System::Drawing::Point(30, 281);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(121, 20);
			this->textBox14->TabIndex = 20;
			this->textBox14->TabStop = false;
			this->textBox14->Text = L"Upload Period (min)";
			this->textBox14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::SystemColors::Info;
			this->textBox15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox15->Location = System::Drawing::Point(30, 307);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(75, 20);
			this->textBox15->TabIndex = 19;
			this->textBox15->TabStop = false;
			this->textBox15->Text = L"End Time";
			this->textBox15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"yyy,MM,dd hh:mm tt";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(108, 304);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(151, 20);
			this->dateTimePicker1->TabIndex = 14;
			///this->dateTimePicker1->Value = System::DateTime(2019, 8, 6, 8, 50, 49, 184);
			this->dateTimePicker1->Value = System::DateTime::Now;
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox16->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->textBox16->Location = System::Drawing::Point(12, 12);
			this->textBox16->Multiline = true;
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->textBox16->Size = System::Drawing::Size(360, 39);
			this->textBox16->TabIndex = 26;
			this->textBox16->Text = L"visual studio 2012 with .net ver4.0\r\ntype in all the information or load file to " 
				L"use previous settings.";
			this->textBox16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->IntegralHeight = false;
			this->listBox1->ItemHeight = 15;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"LabTestTxt", L"Line1", L"Line2", L"Line3", L"Line4"});
			this->listBox1->Location = System::Drawing::Point(108, 149);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(180, 20);
			this->listBox1->TabIndex = 4;
			this->listBox1->SetSelected(0,true);
			// 
			// MyForm
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(384, 361);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"FTP (2012)";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 int i;
				 std::string b = address();
				 std::string str = "ftp\t-s:";	 
				 std::string str1;
				 std::string str2;		 
				 const char* c_c_str;


				 DateTime datenow = DateTime::Today;
				 String^ dateString= datenow.ToString("yyyyMMdd");
				 std::string datestdstring;
				 MarshalString(dateString, datestdstring);


				 /// we firstly compute how many times of uploading we will do
				 double min= Convert::ToDouble(numericUpDown1->Value);
				 TimeSpan ts=(dateTimePicker1->Value)-(DateTime::Now);
				 double ttmin= (double) ts.TotalMinutes;		

				 double dotimes= ttmin/min;


				 /// if the end time we set is earlier than the current time, it will shows an error in the message box
				 if (dotimes<=0)
				 {
					 this->textBox16->Text = L"End time must be later than current time";
					 this->textBox16->ForeColor = System::Drawing::Color::Red;
				 }
				 else
				 {
					 this->textBox16->Text = L"Visual Studio 2012 with .NET ver4.0\r\nType in all the information or Load File to use previous settings.";
					 this->textBox16->ForeColor = System::Drawing::SystemColors::HighlightText;
				 }


				 /// if we don't choose loading file, we will build a text file with the filename named by users (default name: text.txt)
				 if (x!=1)
				 {
					 /// we can choose whether we would like
					 /// 1. upload all the log file in the certain folder
					 /// 2. upload all the text file in the certain folder
					 /// 3. decide which file (what kind of file) to upload in the certain folder
					 String^ format;
					 if (radioButton1->Checked)
						 format= "*.lg";
					 else if (radioButton2->Checked)
						 format= "*.txt";
					 else if (radioButton3->Checked)
						 format = textBox11->Text;
					 else;

					 String ^ ip = textBox5->Text;
					 String ^ usern = textBox4->Text;
					 String ^ pword = textBox3->Text;
					 String ^ serverf = listBox1->SelectedItem->ToString(); 
					 String ^ fpath = textBox1->Text;

					 String ^ paa;
					 std::string pa = address();

					 /// we can determine the name of file (text file)
					 if (textBox12->Enabled)
					 {
						 String ^ newfile = textBox12->Text;
						 std::string newfilee;
						 MarshalString(newfile, newfilee);
						 str1= "\\"+newfilee + datestdstring+".txt";
						 pa+= str1;
						 paa = gcnew String(pa.c_str());
					 }

					 /// if we do not specify the file name, the default setting of file name is test.txt
					 else
					 {
						 //pa += "\\test"+datestdstring+".txt";
						 str1 += "\\test";
						 str1 += datestdstring;
						 str1 += ".txt";
						 pa+=str1;
						 paa = gcnew String(pa.c_str());
					 }

					 /// establishing a text file with the settings above
					 using namespace System;
					 using namespace System::IO;
					 StreamWriter^ sw = File::CreateText(paa);
					 try
					 {
						 sw->WriteLine("open\t"+ip);
						 sw->WriteLine(usern);
						 sw->WriteLine(pword);
						 sw->WriteLine("prompt");
						 sw->WriteLine("cd\t"+serverf);
						 sw->WriteLine("mput\t"+"\""+fpath+"\\"+format+"\"");
						 sw->WriteLine("quit");
					 }
					 finally
					 {
						 if (sw)
							 delete (IDisposable^)sw;
					 }
					 str2 = str;
					 str2 += "\"";
					 str2 += b;
					 str2 += str1;
					 str2 += "\"";
					 c_c_str = str2.c_str();
				 }

				 /// if we choose to load file, all the settings will be same with previous settings
				 else
				 {
					 String ^ loadname = textBox13->Text;
					 std::string loadnamee;
					 MarshalString(loadname, loadnamee);
					 str1 = loadnamee;
					 str2 = str;
					 str2 += "\"";
					 str2 += str1;
					 str2 += "\"";
					 c_c_str = str2.c_str();

				 }

				 /// read the file in order to do ftp transmission
				 if (dotimes>0)
				 {
					 system(c_c_str);
					 system("date /t");
					 system("time /t");
					 for (i = 0; i < int(dotimes); i++)
					 {
						 System::Threading::Thread::Sleep(min*60*1000);
						 system(c_c_str);
						 system("date /t");
						 system("time /t");
					 }
				 }
			 }

	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) 
			 {
				 System::String^ folderName;
				 FolderBrowserDialog^ folderBrowserDialog1;
				 folderBrowserDialog1 = gcnew System::Windows::Forms::FolderBrowserDialog;
				 System::Windows::Forms::DialogResult result = folderBrowserDialog1->ShowDialog();
				 textBox1->Text = folderBrowserDialog1->SelectedPath;
			 }

	private: System::Void radioButton3_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 this->textBox11->Enabled = true;
			 }

	private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 this->textBox11->Enabled = false;
			 }

	private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 this->textBox11->Enabled = false;
			 }

	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
			 {
				 if (checkBox1->Checked)
					 this->textBox12->Enabled = true;
				 else
					 this->textBox12->Enabled = false;
			 }

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 this->listBox1->Enabled = false;
				 this->textBox3->Enabled = false;
				 this->textBox4->Enabled = false;
				 this->textBox5->Enabled = false;
				 this->textBox13->Enabled = true;
				 this->textBox12->Enabled = false;
				 this->textBox11->Enabled = false;
				 this->radioButton1->Enabled = false;
				 this->radioButton2->Enabled = false;
				 this->radioButton3->Enabled = false;
				 this->checkBox1->Enabled = false;
				 this->button1->Enabled = false;
				 x=1;

				 std::string init = address();
				 String^ ini = gcnew String(init.c_str());
				 OpenFileDialog^ openFileDialog= gcnew OpenFileDialog;
				 openFileDialog1->InitialDirectory=ini;
				 openFileDialog1->Filter="txt files (*.txt) | *.txt | All files (*.*) | *.*";
				 openFileDialog1->FilterIndex=2;
				 openFileDialog1->RestoreDirectory=true;
				 System::Windows::Forms::DialogResult result = openFileDialog1->ShowDialog();
				 textBox13->Text = openFileDialog1->FileName;
			 }

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 this->listBox1->Enabled = true;
				 this->textBox3->Enabled = true;
				 this->textBox4->Enabled = true;
				 this->textBox5->Enabled = true;
				 this->textBox13->Enabled = false;
				 this->textBox12->Enabled = true;
				 this->textBox11->Enabled = true;
				 this->radioButton1->Enabled = true;
				 this->radioButton2->Enabled = true;
				 this->radioButton3->Enabled = true;
				 this->checkBox1->Enabled = true;
				 this->button1->Enabled = true;
				 this->textBox16->Text = L"Visual Studio 2012 with .NET ver4.0\r\nType in all the information or Load File to use previous settings.";
				 this->textBox16->ForeColor = System::Drawing::SystemColors::HighlightText;
				 x=0;
			 }


	private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e)
			 {
				 double emin= Convert::ToDouble(numericUpDown1->Value);
				 System::DateTime today=System::DateTime::Now;
				 System::TimeSpan duration(0,0,emin,0);
				 System::DateTime RealEndTime= today.Add(duration);
				 this->dateTimePicker1->Value = RealEndTime;
			 }

};
}


////			this->listBox1->SetSelected(0,true);
////            this->dateTimePicker1->Value = System::DateTime::Now;
