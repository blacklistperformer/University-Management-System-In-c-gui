// ---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop
#include<iostream>
#include <string>
#include <sstream>
#include "SearchStudent.h"
#include "HomePage.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
using namespace std;
TSearchStudentForm *SearchStudentForm;

// ---------------------------------------------------------------------------
__fastcall TSearchStudentForm::TSearchStudentForm(TComponent* Owner)
	: TForm(Owner) {
}
// ---------------------------------------------------------------------------

AnsiString name, course1, registration, branch1, year;
char s;

void __fastcall TSearchStudentForm::BackClick(TObject *Sender) {

	NameBox->Text = "";
	RegistrationBox->Text = "";
	YearBox->Text = "";

	BTech->IsChecked = false;
	MTech->IsChecked = false;
	PhD->IsChecked = false;
	Year->IsChecked = false;
	Branch->IsChecked = false;
	Course->IsChecked = false;
	Name->IsChecked = false;
	CSE->IsChecked = false;
	ECE->IsChecked = false;

	SQLQuery1->Close();
	SQLConnection1->Close();
	this->Close();
	HomePageForm->Show();

}
// ---------------------------------------------------------------------------



void __fastcall TSearchStudentForm::NameChange(TObject *Sender)
{
		s = 'n';
}
//---------------------------------------------------------------------------

void __fastcall TSearchStudentForm::RegistrationChange(TObject *Sender)
{
		s = 'r';
}
//---------------------------------------------------------------------------

void __fastcall TSearchStudentForm::BranchChange(TObject *Sender)
{
		s = 'b';
}
//---------------------------------------------------------------------------


void __fastcall TSearchStudentForm::CourseChange(TObject *Sender)
{
		s = 'c';
}
//---------------------------------------------------------------------------

void __fastcall TSearchStudentForm::YearChange(TObject *Sender)
{
		s = 'y';
}
//---------------------------------------------------------------------------

void __fastcall TSearchStudentForm::CSEChange(TObject *Sender)
{
		branch1 ="CSE"   ;
}
//---------------------------------------------------------------------------

void __fastcall TSearchStudentForm::ECEChange(TObject *Sender)
{
		branch1 ="ECE" ;
}
//---------------------------------------------------------------------------

void __fastcall TSearchStudentForm::BTechChange(TObject *Sender)
{
		course1 = "B.Tech";
}
//---------------------------------------------------------------------------

void __fastcall TSearchStudentForm::MTechChange(TObject *Sender)
{
		course1 = "M.Tech";
}
//---------------------------------------------------------------------------

void __fastcall TSearchStudentForm::PhDChange(TObject *Sender)
{
		course1 = "Ph.D";
}
//---------------------------------------------------------------------------


void __fastcall TSearchStudentForm::SearchClick(TObject *Sender)
{

SQLConnection1->Params->Values["Database"] = "localhost:C:\\Users\\Avadh\\Desktop\\DeleteMe\\STUDENTS.ib";
SQLConnection1->Open() ;
SQLConnection1->BeginTransaction();

SQLQuery1->SQL->Clear();
SQLQuery1->SQL->Add("SELECT * FROM STUDENTS");

stringstream ss;
AnsiString str;
label:
switch(s)
{
	case 'n':
		name = NameBox->Text ;
		ss<<"WHERE name = '"<<name<<"'";
		break;

	case 'r':
		registration = RegistrationBox->Text;
		ss<<"WHERE REGISTRATION = '"<<registration<<"'";
		break;

	case 'b':
		ss<<"WHERE BRANCH = '"<<branch1<<"'";
		break;

	case 'c':
		ss<<"WHERE COURSE = '"<<course1<<"'";
		break;
	case 'y':
        year = YearBox->Text;
		ss<<"WHERE YEAR_ADMISSION = '"<<year<<"'";
		break;
	default:
		ShowMessage("Select a feature to search");
		goto label;
		break;
}

ss>>str;
SQLQuery1->SQL->Add(str);
ShowMessage(str);
SQLQuery1->Prepared;
SQLQuery1->Open();
SQLQuery1->First();


//neearjs code
//no error till now... all the graphics element have now been optimized. It 7 25 am and everything is fumcked
//
//	//Clear the StringGrid1
//	StringGrid1->RowCount = 1;
//	StringGrid1->SelectColumn(11);
//
//	//StringGrid1->ColCount = SQLQuery1->FieldCount;
//	//StringGrid1->Coloumns->Clear();
//
//
//
//	// Set the column captions
//	for (int i = 0; i < SQLQuery1->FieldCount; i++) {
//		StringGrid1->Cells[i][0] = SQLQuery1->Fields->Fields[i]->FieldName;
//	}
//
//	// Loop through the retrieved data and add it to the TStringGrid
//	while (!SQLQuery1->Eof) {
//		StringGrid1->RowCount++;
//		for (int i = 0; i < SQLQuery1->FieldCount; i++) {
//			StringGrid1->Cells[i][StringGrid1->RowCount - 1] = SQLQuery1->Fields->Fields[i]->AsString;
//		}
//		SQLQuery1->Next();
//	}


	NameBox->Text = "";
	RegistrationBox->Text = "";
	YearBox->Text = "";

	BTech->IsChecked = false;
	MTech->IsChecked = false;
	PhD->IsChecked = false;
	Year->IsChecked = false;
	Branch->IsChecked = false;
	Course->IsChecked = false;
	Name->IsChecked = false;
	CSE->IsChecked = false;
	ECE->IsChecked = false;

}
//---------------------------------------------------------------------------


