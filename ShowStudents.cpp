//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "ShowStudents.h"
#include "HomePage.h"
#include <vcl.h>
#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>


//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TShowStudentsForm *ShowStudentsForm;
//---------------------------------------------------------------------------

__fastcall TShowStudentsForm::TShowStudentsForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

struct CSVData {
    int id;
    AnsiString name;
    double price;
};


void __fastcall TShowStudentsForm::BackClick(TObject *Sender)
{
	this->Close();
	HomePageForm->Show();
}
//---------------------------------------------------------------------------


