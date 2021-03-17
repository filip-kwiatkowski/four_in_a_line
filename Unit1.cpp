//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

char p[7][6]; //pola w grze    'n','r','y'
char kto;
int ile_ruchow=0;

void sprawdz()
{
        for(int i=0;i<6;i++)            //
        {
                if((p[0][i]==p[1][i] && p[0][i]==p[2][i] && p[0][i]==p[3][i] && p[3][i]!='n') ||
                   (p[1][i]==p[2][i] && p[1][i]==p[3][i] && p[1][i]==p[4][i] && p[3][i]!='n') ||
                   (p[2][i]==p[3][i] && p[2][i]==p[4][i] && p[2][i]==p[5][i] && p[3][i]!='n') ||
                   (p[3][i]==p[4][i] && p[3][i]==p[5][i] && p[3][i]==p[6][i] && p[3][i]!='n') )
            {
              char *w="";
               if(kto=='r') w="Wygrywa 鄴速y!";
               else w="Wygrywa czerwony!";

               Application->MessageBox(w,"Koniec gry",MB_OK);
               return;
            }
        }

        for(int i=0;i<7;i++)
        {
                if((p[i][0]==p[i][1] && p[i][0]==p[i][2] && p[i][0]==p[i][3] && p[i][0]!='n') ||
                   (p[i][1]==p[i][2] && p[i][1]==p[i][3] && p[i][1]==p[i][4] && p[i][1]!='n') ||
                   (p[i][2]==p[i][3] && p[i][2]==p[i][4] && p[i][2]==p[i][5] && p[i][2]!='n') )
            {
              char *w="";
               if(kto=='r') w="Wygrywa 鄴速y!";
               else w="Wygrywa czerwony!";

               Application->MessageBox(w,"Koniec gry",MB_OK);
               return;
            }
        }

        for(int i=0;i<=3;i++)
        {
                if((p[0+i][0]==p[1+i][1] && p[0+i][0]==p[2+i][2] && p[0+i][0]==p[3+i][3] && p[0+i][0]!='n') ||
                   (p[0+i][1]==p[1+i][2] && p[0+i][1]==p[2+i][3] && p[0+i][1]==p[3+i][4] && p[0+i][1]!='n') ||
                   (p[0+i][2]==p[1+i][3] && p[0+i][2]==p[2+i][4] && p[0+i][2]==p[3+i][5] && p[0+i][2]!='n') )
            {
              char *w="";
               if(kto=='r') w="Wygrywa 鄴速y!";
               else w="Wygrywa czerwony!";

               Application->MessageBox(w,"Koniec gry",MB_OK);
               return;
            }
        }
        for(int i=0;i<=3;i++)
        {
                if(p[6-i][2]==p[5-i][3] && p[6-i][2]==p[4-i][4] && p[6-i][2]==p[3-i][5] && p[6-i][2]!='n' ||
                   p[6-i][1]==p[5-i][2] && p[6-i][1]==p[4-i][3] && p[6-i][1]==p[3-i][4] && p[6-i][1]!='n' ||
                   p[6-i][0]==p[5-i][1] && p[6-i][0]==p[4-i][2] && p[6-i][0]==p[3-i][3] && p[6-i][0]!='n'  )
            {
              char *w="";
               if(kto=='r') w="Wygrywa 鄴速y!";
               else w="Wygrywa czerwony!";

               Application->MessageBox(w,"Koniec gry",MB_OK);
               return;
            }
        }
        ile_ruchow++;
        if(ile_ruchow==42)
        {
             Application->MessageBox("Remis!","Koniec gry",MB_OK);
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
        pole00 -> Picture->LoadFromFile("img/nic.bmp");
        pole01 -> Picture->LoadFromFile("img/nic.bmp");
        pole02 -> Picture->LoadFromFile("img/nic.bmp");
        pole03 -> Picture->LoadFromFile("img/nic.bmp");
        pole04 -> Picture->LoadFromFile("img/nic.bmp");
        pole05 -> Picture->LoadFromFile("img/nic.bmp");
        pole10 -> Picture->LoadFromFile("img/nic.bmp");
        pole11 -> Picture->LoadFromFile("img/nic.bmp");
        pole12 -> Picture->LoadFromFile("img/nic.bmp");
        pole13 -> Picture->LoadFromFile("img/nic.bmp");
        pole14 -> Picture->LoadFromFile("img/nic.bmp");
        pole15 -> Picture->LoadFromFile("img/nic.bmp");
        pole20 -> Picture->LoadFromFile("img/nic.bmp");
        pole21 -> Picture->LoadFromFile("img/nic.bmp");
        pole22 -> Picture->LoadFromFile("img/nic.bmp");
        pole23 -> Picture->LoadFromFile("img/nic.bmp");
        pole24 -> Picture->LoadFromFile("img/nic.bmp");
        pole25 -> Picture->LoadFromFile("img/nic.bmp");
        pole30 -> Picture->LoadFromFile("img/nic.bmp");
        pole31 -> Picture->LoadFromFile("img/nic.bmp");
        pole32 -> Picture->LoadFromFile("img/nic.bmp");
        pole33 -> Picture->LoadFromFile("img/nic.bmp");
        pole34 -> Picture->LoadFromFile("img/nic.bmp");
        pole35 -> Picture->LoadFromFile("img/nic.bmp");
        pole40 -> Picture->LoadFromFile("img/nic.bmp");
        pole41 -> Picture->LoadFromFile("img/nic.bmp");
        pole42 -> Picture->LoadFromFile("img/nic.bmp");
        pole43 -> Picture->LoadFromFile("img/nic.bmp");
        pole44 -> Picture->LoadFromFile("img/nic.bmp");
        pole45 -> Picture->LoadFromFile("img/nic.bmp");
        pole50 -> Picture->LoadFromFile("img/nic.bmp");
        pole51 -> Picture->LoadFromFile("img/nic.bmp");
        pole52 -> Picture->LoadFromFile("img/nic.bmp");
        pole53 -> Picture->LoadFromFile("img/nic.bmp");
        pole54 -> Picture->LoadFromFile("img/nic.bmp");
        pole55 -> Picture->LoadFromFile("img/nic.bmp");
        pole60 -> Picture->LoadFromFile("img/nic.bmp");
        pole61 -> Picture->LoadFromFile("img/nic.bmp");
        pole62 -> Picture->LoadFromFile("img/nic.bmp");
        pole63 -> Picture->LoadFromFile("img/nic.bmp");
        pole64 -> Picture->LoadFromFile("img/nic.bmp");
        pole65 -> Picture->LoadFromFile("img/nic.bmp");
        ruch -> Picture->LoadFromFile("img/rsmall.bmp");

        for(int i=0;i<6;i++)
        {
                for(int j=0;j<7;j++)
                  p[j][i]='n';
        }
        kto='r';
        ile_ruchow=0;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole00Click(TObject *Sender)
{
   if(p[0][0]=='n')
   {
        if(kto=='r')
        {
                pole00->Picture->LoadFromFile("img/r.bmp");
                p[0][0]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole00->Picture->LoadFromFile("img/y.bmp");
                p[0][0]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else if(p[0][5]=='n')
   {
   pole05Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole01Click(TObject *Sender)
{
   if(p[0][0]!='n' && p[0][1]=='n')
   {
        if(kto=='r')
        {
                pole01->Picture->LoadFromFile("img/r.bmp");
                p[0][1]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole01->Picture->LoadFromFile("img/y.bmp");
                p[0][1]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole00Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole02Click(TObject *Sender)
{
   if(p[0][1]!='n' && p[0][2]=='n')
   {
        if(kto=='r')
        {
                pole02->Picture->LoadFromFile("img/r.bmp");
                p[0][2]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole02->Picture->LoadFromFile("img/y.bmp");
                p[0][2]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole01Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole03Click(TObject *Sender)
{
   if(p[0][2]!='n' && p[0][3]=='n')
   {
        if(kto=='r')
        {
                pole03->Picture->LoadFromFile("img/r.bmp");
                p[0][3]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole03->Picture->LoadFromFile("img/y.bmp");
                p[0][3]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole02Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole04Click(TObject *Sender)
{
   if(p[0][3]!='n' && p[0][4]=='n')
   {
        if(kto=='r')
        {
                pole04->Picture->LoadFromFile("img/r.bmp");
                p[0][4]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole04->Picture->LoadFromFile("img/y.bmp");
                p[0][4]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole03Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole05Click(TObject *Sender)
{
   if(p[0][4]!='n' && p[0][5]=='n')
   {
        if(kto=='r')
        {
                pole05->Picture->LoadFromFile("img/r.bmp");
                p[0][5]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole05->Picture->LoadFromFile("img/y.bmp");
                p[0][5]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole04Click(Form1);
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole10Click(TObject *Sender)
{
   if(p[1][0]=='n')
   {
        if(kto=='r')
        {
                pole10->Picture->LoadFromFile("img/r.bmp");
                p[1][0]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole10->Picture->LoadFromFile("img/y.bmp");
                p[1][0]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else if(p[1][5]=='n')
   {
   pole15Click(Form1);
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::pole11Click(TObject *Sender)
{
   if(p[1][0]!='n' && p[1][1]=='n')
   {
        if(kto=='r')
        {
                pole11->Picture->LoadFromFile("img/r.bmp");
                p[1][1]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole11->Picture->LoadFromFile("img/y.bmp");
                p[1][1]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole10Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole12Click(TObject *Sender)
{
   if(p[1][1]!='n' && p[1][2]=='n')
   {
        if(kto=='r')
        {
                pole12->Picture->LoadFromFile("img/r.bmp");
                p[1][2]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole12->Picture->LoadFromFile("img/y.bmp");
                p[1][2]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole11Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole13Click(TObject *Sender)
{
   if(p[1][2]!='n' && p[1][3]=='n')
   {
        if(kto=='r')
        {
                pole13->Picture->LoadFromFile("img/r.bmp");
                p[1][3]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole13->Picture->LoadFromFile("img/y.bmp");
                p[1][3]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole12Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole14Click(TObject *Sender)
{ 
   if(p[1][3]!='n' && p[1][4]=='n')
   {
        if(kto=='r')
        {
                pole14->Picture->LoadFromFile("img/r.bmp");
                p[1][4]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole14->Picture->LoadFromFile("img/y.bmp");
                p[1][4]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole13Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole15Click(TObject *Sender)
{
   if(p[1][4]!='n' && p[1][5]=='n')
   {
        if(kto=='r')
        {
                pole15->Picture->LoadFromFile("img/r.bmp");
                p[1][5]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole15->Picture->LoadFromFile("img/y.bmp");
                p[1][5]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();   }
   else
   {
   pole14Click(Form1);
   }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::pole20Click(TObject *Sender)
{
   if(p[2][0]=='n')
   {
        if(kto=='r')
        {
                pole20->Picture->LoadFromFile("img/r.bmp");
                p[2][0]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole20->Picture->LoadFromFile("img/y.bmp");
                p[2][0]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz(); 
   }
   else if(p[2][5]=='n')
   {
   pole25Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole21Click(TObject *Sender)
{ 
   if(p[2][0]!='n' && p[2][1]=='n')
   {
        if(kto=='r')
        {
                pole21->Picture->LoadFromFile("img/r.bmp");
                p[2][1]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole21->Picture->LoadFromFile("img/y.bmp");
                p[2][1]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole20Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole22Click(TObject *Sender)
{ 
   if(p[2][1]!='n' && p[2][2]=='n')
   {
        if(kto=='r')
        {
                pole22->Picture->LoadFromFile("img/r.bmp");
                p[2][2]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole22->Picture->LoadFromFile("img/y.bmp");
                p[2][2]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole21Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole23Click(TObject *Sender)
{ 
   if(p[2][2]!='n' && p[2][3]=='n')
   {
        if(kto=='r')
        {
                pole23->Picture->LoadFromFile("img/r.bmp");
                p[2][3]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole23->Picture->LoadFromFile("img/y.bmp");
                p[2][3]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole22Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole24Click(TObject *Sender)
{
   if(p[2][3]!='n' && p[2][4]=='n')
   {
        if(kto=='r')
        {
                pole24->Picture->LoadFromFile("img/r.bmp");
                p[2][4]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole24->Picture->LoadFromFile("img/y.bmp");
                p[2][4]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole23Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole25Click(TObject *Sender)
{ 
   if(p[2][4]!='n' && p[2][5]=='n')
   {
        if(kto=='r')
        {
                pole25->Picture->LoadFromFile("img/r.bmp");
                p[2][5]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole25->Picture->LoadFromFile("img/y.bmp");
                p[2][5]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole24Click(Form1);
   }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::pole30Click(TObject *Sender)
{
   if(p[3][0]=='n')
   {
        if(kto=='r')
        {
                pole30->Picture->LoadFromFile("img/r.bmp");
                p[3][0]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole30->Picture->LoadFromFile("img/y.bmp");
                p[3][0]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();  
   }
   else if(p[3][5]=='n')
   {
   pole35Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole31Click(TObject *Sender)
{
   if(p[3][0]!='n' && p[3][1]=='n')
   {
        if(kto=='r')
        {
                pole31->Picture->LoadFromFile("img/r.bmp");
                p[3][1]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole31->Picture->LoadFromFile("img/y.bmp");
                p[3][1]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole30Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole32Click(TObject *Sender)
{ 
   if(p[3][1]!='n' && p[3][2]=='n')
   {
        if(kto=='r')
        {
                pole32->Picture->LoadFromFile("img/r.bmp");
                p[3][2]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole32->Picture->LoadFromFile("img/y.bmp");
                p[3][2]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole31Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole33Click(TObject *Sender)
{  
   if(p[3][2]!='n' && p[3][3]=='n')
   {
        if(kto=='r')
        {
                pole33->Picture->LoadFromFile("img/r.bmp");
                p[3][3]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole33->Picture->LoadFromFile("img/y.bmp");
                p[3][3]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole32Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole34Click(TObject *Sender)
{ 
   if(p[3][3]!='n' && p[3][4]=='n')
   {
        if(kto=='r')
        {
                pole34->Picture->LoadFromFile("img/r.bmp");
                p[3][4]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole34->Picture->LoadFromFile("img/y.bmp");
                p[3][4]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz(); 
   }
   else
   {
   pole33Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole35Click(TObject *Sender)
{  
   if(p[3][4]!='n' && p[3][5]=='n')
   {
        if(kto=='r')
        {
                pole35->Picture->LoadFromFile("img/r.bmp");
                p[3][5]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole35->Picture->LoadFromFile("img/y.bmp");
                p[3][5]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();     
   }
   else
   {
   pole34Click(Form1);
   }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::pole40Click(TObject *Sender)
{
   if(p[4][0]=='n')
   {
        if(kto=='r')
        {
                pole40->Picture->LoadFromFile("img/r.bmp");
                p[4][0]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole40->Picture->LoadFromFile("img/y.bmp");
                p[4][0]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz(); 
   }
   else if(p[4][5]=='n')
   {
   pole45Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole41Click(TObject *Sender)
{
   if(p[4][0]!='n' && p[4][1]=='n')
   {
        if(kto=='r')
        {
                pole41->Picture->LoadFromFile("img/r.bmp");
                p[4][1]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole41->Picture->LoadFromFile("img/y.bmp");
                p[4][1]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole40Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole42Click(TObject *Sender)
{ 
   if(p[4][1]!='n' && p[4][2]=='n')
   {
        if(kto=='r')
        {
                pole42->Picture->LoadFromFile("img/r.bmp");
                p[4][2]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole42->Picture->LoadFromFile("img/y.bmp");
                p[4][2]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole41Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole43Click(TObject *Sender)
{
   if(p[4][2]!='n' && p[4][3]=='n')
   {
        if(kto=='r')
        {
                pole43->Picture->LoadFromFile("img/r.bmp");
                p[4][3]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole43->Picture->LoadFromFile("img/y.bmp");
                p[4][3]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole42Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole44Click(TObject *Sender)
{      
   if(p[4][3]!='n' && p[4][4]=='n')
   {
        if(kto=='r')
        {
                pole44->Picture->LoadFromFile("img/r.bmp");
                p[4][4]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole44->Picture->LoadFromFile("img/y.bmp");
                p[4][4]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole43Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole45Click(TObject *Sender)
{  
   if(p[4][4]!='n' && p[4][5]=='n')
   {
        if(kto=='r')
        {
                pole45->Picture->LoadFromFile("img/r.bmp");
                p[4][5]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole45->Picture->LoadFromFile("img/y.bmp");
                p[4][5]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole44Click(Form1);
   }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::pole50Click(TObject *Sender)
{
   if(p[5][0]=='n')
   {
        if(kto=='r')
        {
                pole50->Picture->LoadFromFile("img/r.bmp");
                p[5][0]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole50->Picture->LoadFromFile("img/y.bmp");
                p[5][0]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz(); 
   }
   else if(p[6][5]=='n')
   {
   pole55Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole51Click(TObject *Sender)
{ 
   if(p[5][0]!='n' && p[5][1]=='n')
   {
        if(kto=='r')
        {
                pole51->Picture->LoadFromFile("img/r.bmp");
                p[5][1]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole51->Picture->LoadFromFile("img/y.bmp");
                p[5][1]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole50Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole52Click(TObject *Sender)
{    
   if(p[5][1]!='n' && p[5][2]=='n')
   {
        if(kto=='r')
        {
                pole52->Picture->LoadFromFile("img/r.bmp");
                p[5][2]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole52->Picture->LoadFromFile("img/y.bmp");
                p[5][2]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole51Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole53Click(TObject *Sender)
{ 
   if(p[5][2]!='n' && p[5][3]=='n')
   {
        if(kto=='r')
        {
                pole53->Picture->LoadFromFile("img/r.bmp");
                p[5][3]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole53->Picture->LoadFromFile("img/y.bmp");
                p[5][3]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz(); 
   }
   else
   {
   pole52Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole54Click(TObject *Sender)
{ 
   if(p[5][3]!='n' && p[5][4]=='n')
   {
        if(kto=='r')
        {
                pole54->Picture->LoadFromFile("img/r.bmp");
                p[5][4]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole54->Picture->LoadFromFile("img/y.bmp");
                p[5][4]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();  
   }
   else
   {
   pole53Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole55Click(TObject *Sender)
{  
   if(p[5][4]!='n' && p[5][5]=='n')
   {
        if(kto=='r')
        {
                pole55->Picture->LoadFromFile("img/r.bmp");
                p[5][5]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole55->Picture->LoadFromFile("img/y.bmp");
                p[5][5]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole54Click(Form1);
   }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::pole60Click(TObject *Sender)
{
   if(p[6][0]=='n')
   {
        if(kto=='r')
        {
                pole60->Picture->LoadFromFile("img/r.bmp");
                p[6][0]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole60->Picture->LoadFromFile("img/y.bmp");
                p[6][0]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz(); 
   }
   else if(p[6][5]=='n')
   {
   pole65Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole61Click(TObject *Sender)
{  
   if(p[6][0]!='n' && p[6][1]=='n')
   {
        if(kto=='r')
        {
                pole61->Picture->LoadFromFile("img/r.bmp");
                p[6][1]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole61->Picture->LoadFromFile("img/y.bmp");
                p[6][1]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole60Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole62Click(TObject *Sender)
{      
   if(p[6][1]!='n' && p[6][2]=='n')
   {
        if(kto=='r')
        {
                pole62->Picture->LoadFromFile("img/r.bmp");
                p[6][2]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole62->Picture->LoadFromFile("img/y.bmp");
                p[6][2]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole61Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole63Click(TObject *Sender)
{   
   if(p[6][2]!='n' && p[6][3]=='n')
   {
        if(kto=='r')
        {
                pole63->Picture->LoadFromFile("img/r.bmp");
                p[6][3]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole63->Picture->LoadFromFile("img/y.bmp");
                p[6][3]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole62Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole64Click(TObject *Sender)
{    
   if(p[6][3]!='n' && p[6][4]=='n')
   {
        if(kto=='r')
        {
                pole64->Picture->LoadFromFile("img/r.bmp");
                p[6][4]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole64->Picture->LoadFromFile("img/y.bmp");
                p[6][4]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz();
   }
   else
   {
   pole63Click(Form1);
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::pole65Click(TObject *Sender)
{  
   if(p[6][4]!='n' && p[6][5]=='n')
   {
        if(kto=='r')
        {
                pole65->Picture->LoadFromFile("img/r.bmp");
                p[6][5]='r';
                kto='y';
                ruch->Picture->LoadFromFile("img/ysmall.bmp");
        }
        else
        {
                pole65->Picture->LoadFromFile("img/y.bmp");
                p[6][5]='y';
                kto='r';
                ruch->Picture->LoadFromFile("img/rsmall.bmp");
        }
        sprawdz(); 
   }
   else
   {
   pole64Click(Form1);
   }
}
//---------------------------------------------------------------------------





