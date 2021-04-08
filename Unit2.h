//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Data.FMTBcd.hpp>
#include <Data.SqlExpr.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TButton *Button1;
	TButton *Button2;
	TButton *Button4;
	TDataSource *DataSource1;
	TDBNavigator *DBNavigator1;
	TADOTable *ADOTable1;
	TLabel *Label1;
	TADOTable *ADOTable2;
	TDataSource *DataSource2;
	TDBNavigator *DBNavigator2;
	TDBGrid *DBGrid1;
	TDBGrid *DBGrid2;
	TGroupBox *GroupBox1;
	TDBGrid *DBGrid3;
	TADOTable *ADOTable3;
	TDataSource *DataSource3;
	TDBNavigator *DBNavigator3;
	TDBGrid *DBGrid4;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TButton *Button3;
	TLabel *Label5;
	TLabel *Label6;
	TLabel *Label7;
	TLabel *Label8;
	TLabel *Label9;
	TCheckBox *CheckBox1;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TButton *Button5;
	TStringGrid *StringGrid1;
	TLabel *Label11;
	TEdit *Edit6;
	TLabel *Label12;
	TButton *Button6;
	TADOConnection *ADOConnection1;
	TADOTable *ADOTable4;
	TADOTable *ADOTable5;
	TLabel *Label13;
	TButton *Button7;
	TGroupBox *GroupBox2;
	TLabel *Label21;
	TStringGrid *StringGrid2;
	TLabel *Label10;
	TLabel *Label14;
	TStringGrid *StringGrid3;
	TLabel *Label15;
	TEdit *Edit5;
	TLabel *Label16;
	TButton *Button8;
	TADOTable *ADOTable6;
	TButton *Button9;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Button8Click(TObject *Sender);
	void __fastcall Button9Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
