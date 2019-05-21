
#include "main.buildv1.1.15/linux_release_mx/include/main_m2conio_2m2conio.h"

#include "libc/libc.buildv1.1.15/linux_release_mx/include/libc_libc.h"
#include "monkey/monkey.buildv1.1.15/linux_release_mx/include/monkey_types.h"

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

t_m2conio_ConsoleHandler::~t_m2conio_ConsoleHandler(){
}

void t_m2conio_ConsoleHandler::m_Write(bbString l_text,bbBool l_nl){
  if(l_nl){
    l_text=(l_text+bbString(L"\n",1));
  }
  fputs_utf8(bbCString(l_text),stdout);
  fflush(stdout);
}

void t_m2conio_ConsoleHandler::m_WaitKey(bbString l_text,bbInt l_key){
  (*this).m_Write(l_text,false);
  if((l_key>=bbInt(0))){
    do{
    }while(!(((*this).m_KeyHit()==l_key)));
  }else{
    (*this).m_KeyHit();
  }
  return;
}

bbInt t_m2conio_ConsoleHandler::m_KeyHit(){
  if(bbBool(kbhit())){
    return getch();
  }
  return bbInt(0);
}

bbString t_m2conio_ConsoleHandler::m_Input(){
  bbInt l_inp{};
  bbString l_result{};
  for(;;){
    l_inp=getc(stdin);
    if(bbBool(l_inp)){
      if((l_inp==10)){
        break;
      }else{
        l_result+=bbString::fromChar(l_inp);
      }
    }
  }
  return l_result;
}

void t_m2conio_ConsoleHandler::m_Bell(){
  fputs_utf8(bbCString(bbString::fromChar(7)),stdout);
}

int bbCompare(const t_m2conio_ConsoleHandler&x,const t_m2conio_ConsoleHandler&y){
  return 0;
}

t_m2conio_AnsiHandler_Color::t_m2conio_AnsiHandler_Color(bbUByte l_id){
  (*this).m_id=l_id;
}
t_m2conio_AnsiHandler_Color::~t_m2conio_AnsiHandler_Color(){
}

int bbCompare(const t_m2conio_AnsiHandler_Color&x,const t_m2conio_AnsiHandler_Color&y){
  if(int t=bbCompare(x.m_id,y.m_id)) return t;
  return 0;
}

t_m2conio_AnsiHandler::~t_m2conio_AnsiHandler(){
}

void t_m2conio_AnsiHandler::m_Underline(bbBool l_underline){
  if(((*this).m__0underline==l_underline)){
    return;
  }
  (*this).m__0underline=l_underline;
  (*this).m_ApplyForeground();
}

bbBool t_m2conio_AnsiHandler::m_Supported(){
  (*this).m_CheckSupport(false);
  return (*this).m__0supportsAnsi;
}

void t_m2conio_AnsiHandler::m_SetTitle(bbString l_name){
  (*this).m_Code(((bbString(L"]2;",3)+l_name)+bbString::fromChar(7)));
}

void t_m2conio_AnsiHandler::m_ScrollingRegion(bbUInt l_s,bbUInt l_e){
  (*this).m_Code(((((bbString(L"[",1)+bbString(l_s))+bbString(L";",1))+bbString(l_e))+bbString(L"r",1)));
}

void t_m2conio_AnsiHandler::m_ResetForeground(){
  (*this).m__0foreground.m_id=bbUByte(39);
  (*this).m__0boldForeground=false;
  (*this).m__0underline=false;
  (*this).m_ApplyForeground();
}

void t_m2conio_AnsiHandler::m_ResetColors(){
  (*this).m_ResetForeground();
  (*this).m_ResetBackground();
}

void t_m2conio_AnsiHandler::m_ResetBackground(){
  (*this).m__0background.m_id=bbUByte(39);
  (*this).m__0boldBackground=false;
  (*this).m_ApplyBackground();
}

void t_m2conio_AnsiHandler::m_RawColor(bbUByte l_color){
  (*this).m_Code(((bbString(L"[",1)+bbString(l_color))+bbString(L"m",1)));
}

void t_m2conio_AnsiHandler::m_MainBuffer(){
  (*this).m_Code(bbString(L"[?1049l",7));
}

