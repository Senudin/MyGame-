#pragma once
#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <ctype.h>
#include <ctime>


namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
		String^ username = " ";
		String^ a = " ";
		String^ b = " ";
		String^ c = " ";
		String^ d = " ";
		String^ s = " ";
		String^ t = " ";
		String^ p = " ";
		String^ c1 = " ";
		String^ v1;
		String^ e1;
		char x;
		int trip, v, battle, battle1, battle2;
		int	battle3, f;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Panel^ first_panel;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::RichTextBox^ richTextBox4;
	private: System::Windows::Forms::Button^ button3;


	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->first_panel = (gcnew System::Windows::Forms::Panel());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox4 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->first_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(404, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"MyGame+";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Location = System::Drawing::Point(172, 114);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(558, 117);
			this->richTextBox1->TabIndex = 3;
			this->richTextBox1->Text = L"This is a simple game in c++, hope you\'ll enjoy it.\nFor start enter your name, an"
				L"d two numbers.First in range from 1 to 4.Second in range from 1 to 2.\n";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBox1->Location = System::Drawing::Point(220, 241);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(386, 241);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(588, 241);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// first_panel
			// 
			this->first_panel->Controls->Add(this->richTextBox2);
			this->first_panel->Controls->Add(this->label2);
			this->first_panel->Controls->Add(this->pictureBox2);
			this->first_panel->Controls->Add(this->label1);
			this->first_panel->Controls->Add(this->pictureBox1);
			this->first_panel->Location = System::Drawing::Point(81, 292);
			this->first_panel->Name = L"first_panel";
			this->first_panel->Size = System::Drawing::Size(826, 284);
			this->first_panel->TabIndex = 7;
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(336, 73);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(155, 48);
			this->richTextBox2->TabIndex = 7;
			this->richTextBox2->Text = L"";
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
			this->pictureBox2->BackColor = System::Drawing::Color::Lavender;
			this->pictureBox2->Location = System::Drawing::Point(531, 52);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(233, 199);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
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
			this->pictureBox1->BackColor = System::Drawing::Color::Lavender;
			this->pictureBox1->Location = System::Drawing::Point(65, 52);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(233, 199);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(770, 163);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Trick or treat";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(770, 114);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(169, 245);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Name";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(336, 245);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"No1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(529, 247);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(27, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"No2";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->richTextBox4);
			this->panel1->Controls->Add(this->richTextBox3);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Location = System::Drawing::Point(81, 292);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(848, 300);
			this->panel1->TabIndex = 11;
			// 
			// richTextBox4
			// 
			this->richTextBox4->Location = System::Drawing::Point(327, 113);
			this->richTextBox4->Name = L"richTextBox4";
			this->richTextBox4->Size = System::Drawing::Size(169, 138);
			this->richTextBox4->TabIndex = 3;
			this->richTextBox4->Text = L"";
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(178, 4);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(448, 63);
			this->richTextBox3->TabIndex = 2;
			this->richTextBox3->Text = L"";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::PaleTurquoise;
			this->pictureBox4->Location = System::Drawing::Point(519, 83);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(251, 178);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 1;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::PaleTurquoise;
			this->pictureBox3->Location = System::Drawing::Point(46, 83);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(264, 178);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(770, 207);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Play again";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Aqua;
			this->ClientSize = System::Drawing::Size(1005, 609);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->first_panel);
			this->Controls->Add(this->panel1);
			this->Name = L"Form1";
			this->Text = L"MyGame+";
			this->first_panel->ResumeLayout(false);
			this->first_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		username = textBox1->Text;
		

		//MessageBox::Show(username + " Let us go to a trip shall we? We will enter a first character of your name.");//
		a = "USA";
		b = "EUROPE";
		c = "AFRICA";
		d = "LATIN AMERICA";

				srand(time(0));

				int Random_number = rand() % 4 + 1;
				int Random_number1 = rand() % 4 + 1;

				richTextBox2->Text = "Let us see how your jurney ends.\n Press the trick or treat button.";

				if (Random_number == Random_number1 && Random_number1 < 4) {
					Random_number1++;
				}
				else if (Random_number == Random_number1 && Random_number1 == 4) {
					Random_number1--;
				}
				if (Random_number == 1) {
					pictureBox1->Image = Image::FromFile (Application::StartupPath+"\\Pictures\\" + a + ".jpg");
				}
				else if (Random_number == 2) {
					pictureBox1->Image = Image::FromFile (Application::StartupPath + "\\Pictures\\" + b + ".jpg");
				}
				else if (Random_number == 3) {
					pictureBox1->Image = Image::FromFile (Application::StartupPath + "\\Pictures\\" + c + ".jpg");
				}
				else if (Random_number == 4) {
					pictureBox1->Image = Image::FromFile (Application::StartupPath + "\\Pictures\\" + d + ".jpg");
				}
				if (Random_number1 == 1) {
					pictureBox2->Image = Image::FromFile (Application::StartupPath + "\\Pictures\\" + a + ".jpg");
				}
				else if (Random_number1 == 2) {
					pictureBox2->Image = Image::FromFile (Application::StartupPath + "\\Pictures\\" + b + ".jpg");
				}
				else if (Random_number1 == 3) {
					pictureBox2->Image = Image::FromFile (Application::StartupPath + "\\Pictures\\" + c + ".jpg");
				}
				else if (Random_number1 == 4) {
					pictureBox2->Image = Image::FromFile (Application::StartupPath + "\\Pictures\\" + d + ".jpg");
				}

				s = "Scorpion";
				t = "train";
				c1 = "car";
				p = "Plain";

				v1 = textBox2->Text;
				v = Convert::ToInt32(v1);
	           

				e1 = textBox3->Text;
				f = Convert::ToInt32(e1);

				switch (v) {
				case 1:
					richTextBox3->Text = "Scorpion has bitten you!\nYou have four houres to find a hospital, there is one nearby.\nYou have to decide to wait and call the hospital or to go to hospital? 1 or 2?\nEnter second number:\n";
					pictureBox3->Image = Image::FromFile(Application::StartupPath + "\\Pictures\\" + s + ".jpg");
					battle = f;
					{
						switch (battle) {
						case 1:
							richTextBox4->Text = "You decided to go to hospital you did make it ;).\n";
							pictureBox4->Image = Image::FromFile(Application::StartupPath + "\\Pictures\\v1.jpg");
							break;
						case 2:
							richTextBox4->Text = "You decided to wait them to come but it pass houres before they come and you pass out.\nFortunattly they come in the last moment to save you\n";
							pictureBox4->Image = Image::FromFile(Application::StartupPath + "\\Pictures\\v2.jpg");
							break;
						}
						break;
					}
				case 2:
					richTextBox3->Text = "Your plain felt into storm!\nThe pilot and his team asure you that the nearby airport will accepte your request for landing.\nThe crew starts to panic. Eventually crew fall apart. In which crew would you be? 1 or 2?\n";
					pictureBox3->Image = Image::FromFile(Application::StartupPath + "\\Pictures\\" + p + ".jpg");
					battle1 = f;
					{
						switch (battle1) {
						case 1:
							richTextBox4->Text = "You went into first part of crew that decides to jump out of plain.\nDon't worry you did survive with some broken bones :(.\n";
							pictureBox4->Image = Image::FromFile(Application::StartupPath + "\\Pictures\\v3.jpg");
							break;
						case 2:
							richTextBox4->Text = "You went into second group that decides to stay in plain.\nWell that was a smart choice because you did get to the airport ;).\n";
							pictureBox4->Image = Image::FromFile(Application::StartupPath + "\\Pictures\\v4.jpg");
							break;
						}
						break;
					}
				case 3:
					richTextBox3->Text = "Your car went out of fuel on highway between Berlin and Warclawa!\nYou find out in your phone in google maps that there is a nearby a fuel station.\nYou start to walk. After a mile you find out a bridge that is closed. You have two tracks that leads from the bridge.\nWhich way will you choose 1 or 2?\n";
					pictureBox3->Image = Image::FromFile(Application::StartupPath + "\\Pictures\\" + c1 + ".jpg");
					battle2 = f;
					{
						switch (battle2) {
						case 1:
							richTextBox4->Text = "After you have choose first track you get lost in the wood. Sorry :(.\n";
							pictureBox4->Image = Image::FromFile(Application::StartupPath + "\\Pictures\\v5.jpg");
							break;
						case 2:
							richTextBox4->Text = "After you have choose second track, after a few miles you have found the gas station. See yout effort did work out well ;).\n";
							pictureBox4->Image = Image::FromFile(Application::StartupPath + "\\Pictures\\v6.jpg");
							break;
						}
						break;
					}
				case 4:
					richTextBox3->Text = "Your train has stoped somewhere in Sibir\nYou start to hear some weird noise that come from outdoor.Passengers start to panic.\nThe passengers decided that it's up to you to check it out.You have two ways, which way will you choose 1 or 2?\n";
					pictureBox3->Image = Image::FromFile(Application::StartupPath + "\\Pictures\\" + t + ".jpg");
					battle3 = f;
					{
						switch (battle3) {
						case 1:
							richTextBox4->Text = "Your train felt into snow storm, so you're hearing wind in the branches. Don't worry ;).\n";
							pictureBox4->Image = Image::FromFile(Application::StartupPath + "\\Pictures\\v7.jpg");
							break;
						case 2:
							richTextBox4->Text = "Your train felt into ambush of wearwolfs be aweare that you have no way out. Sorry :(.\n";
							pictureBox4->Image = Image::FromFile(Application::StartupPath + "\\Pictures\\v8.jpg");
							break;
						}
						break;
					}
				}
	
			}
	
		   
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

			first_panel->Hide();
			panel1->Visible = true;

	}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		panel1->Hide();
		first_panel->Visible = true;

}
};
}

