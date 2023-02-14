//---------------------------------------------------------------------------

#ifndef AdminRegistrationFormH
#define AdminRegistrationFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Edit.hpp>
#include <FMX.ExtCtrls.hpp>
#include <FMX.Layouts.hpp>
//---------------------------------------------------------------------------
class TUserRegistrationForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Name;
	TEdit *NameBox;
	TLabel *Email;
	TEdit *EmailBox;
	TLabel *Username;
	TEdit *UsernameBox;
	TLabel *Password;
	TEdit *PasswordBox;
	TLabel *MobileNo;
	TEdit *MobileNoBox;
	TLabel *Banner;
	TButton *RegisterButton;
	TImage *Logo;
	TButton *Back;
	void __fastcall RegisterButtonClick(TObject *Sender);
	void __fastcall BackClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TUserRegistrationForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TUserRegistrationForm *UserRegistrationForm;
//---------------------------------------------------------------------------
#endif