void t_m2conio_AnsiHandler::m_ForegroundBold(bbBool l_bold){
  if(((*this).m__0boldForeground==l_bold)){
    return;
  }
  (*this).m__0boldForeground=l_bold;
  (*this).m_ApplyForeground();
}

void t_m2conio_AnsiHandler::m_Foreground(t_m2conio_AnsiHandler_Color l_color){
  if((bbCompare((*this).m__0foreground,l_color)==0)){
    return;
  }
  (*this).m__0foreground=l_color;
  (*this).m_ApplyForeground();
}

t_m2conio_AnsiHandler_Color t_m2conio_AnsiHandler::m_Foreground(){
  return (*this).m__0foreground;
}

void t_m2conio_AnsiHandler::m_Code(bbString l_code){
  (*this).m_CheckSupport(true);
  if((*this).m__0supportsAnsi){
    fputs_utf8(bbCString((bbString::fromChar(27)+l_code)),stdout);
  }
}

void t_m2conio_AnsiHandler::m_Clear(){
  (*this).m_Code(bbString(L"[2J",3));
}

bbBool t_m2conio_AnsiHandler::m_CheckSupport(bbBool l_verbose){
  if((*this).m__0ansiChecked){
    return (*this).m__0supportsAnsi;
  }
  (*this).m__0ansiChecked=true;
  (*this).m__0supportsAnsi=true;
  (*this).m_ResetColors();
  return (*this).m__0supportsAnsi;
}

void t_m2conio_AnsiHandler::m_BackgroundBold(bbBool l_bold){
  if(((*this).m__0boldBackground==l_bold)){
    return;
  }
  (*this).m__0boldBackground=l_bold;
  (*this).m_ApplyBackground();
}

void t_m2conio_AnsiHandler::m_Background(t_m2conio_AnsiHandler_Color l_color){
  if((bbCompare((*this).m__0background,l_color)==0)){
    return;
  }
  (*this).m__0background=l_color;
  (*this).m_ApplyBackground();
}

t_m2conio_AnsiHandler_Color t_m2conio_AnsiHandler::m_Background(){
  return (*this).m__0background;
}

void t_m2conio_AnsiHandler::m_ApplyForeground(){
  if(!(*this).m_CheckSupport(true)){
    return;
  }
  if(((*this).m__0lastUnderline!=(*this).m__0underline)){
    if((*this).m__0underline){
      (*this).m_RawColor(bbUByte(4));
    }else{
      (*this).m_RawColor(bbUByte(24));
    }
    (*this).m__0lastUnderline=(*this).m__0underline;
  }
  if(((bbCompare((*this).m__0lastForeground,(*this).m__0foreground)!=0)||((*this).m__0lastBoldForeground!=(*this).m__0boldForeground))){
    if((((*this).m__0boldForeground&&(bbUInt((*this).m__0foreground.m_id)>=30u))&&(bbUInt((*this).m__0foreground.m_id)<38u))){
      (*this).m_RawColor(bbUByte((bbUInt((*this).m__0foreground.m_id)+60u)));
    }else{
      (*this).m_RawColor((*this).m__0foreground.m_id);
    }
    (*this).m__0lastForeground=(*this).m__0foreground;
    (*this).m__0lastBoldForeground=(*this).m__0boldForeground;
  }
}

void t_m2conio_AnsiHandler::m_ApplyBackground(){
  if(!(*this).m_CheckSupport(true)){
    return;
  }
  if(((bbCompare((*this).m__0lastBackground,(*this).m__0background)!=0)||((*this).m__0lastBoldBackground!=(*this).m__0boldBackground))){
    if((((*this).m__0boldBackground&&(bbUInt((*this).m__0background.m_id)>=30u))&&(bbUInt((*this).m__0background.m_id)<38u))){
      (*this).m_RawColor(bbUByte((bbUInt((*this).m__0background.m_id)+70u)));
    }else{
      (*this).m_RawColor(bbUByte((bbUInt((*this).m__0background.m_id)+10u)));
    }
    (*this).m__0lastBackground=(*this).m__0background;
    (*this).m__0lastBoldBackground=(*this).m__0boldBackground;
  }
}

void t_m2conio_AnsiHandler::m_AltBuffer(){
  (*this).m_Code(bbString(L"[?1049h",7));
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
