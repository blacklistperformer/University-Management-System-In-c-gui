//#include <c:/program files/embarcadero/interbase/sdk/include/ibase.h>
#include <iostream>
#include <string>
//#include <ibase.h>
#include <fmx.h>
#pragma hdrstop
#include <vector>
#include <fstream>
#include <sstream>
#include <istream>
#include "StudentRegistration.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
#pragma resource ("*.Windows.fmx", _PLAT_MSWINDOWS)
#pragma resource ("*.Surface.fmx", _PLAT_MSWINDOWS)

using namespace std;

#define MAX_LENGTH 300

AnsiString DATABASE = "localhost:C:\\DeleteMe\\STUDENTS.ib";
AnsiString USERNAME = "sysdba";
AnsiString PASSWORD = "masterkey";

TStudentRegistrationForm *StudentRegistrationForm;

// ---------------------------------------------------------------------------
__fastcall TStudentRegistrationForm::TStudentRegistrationForm(TComponent* Owner)
	: TForm(Owner) {
}
// ---------------------------------------------------------------------------



//TSQLConnection SQLConnection1.Open;
//class Student {
//public:
//	AnsiString name, phone, email, mother, father, address, course, branch,
//		registration, gender;
//	int year_admission;
//
//	Student() {
//		name = "name";
//		phone = "6969696969";
//		email = "name@xyz.com";
//		mother = "mother";
//		father = "father";
//		address = "address";
//		course = "b.tech";
//		branch = "CSE";
//		gender = "non-binary";
//		registration = 000000;
//		year_admission = 2069;
//	}
//
//	Student(AnsiString name, AnsiString phone, AnsiString email,
//		AnsiString mother, AnsiString father, AnsiString address,
//		AnsiString course, AnsiString gender, AnsiString branch,
//		int registration, int year) {
//		name = name;
//		phone = phone;
//		email = email;
//		mother = mother;
//		father = father;
//		address = address;
//		course = course;
//		branch = branch;
//		gender = gender;
//		registration = registration;
//		year_admission = year;
//
//	}
//
//	void getdata() {
//		// comment;
//	}
//
//	void setdata() {
//		// comment
//	}
//
//};

// class File{
// public:
// vector<Student> student;
// ifstream file;
//
// File(){
// file.open("RegisteredStudent.txt", ios::in);
// int i = 0;
// while (file.good())
// {
// string input;
// file>>input;
// stringstream ss(input);
// vector<string> v;
//
// while(ss.good()){
// string substr;
// getline(ss, substr, ',');
// v.push_back(substr);
// }
//
// student[i].name = v[0];
// student[i].phone = v[1];
// student[i].email = v[2];
// student[i].mother = v[3];
// student[i].father = v[4];
// student[i].address = v[5];
// student[i].course = v[6];
// student[i].branch = v[7];
// student[i].gender = v[8];
// student[i].registration = v[9];
// student[i].year_admission = stoi(v[10]);
//
// i++;
// }
// }
//
// //#todo functions for exchange of data
//
// };
//
//
//
//

AnsiString branch, gender, course;

void __fastcall TStudentRegistrationForm::CSEChange(TObject *Sender) {
	branch = "CSE";
	
	
}
// ---------------------------------------------------------------------------

void __fastcall TStudentRegistrationForm::ECEChange(TObject *Sender) {
	branch = "ECE";
}

// ---------------------------------------------------------------------------
void __fastcall TStudentRegistrationForm::MaleChange(TObject *Sender) {
	gender = "Male";
	
}
// ---------------------------------------------------------------------------

void __fastcall TStudentRegistrationForm::FemaleChange(TObject *Sender) {
	gender = "Female";
}
// ---------------------------------------------------------------------------

void __fastcall TStudentRegistrationForm::OtherChange(TObject *Sender) {
	gender = "Other";

}
// ---------------------------------------------------------------------------

void __fastcall TStudentRegistrationForm::mtechChange(TObject *Sender) {
	course = "M.Tech";
}
// ---------------------------------------------------------------------------

void __fastcall TStudentRegistrationForm::phdChange(TObject *Sender) {
	course = "Ph.D";
}
// ---------------------------------------------------------------------------

void __fastcall TStudentRegistrationForm::btechChange(TObject *Sender) {
	course = "B.Tech";
}
// ---------------------------------------------------------------------------

//TSQLConnection *SQLConnection1 = new TSQLConnection();
//
//	SQLConnection1->DriverName = "InterBase";
//	SQLConnection1->Params->Values["Database"] = "C:\\DeleteMe\\STUDENTS.ib";
//
//	SQLConnection1->Open();

