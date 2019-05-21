
#include "main.buildv1.1.15/linux_debug_mx/include/main_m2conio_2m2conio.h"

#include "libc/libc.buildv1.1.15/linux_debug_mx/include/libc_libc.h"
#include "monkey/monkey.buildv1.1.15/linux_debug_mx/include/monkey_types.h"

bbString bbDBType(t_m2conio_ConsoleHandler_Key*p){
  	return "m2conio.ConsoleHandler.Key";
}
bbString bbDBValue(t_m2conio_ConsoleHandler_Key*p){
  	return bbString( *(int*)p );
}
t_m2conio_ConsoleHandler g_m2conio_Console;
t_m2conio_AnsiHandler g_m2conio_Ansi;
t_m2conio_AnsiHandler_Color g_m2conio_AnsiHandler_Color_Black;
t_m2conio_AnsiHandler_Color g_m2conio_AnsiHandler_Color_Blue;
t_m2conio_AnsiHandler_Color g_m2conio_AnsiHandler_Color_Cyan;
t_m2conio_AnsiHandler_Color g_m2conio_AnsiHandler_Color_Green;
t_m2conio_AnsiHandler_Color g_m2conio_AnsiHandler_Color_Magenta;
t_m2conio_AnsiHandler_Color g_m2conio_AnsiHandler_Color_Red;
t_m2conio_AnsiHandler_Color g_m2conio_AnsiHandler_Color_White;
t_m2conio_AnsiHandler_Color g_m2conio_AnsiHandler_Color_Yellow;

void t_m2conio_ConsoleHandler::dbEmit(t_m2conio_ConsoleHandler*p){
}
t_m2conio_ConsoleHandler::~t_m2conio_ConsoleHandler(){
}

