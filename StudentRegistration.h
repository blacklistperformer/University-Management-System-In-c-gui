// ---------------------------------------------------------------------------

#ifndef StudentRegistrationH
#define StudentRegistrationH
// ---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//#include <ibase.h>
#include <FMX.Controls.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Objects.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Objects.hpp>
#include <Data.DB.hpp>
#include <Data.DBXInterBase.hpp>
#include <Data.SqlExpr.hpp>
#include <Datasnap.DBClient.hpp>
#include <Data.FMTBcd.hpp>
#include <IBX.IBDatabase.hpp>
//#include <Data.DB.hpp>
//#include <Data.DBXInterBase.hpp>
//#include <Data.FMTBcd.hpp>
//#include <Data.SqlExpr.hpp>

// ---------------------------------------------------------------------------
class TStudentRegistrationForm : public TForm {
__published: // IDE-managed Components
	TLabel *banner;
	TLabel *Name;
	TEdit *NameBox;
	TLabel *Email;
	TEdit *EmailBox;
	TLabel *FathersName;
	TEdit *FatherNameBox;
	TLabel *MothersName;
	TEdit *MotherNameBox;
	TLabel *MobileNo;
	TEdit *MobileNumberBox;
	TLabel *Address;
	TEdit *AddresssBox;
	TRadioButton *ECE;
	TButton *Submit;
	TLabel *Registration;
	TEdit *RegistrationBox;
	TCheckBox *Male;
	TCheckBox *Female;
	TCheckBox *Other;
	TLabel *Label1;
	TLabel *Label2;
	TButton *Back;
	TImage *Logo;
	TLabel *Label3;
	TEdit *YearBox;
	TLabel *Label4;
	TCheckBox *mtech;
	TCheckBox *phd;
	TCheckBox *btech;
	TSQLConnection *SQLConnection1;
	TSQLQuery *SQLQuery1;
	TRadioButton *CSE;

	void __fastcall SubmitClick(TObject *Sender);
	void __fastcall CSEChange(TObject *Sender);
	void __fastcall ECEChange(TObject *Sender);
	void __fastcall MaleChange(TObject *Sender);
	void __fastcall FemaleChange(TObject *Sender);
	void __fastcall OtherChange(TObject *Sender);
	void __fastcall BackClick(TObject *Sender);
	void __fastcall mtechChange(TObject *Sender);
	void __fastcall phdChange(TObject *Sender);
	void __fastcall btechChange(TObject *Sender);

private: // User declarations
public: // User declarations
	__fastcall TStudentRegistrationForm(TComponent* Owner);
};

// ---------------------------------------------------------------------------
extern PACKAGE TStudentRegistrationForm *StudentRegistrationForm;
// ---------------------------------------------------------------------------
#endif
