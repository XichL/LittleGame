#pragma once
#include "AES.h"

#pragma comment(linker, "/subsystem:windows /entry:mainCRTStartup")

#define String2string(a) (const char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(a)).ToPointer();

using namespace std;

namespace MindRead {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void);

	private: int buttonClick;
			 String^ num9ButtonKey;//密碼鎖用的key
			 String^ cryptKey;//加解密文的key
			 int lastKeylength;//避免加解密文重複跑16碼
			 int CancelCount = 0;
			 int OKCount = 0;
			 String^ MoriNoYousei = "MoriNoYousei.xml";
			 bool bDoClean;
			
	private: System::Windows::Forms::PictureBox^ picBoxForN4;

	private: System::Windows::Forms::Button^  button_Clean;
	private: System::Windows::Forms::TextBox^  textBox_KeySet;

	private: System::Windows::Forms::TextBox^  textBox_text16;
	private: System::Windows::Forms::TextBox^  textBox_text128;
	private: System::Windows::Forms::Button^  button_16to128;






	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button_128to16;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox_forN2;
	private: System::Windows::Forms::Label^  label_key;
	private: System::Windows::Forms::Label^  label_cleanMsg;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button_Get128;
	private: System::Windows::Forms::Label^  label_keykey2;

	private: System::Windows::Forms::Label^  label_forN3;
	private: System::Windows::Forms::Button^  button;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog;


	private: System::Windows::Forms::Label^  label1;

	private: 

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button_n0;
	protected:
	private: System::Windows::Forms::Button^  button_n1;
	private: System::Windows::Forms::Button^  button_n2;
	private: System::Windows::Forms::Button^  button_n3;
	private: System::Windows::Forms::Button^  button_n4;
	private: System::Windows::Forms::Button^  button_n5;
	private: System::Windows::Forms::Button^  button_n6;
	private: System::Windows::Forms::Button^  button_n7;
	private: System::Windows::Forms::Button^  button_n8;
	private: System::Windows::Forms::Button^  button_n9;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->button_n0 = (gcnew System::Windows::Forms::Button());
			this->button_n1 = (gcnew System::Windows::Forms::Button());
			this->button_n2 = (gcnew System::Windows::Forms::Button());
			this->button_n3 = (gcnew System::Windows::Forms::Button());
			this->button_n4 = (gcnew System::Windows::Forms::Button());
			this->button_n5 = (gcnew System::Windows::Forms::Button());
			this->button_n6 = (gcnew System::Windows::Forms::Button());
			this->button_n7 = (gcnew System::Windows::Forms::Button());
			this->button_n8 = (gcnew System::Windows::Forms::Button());
			this->button_n9 = (gcnew System::Windows::Forms::Button());
			this->button_Clean = (gcnew System::Windows::Forms::Button());
			this->textBox_KeySet = (gcnew System::Windows::Forms::TextBox());
			this->textBox_text16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox_text128 = (gcnew System::Windows::Forms::TextBox());
			this->button_16to128 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button_128to16 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_forN2 = (gcnew System::Windows::Forms::TextBox());
			this->label_key = (gcnew System::Windows::Forms::Label());
			this->label_cleanMsg = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button_Get128 = (gcnew System::Windows::Forms::Button());
			this->label_keykey2 = (gcnew System::Windows::Forms::Label());
			this->label_forN3 = (gcnew System::Windows::Forms::Label());
			this->button = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->SuspendLayout();
			// 
			// button_n0
			// 
			this->button_n0->Location = System::Drawing::Point(24, 28);
			this->button_n0->Name = L"button_n0";
			this->button_n0->Size = System::Drawing::Size(31, 23);
			this->button_n0->TabIndex = 0;
			this->button_n0->Text = L"0";
			this->button_n0->UseVisualStyleBackColor = true;
			this->button_n0->Click += gcnew System::EventHandler(this, &MyForm::button_n0_Click);
			// 
			// button_n1
			// 
			this->button_n1->Location = System::Drawing::Point(61, 28);
			this->button_n1->Name = L"button_n1";
			this->button_n1->Size = System::Drawing::Size(31, 23);
			this->button_n1->TabIndex = 1;
			this->button_n1->Text = L"1";
			this->button_n1->UseVisualStyleBackColor = true;
			this->button_n1->Click += gcnew System::EventHandler(this, &MyForm::button_n1_Click);
			// 
			// button_n2
			// 
			this->button_n2->Location = System::Drawing::Point(98, 28);
			this->button_n2->Name = L"button_n2";
			this->button_n2->Size = System::Drawing::Size(31, 23);
			this->button_n2->TabIndex = 2;
			this->button_n2->Text = L"2";
			this->button_n2->UseVisualStyleBackColor = true;
			this->button_n2->Click += gcnew System::EventHandler(this, &MyForm::button_n2_Click);
			// 
			// button_n3
			// 
			this->button_n3->Location = System::Drawing::Point(135, 28);
			this->button_n3->Name = L"button_n3";
			this->button_n3->Size = System::Drawing::Size(31, 23);
			this->button_n3->TabIndex = 3;
			this->button_n3->Text = L"3";
			this->button_n3->UseVisualStyleBackColor = true;
			this->button_n3->Click += gcnew System::EventHandler(this, &MyForm::button_n3_Click);
			// 
			// button_n4
			// 
			this->button_n4->Location = System::Drawing::Point(172, 28);
			this->button_n4->Name = L"button_n4";
			this->button_n4->Size = System::Drawing::Size(31, 23);
			this->button_n4->TabIndex = 4;
			this->button_n4->Text = L"4";
			this->button_n4->UseVisualStyleBackColor = true;
			this->button_n4->Click += gcnew System::EventHandler(this, &MyForm::button_n4_Click);
			// 
			// button_n5
			// 
			this->button_n5->Location = System::Drawing::Point(209, 28);
			this->button_n5->Name = L"button_n5";
			this->button_n5->Size = System::Drawing::Size(31, 23);
			this->button_n5->TabIndex = 5;
			this->button_n5->Text = L"5";
			this->button_n5->UseVisualStyleBackColor = true;
			this->button_n5->Click += gcnew System::EventHandler(this, &MyForm::button_n5_Click);
			// 
			// button_n6
			// 
			this->button_n6->Location = System::Drawing::Point(246, 28);
			this->button_n6->Name = L"button_n6";
			this->button_n6->Size = System::Drawing::Size(31, 23);
			this->button_n6->TabIndex = 6;
			this->button_n6->Text = L"6";
			this->button_n6->UseVisualStyleBackColor = true;
			this->button_n6->Click += gcnew System::EventHandler(this, &MyForm::button_n6_Click);
			// 
			// button_n7
			// 
			this->button_n7->Location = System::Drawing::Point(283, 28);
			this->button_n7->Name = L"button_n7";
			this->button_n7->Size = System::Drawing::Size(31, 23);
			this->button_n7->TabIndex = 7;
			this->button_n7->Text = L"7";
			this->button_n7->UseVisualStyleBackColor = true;
			this->button_n7->Click += gcnew System::EventHandler(this, &MyForm::button_n7_Click);
			// 
			// button_n8
			// 
			this->button_n8->Location = System::Drawing::Point(320, 28);
			this->button_n8->Name = L"button_n8";
			this->button_n8->Size = System::Drawing::Size(31, 23);
			this->button_n8->TabIndex = 8;
			this->button_n8->Text = L"8";
			this->button_n8->UseVisualStyleBackColor = true;
			this->button_n8->Click += gcnew System::EventHandler(this, &MyForm::button_n8_Click);
			// 
			// button_n9
			// 
			this->button_n9->Location = System::Drawing::Point(357, 28);
			this->button_n9->Name = L"button_n9";
			this->button_n9->Size = System::Drawing::Size(31, 23);
			this->button_n9->TabIndex = 9;
			this->button_n9->Text = L"9";
			this->button_n9->UseVisualStyleBackColor = true;
			this->button_n9->Click += gcnew System::EventHandler(this, &MyForm::button_n9_Click);
			// 
			// button_Clean
			// 
			this->button_Clean->Location = System::Drawing::Point(246, 174);
			this->button_Clean->Name = L"button_Clean";
			this->button_Clean->Size = System::Drawing::Size(75, 23);
			this->button_Clean->TabIndex = 10;
			this->button_Clean->Text = L"Clean";
			this->button_Clean->UseVisualStyleBackColor = true;
			this->button_Clean->Click += gcnew System::EventHandler(this, &MyForm::button_Clean_Click);
			// 
			// textBox_KeySet
			// 
			this->textBox_KeySet->Location = System::Drawing::Point(24, 73);
			this->textBox_KeySet->Name = L"textBox_KeySet";
			this->textBox_KeySet->Size = System::Drawing::Size(105, 22);
			this->textBox_KeySet->TabIndex = 11;
			this->textBox_KeySet->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_KeySet_TextChanged);
			// 
			// textBox_text16
			// 
			this->textBox_text16->Location = System::Drawing::Point(24, 219);
			this->textBox_text16->Multiline = true;
			this->textBox_text16->Name = L"textBox_text16";
			this->textBox_text16->Size = System::Drawing::Size(142, 82);
			this->textBox_text16->TabIndex = 12;
			// 
			// textBox_text128
			// 
			this->textBox_text128->Location = System::Drawing::Point(230, 219);
			this->textBox_text128->Multiline = true;
			this->textBox_text128->Name = L"textBox_text128";
			this->textBox_text128->Size = System::Drawing::Size(142, 82);
			this->textBox_text128->TabIndex = 13;
			// 
			// button_16to128
			// 
			this->button_16to128->Location = System::Drawing::Point(172, 237);
			this->button_16to128->Name = L"button_16to128";
			this->button_16to128->Size = System::Drawing::Size(52, 23);
			this->button_16to128->TabIndex = 14;
			this->button_16to128->Text = L"→";
			this->button_16to128->UseVisualStyleBackColor = true;
			this->button_16to128->Click += gcnew System::EventHandler(this, &MyForm::button_16to128_Click_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(172, 263);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 12);
			this->label1->TabIndex = 15;
			this->label1->Text = L"←KEY→";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1, 219);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 12);
			this->label2->TabIndex = 16;
			this->label2->Text = L"16";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(201, 219);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 12);
			this->label3->TabIndex = 17;
			this->label3->Text = L"128";
			// 
			// button_128to16
			// 
			this->button_128to16->Location = System::Drawing::Point(172, 278);
			this->button_128to16->Name = L"button_128to16";
			this->button_128to16->Size = System::Drawing::Size(52, 23);
			this->button_128to16->TabIndex = 18;
			this->button_128to16->Text = L"←";
			this->button_128to16->UseVisualStyleBackColor = true;
			this->button_128to16->Click += gcnew System::EventHandler(this, &MyForm::button_128to16_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(152, 203);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 12);
			this->label4->TabIndex = 19;
			this->label4->Text = L"O2C6";
			// 
			// textBox_forN2
			// 
			this->textBox_forN2->Location = System::Drawing::Point(24, 103);
			this->textBox_forN2->Multiline = true;
			this->textBox_forN2->Name = L"textBox_forN2";
			this->textBox_forN2->Size = System::Drawing::Size(216, 94);
			this->textBox_forN2->TabIndex = 20;
			// 
			// label_key
			// 
			this->label_key->AutoSize = true;
			this->label_key->Location = System::Drawing::Point(24, 85);
			this->label_key->Name = L"label_key";
			this->label_key->Size = System::Drawing::Size(0, 12);
			this->label_key->TabIndex = 21;
			// 
			// label_cleanMsg
			// 
			this->label_cleanMsg->AutoSize = true;
			this->label_cleanMsg->Location = System::Drawing::Point(247, 156);
			this->label_cleanMsg->Name = L"label_cleanMsg";
			this->label_cleanMsg->Size = System::Drawing::Size(197, 12);
			this->label_cleanMsg->TabIndex = 22;
			this->label_cleanMsg->Text = L"Clean is mean \"Clean up\" and \"Remove\"";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(24, 56);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(85, 12);
			this->label5->TabIndex = 23;
			this->label5->Text = L"The keykey1 is : ";
			// 
			// button_Get128
			// 
			this->button_Get128->Location = System::Drawing::Point(30, 75);
			this->button_Get128->Name = L"button_Get128";
			this->button_Get128->Size = System::Drawing::Size(51, 20);
			this->button_Get128->TabIndex = 24;
			this->button_Get128->Text = L"Get128";
			this->button_Get128->UseVisualStyleBackColor = true;
			this->button_Get128->Click += gcnew System::EventHandler(this, &MyForm::button_Get128_Click);
			// 
			// label_keykey2
			// 
			this->label_keykey2->AutoSize = true;
			this->label_keykey2->Location = System::Drawing::Point(154, 73);
			this->label_keykey2->Name = L"label_keykey2";
			this->label_keykey2->Size = System::Drawing::Size(0, 12);
			this->label_keykey2->TabIndex = 25;
			// 
			// label_forN3
			// 
			this->label_forN3->AutoSize = true;
			this->label_forN3->Location = System::Drawing::Point(172, 73);
			this->label_forN3->Name = L"label_forN3";
			this->label_forN3->Size = System::Drawing::Size(116, 12);
			this->label_forN3->TabIndex = 27;
			this->label_forN3->Text = L"Click to get 128 binary.";
			this->label_forN3->Click += gcnew System::EventHandler(this, &MyForm::label_forN3_Click);
			// 
			// button
			// 
			this->button->Location = System::Drawing::Point(292, 65);
			this->button->Name = L"button";
			this->button->Size = System::Drawing::Size(44, 23);
			this->button->TabIndex = 28;
			this->button->Text = L"button";
			this->button->UseVisualStyleBackColor = true;
			this->button->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(26, 10);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(170, 12);
			this->label6->TabIndex = 29;
			this->label6->Text = L"In order (→) press and look ,please";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(465, 306);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox_text16);
			this->Controls->Add(this->label_forN3);
			this->Controls->Add(this->label_keykey2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label_cleanMsg);
			this->Controls->Add(this->label_key);
			this->Controls->Add(this->textBox_forN2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button_128to16);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_16to128);
			this->Controls->Add(this->textBox_text128);
			this->Controls->Add(this->textBox_KeySet);
			this->Controls->Add(this->button_Clean);
			this->Controls->Add(this->button_n9);
			this->Controls->Add(this->button_n8);
			this->Controls->Add(this->button_n7);
			this->Controls->Add(this->button_n6);
			this->Controls->Add(this->button_n5);
			this->Controls->Add(this->button_n4);
			this->Controls->Add(this->button_n3);
			this->Controls->Add(this->button_n2);
			this->Controls->Add(this->button_n1);
			this->Controls->Add(this->button_n0);
			this->Controls->Add(this->button_Get128);
			this->Controls->Add(this->button);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	/// <summary>
	/// 檢查n9k是否超過指定位數
	/// </summary>
	private: void num9ButtonKeyCheck(String^ n9Key);

	/// <summary>
	/// 使所有控制項看不到
	/// </summary>
	private: void disableAllView();

	/// <summary>
	/// 每個button共通的動作
	/// </summary>
	private: void CommonActive(int num);

	/// <summary>
	/// 儲存xml檔案用
	/// </summary>
	private: void xmlSave(String^ path ,String^ fileName ,String^ Content);

	/// <summary>
	/// MoriYousei Check
	/// </summary>
	private: System::Void MoriNoYouseiExist();

	/**
	*  将一个char字符数组转化为二进制
	*  存到一个 byte 数组中
	*/
	private: void charToByte(byte out[16], const char s[16])
	{
		for (int i = 0; i < 16; ++i)
			for (int j = 0; j < 8; ++j)
				out[i][j] = ((s[i] >> j) & 1);
	}

	/**
	*  将连续的128位分成16组，存到一个 byte 数组中
	*/
	private: void divideToByte(byte out[16], bitset<128>& data)
	{
		bitset<128> temp;
		for (int i = 0; i < 16; ++i)
		{
			temp = (data << 8 * i) >> 120;
			out[i] = temp.to_ulong();
		}
	}

	/**
	*  将16个 byte 合并成连续的128位
	*/
	private: bitset<128> mergeByte(byte in[16])
	{
		bitset<128> res;
		res.reset();  // 置0
		bitset<128> temp;
		for (int i = 0; i < 16; ++i)
		{
			temp = in[i].to_ulong();
			temp <<= 8 * (15 - i);
			res |= temp;
		}
		return res;
	}

	private: System::Windows::Forms::MouseEventArgs^ pos;
	private: System::Void Control_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{

		if (e->Button == System::Windows::Forms::MouseButtons::Left)
		{
			pos = e;
		}

	}

	Control^ ctrl;
	private: System::Void Control_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		ctrl = (Control^)sender;
		if (ctrl->Capture && e->Button == System::Windows::Forms::MouseButtons::Right)
		{
			ctrl->Top = e->Y + ctrl->Location.Y - pos->Y;
			ctrl->Left = e->X + ctrl->Location.X - pos->X;
		}
	}

	private: System::Void MyForm_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e)
	{
		if (ctrl != nullptr)
		{
			ctrl->Top = this->PointToClient(Point(e->X, e->Y)).Y;
			ctrl->Left = this->PointToClient(Point(e->X, e->Y)).X;
		}
	}

	private: System::Void button_n0_Click(System::Object^  sender, System::EventArgs^  e)
	{
		CommonActive(0);

	}
	private: System::Void button_n1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		CommonActive(1);
		//Save 128 binary.xml
	}
	private: System::Void button_n2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		CommonActive(2);
		if (this->bDoClean)
		{
			this->textBox_forN2->Text = "01010010001001101000111111111010100001101110001010000011001101101110011001001110100101101111000000101101000101100100101011000000";
		}
		else
		{
			this->textBox_forN2->Text = "0d1z0s1e00D10EAS00100110y13t20y0j" +
				"0kd1ggr111ui1l1ad11gfr1e01rww450q10R" +
				"aE0sdd0z0d1f1011gt1j0t0y0t1010m0n0o0f0R11" +
				"001101s101d678110AS0D1100g1s0011HY10310401ol0i1y5r1e0wq1z" +
				"1s11A0D0000010110a4ety10yerd001801rt1" +
				"ukio00hn1mD0x0Gd2Y10dr1ae011" +
				"00rhfd0d0906SW0";
		}

		//Remove letter which not 0 or 1 and out put 128 binary ,need N9 clean
	}
	private: System::Void button_n3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		CommonActive(3);
		//Label Click Save 128 binary.xml

		this->label_forN3->Text = "Click to get 128 binary.";
		this->button->Text = "button";
	}
	private: System::Void button_n4_Click(System::Object^  sender, System::EventArgs^  e)
	{
		CommonActive(4);
		//Save Hexadecimal ,need N5 to translate

		this->button->Text = "Click";
	}
	private: System::Void button_n5_Click(System::Object^  sender, System::EventArgs^  e)
	{
		CommonActive(5);
		//image Click Save get Hexadecimal.xml
		//Use Hexadecimal to get 128 binary.xml 
		this->label1->Text = "←H2B→";
		this->label3->Text = "2";
	}
	private: System::Void button_n6_Click(System::Object^  sender, System::EventArgs^  e)
	{
		CommonActive(6);
		//Save Morse.txt and translate MorseCode to 128 binary
	}
	private: System::Void button_n7_Click(System::Object^  sender, System::EventArgs^  e)
	{
		CommonActive(7);
		//Move button to show keykey
		this->label5->Text = "The keykey1 is : ";
		textBox_KeySet->Text = "RightClickToMove";
		textBox_KeySet->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MindRead::MyForm::Control_MouseMove);
		textBox_KeySet->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MindRead::MyForm::Control_MouseDown);
	}
	private: System::Void button_n8_Click(System::Object^  sender, System::EventArgs^  e)
	{
		CommonActive(8);
		//Press button 1~8 to Enter 16-Password and get 128 binary.xml
		label_keykey2->Text = "The keykey2 is [1][4][2][8][6][5][6][2][8][2][4][1][2][2][3][5]";
	}
	private: System::Void button_n9_Click(System::Object^  sender, System::EventArgs^  e)
	{
		CommonActive(9);
		this->textBox_forN2->Text = "";
		//Push-button Password ,save 128 binary txt and key is 16 button.
		//RAR Password
		this->label5->Text = "Point : (1 + 2-9 + 3 + 4 + 5 + 6-7-8 + 7 + 8 ; 8-9)-9";
		//Message say clean button ON
	}
	private: System::Void button_Clean_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->buttonClick == 9)
		{
			//Remove excess string
			if (this->textBox_forN2->Text->Length > 0)
			{
				String^ outString = "";
				for each(char c in this->textBox_forN2->Text)
				{
					if (c == '0')
					{
						outString += "0";
					}
					if (c == '1')
					{
						outString += "1";
					}
				}
				this->bDoClean = true;
				this->textBox_forN2->Text = outString;
			}
			else
			{
				//Clean Form key
				num9ButtonKey == "";
				System::Windows::Forms::MessageBox::Show(this,
					"Button_Key Cleared",
					"Title",
					MessageBoxButtons::OKCancel,
					MessageBoxIcon::Information);
			}
		}
		else
		{
			System::Windows::Forms::MessageBox::Show(this,
				"Message",
				"Title",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);
		}
	}

	private: System::Void button_16to128_Click_Click(System::Object^  sender, System::EventArgs^  e)
	{
		int nText16Size = this->textBox_text16->Text->Length;

		if (nText16Size == 16 && this->buttonClick != 5)
		{
			
		}
		else if (this->buttonClick == 5)
		{
			//Hexadecimal to Binary 

		}
		else
		{
			MoriNoYouseiExist();
		}
	}
	private: System::Void button_128to16_Click(System::Object^  sender, System::EventArgs^  e)
	{
		int nText128Size = this->textBox_text128->Text->Length;

		if (nText128Size == 128 && this->buttonClick != 5)
		{

		}
		else if (this->buttonClick == 5)
		{
			//Binary to Hexadecimal
			if (nText128Size == 128) {
				String^ result = "";
				for (int i = 0; i < nText128Size / 4; i++)
				{
					Int32 dicimal = Convert::ToInt32(this->textBox_text128->Text->Substring(4 * i, 4), 2);
					String^ hexadicimal = Convert::ToString(dicimal, 16);
					result += hexadicimal;
				}
				this->textBox_text16->Text = result;
			}
			else
			{
				System::Windows::Forms::MessageBox::Show(this,
					"Need 128 length",
					"Warning",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning);
			}
		}
		else
		{
			MoriNoYouseiExist();
		}
	}
	private: System::Void textBox_KeySet_TextChanged(System::Object^  sender, System::EventArgs^  e)
	{
		
		if (textBox_KeySet->Text->Length == 16 && this->lastKeylength < 16)
		{
			cryptKey = textBox_KeySet->Text;
			this->label_key->Text = "Complete ,now key is :" + cryptKey;
		}

		this->lastKeylength = textBox_KeySet->Text->Length;
	}

	private: System::Void label_forN3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//Save 128 binary xml
		this->saveFileDialog->FileName = "N03.xml";
		if (this->saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ N3Plain = "00011101000011010101101000001000111000000011100100000010000111111001011001001100001111111100011110110000000011010011100111110111";
			xmlSave("", this->saveFileDialog->FileName, N3Plain);
		}
	}

	private: System::Void button_Click(System::Object^  sender, System::EventArgs^  e)
	{

		if (this->buttonClick == 4)
		{
			System::Resources::ResourceManager^ myManager = gcnew System::Resources::ResourceManager("MindRead.Resource", this->GetType()->Assembly);
			System::Drawing::Image^ imgForN4 = static_cast<Drawing::Image^>(myManager->GetObject("d"));

			this->picBoxForN4->Image = imgForN4;
			this->Controls->Add(this->picBoxForN4);
			this->picBoxForN4->BringToFront();
			this->picBoxForN4->Click += gcnew System::EventHandler(this, &MindRead::MyForm::PictureBoxClick);
		}
		else if (this->buttonClick == 5)
		{
			System::Resources::ResourceManager^ myManager = gcnew System::Resources::ResourceManager("MindRead.Resource", this->GetType()->Assembly);
			System::Drawing::Image^ imgForN4 = static_cast<Drawing::Image^>(myManager->GetObject("d"));

			this->picBoxForN4->Image = imgForN4;
			this->Controls->Add(this->picBoxForN4);
			this->picBoxForN4->Location = System::Drawing::Point(216, 65);
			this->picBoxForN4->BringToFront();
			this->picBoxForN4->Click += gcnew System::EventHandler(this, &MindRead::MyForm::PictureBoxClick);

			this->saveFileDialog->FileName = "N05.txt";
			if (this->saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				String^ N1Plain = "01000001000011100001110110000100011000011100001010110110010011100001001101100010000011110111000011111011111010000101011011001100";
				xmlSave("", this->saveFileDialog->FileName, N1Plain);
			}
		}
		else
		{
			System::Windows::Forms::MessageBox::Show(this,
				"Lalala",
				"Title5",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
		}
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		this->buttonClick = 0;

		this->picBoxForN4 = gcnew System::Windows::Forms::PictureBox();
		this->picBoxForN4->Location = System::Drawing::Point(292, 65);
		this->picBoxForN4->Size = System::Drawing::Size(76, 74);
		this->picBoxForN4->TabIndex = 0;
		this->picBoxForN4->TabStop = false;

		this->saveFileDialog->Title = "Save";
		this->saveFileDialog->Filter = "XML|*.xml";
		this->saveFileDialog->InitialDirectory = System::IO::Path::GetDirectoryName(Application::ExecutablePath);

		this->CommonActive(this->buttonClick);

		
	}

	private: System::Void PictureBoxClick(System::Object^  sender, System::EventArgs^  e)
	{
		//Save 128 binary xml
		System::Windows::Forms::MessageBox::Show(this,
			"Img Click Save 128 binary",
			"Title6",
			MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
		//Save 32bit Hexadecimal.txt
		if (this->buttonClick == 4)
		{
			this->saveFileDialog->FileName = "N04.txt";
			if (this->saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				String^ N4Plain = "32bit Hexadecimal";
				xmlSave("", this->saveFileDialog->FileName, N4Plain);
			}
		}
	}
	private: System::Void button_Get128_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (this->buttonClick == 1)
		{
			this->saveFileDialog->FileName = "N01.xml";
			if (this->saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				String^ N1Plain = "01000001000011100001110110000100011000011100001010110110010011100001001101100010000011110111000011111011111010000101011011001100";
				xmlSave("", this->saveFileDialog->FileName, N1Plain);
			}
		}
		else if (this->buttonClick == 7)
		{

		}
	}
};
}
