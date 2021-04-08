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
    Left = 41
    Top = 47
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
    Left = 16
    Top = 16
    Width = 121
    Height = 25
    Caption = #1059#1089#1083#1091#1075#1080
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 143
    Top = 16
    Width = 121
    Height = 25
    Caption = #1040#1087#1087#1072#1088#1072#1090#1091#1088#1072
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button4: TButton
    Left = 270
    Top = 16
    Width = 121
    Height = 25
    Caption = #1047#1072#1082#1072#1079#1099' ('#1089#1086#1076#1072#1085#1080#1077')'
    TabOrder = 2
    OnClick = Button4Click
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
    Left = 105
    Top = 102
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
    Left = 105
    Top = 102
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
  object GroupBox1: TGroupBox
    Left = 16
    Top = 93
    Width = 1074
    Height = 555
    Color = clTeal
    ParentBackground = False
    ParentColor = False
    TabOrder = 7
    Visible = False
    object Label2: TLabel
      Left = 30
      Top = 19
      Width = 178
      Height = 24
      Caption = #1042#1099#1073#1088#1072#1085#1085#1099#1077' '#1091#1089#1083#1091#1075#1080':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label3: TLabel
      Left = 373
      Top = 19
      Width = 104
      Height = 24
      Caption = #1042'c'#1077' '#1091#1089#1083#1091#1075#1080':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label4: TLabel
      Left = 732
      Top = 19
      Width = 86
      Height = 24
      Caption = #1050#1083#1080#1077#1085#1090#1099':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label5: TLabel
      Left = 104
      Top = 347
      Width = 72
      Height = 24
      Caption = #1050#1083#1080#1077#1085#1090':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label6: TLabel
      Left = 58
      Top = 377
      Width = 118
      Height = 24
      Caption = #1055#1088#1077#1076#1086#1087#1083#1072#1090#1072':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label7: TLabel
      Left = 32
      Top = 404
      Width = 144
      Height = 24
      Caption = #1050' '#1086#1087#1083#1072#1090#1077' '#1074#1089#1077#1075#1086':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label8: TLabel
      Left = 30
      Top = 431
      Width = 146
      Height = 24
      Caption = #1054#1090#1074#1077#1090#1089#1090#1074#1077#1085#1085#1099#1081':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label9: TLabel
      Left = 89
      Top = 461
      Width = 87
      Height = 24
      Caption = #1054#1087#1083#1072#1095#1077#1085':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label11: TLabel
      Left = 309
      Top = 431
      Width = 6
      Height = 24
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      Visible = False
    end
    object Label12: TLabel
      Left = 373
      Top = 293
      Width = 69
      Height = 24
      Caption = #1050#1086#1083'-'#1074#1086':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label13: TLabel
      Left = 1026
      Top = 528
      Width = 45
      Height = 24
      Caption = #1044#1072#1090#1072
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      Visible = False
    end
    object Label10: TLabel
      Left = 58
      Top = 117
      Width = 178
      Height = 24
      Caption = #1042#1099#1073#1088#1072#1085#1085#1099#1077' '#1091#1089#1083#1091#1075#1080':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object DBGrid3: TDBGrid
      Left = 732
      Top = 49
      Width = 320
      Height = 400
      DataSource = DataSource3
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'Tahoma'
      TitleFont.Style = []
    end
    object DBNavigator3: TDBNavigator
      Left = 770
      Top = 455
      Width = 240
      Height = 25
      DataSource = DataSource3
      TabOrder = 1
    end
    object DBGrid4: TDBGrid
      Left = 373
      Top = 49
      Width = 337
      Height = 224
      DataSource = DataSource2
      TabOrder = 2
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -11
      TitleFont.Name = 'Tahoma'
      TitleFont.Style = []
    end
    object Button3: TButton
      Left = 770
      Top = 496
      Width = 240
      Height = 25
      Caption = #1042#1099#1073#1088#1072#1090#1100' '#1082#1083#1080#1077#1085#1090#1072
      TabOrder = 3
      OnClick = Button3Click
    end
    object CheckBox1: TCheckBox
      Left = 182
      Top = 469
      Width = 97
      Height = 17
      TabOrder = 4
    end
    object Edit1: TEdit
      Left = 182
      Top = 431
      Width = 121
      Height = 21
      Enabled = False
      ReadOnly = True
      TabOrder = 5
    end
    object Edit2: TEdit
      Left = 182
      Top = 350
      Width = 121
      Height = 21
      Enabled = False
      ReadOnly = True
      TabOrder = 6
    end
    object Edit3: TEdit
      Left = 182
      Top = 377
      Width = 121
      Height = 21
      TabOrder = 7
    end
    object Edit4: TEdit
      Left = 182
      Top = 404
      Width = 121
      Height = 21
      TabOrder = 8
    end
    object Button5: TButton
      Left = 528
      Top = 297
      Width = 166
      Height = 25
      Caption = #1042#1099#1073#1088#1072#1090#1100' '#1091#1089#1083#1091#1075#1091
      TabOrder = 9
      OnClick = Button5Click
    end
    object StringGrid1: TStringGrid
      Left = 17
      Top = 49
      Width = 320
      Height = 224
      ColCount = 4
      FixedCols = 0
      RowCount = 1
      FixedRows = 0
      TabOrder = 10
    end
    object Button6: TButton
      Left = 137
      Top = 505
      Width = 166
      Height = 25
      Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
      TabOrder = 11
      OnClick = Button6Click
    end
    object Edit6: TEdit
      Left = 448
      Top = 299
      Width = 58
      Height = 21
      NumbersOnly = True
      TabOrder = 12
    end
  end
  object Button7: TButton
    Left = 397
    Top = 16
    Width = 121
    Height = 25
    Caption = #1047#1072#1082#1072#1079#1099' ('#1087#1088#1086#1089#1084#1086#1090#1088')'
    TabOrder = 8
    OnClick = Button7Click
  end
  object GroupBox2: TGroupBox
    Left = 16
    Top = 93
    Width = 1074
    Height = 555
    Color = clTeal
    ParentBackground = False
    ParentColor = False
    TabOrder = 9
    Visible = False
    object Label21: TLabel
      Left = 309
      Top = 431
      Width = 6
      Height = 24
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
      Visible = False
    end
    object Label14: TLabel
      Left = 38
      Top = 27
      Width = 109
      Height = 24
      Caption = #1042#1089#1077' '#1079#1072#1082#1072#1079#1099':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label15: TLabel
      Left = 787
      Top = 29
      Width = 135
      Height = 24
      Caption = #1059#1089#1083#1091#1075#1080' '#1079#1072#1082#1072#1079#1072':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label16: TLabel
      Left = 505
      Top = 85
      Width = 134
      Height = 24
      Caption = #1053#1086#1084#1077#1088' '#1079#1072#1082#1072#1079#1072':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWhite
      Font.Height = -20
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object StringGrid2: TStringGrid
      Left = 33
      Top = 59
      Width = 464
      Height = 478
      ColCount = 7
      FixedCols = 0
      TabOrder = 0
    end
    object StringGrid3: TStringGrid
      Left = 787
      Top = 59
      Width = 198
      Height = 478
      ColCount = 3
      FixedCols = 0
      TabOrder = 1
    end
    object Edit5: TEdit
      Left = 645
      Top = 91
      Width = 110
      Height = 21
      NumbersOnly = True
      TabOrder = 2
    end
    object Button8: TButton
      Left = 589
      Top = 137
      Width = 166
      Height = 25
      Caption = #1054#1090#1084#1077#1090#1080#1090#1100' '#1086#1087#1083#1072#1090#1091
      TabOrder = 3
      OnClick = Button8Click
    end
    object Button9: TButton
      Left = 589
      Top = 168
      Width = 166
      Height = 25
      Caption = #1042#1099#1073#1088#1072#1090#1100' '#1091#1089#1083#1091#1075#1091
      TabOrder = 4
      OnClick = Button9Click
    end
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
  object ADOTable3: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'Customer'
    Left = 272
    Top = 40
  end
  object DataSource3: TDataSource
    DataSet = ADOTable3
    Left = 296
    Top = 40
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=D:\'#1086#1072#1080#1087'\CopyCentr.m' +
      'db;Persist Security Info=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 1048
    Top = 8
  end
  object ADOTable4: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'Order_'
    Left = 344
    Top = 45
  end
  object ADOTable5: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'OrderList'
    Left = 320
    Top = 45
  end
  object ADOTable6: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'User_'
    Left = 488
    Top = 48
  end
end
