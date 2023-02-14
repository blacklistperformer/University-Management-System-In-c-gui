//---------------------------------------------------------------------------

#include <fmx.h>
#ifdef _WIN32
#include <tchar.h>
#endif
#pragma hdrstop
#include <System.StartUpCopy.hpp>
//---------------------------------------------------------------------------
USEFORM("ShowStudents.cpp", ShowStudentsForm);
USEFORM("StudentRegistration.cpp", StudentRegistrationForm);
USEFORM("AdminRegistrationForm.cpp", UserRegistrationForm);
USEFORM("HomePage.cpp", HomePageForm);
USEFORM("LoginForm.cpp", LoginPage);
USEFORM("SearchStudent.cpp", SearchStudentForm);
//---------------------------------------------------------------------------
extern "C" int FMXmain()
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(TLoginPage), &LoginPage);
		Application->CreateForm(__classid(THomePageForm), &HomePageForm);
		Application->CreateForm(__classid(TUserRegistrationForm), &UserRegistrationForm);
		Application->CreateForm(__classid(TStudentRegistrationForm), &StudentRegistrationForm);
		Application->CreateForm(__classid(TShowStudentsForm), &ShowStudentsForm);
		Application->CreateForm(__classid(TSearchStudentForm), &SearchStudentForm);


		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}


//    void __fastcall TSearchStudentForm::FormCreate(TObject *Sender)
//{
//	StringGrid1->ColCount = 11;
//}

	return 0;
}
//---------------------------------------------------------------------------
