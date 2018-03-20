//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CGRID"
#pragma resource "*.dfm"
TForm1 *Form1;
TForm1 *Label2;
TForm *Label3;

char p1,p2,p3,p4,p5,p6,p7,p8,p9;
//p1..p9 pola w grze 'n'-nic 's'-serce 'p'-piorun
char kto;
byte ps=0,pp=0;
void sprawdz()
{
 if     ((p1==p2 && p2==p3 && p1!='n')  ||
        (p4==p5 && p5==p6 && p4!='n')  ||
        (p7==p8 && p8==p9 && p7!='n')  ||
        (p1==p4 && p4==p7 && p1!='n')  ||
        (p2==p5 && p5==p8 && p2!='n')  ||
        (p3==p6 && p6==p9 && p3!='n')  ||
        (p1==p5 && p5==p9 && p1!='n')  ||
        (p3==p5 && p5==p7 && p3!='n'))
        {
        char * w;
        if (kto=='s')
        {
        w="Wygrywa Piorun!";
        pp++;
        }
        else
        {
        w="Wygrywa Serce!";
        ps++;
        }


        Application->MessageBox(w, "Koniec gry", MB_OK);
          if (p1=='n') Form1->pole1->Enabled=false;
          if (p2=='n') Form1->pole2->Enabled=false;
          if (p3=='n') Form1->pole3->Enabled=false;
          if (p4=='n') Form1->pole4->Enabled=false;
          if (p5=='n') Form1->pole5->Enabled=false;
          if (p6=='n') Form1->pole6->Enabled=false;
          if (p7=='n') Form1->pole7->Enabled=false;
          if (p8=='n') Form1->pole8->Enabled=false;
          if (p9=='n') Form1->pole9->Enabled=false;

        Form1->Label2->Caption=ps;
        Form1->Label3->Caption=pp;
        }
 if (p1!='n' && p2!='n' && p3!='n' && p4!='n' && p5!='n' && p6!='n' && p7!='n' && p8!='n' && p9!='n')
 {
   Application->MessageBox("Remis", "Koniec gry", MB_OK);
 }
}

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{


}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormCreate(TObject *Sender)
{
        pole1->Picture->LoadFromFile("img/nic.bmp");
        pole2->Picture->LoadFromFile("img/nic.bmp");
        pole3->Picture->LoadFromFile("img/nic.bmp");
        pole4->Picture->LoadFromFile("img/nic.bmp");
        pole5->Picture->LoadFromFile("img/nic.bmp");
        pole6->Picture->LoadFromFile("img/nic.bmp");
        pole7->Picture->LoadFromFile("img/nic.bmp");
        pole8->Picture->LoadFromFile("img/nic.bmp");
        pole9->Picture->LoadFromFile("img/nic.bmp");
        tura->Picture->LoadFromFile("img/ssmall.bmp");

        p1='n'; p4='n'; p7='n';
        p2='n'; p5='n'; p8='n';
        p3='n'; p6='n'; p9='n';

        kto='s';

        pole1->Enabled=true;
        pole2->Enabled=true;
        pole3->Enabled=true;
        pole4->Enabled=true;
        pole5->Enabled=true;
        pole6->Enabled=true;
        pole7->Enabled=true;
        pole8->Enabled=true;
        pole9->Enabled=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole1Click(TObject *Sender)
{
        if (p1=='n')
        {
         if (kto=='s')
         {
            pole1->Picture->LoadFromFile("img/s.bmp");
            p1='s';
            kto='p';
            tura->Picture->LoadFromFile("img/psmall.bmp");

         }
         else
         {
            pole1->Picture->LoadFromFile("img/p.bmp");
            p1='p';
            kto='s';
            tura->Picture->LoadFromFile("img/ssmall.bmp");

         }
         pole1->Enabled=false;
         sprawdz();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole2Click(TObject *Sender)
{
if (p2=='n')
        {
         if (kto=='s')
         {
            pole2->Picture->LoadFromFile("img/s.bmp");
            p2='s';
            kto='p';
            tura->Picture->LoadFromFile("img/psmall.bmp");

         }
         else
         {
            pole2->Picture->LoadFromFile("img/p.bmp");
            p2='p';
            kto='s';
            tura->Picture->LoadFromFile("img/ssmall.bmp");

         }
         pole2->Enabled=false;
         sprawdz();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole3Click(TObject *Sender)
{
if (p3=='n')
        {
         if (kto=='s')
         {
            pole3->Picture->LoadFromFile("img/s.bmp");
            p3='s';
            kto='p';
            tura->Picture->LoadFromFile("img/psmall.bmp");

         }
         else
         {
            pole3->Picture->LoadFromFile("img/p.bmp");
            p3='p';
            kto='s';
            tura->Picture->LoadFromFile("img/ssmall.bmp");

         }
         pole3->Enabled=false;
         sprawdz();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole4Click(TObject *Sender)
{
if (p4=='n')
        {
         if (kto=='s')
         {
            pole4->Picture->LoadFromFile("img/s.bmp");
            p4='s';
            kto='p';
            tura->Picture->LoadFromFile("img/psmall.bmp");

         }
         else
         {
            pole4->Picture->LoadFromFile("img/p.bmp");
            p4='p';
            kto='s';
            tura->Picture->LoadFromFile("img/ssmall.bmp");

         }
         pole4->Enabled=false;
         sprawdz();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole5Click(TObject *Sender)
{
if (p5=='n')
        {
         if (kto=='s')
         {
            pole5->Picture->LoadFromFile("img/s.bmp");
            p5='s';
            kto='p';
            tura->Picture->LoadFromFile("img/psmall.bmp");

         }
         else
         {
            pole5->Picture->LoadFromFile("img/p.bmp");
            p5='p';
            kto='s';
            tura->Picture->LoadFromFile("img/ssmall.bmp");

         }
         pole5->Enabled=false;
         sprawdz();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole6Click(TObject *Sender)
{
if (p6=='n')
        {
         if (kto=='s')
         {
            pole6->Picture->LoadFromFile("img/s.bmp");
            p6='s';
            kto='p';
            tura->Picture->LoadFromFile("img/psmall.bmp");

         }
         else
         {
            pole6->Picture->LoadFromFile("img/p.bmp");
            p6='p';
            kto='s';
            tura->Picture->LoadFromFile("img/ssmall.bmp");

         }
         pole6->Enabled=false;
         sprawdz();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole7Click(TObject *Sender)
{
if (p7=='n')
        {
         if (kto=='s')
         {
            pole7->Picture->LoadFromFile("img/s.bmp");
            p7='s';
            kto='p';
            tura->Picture->LoadFromFile("img/psmall.bmp");

         }
         else
         {
            pole7->Picture->LoadFromFile("img/p.bmp");
            p7='p';
            kto='s';
            tura->Picture->LoadFromFile("img/ssmall.bmp");

         }
         pole7->Enabled=false;
         sprawdz();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole8Click(TObject *Sender)
{
if (p8=='n')
        {
         if (kto=='s')
         {
            pole8->Picture->LoadFromFile("img/s.bmp");
            p8='s';
            kto='p';
            tura->Picture->LoadFromFile("img/psmall.bmp");

         }
         else
         {
            pole8->Picture->LoadFromFile("img/p.bmp");
            p8='p';
            kto='s';
            tura->Picture->LoadFromFile("img/ssmall.bmp");

         }
         pole8->Enabled=false;
         sprawdz();
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole9Click(TObject *Sender)
{
if (p9=='n')
        {
         if (kto=='s')
         {
            pole9->Picture->LoadFromFile("img/s.bmp");
            p9='s';
            kto='p';
            tura->Picture->LoadFromFile("img/psmall.bmp");

         }
         else
         {
            pole9->Picture->LoadFromFile("img/p.bmp");
            p9='p';
            kto='s';
            tura->Picture->LoadFromFile("img/ssmall.bmp");

         }
         pole9->Enabled=false;
         sprawdz();
        }
}
//---------------------------------------------------------------------------







void __fastcall TForm1::Button2Click(TObject *Sender)
{
   pole1->Picture->LoadFromFile("img/nic.bmp");
        pole2->Picture->LoadFromFile("img/nic.bmp");
        pole3->Picture->LoadFromFile("img/nic.bmp");
        pole4->Picture->LoadFromFile("img/nic.bmp");
        pole5->Picture->LoadFromFile("img/nic.bmp");
        pole6->Picture->LoadFromFile("img/nic.bmp");
        pole7->Picture->LoadFromFile("img/nic.bmp");
        pole8->Picture->LoadFromFile("img/nic.bmp");
        pole9->Picture->LoadFromFile("img/nic.bmp");
        tura->Picture->LoadFromFile("img/ssmall.bmp");

        p1='n'; p4='n'; p7='n';
        p2='n'; p5='n'; p8='n';
        p3='n'; p6='n'; p9='n';

        kto='s';

        pole1->Enabled=true;
        pole2->Enabled=true;
        pole3->Enabled=true;
        pole4->Enabled=true;
        pole5->Enabled=true;
        pole6->Enabled=true;
        pole7->Enabled=true;
        pole8->Enabled=true;
        pole9->Enabled=true;

        Form1->Label2->Caption=pp=0;
        Form1->Label3->Caption=ps=0;
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Zakocz1Click(TObject *Sender)
{
if (Application->MessageBox("Czy na pewno zakończyć gre?","Zakańczanie gry Piorun VS Serce", MB_YESNO |MB_ICONQUESTION) == IDYES)
        {
         Application->Terminate();
        }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
 if (Application->MessageBox("Czy na pewno zakończyć gre?","Zakańczanie gry Piorun VS Serce", MB_YESNO |MB_ICONQUESTION) == IDNO)
        {
         Action=caNone;
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Zasadygry1Click(TObject *Sender)
{
        Form2->ShowModal();
}
//---------------------------------------------------------------------------

