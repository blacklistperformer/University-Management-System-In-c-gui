//---------------------------------------------------------------------------

#include <fmx.h>
#include <fstream>
#pragma hdrstop

#include "AdminRegistrationForm.h"
#include "LoginForm.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TUserRegistrationForm *UserRegistrationForm;
//---------------------------------------------------------------------------
__fastcall TUserRegistrationForm::TUserRegistrationForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TUserRegistrationForm::RegisterButtonClick(TObject *Sender)
{
	fstream myFile;
	myFile.open("RegisteredUsers.txt", ios::app);
	if (myFile.is_open)
	{

		AnsiString username= UsernameBox->Text;
		AnsiString password= PasswordBox->Text;
		AnsiString name= NameBox->Text;
		AnsiString email= EmailBox->Text;
		AnsiString mobile= MobileNoBox->Text;

		myFile<<username<<","<<password<<","<<name<<","<<email<<","<<mobile<<"\n";

		myFile.close();
		this->Close();
	}
}
//---------------------------------------------------------------------------

void __fastcall TUserRegistrationForm::BackClick(TObject *Sender)
{
	UsernameBox->Text ="";
	PasswordBox->Text = "" ;
	NameBox->Text = "";
	EmailBox->Text = "";
	MobileNoBox->Text = "";

	this->Close();
    LoginPage-> Show();
}
//---------------------------------------------------------------------------

