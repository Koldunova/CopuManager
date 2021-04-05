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
	if( (Edit3->Text=="" ) || (Edit4->Text=="") || (Edit5->Text=="")){
		ShowMessage("Заполните поля для регистрации");
	}else{

		if(Edit4->Text==Edit5->Text)   {
			if (ADOUser->FieldByName("username")->AsString==Edit3->Text){
				ShowMessage("Такой пользователь уже существует");
			}else{

				ADOUser->Insert();
				ADOUser->FieldByName("username")->AsString= Edit3->Text;
				ADOUser->FieldByName("password")->AsString= Edit4->Text;
				ADOUser->Post();
				ShowMessage("Регистрация прошла успешно");

			}
		}else{

		   ShowMessage("Пароли не совпадают");

		}
	}

}

//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	if( (Edit1->Text!="" ) || (Edit2->Text!="") ){
		if (ADOUser->FieldByName("username")->AsString==Edit1->Text
			&& ADOUser->FieldByName("password")->AsString==Edit2->Text){
				Form2->ShowModal();

			} else {

				ShowMessage("Неверный логин или пароль");
			}
	}   else {

		ShowMessage("Заполните поля");

	}
}
//---------------------------------------------------------------------------

