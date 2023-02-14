// //---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "HomePage.h"
#include "StudentRegistration.h"
#include "SearchStudent.h"
#include "ShowStudents.h"
#include "LoginForm.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
THomePageForm *HomePageForm;
//---------------------------------------------------------------------------
__fastcall THomePageForm::THomePageForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall THomePageForm::SearchStudentClick(TObject *Sender)
{
	SearchStudentForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall THomePageForm::ShowStudentsClick(TObject *Sender)
{
	ShowStudentsForm->Show();
}
//---------------------------------------------------------------------------

void __fastcall THomePageForm::LogOutClick(TObject *Sender)
{
	this->Close();
   //	clearabc();
}
//---------------------------------------------------------------------------






void __fastcall THomePageForm::AddStudentsClick(TObject *Sender)
{
    StudentRegistrationForm->Show();
}
//---------------------------------------------------------------------------

