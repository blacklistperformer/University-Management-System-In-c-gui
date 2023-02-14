// ---------------------------------------------------------------------------

#ifndef SearchStudentH
#define SearchStudentH
// ---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Grid.hpp>
#include <FMX.Grid.Style.hpp>
#include <FMX.ScrollBox.hpp>
#include <System.Rtti.hpp>
#include <Data.DB.hpp>
#include <Data.DBXInterBase.hpp>
#include <Data.FMTBcd.hpp>
#include <Data.SqlExpr.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.DBScope.hpp>
#include <Data.Bind.EngExt.hpp>
#include <Data.Bind.Grid.hpp>
#include <Fmx.Bind.DBEngExt.hpp>
#include <Fmx.Bind.Editors.hpp>
#include <Fmx.Bind.Grid.hpp>
#include <System.Bindings.Outputs.hpp>
#include <Web.DBWeb.hpp>
#include <Web.DBXpressWeb.hpp>
#include <Web.HTTPApp.hpp>
#include <Data.Bind.Controls.hpp>
#include <Fmx.Bind.Navigator.hpp>
#include <FMX.Layouts.hpp>

// ---------------------------------------------------------------------------
class TSearchStudentForm : public TForm {
__published: // IDE-managed Components
	TButton *Back;
	TLabel *Banner;
	TRadioButton *Name;
	TEdit *NameBox;
	TRadioButton *Registration;
	TRadioButton *Branch;
	TCheckBox *CSE;
	TCheckBox *ECE;
	TEdit *RegistrationBox;
	TRadioButton *Course;
	TCheckBox *BTech;
	TCheckBox *MTech;
	TCheckBox *PhD;
	TRadioButton *Year;
	TEdit *YearBox;
	TButton *Search;
	TSQLConnection *SQLConnection1;
	TSQLQueryTableProducer *SQLQueryTable1;
	TSQLQuery *SQLQuery1;
	TBindSourceDB *BindSourceDB1;
	TBindingsList *BindingsList1;
	TStringGrid *StringGrid1;
	TLinkGridToDataSource *LinkGridToDataSourceBindSourceDB1;
	TBindNavigator *BindNavigator1;

	void __fastcall BackClick(TObject *Sender);
	void __fastcall NameChange(TObject *Sender);
	void __fastcall RegistrationChange(TObject *Sender);
	void __fastcall BranchChange(TObject *Sender);
	void __fastcall CourseChange(TObject *Sender);
	void __fastcall YearChange(TObject *Sender);
	void __fastcall CSEChange(TObject *Sender);
	void __fastcall ECEChange(TObject *Sender);
	void __fastcall BTechChange(TObject *Sender);
	void __fastcall MTechChange(TObject *Sender);
	void __fastcall PhDChange(TObject *Sender);
	void __fastcall SearchClick(TObject *Sender);

private: // User declarations
public: // User declarations
	__fastcall TSearchStudentForm(TComponent* Owner);
};

// ---------------------------------------------------------------------------
extern PACKAGE TSearchStudentForm *SearchStudentForm;
// ---------------------------------------------------------------------------
#endif
