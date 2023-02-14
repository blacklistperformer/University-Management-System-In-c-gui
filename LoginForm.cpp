//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>
#include <windows.h>

#include "LoginForm.h"
#include "HomePage.h"
#include "AdminRegistrationForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"

using namespace std;

TLoginPage *LoginPage;
//---------------------------------------------------------------------------
__fastcall TLoginPage::TLoginPage(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TLoginPage::RegisterNewUserNavigationButtonClick(TObject *Sender)

{
	  UserRegistrationForm->Show();

}
//---------------------------------------------------------------------------

vector<string> parseCommaDelimitedString(string line)
{
	vector<string> result;
	stringstream s_stream(line);
	while (s_stream.good())
		{
			string substr;
			getline(s_stream, substr,',');
			result.push_back(substr);
		}
		return result;

}





void __fastcall TLoginPage::LoginButtonClick(TObject *Sender)
{
    messageLabel->Text="";
	fstream myFile;
	myFile.open("RegisteredUsers.txt", ios::in);

	if(myFile.is_open()){
		  string line;

		  while(getline(myFile, line))
		  {
			vector<string> parsedLine = parseCommaDelimitedString(line);
			const char* username= parsedLine.at(0).c_str();

			AnsiString editUsername= UsernameBox-> Text;

//			if(editUsername == "" || " " || "  ")
//			{
//				break
//            }

			const char* usernameString=editUsername.c_str();

			if(strcmp(username,usernameString)==0)
			{
				const char* password= parsedLine.at(1).c_str();

				AnsiString editPassword=PasswordBox->Text;
				const char* passwordString=editPassword.c_str();

				if (strcmp(password,passwordString)==0)
				{
					messageLabel->Text="Success";
					Sleep(5);
					HomePageForm->Show();
				  //	LoginPage->Close();
				  // this->Close();
					messageLabel->Text="";

				}
				else
					messageLabel->Text="Wrong password try again";
			}
			else
                	messageLabel->Text="Wrong username try again";
				 //this->Close();
					 //	LoginPage->Close();

		  }
	}

		 UsernameBox-> Text = "";
         PasswordBox->Text = "" ;
       //  messageLabel->Text="";

}

//---------------------------------------------------------------------------


