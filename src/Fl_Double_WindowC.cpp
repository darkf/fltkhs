#include "Fl_Double_WindowC.h"

#ifdef __cplusplus
EXPORT {
#endif
  FL_EXPORT_C(fl_Group,Fl_Double_Window_parent)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->parent();
  }
  FL_EXPORT_C(void,Fl_Double_Window_set_parent)(fl_Double_Window win,fl_Group grp){
    (static_cast<Fl_Double_Window*>(win))->parent((static_cast<Fl_Group*>(grp)));
  }
  FL_EXPORT_C(uchar,Fl_Double_Window_type)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->type();
  }
  FL_EXPORT_C(void,Fl_Double_Window_set_type)(fl_Double_Window win,uchar t){
    (static_cast<Fl_Double_Window*>(win))->type(t);
  }
  FL_EXPORT_C(int,Fl_Double_Window_x)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->x();
  }
  FL_EXPORT_C(int,Fl_Double_Window_y)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->y();
  }
  FL_EXPORT_C(int,Fl_Double_Window_w)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->w();
  }
  FL_EXPORT_C(int,Fl_Double_Window_h)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->h();
  }
  FL_EXPORT_C(Fl_Align,Fl_Double_Window_align)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->align();
  }
  FL_EXPORT_C(Fl_Boxtype,Fl_Double_Window_box)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->box();
  }
  FL_EXPORT_C(void,Fl_Double_Window_set_box)(fl_Double_Window win,Fl_Boxtype new_box){
    (static_cast<Fl_Double_Window*>(win))->box((static_cast<Fl_Boxtype>(new_box)));
  }
  FL_EXPORT_C(Fl_Color,Fl_Double_Window_color)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->color();
  }
  FL_EXPORT_C(void,Fl_Double_Window_set_color)(fl_Double_Window win,Fl_Color bg){
    (static_cast<Fl_Double_Window*>(win))->color(bg);
  }
  FL_EXPORT_C(void,Fl_Double_Window_set_background_and_selection_color)(fl_Double_Window win,Fl_Color bg,Fl_Color a){
    (static_cast<Fl_Double_Window*>(win))->color(bg,a);
  }
  FL_EXPORT_C(Fl_Color,Fl_Double_Window_selection_color)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->selection_color();
  }
  FL_EXPORT_C(void,Fl_Double_Window_set_selection_color)(fl_Double_Window win,Fl_Color a){
    (static_cast<Fl_Double_Window*>(win))->selection_color(a);
  }
  FL_EXPORT_C(const char*,Fl_Double_Window_label)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->label();
  }
  FL_EXPORT_C(void,Fl_Double_Window_copy_label)(fl_Double_Window win,const char* new_label){
    (static_cast<Fl_Double_Window*>(win))->copy_label(new_label);
  }
  FL_EXPORT_C(void,Fl_Double_Window_set_label)(fl_Double_Window win,const char* text){
    (static_cast<Fl_Double_Window*>(win))->label(text);
  }
  FL_EXPORT_C(Fl_Labeltype,Fl_Double_Window_labeltype)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->labeltype();
  }
  FL_EXPORT_C(void,Fl_Double_Window_set_labeltype)(fl_Double_Window win,Fl_Labeltype a){
    (static_cast<Fl_Double_Window*>(win))->labeltype(a);
  }
  FL_EXPORT_C(void,Fl_Double_Window_set_labelcolor)(fl_Double_Window win,Fl_Color c){
    (static_cast<Fl_Double_Window*>(win))->labelcolor(c);
  }
  FL_EXPORT_C(Fl_Font,Fl_Double_Window_labelfont)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->labelfont();
  }
  FL_EXPORT_C(void,Fl_Double_Window_set_labelfont)(fl_Double_Window win,Fl_Font c){
    (static_cast<Fl_Double_Window*>(win))->labelfont((static_cast<Fl_Font>(c)));
  }
  FL_EXPORT_C(Fl_Fontsize,Fl_Double_Window_labelsize)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->labelsize();
  }
  FL_EXPORT_C(void,Fl_Double_Window_set_labelsize)(fl_Double_Window win,Fl_Fontsize pix){
    (static_cast<Fl_Double_Window*>(win))->labelsize((static_cast<Fl_Fontsize>(pix)));
  }
  FL_EXPORT_C(fl_Image,Fl_Double_Window_image)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->image();
  }
  FL_EXPORT_C(void,Fl_Double_Window_set_image)(fl_Double_Window win,fl_Image pix){
    (static_cast<Fl_Double_Window*>(win))->image((static_cast<Fl_Image*>(pix)));
  }
  FL_EXPORT_C(fl_Image,Fl_Double_Window_deimage)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->deimage();
  }
  FL_EXPORT_C(void,Fl_Double_Window_set_deimage)(fl_Double_Window win,fl_Image pix){
    (static_cast<Fl_Double_Window*>(win))->deimage((static_cast<Fl_Image*>(pix)));
  }
  FL_EXPORT_C(const char*,Fl_Double_Window_tooltip)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->tooltip();
  }
  FL_EXPORT_C(void,Fl_Double_Window_copy_tooltip)(fl_Double_Window win,const char* text){
    (static_cast<Fl_Double_Window*>(win))->copy_tooltip(text);
  }
  FL_EXPORT_C(void,Fl_Double_Window_set_tooltip)(fl_Double_Window win,const char* text){
    (static_cast<Fl_Double_Window*>(win))->tooltip(text);
  }
  FL_EXPORT_C(void,Fl_Double_Window_set_callback_and_user_data)(fl_Double_Window win,fl_Callback* cb,void* p){
    Fl_Double_Window* castedWindow = (static_cast<Fl_Double_Window*>(win));
    new C_to_Fl_Callback(castedWindow, cb, p);
  }
  FL_EXPORT_C(void,Fl_Double_Window_set_callback)(fl_Double_Window win,fl_Callback* cb){
    Fl_Double_Window* castedWindow = (static_cast<Fl_Double_Window*>(win));
    new C_to_Fl_Callback(castedWindow, cb);
  }
  FL_EXPORT_C(void*,Fl_Double_Window_user_data)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->user_data();
  }
  FL_EXPORT_C(void,Fl_Double_Window_set_user_data)(fl_Double_Window win,void* v){
    (static_cast<Fl_Double_Window*>(win))->user_data(v);
  }
  FL_EXPORT_C(long,Fl_Double_Window_argument)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->argument();
  }
  FL_EXPORT_C(void,Fl_Double_Window_set_argument)(fl_Double_Window win,long v){
    (static_cast<Fl_Double_Window*>(win))->argument(v);
  }
  FL_EXPORT_C(Fl_When,Fl_Double_Window_when)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->when();
  }
  FL_EXPORT_C(void,Fl_Double_Window_set_when)(fl_Double_Window win,uchar i){
    (static_cast<Fl_Double_Window*>(win))->when(i);
  }
  FL_EXPORT_C(unsigned int,Fl_Double_Window_visible)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->visible();
  }
  FL_EXPORT_C(int,Fl_Double_Window_visible_r)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->visible_r();
  }
  FL_EXPORT_C(void,Fl_Double_Window_set_visible)(fl_Double_Window win){
    (static_cast<Fl_Double_Window*>(win))->visible();
  }
  FL_EXPORT_C(void,Fl_Double_Window_clear_visible)(fl_Double_Window win){
    (static_cast<Fl_Double_Window*>(win))->clear_visible();
  }
  FL_EXPORT_C(unsigned int,Fl_Double_Window_active)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->active();
  }
  FL_EXPORT_C(int,Fl_Double_Window_active_r)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->active_r();
  }
  FL_EXPORT_C(void,Fl_Double_Window_activate)(fl_Double_Window win){
    (static_cast<Fl_Double_Window*>(win))->activate();
  }
  FL_EXPORT_C(void,Fl_Double_Window_deactivate)(fl_Double_Window win){
    (static_cast<Fl_Double_Window*>(win))->deactivate();
  }
  FL_EXPORT_C(unsigned int,Fl_Double_Window_output)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->output();
  }
  FL_EXPORT_C(void,Fl_Double_Window_set_output)(fl_Double_Window win){
    (static_cast<Fl_Double_Window*>(win))->output();
  }
  FL_EXPORT_C(void,Fl_Double_Window_clear_output)(fl_Double_Window win){
    (static_cast<Fl_Double_Window*>(win))->clear_output();
  }
  FL_EXPORT_C(unsigned int,Fl_Double_Window_takesevents)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->takesevents();
  }
  FL_EXPORT_C(void,Fl_Double_Window_set_changed)(fl_Double_Window win){
    (static_cast<Fl_Double_Window*>(win))->changed();
  }
  FL_EXPORT_C(void,Fl_Double_Window_clear_changed)(fl_Double_Window win){
    (static_cast<Fl_Double_Window*>(win))->clear_changed();
  }
  FL_EXPORT_C(int,Fl_Double_Window_take_focus)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->take_focus();
  }
  FL_EXPORT_C(void,Fl_Double_Window_set_visible_focus)(fl_Double_Window win){
    (static_cast<Fl_Double_Window*>(win))->visible_focus();
  }
  FL_EXPORT_C(void,Fl_Double_Window_clear_visible_focus)(fl_Double_Window win){
    (static_cast<Fl_Double_Window*>(win))->clear_visible_focus();
  }
  FL_EXPORT_C(void,Fl_Double_Window_modify_visible_focus)(fl_Double_Window win,int v){
    (static_cast<Fl_Double_Window*>(win))->visible_focus(v);
  }
  FL_EXPORT_C(unsigned int,Fl_Double_Window_visible_focus)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->visible_focus();
  }
  FL_EXPORT_C(void,Fl_Double_Window_do_callback)(fl_Double_Window win){
    (static_cast<Fl_Double_Window*>(win))->do_callback();
  }
  FL_EXPORT_C(void,Fl_Double_Window_do_callback_with_widget_and_user_data)(fl_Double_Window win,fl_Widget w,long arg){
    (static_cast<Fl_Double_Window*>(win))->do_callback((static_cast<Fl_Widget*>(w)),arg);
  }
  FL_EXPORT_C(void,Fl_Double_Window_do_callback_with_widget_and_default_user_data)(fl_Double_Window win,fl_Widget w){
    (static_cast<Fl_Double_Window*>(win))->do_callback((static_cast<Fl_Widget*>(w)));
  }
  FL_EXPORT_C(int,Fl_Double_Window_contains)(fl_Double_Window win,fl_Widget w){
    return (static_cast<Fl_Double_Window*>(win))->contains((static_cast<Fl_Widget*>(w)));
  }
  FL_EXPORT_C(int,Fl_Double_Window_inside)(fl_Double_Window win,fl_Widget w){
    return (static_cast<Fl_Double_Window*>(win))->inside((static_cast<Fl_Widget*>(w)));
  }
  FL_EXPORT_C(void,Fl_Double_Window_redraw)(fl_Double_Window win){
    (static_cast<Fl_Double_Window*>(win))->redraw();
  }
  FL_EXPORT_C(void,Fl_Double_Window_redraw_label)(fl_Double_Window win){
    (static_cast<Fl_Double_Window*>(win))->redraw_label();
  }
  FL_EXPORT_C(uchar,Fl_Double_Window_damage)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->damage();
  }
  FL_EXPORT_C(void,Fl_Double_Window_clear_damage_with_bitmask)(fl_Double_Window win,uchar c){
    (static_cast<Fl_Double_Window*>(win))->clear_damage(c);
  }
  FL_EXPORT_C(void,Fl_Double_Window_clear_damage)(fl_Double_Window win){
    (static_cast<Fl_Double_Window*>(win))->clear_damage();
  }
  FL_EXPORT_C(void,Fl_Double_Window_damage_with_text)(fl_Double_Window win,uchar c){
    (static_cast<Fl_Double_Window*>(win))->damage(c);
  }
  FL_EXPORT_C(void,Fl_Double_Window_damage_inside_widget)(fl_Double_Window win,uchar c,int x,int y,int w,int h){
    (static_cast<Fl_Double_Window*>(win))->damage(c,x,y,w,h);
  }
  FL_EXPORT_C(void,Fl_Double_Window_draw_label)(fl_Double_Window win,int x,int y,int w,int h,Fl_Align alignment){
    (static_cast<Fl_Double_Window*>(win))->draw_label(x,y,w,h,alignment);
  }
  FL_EXPORT_C(void,Fl_Double_Window_measure_label)(fl_Double_Window win,int& ww,int& hh){
    (static_cast<Fl_Double_Window*>(win))->measure_label(ww,hh);
  }
  FL_EXPORT_C(fl_Group,Fl_Double_Window_as_group)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->as_group();
  }
  FL_EXPORT_C(fl_Gl_Window,Fl_Double_Window_as_gl_window)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->as_gl_window();
  }

  FL_EXPORT_C(void,Fl_Double_Window_begin)(fl_Double_Window win){
    (static_cast<Fl_Double_Window*>(win))->begin();
  }
  FL_EXPORT_C(void,Fl_Double_Window_end)(fl_Double_Window win){
    (static_cast<Fl_Double_Window*>(win))->end();
  }
  FL_EXPORT_C(int,Fl_Double_Window_find)(fl_Double_Window win,fl_Widget w){
    return (static_cast<Fl_Double_Window*>(win))->find(static_cast<Fl_Widget*>(w));
  }
  FL_EXPORT_C(void,Fl_Double_Window_add)(fl_Double_Window win,fl_Widget w){
    (static_cast<Fl_Double_Window*>(win))->add((static_cast<Fl_Widget*>(w)));
  }
  FL_EXPORT_C(void,Fl_Double_Window_insert)(fl_Double_Window win,fl_Widget w,int i){
    (static_cast<Fl_Double_Window*>(win))->insert(*(static_cast<Fl_Widget*>(w)),i);
  }
  FL_EXPORT_C(void,Fl_Double_Window_remove_index)(fl_Double_Window win,int index){
    (static_cast<Fl_Double_Window*>(win))->remove(index);
  }
  FL_EXPORT_C(void,Fl_Double_Window_remove_widget)(fl_Double_Window win,fl_Widget w){
    (static_cast<Fl_Double_Window*>(win))->remove((static_cast<Fl_Widget*>(w)));
  }
  FL_EXPORT_C(void,Fl_Double_Window_clear)(fl_Double_Window win){
    (static_cast<Fl_Double_Window*>(win))->clear();
  }
  FL_EXPORT_C(void,Fl_Double_Window_set_resizable_by_reference)(fl_Double_Window win,fl_Widget o){
    (static_cast<Fl_Double_Window*>(win))->resizable((static_cast<Fl_Widget*>(o)));
  }
  FL_EXPORT_C(void,Fl_Double_Window_set_resizable)(fl_Double_Window win,fl_Widget o){
    (static_cast<Fl_Double_Window*>(win))->resizable((static_cast<Fl_Widget*>(o)));
  }
  FL_EXPORT_C(fl_Widget,Fl_Double_Window_resizable)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->resizable();
  }
  FL_EXPORT_C(void,Fl_Double_Window_add_resizable)(fl_Double_Window win,fl_Widget o){
    return (static_cast<Fl_Double_Window*>(win))->add_resizable(*(static_cast<Fl_Widget*>(o)));
  }
  FL_EXPORT_C(void,Fl_Double_Window_init_sizes)(fl_Double_Window win){
    (static_cast<Fl_Double_Window*>(win))->init_sizes();
  }
  FL_EXPORT_C(void,Fl_Double_Window_set_clip_children)(fl_Double_Window win,int c){
    return (static_cast<Fl_Double_Window*>(win))->clip_children(c);
  }
  FL_EXPORT_C(unsigned int,Fl_Double_Window_clip_children)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->clip_children();
  }
  FL_EXPORT_C(void,Fl_Double_Window_focus)(fl_Double_Window win, fl_Widget W){
    return (static_cast<Fl_Double_Window*>(win))->focus((static_cast<Fl_Widget*>(W)));
  }
  FL_EXPORT_C(fl_Widget,Fl_Double_Window__ddfdesign_kludge)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->_ddfdesign_kludge();
  }
  // FL_EXPORT_C(void,Fl_Double_Window_forms_end)(fl_Double_Window win){
  //   return (static_cast<Fl_Double_Window*>(win))->forms_end();
  // }
  FL_EXPORT_C(fl_Double_Window, Fl_Double_Window_New_WithLabel)(int x, int y, const char* title) {
    Fl_Double_Window* window = new Fl_Double_Window(x,y,title);
    return (static_cast<fl_Double_Window>(window));
  }
  FL_EXPORT_C(fl_Double_Window, Fl_Double_Window_New)(int x, int y) {
    Fl_Double_Window* window = new Fl_Double_Window(x,y,0);
    return (fl_Double_Window)window;
  }
  FL_EXPORT_C(fl_Double_Window, Fl_Double_Window_NewWH_WithTitle)(int x, int y, int w, int h, const char* title) {
    Fl_Double_Window* window = new Fl_Double_Window(x,y,w,h,title);
    return (fl_Double_Window)window;
  }
  FL_EXPORT_C(fl_Double_Window, Fl_Double_Window_NewWH)(int x, int y, int w, int h) {
    Fl_Double_Window* window = new Fl_Double_Window(x,y,w,h,0);
    return (fl_Double_Window)window;
  }
  FL_EXPORT_C(unsigned int,Fl_Double_Window_changed)(fl_Double_Window win){
    return (static_cast<Fl_Double_Window*>(win))->changed();
  }
  FL_EXPORT_C(void,Fl_Double_Window_fullscreen)(fl_Double_Window win){
    (static_cast<Fl_Double_Window*>(win))->fullscreen();
  }
  FL_EXPORT_C(void,Fl_Double_Window_fullscreen_off)(fl_Double_Window win){
    (static_cast<Fl_Double_Window*>(win))->fullscreen_off();
  }
  FL_EXPORT_C(void,Fl_Double_Window_fullscreen_off_with_resize)(fl_Double_Window win,int X,int Y,int W,int H){
    (static_cast<Fl_Double_Window*>(win))->fullscreen_off(X,Y,W,H);
  }
  FL_EXPORT_C(void,Fl_Double_Window_hide)(fl_Double_Window win){
    (static_cast<Fl_Double_Window*>(win))->hide();
  }
  FL_EXPORT_C(void,Fl_Double_Window_show)(fl_Double_Window win){
    (static_cast<Fl_Double_Window*>(win))->show();
  }
  FL_EXPORT_C(void,Fl_Double_Window_show_with_args)(fl_Double_Window win,int argc,char** argv){
    (static_cast<Fl_Double_Window*>(win))->show(argc,argv);
  }
  FL_EXPORT_C(void,Fl_Double_Window_destroy)(fl_Double_Window win){
    delete (static_cast<Fl_Double_Window*>(win));
  }
  FL_EXPORT_C(void,Fl_Double_Window_resize)(fl_Double_Window win,int X,int Y,int W,int H){
    (static_cast<Fl_Double_Window*>(win))->resize(X,Y,W,H);
  }
  FL_EXPORT_C(void,Fl_Double_Window_iconize)(fl_Double_Window win){
    (static_cast<Fl_Double_Window*>(win))->iconize();
  }
  FL_EXPORT_C(void,Fl_Double_Window_flush)(fl_Double_Window win){
    (static_cast<Fl_Double_Window*>(win))->flush();
  }
#ifdef __cplusplus
}
#endif