object Form2: TForm2
  Left = 0
  Top = 0
  BorderStyle = bsSizeToolWin
  Caption = 'Copy-Manager'
  ClientHeight = 725
  ClientWidth = 1098
  Color = clSilver
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 88
    Top = 96
    Width = 10
    Height = 40
    Color = clBlack
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clNavy
    Font.Height = -33
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentColor = False
    ParentFont = False
  end
  object Button1: TButton
    Left = 150
    Top = 16
    Width = 121
    Height = 25
    Caption = #1059#1089#1083#1091#1075#1080
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 23
    Top = 16
    Width = 121
    Height = 25
    Caption = #1040#1087#1087#1072#1088#1072#1090#1091#1088#1072
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button4: TButton
    Left = 277
    Top = 16
    Width = 121
    Height = 25
    Caption = #1047#1072#1082#1072#1079#1099
    TabOrder = 2
  end
  object DBNavigator1: TDBNavigator
    Left = 416
    Top = 527
    Width = 240
    Height = 25
    DataSource = DataSource1
    TabOrder = 3
    Visible = False
  end
  object DBNavigator2: TDBNavigator
    Left = 416
    Top = 527
    Width = 240
    Height = 25
    DataSource = DataSource2
    TabOrder = 4
    Visible = False
  end
  object DBGrid1: TDBGrid
    Left = 41
    Top = 142
    Width = 1017
    Height = 353
    DataSource = DataSource1
    TabOrder = 5
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    Visible = False
  end
  object DBGrid2: TDBGrid
    Left = 41
    Top = 142
    Width = 1017
    Height = 353
    DataSource = DataSource2
    TabOrder = 6
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    Visible = False
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=D:\'#1086#1072#1080#1087'\CopyCentr.m' +
      'db;Persist Security Info=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 1072
  end
  object DataSource1: TDataSource
    DataSet = ADOTable1
    Left = 168
    Top = 40
  end
  object ADOTable1: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'Equipment'
    Left = 144
    Top = 40
  end
  object ADOTable2: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'Service'
    Left = 16
    Top = 40
  end
  object DataSource2: TDataSource
    DataSet = ADOTable2
    Left = 40
    Top = 40
  end
end
