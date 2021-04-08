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
	Label1->Caption="Услуги";

	//аппаратура
	DBGrid1->Visible=false;
	DBNavigator1->Visible=false;

	//заказы
	GroupBox1->Visible=false;
	GroupBox2->Visible=false;

	//услуги
	DBGrid2->Visible=true;
	DBNavigator2->Visible=true;

	DBGrid2->Columns->Items[0]->Visible=false;

	DBGrid2->Columns->Items[1]->Title->Caption="Услуга";
	DBGrid2->Columns->Items[1]->Width=700;
	DBGrid2->Columns->Items[2]->Title->Caption="Стоимость 1 услуги, руб";
	DBGrid2->Columns->Items[2]->Width=280;

}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
	Label1->Caption="Аппаратура";

	//аппаратура
	DBGrid1->Visible=true;
	DBNavigator1->Visible=true;

	DBGrid1->Columns->Items[0]->Visible=false;

	DBGrid1->Columns->Items[1]->Title->Caption="Аппаратура";
	DBGrid1->Columns->Items[1]->Width=400;
	DBGrid1->Columns->Items[2]->Title->Caption="Номер";
	DBGrid1->Columns->Items[2]->Width=200;
	DBGrid1->Columns->Items[3]->Title->Caption="Статус, место нахождения";
	DBGrid1->Columns->Items[3]->Width=380;

	//заказы
	GroupBox1->Visible=false;
    GroupBox2->Visible=false;

	//услуги
	DBGrid2->Visible=false;
	DBNavigator2->Visible=false;

}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button4Click(TObject *Sender)
{
	Label1->Caption="Заказы";

	//аппаратура
	DBGrid1->Visible=false;
	DBNavigator1->Visible=false;

	//заказы
	GroupBox1->Visible=true;
    GroupBox2->Visible=false;

	DBGrid3->Columns->Items[0]->Visible=false;
	DBGrid4->Columns->Items[0]->Visible=false;

	DBGrid3->Columns->Items[1]->Title->Caption="Имя клиента";
	DBGrid3->Columns->Items[1]->Width=180;
	DBGrid3->Columns->Items[2]->Title->Caption="Номер телефона";
	DBGrid3->Columns->Items[2]->Width=90;

	DBGrid4->Columns->Items[1]->Title->Caption="Услуга";
	DBGrid4->Columns->Items[1]->Width=160;
	DBGrid4->Columns->Items[2]->Title->Caption="Стоимость 1 услуги, руб";
	DBGrid4->Columns->Items[2]->Width=130;

	//услуги
	DBGrid2->Visible=false;
	DBNavigator2->Visible=false;

	StringGrid1->Cells[0][0]="Номер";
	StringGrid1->Cells[1][0]="Услуга";
	StringGrid1->Cells[2][0]="Цена";
	StringGrid1->Cells[3][0]="Кол-во";

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
		StringGrid1->Cells[0][StringGrid1->RowCount-1] = ADOTable2->FieldByName("id")->AsString;
		StringGrid1->Cells[1][StringGrid1->RowCount-1] = ADOTable2->FieldByName("title")->AsString;
		StringGrid1->Cells[2][StringGrid1->RowCount-1] = ADOTable2->FieldByName("cost")->AsString;
		StringGrid1->Cells[3][StringGrid1->RowCount-1] = Edit6->Text;
        Edit6->Text="";
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button6Click(TObject *Sender)
{
	if (Edit2->Text!="" && StringGrid1->RowCount>1){

		Label13->Caption=Now().DateString();

		ADOTable4->Append();

		//сам заказ
		ADOTable4->FieldValues["idCustomer"] = ADOTable3->FieldByName("id")->AsString;
		ADOTable4->FieldValues["idUser"] =     Label11->Caption;
		ADOTable4->FieldValues["prepay"] =     Edit3->Text;
		ADOTable4->FieldValues["dateOrder"] =  Label13->Caption;
		ADOTable4->FieldValues["cost"] =       Edit4->Text;
		ADOTable4->FieldValues["status"] =     CheckBox1->Checked;
		ADOTable4->Post();

		//запись услуг
		for ( int i=1; i<StringGrid1->RowCount; i++){
			ADOTable5->Append();

			ADOTable5->FieldValues["idOrder"] = ADOTable4->FieldByName("id")->AsString;
			ADOTable5->FieldValues["idService"] = StringGrid1->Cells[0][i];
			ADOTable5->FieldValues["cost"] = StringGrid1->Cells[2][i];
			ADOTable5->FieldValues["count"] = StringGrid1->Cells[3][i];

            ADOTable5->Post();
		}

		//очистить все
		Edit2->Text = "";
		Edit3->Text = "";
		Edit4->Text = "";
		CheckBox1->Checked=false;
        StringGrid1->RowCount=1;

		ShowMessage("Заказ записан. Номер заказа: "+ ADOTable4->FieldByName("id")->AsString);

	}
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button7Click(TObject *Sender)
{
	//аппаратура
	DBGrid1->Visible=false;
	DBNavigator1->Visible=false;

	//заказы
	GroupBox1->Visible=false;
	GroupBox2->Visible=true;

	ADOTable4->RecNo=1;

	StringGrid2->RowCount =1;
	StringGrid3->RowCount =1;

	StringGrid2->Cells[0][0]="№ заказа";
	StringGrid2->Cells[1][0]="Заказчик";
	StringGrid2->Cells[2][0]="Ответственный";
	StringGrid2->Cells[3][0]="Предоплата";
	StringGrid2->Cells[4][0]="Дата заказа";
	StringGrid2->Cells[5][0]="Оплачен";
	StringGrid2->Cells[6][0]="К оплате всего";

	StringGrid3->Cells[0][0]="Услуга";
	StringGrid3->Cells[1][0]="Кол-во";
	StringGrid3->Cells[2][0]="Цена услуги";

	int counter =1;
	for (int i = 1; i<=ADOTable4->RecordCount; i++){
		ADOTable4->RecNo=i;

		ADOTable3->RecNo=1;
		ADOTable6->RecNo=1;

		StringGrid2->RowCount = StringGrid2->RowCount + 1;

		StringGrid2->Cells[0][counter]=ADOTable4->FieldByName("id")->AsString;

		for (int j = 1; j<=ADOTable3->RecordCount; j++){
			ADOTable3->RecNo=j;
			if (ADOTable3->FieldByName("id")->AsString == ADOTable4->FieldByName("idCustomer")->AsString ){
				StringGrid2->Cells[1][counter]= ADOTable3->FieldByName("fio")->AsString;
			}
			ADOTable3->Next();
		}
		for (int j = 1; j<=ADOTable6->RecordCount; j++){
			ADOTable6->RecNo=j;
			if (ADOTable6->FieldByName("id")->AsString == ADOTable4->FieldByName("idUser")->AsString ){
				StringGrid2->Cells[2][counter]= ADOTable6->FieldByName("fio")->AsString;
			}
			ADOTable6->Next();
		}

		StringGrid2->Cells[3][counter]=ADOTable4->FieldByName("prepay")->AsString;
		StringGrid2->Cells[4][counter]=ADOTable4->FieldByName("dateOrder")->AsString;

		if (ADOTable4->FieldByName("status")->AsString=="True"){
			StringGrid2->Cells[5][counter]="Да";
		}else{
			StringGrid2->Cells[5][counter]="Нет";
		}

		StringGrid2->Cells[6][counter]=ADOTable4->FieldByName("cost")->AsString;

		counter++;
		ADOTable4->Next();
	}


	//услуги
	DBGrid2->Visible=false;
	DBNavigator2->Visible=false;


}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button8Click(TObject *Sender)
{
	ADOTable4->RecNo=1;
	for (int j = 1; j<=ADOTable4->RecordCount; j++){
		ADOTable4->RecNo=j;
		if(Edit5->Text==ADOTable4->FieldByName("id")->AsString){
			ADOTable4->Edit();
			ADOTable4->FieldValues["status"] = True;
			ADOTable4->Post();
			break;
		}

		ADOTable4->Next();
	}

	ADOTable4->RecNo=1;
	int counter =1;
    StringGrid2->RowCount =1;

	for (int j = 1; j<=ADOTable4->RecordCount; j++){
		ADOTable4->RecNo=j;

		ADOTable3->RecNo=1;
		ADOTable6->RecNo=1;

		StringGrid2->RowCount = StringGrid2->RowCount + 1;

		StringGrid2->Cells[0][counter]=ADOTable4->FieldByName("id")->AsString;
		for (int i = 1; i<=ADOTable3->RecordCount; i++){
			ADOTable3->RecNo=i;
			if (ADOTable3->FieldByName("id")->AsString == ADOTable4->FieldByName("idCustomer")->AsString ){
				StringGrid2->Cells[1][counter]= ADOTable3->FieldByName("fio")->AsString;
			}
			ADOTable3->Next();
		}

		for (int i = 1; i<=ADOTable6->RecordCount; i++){
			ADOTable6->RecNo=i;
			if (ADOTable6->FieldByName("id")->AsString == ADOTable4->FieldByName("idUser")->AsString ){
				StringGrid2->Cells[2][counter]= ADOTable6->FieldByName("fio")->AsString;
			}
			ADOTable6->Next();
		}

		StringGrid2->Cells[3][counter]=ADOTable4->FieldByName("prepay")->AsString;
		StringGrid2->Cells[4][counter]=ADOTable4->FieldByName("dateOrder")->AsString;

		if (ADOTable4->FieldByName("status")->AsString=="True"){
			StringGrid2->Cells[5][counter]="Да";
		}else{
			StringGrid2->Cells[5][counter]="Нет";
		}

		StringGrid2->Cells[6][counter]=ADOTable4->FieldByName("cost")->AsString;

		counter++;
		ADOTable4->Next();
	}

}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button9Click(TObject *Sender)
{
	StringGrid3->RowCount =  1;
	int counter=1;

	for (int i = 1; i<=ADOTable5->RecordCount; i++){
		ADOTable5->RecNo=i;

		if(ADOTable5->FieldByName("idOrder")->AsString == Edit5->Text){
			for (int j = 1; j<=ADOTable2->RecordCount; j++){
				ADOTable2->RecNo=j;
				if (ADOTable5->FieldByName("idService")->AsString == ADOTable2->FieldByName("id")->AsString){
					StringGrid3->RowCount = StringGrid3->RowCount + 1;
					StringGrid3->Cells[0][counter]=ADOTable2->FieldByName("title")->AsString;
					StringGrid3->Cells[1][counter]=ADOTable5->FieldByName("count")->AsString;
					StringGrid3->Cells[2][counter]=ADOTable5->FieldByName("cost")->AsString;

					counter++;
				}

				ADOTable2->Next();
			}
		}

		ADOTable5->Next();
	}

}
//---------------------------------------------------------------------------

