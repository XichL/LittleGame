#pragma once
#include "MyForm.h"

using namespace MindRead;

[STAThread]
int main()
{

	try
	{
		Application::Run(gcnew MyForm());
	}
	catch (Exception^ e)
	{
		MessageBox::Show(e->ToString());
	}
	return 0;
}

MindRead::MyForm::MyForm(void)
{

	InitializeComponent();
	//
	//TODO:  在此加入建構函式程式碼
	this->num9ButtonKey = gcnew String("");
	this->bDoClean = false;
	//
}

void MindRead::MyForm::num9ButtonKeyCheck(String ^ n9Key)
{
	if (n9Key == "1428656282412235")
	{
		System::Windows::Forms::MessageBox::Show(this,
			"Correct key and get xml",
			"Title",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information);
	}
	else if (n9Key->Length >= 16)
	{
		n9Key = "";
	}
}

void MindRead::MyForm::disableAllView()
{
	for each(Control^ ctrl in this->Controls)
	{
		if (ctrl->Name == "button_n0" || ctrl->Name == "button_n1" || ctrl->Name == "button_n2" || ctrl->Name == "button_n3" ||
			ctrl->Name == "button_n4" || ctrl->Name == "button_n5" || ctrl->Name == "button_n6" || ctrl->Name == "button_n7" ||
			ctrl->Name == "button_n8" || ctrl->Name == "button_n9" || ctrl->Name == "button_Clean" || ctrl->Name == "label6")
		{
			continue;
		}
		ctrl->Visible = false;
	}
}

void MindRead::MyForm::CommonActive(int num)
{
	this->buttonClick = num;
	num9ButtonKey += Convert::ToString(this->buttonClick);
	num9ButtonKeyCheck(num9ButtonKey);
	if (this->buttonClick != 4)
	{
		this->Controls->Remove(this->picBoxForN4);
		//this->picBoxForN4->Image = __nullptr;
	}
	this->label1->Text = "←KEY→";
	this->label3->Text = "128";
	this->disableAllView();

	switch (num)
	{
	case 0:
		this->label1->Visible = true;
		this->label2->Visible = true;
		this->label3->Visible = true;
		this->label4->Visible = true;
		this->button_16to128->Visible = true;
		this->button_128to16->Visible = true;
		this->textBox_text16->Visible = true;
		this->textBox_text128->Visible = true;
		break;
	case 1:
		this->button_Get128->Visible = true;
		break;
	case 2:
		this->textBox_forN2->Visible = true;
		break;
	case 3:
		this->label_forN3->Visible = true;
		this->button->Visible = true;
		break;
	case 4:
		this->button->Visible = true;
		break;
	case 5:
		this->button->Visible = true;
		this->label2->Visible = true;
		this->label3->Visible = true;
		this->textBox_text16->Visible = true;
		this->textBox_text128->Visible = true;
		this->button_128to16->Visible = true;
		this->button_16to128->Visible = true;
		this->label1->Visible = true;
		break;
	case 6:
		break;
	case 7:
		this->label5->Visible = true;
		this->textBox_KeySet->Visible = true;
		this->button_Get128->Visible = true;
		break;
	case 8:
		this->label_keykey2->Visible = true;
		break;
	case 9:
		this->textBox_forN2->Visible = true;
		this->label5->Visible = true;
		break;
	}
}

void MindRead::MyForm::xmlSave(String ^ path, String ^ fileName, String ^ Content)
{
	String^ s;
	if (path == "")
	{
		s = fileName;
	}
	else
	{
		s = path + "\\" + fileName;
	}
	

	System::IO::FileStream^ fs;
	System::Text::ASCIIEncoding^ asciiEncoding = gcnew System::Text::ASCIIEncoding;

	if (!System::IO::File::Exists(s))
	{
		fs = System::IO::File::Create(s);

		String^ writePW = Content;
		fs->Write(asciiEncoding->GetBytes(writePW), 0, asciiEncoding->GetBytes(writePW)->Length);
		fs->Close();
	}
	else
	{
		fs = gcnew System::IO::FileStream(s, System::IO::FileMode::Create);

		String^ writePW = Content;
		fs->Write(asciiEncoding->GetBytes(writePW), 0, asciiEncoding->GetBytes(writePW)->Length);
		fs->Close();
	}
}

System::Void MindRead::MyForm::MoriNoYouseiExist()
{
	{
		System::IO::FileStream^ fs;
		System::Text::ASCIIEncoding^ asciiEncoding = gcnew System::Text::ASCIIEncoding;

		if (System::IO::File::Exists(MoriNoYousei))
		{
			String^ showMessage = "Your already get Yousei's doucment ,ByeBye.";
			System::Windows::Forms::MessageBox::Show(this,
				showMessage,
				"Elf",
				MessageBoxButtons::OK,
				MessageBoxIcon::None);
		}
		else
		{
			this->CancelCount = 0;
			this->OKCount = 0;
			String^ showMessage = "Do you see 16 or 128 beside?";
			while (1)
			{
				if (System::Windows::Forms::MessageBox::Show(this,
					showMessage,
					"Elf",
					MessageBoxButtons::OKCancel,
					MessageBoxIcon::Error) == System::Windows::Forms::DialogResult::Cancel)
				{
					this->CancelCount++;
					if (showMessage == "Good boy")
					{
						showMessage = "Hm...I say press 'OK'!!!";
					}
					else if (showMessage == "Hm...I say press 'OK'!!!")
					{
						showMessage = "What's  your problem.";
					}
					else if (showMessage == "What's  your problem.")
					{
						showMessage = "Stop it!";
					}
					else if (showMessage == "Stop it!")
					{
						showMessage = "Stop!!!";
					}
					else if (showMessage == "Stop!!!")
					{
						showMessage = "If you press cancel again ,program will be closed.";
					}
					else if (showMessage == "If you press cancel again ,program will be closed.")
					{
						this->~MyForm();
					}
					else
					{
						showMessage = "Press OK ,please.";
					}
				}
				else
				{
					this->OKCount++;
					if (showMessage == "Do you see 16 beside?" || showMessage == "Good boy")
					{
						break;
					}
					else if (this->CancelCount == 6 && this->OKCount == 2)
					{
						//Save xml for load ,and inside have MoriNoYousei URL
						String^ MoriNoYouseiContent = "YouseiKey is : deS83kd2D4S2d9gc";
						MoriNoYouseiContent += Environment::NewLine;
						MoriNoYouseiContent += "YouseiPlain is : 01010010101010011111110111001010000110101000100100101101101011101101011000110010010111000111101011101100100110100100011111000101";
						MoriNoYouseiContent += Environment::NewLine;
						MoriNoYouseiContent += "Yousei in https://mega.nz/#!Plain!Dc1WjaDXIezF6NyVtW7kUBmdP1pJpmSa2UHHds_TfGI";
						xmlSave("", MoriNoYousei, MoriNoYouseiContent);
						break;
					}
					else
					{
						showMessage = "Good boy";
					}
				}

			}
		}
	}
}
