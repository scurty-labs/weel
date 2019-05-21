
#ifndef MX2_MAIN_M2CONIO_2M2CONIO_H
#define MX2_MAIN_M2CONIO_2M2CONIO_H

#include <bbmonkey.h>
#include "m2conio/native/posix_input.h"

BB_ENUM(t_m2conio_ConsoleHandler_Key)

BB_STRUCT(t_m2conio_ConsoleHandler)
BB_STRUCT(t_m2conio_AnsiHandler_Color)
BB_STRUCT(t_m2conio_AnsiHandler)

extern t_m2conio_ConsoleHandler g_m2conio_Console;
extern t_m2conio_AnsiHandler g_m2conio_Ansi;
extern t_m2conio_AnsiHandler_Color g_m2conio_AnsiHandler_Color_Black;
extern t_m2conio_AnsiHandler_Color g_m2conio_AnsiHandler_Color_Blue;
extern t_m2conio_AnsiHandler_Color g_m2conio_AnsiHandler_Color_Cyan;
extern t_m2conio_AnsiHandler_Color g_m2conio_AnsiHandler_Color_Green;
extern t_m2conio_AnsiHandler_Color g_m2conio_AnsiHandler_Color_Magenta;
extern t_m2conio_AnsiHandler_Color g_m2conio_AnsiHandler_Color_Red;
extern t_m2conio_AnsiHandler_Color g_m2conio_AnsiHandler_Color_White;
extern t_m2conio_AnsiHandler_Color g_m2conio_AnsiHandler_Color_Yellow;

struct t_m2conio_ConsoleHandler{
  typedef t_m2conio_ConsoleHandler bb_struct_type;
  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_m2conio_ConsoleHandler";}

  static void dbEmit(t_m2conio_ConsoleHandler*);

  ~t_m2conio_ConsoleHandler();

  void m_Write(bbString l_text,bbBool l_nl);
  void m_WaitKey(bbString l_text,bbInt l_key);
  bbInt m_KeyHit();
  bbString m_Input();
  void m_Bell();

  t_m2conio_ConsoleHandler(){
  }

  t_m2conio_ConsoleHandler(bbNullCtor_t){
  }
};

int bbCompare(const t_m2conio_ConsoleHandler&x,const t_m2conio_ConsoleHandler&y);

struct t_m2conio_AnsiHandler_Color{
  typedef t_m2conio_AnsiHandler_Color bb_struct_type;
  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_m2conio_AnsiHandler_Color";}

  bbUByte m_id{};
  static void dbEmit(t_m2conio_AnsiHandler_Color*);

  t_m2conio_AnsiHandler_Color(bbUByte l_id);
  ~t_m2conio_AnsiHandler_Color();

  t_m2conio_AnsiHandler_Color(){
  }

  t_m2conio_AnsiHandler_Color(bbNullCtor_t){
  }
};

int bbCompare(const t_m2conio_AnsiHandler_Color&x,const t_m2conio_AnsiHandler_Color&y);

struct t_m2conio_AnsiHandler{
  typedef t_m2conio_AnsiHandler bb_struct_type;
  bbTypeInfo *typeof()const;
  const char *typeName()const{return "t_m2conio_AnsiHandler";}

  t_m2conio_AnsiHandler_Color m__0foreground{};
  bbBool m__0boldForeground{};
  t_m2conio_AnsiHandler_Color m__0lastForeground{};
  bbBool m__0lastBoldForeground{};
  bbBool m__0underline{};
  bbBool m__0lastUnderline{};
  t_m2conio_AnsiHandler_Color m__0background{};
  bbBool m__0boldBackground{};
  t_m2conio_AnsiHandler_Color m__0lastBackground{};
  bbBool m__0lastBoldBackground{};
  bbBool m__0supportsAnsi{};
  bbBool m__0ansiChecked{};
  static void dbEmit(t_m2conio_AnsiHandler*);

  ~t_m2conio_AnsiHandler();

  void m_Underline(bbBool l_underline);
  bbBool m_Underline();
  bbBool m_Supported();
  void m_SetTitle(bbString l_name);
  void m_ScrollingRegion(bbUInt l_s,bbUInt l_e);
  void m_ResetForeground();
  void m_ResetColors();
  void m_ResetBackground();
  void m_RawColor(bbUByte l_color);
  void m_MainBuffer();
  void m_ForegroundBold(bbBool l_bold);
  bbBool m_ForegroundBold();
  void m_Foreground(t_m2conio_AnsiHandler_Color l_color);
  t_m2conio_AnsiHandler_Color m_Foreground();
  void m_Code(bbString l_code);
  void m_Clear();
  bbBool m_CheckSupport(bbBool l_verbose);
  void m_BackgroundBold(bbBool l_bold);
  bbBool m_BackgroundBold();
  void m_Background(t_m2conio_AnsiHandler_Color l_color);
  t_m2conio_AnsiHandler_Color m_Background();
  void m_ApplyForeground();
  void m_ApplyBackground();
  void m_AltBuffer();

  t_m2conio_AnsiHandler(){
  }

  t_m2conio_AnsiHandler(bbNullCtor_t){
  }
};

int bbCompare(const t_m2conio_AnsiHandler&x,const t_m2conio_AnsiHandler&y);

#endif
