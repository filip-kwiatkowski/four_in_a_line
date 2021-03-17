//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TImage *pole00;
        TImage *pole10;
        TImage *pole20;
        TImage *pole30;
        TImage *pole40;
        TImage *pole50;
        TImage *pole60;
        TImage *pole01;
        TImage *pole11;
        TImage *pole21;
        TImage *pole31;
        TImage *pole41;
        TImage *pole51;
        TImage *pole61;
        TImage *pole02;
        TImage *pole12;
        TImage *pole22;
        TImage *pole32;
        TImage *pole42;
        TImage *pole52;
        TImage *pole62;
        TImage *pole03;
        TImage *pole13;
        TImage *pole23;
        TImage *pole33;
        TImage *pole43;
        TImage *pole53;
        TImage *pole63;
        TImage *pole04;
        TImage *pole14;
        TImage *pole24;
        TImage *pole34;
        TImage *pole54;
        TImage *pole64;
        TImage *pole05;
        TImage *pole15;
        TImage *pole25;
        TImage *pole35;
        TImage *pole45;
        TImage *pole55;
        TImage *pole65;
        TImage *ruch;
        TLabel *Label1;
        TImage *pole44;
        TButton *Button1;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall pole00Click(TObject *Sender);
        void __fastcall pole01Click(TObject *Sender);
        void __fastcall pole02Click(TObject *Sender);
        void __fastcall pole03Click(TObject *Sender);
        void __fastcall pole04Click(TObject *Sender);
        void __fastcall pole05Click(TObject *Sender);
        void __fastcall pole10Click(TObject *Sender);
        void __fastcall pole11Click(TObject *Sender);
        void __fastcall pole12Click(TObject *Sender);
        void __fastcall pole13Click(TObject *Sender);
        void __fastcall pole14Click(TObject *Sender);
        void __fastcall pole15Click(TObject *Sender);
        void __fastcall pole20Click(TObject *Sender);
        void __fastcall pole21Click(TObject *Sender);
        void __fastcall pole22Click(TObject *Sender);
        void __fastcall pole23Click(TObject *Sender);
        void __fastcall pole24Click(TObject *Sender);
        void __fastcall pole25Click(TObject *Sender);
        void __fastcall pole30Click(TObject *Sender);
        void __fastcall pole31Click(TObject *Sender);
        void __fastcall pole32Click(TObject *Sender);
        void __fastcall pole33Click(TObject *Sender);
        void __fastcall pole34Click(TObject *Sender);
        void __fastcall pole35Click(TObject *Sender);
        void __fastcall pole40Click(TObject *Sender);
        void __fastcall pole41Click(TObject *Sender);
        void __fastcall pole42Click(TObject *Sender);
        void __fastcall pole43Click(TObject *Sender);
        void __fastcall pole44Click(TObject *Sender);
        void __fastcall pole45Click(TObject *Sender);
        void __fastcall pole50Click(TObject *Sender);
        void __fastcall pole51Click(TObject *Sender);
        void __fastcall pole52Click(TObject *Sender);
        void __fastcall pole53Click(TObject *Sender);
        void __fastcall pole54Click(TObject *Sender);
        void __fastcall pole55Click(TObject *Sender);
        void __fastcall pole60Click(TObject *Sender);
        void __fastcall pole61Click(TObject *Sender);
        void __fastcall pole62Click(TObject *Sender);
        void __fastcall pole63Click(TObject *Sender);
        void __fastcall pole64Click(TObject *Sender);
        void __fastcall pole65Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
