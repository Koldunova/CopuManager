object Form1: TForm1
  Left = 0
  Top = 0
  BorderStyle = bsSizeToolWin
  Caption = 'Copy-Manager'
  ClientHeight = 334
  ClientWidth = 711
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object GroupBox1: TGroupBox
    Left = 8
    Top = 8
    Width = 337
    Height = 318
    Caption = #1040#1074#1090#1086#1088#1080#1079#1072#1094#1080#1103
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    object Edit1: TEdit
      Left = 32
      Top = 96
      Width = 249
      Height = 31
      TabOrder = 0
      TextHint = #1051#1086#1075#1080#1085
    end
    object Edit2: TEdit
      Left = 32
      Top = 160
      Width = 249
      Height = 31
      PasswordChar = '*'
      TabOrder = 1
      TextHint = #1055#1072#1088#1086#1083#1100
    end
    object Button1: TButton
      Left = 32
      Top = 256
      Width = 249
      Height = 33
      Caption = #1042#1086#1081#1090#1080
      TabOrder = 2
      OnClick = Button1Click
    end
  end
  object GroupBox2: TGroupBox
    Left = 360
    Top = 8
    Width = 337
    Height = 318
    Caption = #1056#1077#1075#1080#1089#1090#1088#1072#1094#1080#1103
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    object Edit3: TEdit
      Left = 32
      Top = 64
      Width = 273
      Height = 31
      TabOrder = 0
      TextHint = #1055#1088#1080#1076#1091#1084#1072#1081#1090#1077' '#1083#1086#1075#1080#1085
    end
    object Edit4: TEdit
      Left = 32
      Top = 128
      Width = 273
      Height = 31
      TabOrder = 1
      TextHint = #1060#1048#1054
    end
    object Edit5: TEdit
      Left = 32
      Top = 192
      Width = 273
      Height = 31
      PasswordChar = '*'
      TabOrder = 2
      TextHint = #1055#1088#1080#1076#1091#1084#1072#1081#1090#1077' '#1087#1072#1088#1086#1083#1100
    end
    object Button2: TButton
      Left = 32
      Top = 256
      Width = 273
      Height = 33
      Caption = #1047#1072#1088#1077#1075#1080#1089#1090#1088#1080#1088#1086#1074#1072#1090#1100#1089#1103
      TabOrder = 3
      OnClick = Button2Click
    end
  end
  object MyConnection: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=D:\'#1086#1072#1080#1087'\CopyCentr.m' +
      'db;Persist Security Info=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 680
    Top = 304
  end
  object ADOUser: TADOTable
    Active = True
    Connection = MyConnection
    CursorType = ctStatic
    TableName = 'User_'
    Left = 648
    Top = 304
    object ADOUserid: TAutoIncField
      FieldName = 'id'
      ReadOnly = True
    end
    object ADOUserfio: TWideStringField
      FieldName = 'fio'
      Size = 255
    end
    object ADOUserusername: TWideStringField
      FieldName = 'username'
      Size = 255
    end
    object ADOUserpassword: TWideStringField
      FieldName = 'password'
      Size = 255
    end
  end
end