void __fastcall TStudentRegistrationForm::SubmitClick(TObject *Sender) {

//	TSQLQuery *SQLQuery1 = new TSQLQuery(this);
//
//	SQLQuery1->SQLConnection = SQLConnection1;

//	isc_db_handle database = 0;
//	isc_tr_handle transaction = 0;
//
//	   char status[20];
//	   isc_attach_database(status, 0, DATABASE, &database, 0, NULL);
//
//	   if (status[0] == 1) {
//		  std::cout << "Failed to attach to the database" << std::endl;
//	   }
//
//	   isc_start_transaction(status, &transaction, 1, &database, 0, NULL);
//
//	   if (status[0] == 1) {
//		  std::cout << "Failed to start a transaction" << std::endl;
//	   }
//
//	   std::cout << "Connected to the database" << std::endl;

	SQLConnection1->Params->Values["Database"] = DATABASE;
	TTransactionDesc * trans = new TTransactionDesc;

	SQLConnection1->Open() ;
	SQLConnection1->BeginTransaction();
	SQLQuery1->Open();
	fstream myFile;
	myFile.open("RegisteredStudents.txt", ios::app);

	if (myFile.is_open) {

		AnsiString name = NameBox->Text;
		AnsiString email = EmailBox->Text;
		AnsiString father = FatherNameBox->Text;
		AnsiString mother = MotherNameBox->Text;
		AnsiString mobile = MobileNumberBox->Text;
		AnsiString address = AddresssBox->Text;
		AnsiString registration = RegistrationBox->Text;
		AnsiString year_admission = YearBox->Text;

		myFile << name << "," << email << "," << father << "," << mother <<
			"," << mobile << "," << address << "," << branch << "," << gender <<
			"," << registration << "," << course << "," <<
			year_admission << "\n";

		

		AnsiString insert;
		stringstream ss;
//
//		SQLQuery1->SQL->Text = "GRANT SELECT, INSERT, UPDATE, DELETE ON STUDENTS TO sysdba";
//		SQLQuery1->ExecSQL();
//
		ss<<"INSERT INTO STUDENTS(name, email, phone, address, mother, father, gender, branch, course, registration, year_admission) ";
		ss<<"VALUES ('"<< name << "', '"<<email<<"', '"<<mobile<<"', '"<<address<<"', '"<<mother<<"', '"<<father<<"', '"<<gender<<"', '"<<branch<<"', '"<<course<<"', '"<<registration<<"', '"<<year_admission<<"');";
		ss>>   insert;
        ShowMessage("All good till 245");
        ShowMessage(insert);
		SQLQuery1->SQL->Text = insert;
		   ShowMessage("all good");
		SQLQuery1->Prepared;
		SQLQuery1->ExecSQL();

		SQLConnection1->Commit(*trans);
		SQLQuery1->Close();
		SQLConnection1->Close();

//after done being sql and add student data
//clearing thr input fieldds so it can work for another registration
		NameBox->Text = "";
		EmailBox->Text = "";
		FatherNameBox->Text = "";
		MotherNameBox->Text = "";
		MobileNumberBox->Text = "";
		AddresssBox->Text = "";
		RegistrationBox->Text = "";
		YearBox->Text = "";

		CSE->IsChecked = false;
		ECE->IsChecked = false;
		Male->IsChecked = false;
		Female->IsChecked = false;
		Other->IsChecked = false;
		btech->IsChecked = false;
		mtech->IsChecked = false;
		phd->IsChecked = false;

		ss.clear();
		insert="";

//		// Clear all TCheckBox components on the form
//		for (int i = 0; i < ComponentCount; i++)
//		{
//			if (dynamic_cast<TCheckBox *>(Components[i]))
//			{
//				((TCheckBox *)Components[i])->Checked = false;
//			}
//		}
//
//		// Clear all TRadioButton components on the form
//		for (int i = 0; i < ComponentCount; i++)
//		{
//			if (dynamic_cast<TRadioButton *>(Components[i]))
//			{
//				((TRadioButton *)Components[i])->Checked = false;
//			}
//		}

		myFile.close();
		this->Close();
	}
}
// ---------------------------------------------------------------------------

void __fastcall TStudentRegistrationForm::BackClick(TObject *Sender) {
	NameBox->Text = "";
	EmailBox->Text = "";
	FatherNameBox->Text = "";
	MotherNameBox->Text = "";
	MobileNumberBox->Text = "";
	AddresssBox->Text = "";
	RegistrationBox->Text = "";
	YearBox->Text = "";

	CSE->IsChecked = false;
	ECE->IsChecked = false;
	Male->IsChecked = false;
	Female->IsChecked = false;
	Other->IsChecked = false;
	btech->IsChecked = false;
	mtech->IsChecked = false;
	phd->IsChecked = false;

	 

	
	this->Close();
}
// ---------------------------------------------------------------------------



