//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//liczba seksund wstecz od ktorej bedzie odliczany czas
int s = 3666;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
         s--;
         int godziny, minuty,sekundy;
         AnsiString godz,min,sek;

         godziny = s/3600;
         godz = IntToStr(godziny);

         minuty = (s-godziny*3600)/60;
         min = IntToStr(minuty);

         sekundy = (s-godziny*3600-minuty*60);
         sek = IntToStr(sekundy);
         if(godziny<10)
         {
             godz = "0"+godz;
         }
         if(minuty<10)
         {
            min = "0"+min;
         }

         if(sekundy <10)
         {
          sek = "0"+sek;
         }

         Label1 -> Caption = godz+":"+min+":"+sek;


         if(s<=0)
         {
          Label1 -> Caption = "KONIEC CZASU!";
          Timer1 -> Enabled = false;
         }
}
//---------------------------------------------------------------------------
 