void t_m2conio_ConsoleHandler::m_Write(bbString l_text,bbBool l_nl){
  bbDBFrame db_f{"Write:Void(text:monkey.types.String,nl:monkey.types.Bool)","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_ConsoleHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("text",&l_text);
  bbDBLocal("nl",&l_nl);
  bbDBStmt(1847298);
  if(l_nl){
    bbDBBlock db_blk;
    l_text=(l_text+bbString(L"\n",1));
  }
  bbDBStmt(1855490);
  fputs_utf8(bbCString(l_text),stdout);
  bbDBStmt(1859586);
  fflush(stdout);
}

void t_m2conio_ConsoleHandler::m_WaitKey(bbString l_text,bbInt l_key){
  bbDBFrame db_f{"WaitKey:Void(text:monkey.types.String,key:monkey.types.Int)","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_ConsoleHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("text",&l_text);
  bbDBLocal("key",&l_key);
  bbDBStmt(1892354);
  (*this).m_Write(l_text,false);
  bbDBStmt(1900546);
  if((l_key>=bbInt(0))){
    bbDBBlock db_blk;
    bbDBStmt(1904643);
    {
      bbDBLoop db_loop;
      do{
        bbDBBlock db_blk;
      }while(!(((*this).m_KeyHit()==l_key)));
    }
  }else{
    bbDBStmt(1912834);
    bbDBBlock db_blk;
    bbDBStmt(1916931);
    (*this).m_KeyHit();
  }
  bbDBStmt(1929218);
  return;
}

bbInt t_m2conio_ConsoleHandler::m_KeyHit(){
  bbDBFrame db_f{"KeyHit:monkey.types.Int()","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_ConsoleHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(1953794);
  if(bbBool(kbhit())){
    bbDBBlock db_blk;
    return getch();
  }
  bbDBStmt(1957890);
  return bbInt(0);
}

bbString t_m2conio_ConsoleHandler::m_Input(){
  bbDBFrame db_f{"Input:monkey.types.String()","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_ConsoleHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(1986568);
  bbInt l_inp{};
  bbDBLocal("inp",&l_inp);
  bbDBStmt(1990664);
  bbString l_result{};
  bbDBLocal("result",&l_result);
  bbDBStmt(1998850);
  {
    bbDBLoop db_loop;
    for(;;){
      bbDBBlock db_blk;
      bbDBStmt(2007043);
      l_inp=getc(stdin);
      bbDBStmt(2011139);
      if(bbBool(l_inp)){
        bbDBBlock db_blk;
        bbDBStmt(2019332);
        if((l_inp==10)){
          bbDBBlock db_blk;
          bbDBStmt(2027525);
          break;
        }else{
          bbDBStmt(2031620);
          bbDBBlock db_blk;
          bbDBStmt(2039813);
          l_result+=bbString::fromChar(l_inp);
        }
      }
    }
  }
  bbDBStmt(2060290);
  return l_result;
}

void t_m2conio_ConsoleHandler::m_Bell(){
  bbDBFrame db_f{"Bell:Void()","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_ConsoleHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(2088962);
  fputs_utf8(bbCString(bbString::fromChar(7)),stdout);
}
bbString bbDBType(t_m2conio_ConsoleHandler*){
  return "m2conio.ConsoleHandler";
}
bbString bbDBValue(t_m2conio_ConsoleHandler*p){
  return bbDBStructValue(p);
}

int bbCompare(const t_m2conio_ConsoleHandler&x,const t_m2conio_ConsoleHandler&y){
  return 0;
}

void t_m2conio_AnsiHandler_Color::dbEmit(t_m2conio_AnsiHandler_Color*p){
  bbDBEmit("id",&p->m_id);
}

t_m2conio_AnsiHandler_Color::t_m2conio_AnsiHandler_Color(bbUByte l_id){
  bbDBFrame db_f{"new:Void(id:monkey.types.Ubyte)","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_AnsiHandler_Color*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("id",&l_id);
  bbDBStmt(245763);
  (*this).m_id=l_id;
}
t_m2conio_AnsiHandler_Color::~t_m2conio_AnsiHandler_Color(){
}
bbString bbDBType(t_m2conio_AnsiHandler_Color*){
  return "m2conio.AnsiHandler.Color";
}
bbString bbDBValue(t_m2conio_AnsiHandler_Color*p){
  return bbDBStructValue(p);
}

int bbCompare(const t_m2conio_AnsiHandler_Color&x,const t_m2conio_AnsiHandler_Color&y){
  if(int t=bbCompare(x.m_id,y.m_id)) return t;
  return 0;
}

void t_m2conio_AnsiHandler::dbEmit(t_m2conio_AnsiHandler*p){
  bbDBEmit("_foreground",&p->m__0foreground);
  bbDBEmit("_boldForeground",&p->m__0boldForeground);
  bbDBEmit("_lastForeground",&p->m__0lastForeground);
  bbDBEmit("_lastBoldForeground",&p->m__0lastBoldForeground);
  bbDBEmit("_underline",&p->m__0underline);
  bbDBEmit("_lastUnderline",&p->m__0lastUnderline);
  bbDBEmit("_background",&p->m__0background);
  bbDBEmit("_boldBackground",&p->m__0boldBackground);
  bbDBEmit("_lastBackground",&p->m__0lastBackground);
  bbDBEmit("_lastBoldBackground",&p->m__0lastBoldBackground);
  bbDBEmit("_supportsAnsi",&p->m__0supportsAnsi);
  bbDBEmit("_ansiChecked",&p->m__0ansiChecked);
}
t_m2conio_AnsiHandler::~t_m2conio_AnsiHandler(){
}

void t_m2conio_AnsiHandler::m_Underline(bbBool l_underline){
  bbDBFrame db_f{"Underline:Void(underline:monkey.types.Bool)","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_AnsiHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("underline",&l_underline);
  bbDBStmt(405506);
  if(((*this).m__0underline==l_underline)){
    bbDBBlock db_blk;
    return;
  }
  bbDBStmt(409602);
  (*this).m__0underline=l_underline;
  bbDBStmt(417794);
  (*this).m_ApplyForeground();
}

bbBool t_m2conio_AnsiHandler::m_Underline(){
  bbDBFrame db_f{"Underline:monkey.types.Bool()","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_AnsiHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(397314);
  return (*this).m__0underline;
}

bbBool t_m2conio_AnsiHandler::m_Supported(){
  bbDBFrame db_f{"Supported:monkey.types.Bool()","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_AnsiHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(278530);
  (*this).m_CheckSupport(false);
  bbDBStmt(282626);
  return (*this).m__0supportsAnsi;
}

void t_m2conio_AnsiHandler::m_SetTitle(bbString l_name){
  bbDBFrame db_f{"SetTitle:Void(name:monkey.types.String)","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_AnsiHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("name",&l_name);
  bbDBStmt(905218);
  (*this).m_Code(((bbString(L"]2;",3)+l_name)+bbString::fromChar(7)));
}

void t_m2conio_AnsiHandler::m_ScrollingRegion(bbUInt l_s,bbUInt l_e){
  bbDBFrame db_f{"ScrollingRegion:Void(s:monkey.types.Uint,e:monkey.types.Uint)","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_AnsiHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("s",&l_s);
  bbDBLocal("e",&l_e);
  bbDBStmt(991234);
  (*this).m_Code(((((bbString(L"[",1)+bbString(l_s))+bbString(L";",1))+bbString(l_e))+bbString(L"r",1)));
}

void t_m2conio_AnsiHandler::m_ResetForeground(){
  bbDBFrame db_f{"ResetForeground:Void()","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_AnsiHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(1056770);
  (*this).m__0foreground.m_id=bbUByte(39);
  bbDBStmt(1060866);
  (*this).m__0boldForeground=false;
  bbDBStmt(1064962);
  (*this).m__0underline=false;
  bbDBStmt(1073154);
  (*this).m_ApplyForeground();
}

void t_m2conio_AnsiHandler::m_ResetColors(){
  bbDBFrame db_f{"ResetColors:Void()","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_AnsiHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(1024002);
  (*this).m_ResetForeground();
  bbDBStmt(1028098);
  (*this).m_ResetBackground();
}

void t_m2conio_AnsiHandler::m_ResetBackground(){
  bbDBFrame db_f{"ResetBackground:Void()","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_AnsiHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(1101826);
  (*this).m__0background.m_id=bbUByte(39);
  bbDBStmt(1105922);
  (*this).m__0boldBackground=false;
  bbDBStmt(1114114);
  (*this).m_ApplyBackground();
}

void t_m2conio_AnsiHandler::m_RawColor(bbUByte l_color){
  bbDBFrame db_f{"RawColor:Void(color:monkey.types.Ubyte)","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_AnsiHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("color",&l_color);
  bbDBStmt(847874);
  (*this).m_Code(((bbString(L"[",1)+bbString(l_color))+bbString(L"m",1)));
}

void t_m2conio_AnsiHandler::m_MainBuffer(){
  bbDBFrame db_f{"MainBuffer:Void()","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_AnsiHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(962562);
  (*this).m_Code(bbString(L"[?1049l",7));
}

void t_m2conio_AnsiHandler::m_ForegroundBold(bbBool l_bold){
  bbDBFrame db_f{"ForegroundBold:Void(bold:monkey.types.Bool)","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_AnsiHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("bold",&l_bold);
  bbDBStmt(368642);
  if(((*this).m__0boldForeground==l_bold)){
    bbDBBlock db_blk;
    return;
  }
  bbDBStmt(372738);
  (*this).m__0boldForeground=l_bold;
  bbDBStmt(380930);
  (*this).m_ApplyForeground();
}

bbBool t_m2conio_AnsiHandler::m_ForegroundBold(){
  bbDBFrame db_f{"ForegroundBold:monkey.types.Bool()","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_AnsiHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(360450);
  return (*this).m__0boldForeground;
}

void t_m2conio_AnsiHandler::m_Foreground(t_m2conio_AnsiHandler_Color l_color){
  bbDBFrame db_f{"Foreground:Void(color:m2conio.AnsiHandler.Color)","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_AnsiHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("color",&l_color);
  bbDBStmt(319490);
  if((bbCompare((*this).m__0foreground,l_color)==0)){
    bbDBBlock db_blk;
    return;
  }
  bbDBStmt(323586);
  (*this).m__0foreground=l_color;
  bbDBStmt(331778);
  (*this).m_ApplyForeground();
}

t_m2conio_AnsiHandler_Color t_m2conio_AnsiHandler::m_Foreground(){
  bbDBFrame db_f{"Foreground:m2conio.AnsiHandler.Color()","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_AnsiHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(311298);
  return (*this).m__0foreground;
}

void t_m2conio_AnsiHandler::m_Code(bbString l_code){
  bbDBFrame db_f{"Code:Void(code:monkey.types.String)","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_AnsiHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("code",&l_code);
  bbDBStmt(798722);
  (*this).m_CheckSupport(true);
  bbDBStmt(806914);
  if((*this).m__0supportsAnsi){
    bbDBBlock db_blk;
    bbDBStmt(811011);
    fputs_utf8(bbCString((bbString::fromChar(27)+l_code)),stdout);
  }
}

void t_m2conio_AnsiHandler::m_Clear(){
  bbDBFrame db_f{"Clear:Void()","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_AnsiHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(876546);
  (*this).m_Code(bbString(L"[2J",3));
}

bbBool t_m2conio_AnsiHandler::m_CheckSupport(bbBool l_verbose){
  bbDBFrame db_f{"CheckSupport:monkey.types.Bool(verbose:monkey.types.Bool)","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_AnsiHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("verbose",&l_verbose);
  bbDBStmt(1134595);
  if((*this).m__0ansiChecked){
    bbDBBlock db_blk;
    return (*this).m__0supportsAnsi;
  }
  bbDBStmt(1138691);
  (*this).m__0ansiChecked=true;
  bbDBStmt(1396740);
  (*this).m__0supportsAnsi=true;
  bbDBStmt(1400836);
  (*this).m_ResetColors();
  bbDBStmt(1413123);
  return (*this).m__0supportsAnsi;
}

void t_m2conio_AnsiHandler::m_BackgroundBold(bbBool l_bold){
  bbDBFrame db_f{"BackgroundBold:Void(bold:monkey.types.Bool)","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_AnsiHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("bold",&l_bold);
  bbDBStmt(503810);
  if(((*this).m__0boldBackground==l_bold)){
    bbDBBlock db_blk;
    return;
  }
  bbDBStmt(507906);
  (*this).m__0boldBackground=l_bold;
  bbDBStmt(516098);
  (*this).m_ApplyBackground();
}

bbBool t_m2conio_AnsiHandler::m_BackgroundBold(){
  bbDBFrame db_f{"BackgroundBold:monkey.types.Bool()","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_AnsiHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(495618);
  return (*this).m__0boldBackground;
}

void t_m2conio_AnsiHandler::m_Background(t_m2conio_AnsiHandler_Color l_color){
  bbDBFrame db_f{"Background:Void(color:m2conio.AnsiHandler.Color)","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_AnsiHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBLocal("color",&l_color);
  bbDBStmt(454658);
  if((bbCompare((*this).m__0background,l_color)==0)){
    bbDBBlock db_blk;
    return;
  }
  bbDBStmt(458754);
  (*this).m__0background=l_color;
  bbDBStmt(466946);
  (*this).m_ApplyBackground();
}

t_m2conio_AnsiHandler_Color t_m2conio_AnsiHandler::m_Background(){
  bbDBFrame db_f{"Background:m2conio.AnsiHandler.Color()","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_AnsiHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(446466);
  return (*this).m__0background;
}

void t_m2conio_AnsiHandler::m_ApplyForeground(){
  bbDBFrame db_f{"ApplyForeground:Void()","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_AnsiHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(1433603);
  if(!(*this).m_CheckSupport(true)){
    bbDBBlock db_blk;
    return;
  }
  bbDBStmt(1441795);
  if(((*this).m__0lastUnderline!=(*this).m__0underline)){
    bbDBBlock db_blk;
    bbDBStmt(1445892);
    if((*this).m__0underline){
      bbDBBlock db_blk;
      bbDBStmt(1449989);
      (*this).m_RawColor(bbUByte(4));
    }else{
      bbDBStmt(1454084);
      bbDBBlock db_blk;
      bbDBStmt(1458181);
      (*this).m_RawColor(bbUByte(24));
    }
    bbDBStmt(1470468);
    (*this).m__0lastUnderline=(*this).m__0underline;
  }
  bbDBStmt(1482755);
  if(((bbCompare((*this).m__0lastForeground,(*this).m__0foreground)!=0)||((*this).m__0lastBoldForeground!=(*this).m__0boldForeground))){
    bbDBBlock db_blk;
    bbDBStmt(1486852);
    if((((*this).m__0boldForeground&&(bbUInt((*this).m__0foreground.m_id)>=30u))&&(bbUInt((*this).m__0foreground.m_id)<38u))){
      bbDBBlock db_blk;
      bbDBStmt(1490949);
      (*this).m_RawColor(bbUByte((bbUInt((*this).m__0foreground.m_id)+60u)));
    }else{
      bbDBStmt(1495044);
      bbDBBlock db_blk;
      bbDBStmt(1499141);
      (*this).m_RawColor((*this).m__0foreground.m_id);
    }
    bbDBStmt(1511428);
    (*this).m__0lastForeground=(*this).m__0foreground;
    bbDBStmt(1515524);
    (*this).m__0lastBoldForeground=(*this).m__0boldForeground;
  }
}

void t_m2conio_AnsiHandler::m_ApplyBackground(){
  bbDBFrame db_f{"ApplyBackground:Void()","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_AnsiHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(1540099);
  if(!(*this).m_CheckSupport(true)){
    bbDBBlock db_blk;
    return;
  }
  bbDBStmt(1548291);
  if(((bbCompare((*this).m__0lastBackground,(*this).m__0background)!=0)||((*this).m__0lastBoldBackground!=(*this).m__0boldBackground))){
    bbDBBlock db_blk;
    bbDBStmt(1552388);
    if((((*this).m__0boldBackground&&(bbUInt((*this).m__0background.m_id)>=30u))&&(bbUInt((*this).m__0background.m_id)<38u))){
      bbDBBlock db_blk;
      bbDBStmt(1556485);
      (*this).m_RawColor(bbUByte((bbUInt((*this).m__0background.m_id)+70u)));
    }else{
      bbDBStmt(1560580);
      bbDBBlock db_blk;
      bbDBStmt(1564677);
      (*this).m_RawColor(bbUByte((bbUInt((*this).m__0background.m_id)+10u)));
    }
    bbDBStmt(1576964);
    (*this).m__0lastBackground=(*this).m__0background;
    bbDBStmt(1581060);
    (*this).m__0lastBoldBackground=(*this).m__0boldBackground;
  }
}

void t_m2conio_AnsiHandler::m_AltBuffer(){
  bbDBFrame db_f{"AltBuffer:Void()","/home/scott/Documents/Monkey/Projects/weel2/m2conio/m2conio.monkey2"};
  t_m2conio_AnsiHandler*self=&(*this);
  bbDBLocal("Self",self);
  bbDBStmt(933890);
  (*this).m_Code(bbString(L"[?1049h",7));
}
bbString bbDBType(t_m2conio_AnsiHandler*){
  return "m2conio.AnsiHandler";
}
bbString bbDBValue(t_m2conio_AnsiHandler*p){
  return bbDBStructValue(p);
}

int bbCompare(const t_m2conio_AnsiHandler&x,const t_m2conio_AnsiHandler&y){
  if(int t=bbCompare(x.m__0foreground,y.m__0foreground)) return t;
  if(int t=bbCompare(x.m__0boldForeground,y.m__0boldForeground)) return t;
  if(int t=bbCompare(x.m__0lastForeground,y.m__0lastForeground)) return t;
  if(int t=bbCompare(x.m__0lastBoldForeground,y.m__0lastBoldForeground)) return t;
  if(int t=bbCompare(x.m__0underline,y.m__0underline)) return t;
  if(int t=bbCompare(x.m__0lastUnderline,y.m__0lastUnderline)) return t;
  if(int t=bbCompare(x.m__0background,y.m__0background)) return t;
  if(int t=bbCompare(x.m__0boldBackground,y.m__0boldBackground)) return t;
  if(int t=bbCompare(x.m__0lastBackground,y.m__0lastBackground)) return t;
  if(int t=bbCompare(x.m__0lastBoldBackground,y.m__0lastBoldBackground)) return t;
  if(int t=bbCompare(x.m__0supportsAnsi,y.m__0supportsAnsi)) return t;
  if(int t=bbCompare(x.m__0ansiChecked,y.m__0ansiChecked)) return t;
  return 0;
}

void mx2_main_m2conio_2m2conio_init_f(){
  g_m2conio_AnsiHandler_Color_Black=t_m2conio_AnsiHandler_Color{bbUByte(30)};
  g_m2conio_AnsiHandler_Color_Blue=t_m2conio_AnsiHandler_Color{bbUByte(34)};
  g_m2conio_AnsiHandler_Color_Cyan=t_m2conio_AnsiHandler_Color{bbUByte(36)};
  g_m2conio_AnsiHandler_Color_Green=t_m2conio_AnsiHandler_Color{bbUByte(32)};
  g_m2conio_AnsiHandler_Color_Magenta=t_m2conio_AnsiHandler_Color{bbUByte(35)};
  g_m2conio_AnsiHandler_Color_Red=t_m2conio_AnsiHandler_Color{bbUByte(31)};
  g_m2conio_AnsiHandler_Color_White=t_m2conio_AnsiHandler_Color{bbUByte(37)};
  g_m2conio_AnsiHandler_Color_Yellow=t_m2conio_AnsiHandler_Color{bbUByte(33)};
}
