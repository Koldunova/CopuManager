//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
	Label1->Caption="������";

	//����������
	DBGrid1->Visible=false;
	DBNavigator1->Visible=false;

	//������
    GroupBox1->Visible=false;

	//������
	DBGrid2->Visible=true;
	DBNavigator2->Visible=true;

	DBGrid2->Columns->Items[0]->Visible=false;

	DBGrid2->Columns->Items[1]->Title->Caption="������";
	DBGrid2->Columns->Items[1]->Width=700;
	DBGrid2->Columns->Items[2]->Title->Caption="��������� 1 ������, ���";
	DBGrid2->Columns->Items[2]->Width=280;

}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
	Label1->Caption="����������";

	//����������
	DBGrid1->Visible=true;
	DBNavigator1->Visible=true;

	DBGrid1->Columns->Items[0]->Visible=false;

	DBGrid1->Columns->Items[1]->Title->Caption="����������";
	DBGrid1->Columns->Items[1]->Width=400;
	DBGrid1->Columns->Items[2]->Title->Caption="�����";
	DBGrid1->Columns->Items[2]->Width=200;
	DBGrid1->Columns->Items[3]->Title->Caption="������, ����� ����������";
	DBGrid1->Columns->Items[3]->Width=380;

	//������
	GroupBox1->Visible=false;

	//������
	DBGrid2->Visible=false;
	DBNavigator2->Visible=false;

}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button4Click(TObject *Sender)
{
	Label1->Caption="������";

    //����������
	DBGrid1->Visible=false;
	DBNavigator1->Visible=false;

	//������
	GroupBox1->Visible=true;

	DBGrid3->Columns->Items[0]->Visible=false;
	DBGrid4->Columns->Items[0]->Visible=false;

	DBGrid3->Columns->Items[1]->Title->Caption="��� �������";
	DBGrid3->Columns->Items[1]->Width=200;
	DBGrid3->Columns->Items[2]->Title->Caption="����� ��������";
	DBGrid3->Columns->Items[2]->Width=90;

	DBGrid4->Columns->Items[1]->Title->Caption="������";
	DBGrid4->Columns->Items[1]->Width=160;
	DBGrid4->Columns->Items[2]->Title->Caption="��������� 1 ������, ���";
	DBGrid4->Columns->Items[2]->Width=130;

	//������
	DBGrid2->Visible=false;
	DBNavigator2->Visible=false;

	StringGrid1->Cells[0][0]="������";
	StringGrid1->Cells[1][0]="����";
	StringGrid1->Cells[2][0]="���-��";
}
//---------------------------------------------------------------------------




void __fastcall TForm2::Button3Click(TObject *Sender)
{
	Edit2->Text=ADOTable3->FieldByName("fio")->AsString;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button5Click(TObject *Sender)
{
	if ( Edit6->Text!=""){
		StringGrid1->RowCount = StringGrid1->RowCount + 1;
		StringGrid1->Cells[0][StringGrid1->RowCount-1] = ADOTable2->FieldByName("title")->AsString;
		StringGrid1->Cells[1][StringGrid1->RowCount-1] = ADOTable2->FieldByName("cost")->AsString;
		StringGrid1->Cells[2][StringGrid1->RowCount-1] = Edit6->Text;
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button6Click(TObject *Sender)
{
	if (Edit2->Text!="" && StringGrid1->RowCount>1){
//		SQLQuery1->Active=true;
//
//		SQLQuery1->Close();
//		SQLQuery1->SQL->Clear();
//		SQLQuery1->SQL->Add("INSERT INTO [Order] ( idCustomer, idUser, prepay, status, dateOrder) SELECT "+
//			ADOTable3->FieldByName("id")->AsString+" AS �1, "+Label1->Caption+
//			" AS �2, "+Edit3->Text+" AS �3, "+CheckBox1->Checked+" AS �4,  Date() AS �5;");
//		SQLQuery1->Open();
//
//		SQLQuery1->Active=false;
	}
}
//---------------------------------------------------------------------------

