//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

int x = 8,y=-8;



//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Timer_pilkaTimer(TObject *Sender)
{
 b ->Left +=x;
 b ->Top +=y;
 //odbij od lewej
 if(b ->Left <=0)
 {
  x *=-1;
 }
 //odbij od lewej
 if(b->Top <=0)
 {
  y *=-1;
 }

 //odpij od prawej sciany
 if(b ->Left + b->Width >= tlo -> Width-10)
 {
  x*=-1;
 }

 //skucha
 if(b->Top>Height>p->Top+p->Height)
 {
  Timer_pilka ->Enabled =false;
  b ->Visible = false;
 }

}
//---------------------------------------------------------------------------



