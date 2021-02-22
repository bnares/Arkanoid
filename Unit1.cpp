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
 if(b->Top>p->Top+p->Height+10)
 {
  Timer_pilka ->Enabled =false;
  b ->Visible = false;
 }
 else if(b -> Left > p-> Left - b-> Width/2 && b->Left < p->Left + p->Width &&
 b -> Top + b ->Height >= p -> Top )
 {
  if(y>0)
  {
   y= -y;
  }
 }

}
//---------------------------------------------------------------------------



void __fastcall TForm1::lewyTimer(TObject *Sender)
{
 p-> Left-=15;
 if(p -> Left <= 0+3)
 {
   p -> Left =0+3;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::prawyTimer(TObject *Sender)
{
 
 if(p->Left+ p-> Width <= tlo->Width-3)
 {
     p->Left+=15;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
 if(Key == VK_LEFT)
 {
  lewy -> Enabled = true;
 }

 if(Key == VK_RIGHT)
 {
  prawy ->Enabled = true;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
if(Key == VK_LEFT)
 {
  lewy -> Enabled = false;
 }

 if(Key == VK_RIGHT)
 {
  prawy ->Enabled = false;
 }
}
//---------------------------------------------------------------------------

