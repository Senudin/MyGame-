#pragma once
#include <iostream>

namespace MyGame_ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyGame
	/// </summary>
	public ref class MyGame : public System::Windows::Forms::Form
	{
	public:
		MyGame(void)
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
		~MyGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ first_panel;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;

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
			this->first_panel = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->first_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// first_panel
			// 
			this->first_panel->Controls->Add(this->button1);
			this->first_panel->Controls->Add(this->label2);
			this->first_panel->Controls->Add(this->pictureBox2);
			this->first_panel->Controls->Add(this->label1);
			this->first_panel->Controls->Add(this->pictureBox1);
			this->first_panel->Location = System::Drawing::Point(119, 270);
			this->first_panel->Name = L"first_panel";
			this->first_panel->Size = System::Drawing::Size(826, 284);
			this->first_panel->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(366, 228);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyGame::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(401, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Your trip destination is:";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(531, 52);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(233, 199);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(21, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"You are from:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(65, 52);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(233, 199);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(481, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 20);
			this->label3->TabIndex = 1;
			this->label3->Text = L"MyGame+";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Location = System::Drawing::Point(255, 96);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(558, 117);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"Enter your name and two numbers.";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox1->Location = System::Drawing::Point(255, 230);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->Text = L"Name";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(485, 230);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"Number 1";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(713, 230);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 5;
			this->textBox3->Text = L"Number 2";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MyGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Aqua;
			this->ClientSize = System::Drawing::Size(1072, 605);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->first_panel);
			this->Name = L"MyGame";
			this->Text = L"MyGame";
			this->first_panel->ResumeLayout(false);
			this->first_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ username = " ";
		String^ a = " ";
		String^ b = " ";
		String^ c = " ";
		String^ d = " ";
		String^ v1 = " ";
		String^ e1 = " ";
		char x;
		int trip, v, battle, battle1, battle2;
		int	battle3, f;
		std::cout << "This is a simple game in c++, hope you'll enjoy it.\nFor start enter your name, and two numbers.\nFirst in range from 1 to 4.\nSecond in range from 1 to 2.\n";
		std::cout << "Enter your name:\n";
		textBox1->Text = username;
		std::cout << "Enter first number:\n";
		textBox2->Text = v1;
		v = Convert::ToInt32(v1);
		std::cout << "Enter second number:\n";
		textBox3->Text = e1;
		f = Convert::ToInt32(e1);
		MessageBox::Show(username + " Let us go to a trip shall we? We will enter a first character of your name.");
		a = "USA";
		b = "EUROPE";
		c = "AFRICA";
		d = "LATIN AMERICA";
		for (int x = 0; x < 1; x++) {

			if (isalpha(username[x]))
			{

				srand(time(0));

				int Random_number = rand() % 4 + 1;
				int Random_number1 = rand() % 4 + 1;

				if (Random_number == Random_number1 && Random_number1 < 4) {
					Random_number1++;
				}
				else if (Random_number == Random_number1 && Random_number1 == 4) {
					Random_number1--;
				}
				if (Random_number == 1) {
					pictureBox1->Image = gcnew Bitmap("C:\\Users\pc\Pictures" + a + ".jpg");
				}
				else if (Random_number == 2) {
					pictureBox1->Image = gcnew Bitmap("C:\\Users\pc\Pictures" + b + ".jpg");
				}
				else if (Random_number == 3) {
					pictureBox1->Image = gcnew Bitmap("C:\\Users\pc\Pictures" + c + ".jpg");
				}
				else if (Random_number == 4) {
					pictureBox1->Image = gcnew Bitmap("C:\\Users\pc\Pictures" + d + ".jpg");
				}
				if (Random_number1 == 1) {
					pictureBox2->Image = gcnew Bitmap("C:\\Users\pc\Pictures" + a + ".jpg");
				}
				else if (Random_number1 == 2) {
					pictureBox2->Image = gcnew Bitmap("C:\\Users\pc\Pictures" + b + ".jpg");
				}
				else if (Random_number1 == 3) {
					pictureBox2->Image = gcnew Bitmap("C:\\Users\pc\Pictures" + c + ".jpg");
				}
				else if (Random_number1 == 4) {
					pictureBox2->Image = gcnew Bitmap("C:\\Users\pc\Pictures" + d + ".jpg");
				}
			}

		};
	};
	};
}