//---------------------------------------------------------------------------

#ifndef LoginFormH
#define LoginFormH
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
class TLoginPage : public TForm
{
__published:	// IDE-managed Components
	TLabel *Banner;
	TLabel *Username;
	TEdit *UsernameBox;
	TLabel *Password;
	TEdit *PasswordBox;
	TButton *RegisterNewUserNavigationButton;
	TButton *LoginButton;
	TImage *BannerImage;
	TLabel *messageLabel;
	TPasswordEditButton *PasswordEditButton1;
	TLabel *JNU;
	TImage *Logo;
	void __fastcall RegisterNewUserNavigationButtonClick(TObject *Sender);
	void __fastcall LoginButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TLoginPage(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TLoginPage *LoginPage;
//---------------------------------------------------------------------------
#endif
