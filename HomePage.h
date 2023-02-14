//---------------------------------------------------------------------------

#ifndef HomePageH
#define HomePageH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Objects.hpp>
//---------------------------------------------------------------------------
class THomePageForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Banner;
	TButton *SearchStudent;
	TButton *LogOut;
	TImage *Logo;
	TImage *BannerImage;
	TButton *ShowStudents;
	TButton *AddStudents;
	void __fastcall SearchStudentClick(TObject *Sender);
	void __fastcall ShowStudentsClick(TObject *Sender);
	void __fastcall LogOutClick(TObject *Sender);
	void __fastcall AddStudentsClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall THomePageForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE THomePageForm *HomePageForm;
//---------------------------------------------------------------------------
#endif
