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


	//������
	DBGrid2->Visible=true;
	DBNavigator2->Visible=true;

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


	//������
	DBGrid2->Visible=false;
	DBNavigator2->Visible=false;

	DBGrid2->Columns->Items[0]->Visible=false;

	DBGrid2->Columns->Items[1]->Title->Caption="������";
	DBGrid2->Columns->Items[1]->Width=700;
	DBGrid2->Columns->Items[2]->Title->Caption="��������� 1 ������, ���";
	DBGrid2->Columns->Items[2]->Width=280;
}
//---------------------------------------------------------------------------

