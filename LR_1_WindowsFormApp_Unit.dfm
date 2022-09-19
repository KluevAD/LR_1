object Form1: TForm1
  Left = 520
  Top = 291
  Caption = 'Test WF App'

  ClientHeight = 130
  ClientWidth = 298
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 63
    Width = 30
    Height = 13
    Caption = 'FIO'
  end
  object Label2: TLabel
    Left = 151
    Top = 63
    Width = 64
    Height = 13
    Caption = 'Group'
  end
  object Button1: TButton
    Left = 8
    Top = 8
    Width = 137
    Height = 49
    Caption = 'Call OutFIO'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 151
    Top = 8
    Width = 138
    Height = 49
    Caption = 'Call OutGroup'
    TabOrder = 1
    OnClick = Button2Click
  end
end
