//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	int flag=0;
	ADOUser->RecNo=1;
	if( (Edit3->Text=="" ) || (Edit4->Text=="") || (Edit5->Text=="")){
		ShowMessage("��������� ���� ��� �����������");
	}else{

			for (int i = 1; i<=ADOUser->RecordCount; i++){
				ADOUser->RecNo=i;
				if (ADOUser->FieldByName("username")->AsString==Edit3->Text){
					flag=1;
					ShowMessage("����� ������������ ��� ����������");
					break;
				}
                ADOUser->Next();
			}

			if(flag==0){
                ADOUser->Insert();
				ADOUser->FieldByName("username")->AsString= Edit3->Text;
				ADOUser->FieldByName("password")->AsString= Edit4->Text;
				ADOUser->Post();
				ShowMessage("����������� ������ �������");
			}
	}

}

//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
		int flag=0;
		ADOUser->RecNo=1;
		if( (Edit1->Text!="" ) || (Edit2->Text!="") ){
			for (int i = 1; i<=ADOUser->RecordCount; i++){
				ADOUser->RecNo=i;
				if (ADOUser->FieldByName("username")->AsString==Edit1->Text
					&& ADOUser->FieldByName("password")->AsString==Edit2->Text){
						Edit2->Text="";
						Form2->Edit1->Text=ADOUser->FieldByName("fio")->AsString;
						Form2->Label11->Caption=ADOUser->FieldByName("id")->AsString;
						Form2->ShowModal();

						flag=1;
						break;
				}

				ADOUser->Next();
			}

		}else {
			ShowMessage("��������� ����");

		}

		if (flag==0){
			ShowMessage("�������� ����� ��� ������");
		}


}
//---------------------------------------------------------------------------

