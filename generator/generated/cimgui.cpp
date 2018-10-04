
#include "./imgui/imgui.h"
#include "cimgui.h"

#include "./imgui/imgui_internal.h"

CIMGUI_API ImGuiContext* igCreateContext(ImFontAtlas* shared_font_atlas)
{
    return ImGui::CreateContext(shared_font_atlas);
}
CIMGUI_API void igDestroyContext(ImGuiContext* ctx)
{
    return ImGui::DestroyContext(ctx);
}
CIMGUI_API ImGuiContext* igGetCurrentContext()
{
    return ImGui::GetCurrentContext();
}
CIMGUI_API void igSetCurrentContext(ImGuiContext* ctx)
{
    return ImGui::SetCurrentContext(ctx);
}
CIMGUI_API bool igDebugCheckVersionAndDataLayout(const char* version_str,size_t sz_io,size_t sz_style,size_t sz_vec2,size_t sz_vec4,size_t sz_drawvert)
{
    return ImGui::DebugCheckVersionAndDataLayout(version_str,sz_io,sz_style,sz_vec2,sz_vec4,sz_drawvert);
}
CIMGUI_API ImGuiIO* igGetIO()
{
    return &ImGui::GetIO();
}
CIMGUI_API ImGuiStyle* igGetStyle()
{
    return &ImGui::GetStyle();
}
CIMGUI_API void igNewFrame()
{
    return ImGui::NewFrame();
}
CIMGUI_API void igEndFrame()
{
    return ImGui::EndFrame();
}
CIMGUI_API void igRender()
{
    return ImGui::Render();
}
CIMGUI_API ImDrawData* igGetDrawData()
{
    return ImGui::GetDrawData();
}
CIMGUI_API void igShowDemoWindow(bool* p_open)
{
    return ImGui::ShowDemoWindow(p_open);
}
CIMGUI_API void igShowMetricsWindow(bool* p_open)
{
    return ImGui::ShowMetricsWindow(p_open);
}
CIMGUI_API void igShowStyleEditor(ImGuiStyle* ref)
{
    return ImGui::ShowStyleEditor(ref);
}
CIMGUI_API bool igShowStyleSelector(const char* label)
{
    return ImGui::ShowStyleSelector(label);
}
CIMGUI_API void igShowFontSelector(const char* label)
{
    return ImGui::ShowFontSelector(label);
}
CIMGUI_API void igShowUserGuide()
{
    return ImGui::ShowUserGuide();
}
CIMGUI_API const char* igGetVersion()
{
    return ImGui::GetVersion();
}
CIMGUI_API void igStyleColorsDark(ImGuiStyle* dst)
{
    return ImGui::StyleColorsDark(dst);
}
CIMGUI_API void igStyleColorsClassic(ImGuiStyle* dst)
{
    return ImGui::StyleColorsClassic(dst);
}
CIMGUI_API void igStyleColorsLight(ImGuiStyle* dst)
{
    return ImGui::StyleColorsLight(dst);
}
CIMGUI_API bool igBegin(const char* name,bool* p_open,ImGuiWindowFlags flags)
{
    return ImGui::Begin(name,p_open,flags);
}
CIMGUI_API void igEnd()
{
    return ImGui::End();
}
CIMGUI_API bool igBeginChild(const char* str_id,const ImVec2 size,bool border,ImGuiWindowFlags flags)
{
    return ImGui::BeginChild(str_id,size,border,flags);
}
CIMGUI_API bool igBeginChildID(ImGuiID id,const ImVec2 size,bool border,ImGuiWindowFlags flags)
{
    return ImGui::BeginChild(id,size,border,flags);
}
CIMGUI_API void igEndChild()
{
    return ImGui::EndChild();
}
CIMGUI_API bool igIsWindowAppearing()
{
    return ImGui::IsWindowAppearing();
}
CIMGUI_API bool igIsWindowCollapsed()
{
    return ImGui::IsWindowCollapsed();
}
CIMGUI_API bool igIsWindowFocused(ImGuiFocusedFlags flags)
{
    return ImGui::IsWindowFocused(flags);
}
CIMGUI_API bool igIsWindowHovered(ImGuiHoveredFlags flags)
{
    return ImGui::IsWindowHovered(flags);
}
CIMGUI_API ImDrawList* igGetWindowDrawList()
{
    return ImGui::GetWindowDrawList();
}
CIMGUI_API ImVec2 igGetWindowPos()
{
    return ImGui::GetWindowPos();
}
CIMGUI_API ImVec2 igGetWindowSize()
{
    return ImGui::GetWindowSize();
}
CIMGUI_API float igGetWindowWidth()
{
    return ImGui::GetWindowWidth();
}
CIMGUI_API float igGetWindowHeight()
{
    return ImGui::GetWindowHeight();
}
CIMGUI_API ImVec2 igGetContentRegionMax()
{
    return ImGui::GetContentRegionMax();
}
CIMGUI_API ImVec2 igGetContentRegionAvail()
{
    return ImGui::GetContentRegionAvail();
}
CIMGUI_API float igGetContentRegionAvailWidth()
{
    return ImGui::GetContentRegionAvailWidth();
}
CIMGUI_API ImVec2 igGetWindowContentRegionMin()
{
    return ImGui::GetWindowContentRegionMin();
}
CIMGUI_API ImVec2 igGetWindowContentRegionMax()
{
    return ImGui::GetWindowContentRegionMax();
}
CIMGUI_API float igGetWindowContentRegionWidth()
{
    return ImGui::GetWindowContentRegionWidth();
}
CIMGUI_API void igSetNextWindowPos(const ImVec2 pos,ImGuiCond cond,const ImVec2 pivot)
{
    return ImGui::SetNextWindowPos(pos,cond,pivot);
}
CIMGUI_API void igSetNextWindowSize(const ImVec2 size,ImGuiCond cond)
{
    return ImGui::SetNextWindowSize(size,cond);
}
CIMGUI_API void igSetNextWindowSizeConstraints(const ImVec2 size_min,const ImVec2 size_max,ImGuiSizeCallback custom_callback,void* custom_callback_data)
{
    return ImGui::SetNextWindowSizeConstraints(size_min,size_max,custom_callback,custom_callback_data);
}
CIMGUI_API void igSetNextWindowContentSize(const ImVec2 size)
{
    return ImGui::SetNextWindowContentSize(size);
}
CIMGUI_API void igSetNextWindowCollapsed(bool collapsed,ImGuiCond cond)
{
    return ImGui::SetNextWindowCollapsed(collapsed,cond);
}
CIMGUI_API void igSetNextWindowFocus()
{
    return ImGui::SetNextWindowFocus();
}
CIMGUI_API void igSetNextWindowBgAlpha(float alpha)
{
    return ImGui::SetNextWindowBgAlpha(alpha);
}
CIMGUI_API void igSetWindowPosVec2(const ImVec2 pos,ImGuiCond cond)
{
    return ImGui::SetWindowPos(pos,cond);
}
CIMGUI_API void igSetWindowSizeVec2(const ImVec2 size,ImGuiCond cond)
{
    return ImGui::SetWindowSize(size,cond);
}
CIMGUI_API void igSetWindowCollapsedBool(bool collapsed,ImGuiCond cond)
{
    return ImGui::SetWindowCollapsed(collapsed,cond);
}
CIMGUI_API void igSetWindowFocus()
{
    return ImGui::SetWindowFocus();
}
CIMGUI_API void igSetWindowFontScale(float scale)
{
    return ImGui::SetWindowFontScale(scale);
}
CIMGUI_API void igSetWindowPosStr(const char* name,const ImVec2 pos,ImGuiCond cond)
{
    return ImGui::SetWindowPos(name,pos,cond);
}
CIMGUI_API void igSetWindowSizeStr(const char* name,const ImVec2 size,ImGuiCond cond)
{
    return ImGui::SetWindowSize(name,size,cond);
}
CIMGUI_API void igSetWindowCollapsedStr(const char* name,bool collapsed,ImGuiCond cond)
{
    return ImGui::SetWindowCollapsed(name,collapsed,cond);
}
CIMGUI_API void igSetWindowFocusStr(const char* name)
{
    return ImGui::SetWindowFocus(name);
}
CIMGUI_API float igGetScrollX()
{
    return ImGui::GetScrollX();
}
CIMGUI_API float igGetScrollY()
{
    return ImGui::GetScrollY();
}
CIMGUI_API float igGetScrollMaxX()
{
    return ImGui::GetScrollMaxX();
}
CIMGUI_API float igGetScrollMaxY()
{
    return ImGui::GetScrollMaxY();
}
CIMGUI_API void igSetScrollX(float scroll_x)
{
    return ImGui::SetScrollX(scroll_x);
}
CIMGUI_API void igSetScrollY(float scroll_y)
{
    return ImGui::SetScrollY(scroll_y);
}
CIMGUI_API void igSetScrollHere(float center_y_ratio)
{
    return ImGui::SetScrollHere(center_y_ratio);
}
CIMGUI_API void igSetScrollFromPosY(float pos_y,float center_y_ratio)
{
    return ImGui::SetScrollFromPosY(pos_y,center_y_ratio);
}
CIMGUI_API void igPushFont(ImFont* font)
{
    return ImGui::PushFont(font);
}
CIMGUI_API void igPopFont()
{
    return ImGui::PopFont();
}
CIMGUI_API void igPushStyleColorU32(ImGuiCol idx,ImU32 col)
{
    return ImGui::PushStyleColor(idx,col);
}
CIMGUI_API void igPushStyleColor(ImGuiCol idx,const ImVec4 col)
{
    return ImGui::PushStyleColor(idx,col);
}
CIMGUI_API void igPopStyleColor(int count)
{
    return ImGui::PopStyleColor(count);
}
CIMGUI_API void igPushStyleVarFloat(ImGuiStyleVar idx,float val)
{
    return ImGui::PushStyleVar(idx,val);
}
CIMGUI_API void igPushStyleVarVec2(ImGuiStyleVar idx,const ImVec2 val)
{
    return ImGui::PushStyleVar(idx,val);
}
CIMGUI_API void igPopStyleVar(int count)
{
    return ImGui::PopStyleVar(count);
}
CIMGUI_API const ImVec4* igGetStyleColorVec4(ImGuiCol idx)
{
    return &ImGui::GetStyleColorVec4(idx);
}
CIMGUI_API ImFont* igGetFont()
{
    return ImGui::GetFont();
}
CIMGUI_API float igGetFontSize()
{
    return ImGui::GetFontSize();
}
CIMGUI_API ImVec2 igGetFontTexUvWhitePixel()
{
    return ImGui::GetFontTexUvWhitePixel();
}
CIMGUI_API ImU32 igGetColorU32(ImGuiCol idx,float alpha_mul)
{
    return ImGui::GetColorU32(idx,alpha_mul);
}
CIMGUI_API ImU32 igGetColorU32Vec4(const ImVec4 col)
{
    return ImGui::GetColorU32(col);
}
CIMGUI_API ImU32 igGetColorU32U32(ImU32 col)
{
    return ImGui::GetColorU32(col);
}
CIMGUI_API void igPushItemWidth(float item_width)
{
    return ImGui::PushItemWidth(item_width);
}
CIMGUI_API void igPopItemWidth()
{
    return ImGui::PopItemWidth();
}
CIMGUI_API float igCalcItemWidth()
{
    return ImGui::CalcItemWidth();
}
CIMGUI_API void igPushTextWrapPos(float wrap_pos_x)
{
    return ImGui::PushTextWrapPos(wrap_pos_x);
}
CIMGUI_API void igPopTextWrapPos()
{
    return ImGui::PopTextWrapPos();
}
CIMGUI_API void igPushAllowKeyboardFocus(bool allow_keyboard_focus)
{
    return ImGui::PushAllowKeyboardFocus(allow_keyboard_focus);
}
CIMGUI_API void igPopAllowKeyboardFocus()
{
    return ImGui::PopAllowKeyboardFocus();
}
CIMGUI_API void igPushButtonRepeat(bool repeat)
{
    return ImGui::PushButtonRepeat(repeat);
}
CIMGUI_API void igPopButtonRepeat()
{
    return ImGui::PopButtonRepeat();
}
CIMGUI_API void igSeparator()
{
    return ImGui::Separator();
}
CIMGUI_API void igSameLine(float pos_x,float spacing_w)
{
    return ImGui::SameLine(pos_x,spacing_w);
}
CIMGUI_API void igNewLine()
{
    return ImGui::NewLine();
}
CIMGUI_API void igSpacing()
{
    return ImGui::Spacing();
}
CIMGUI_API void igDummy(const ImVec2 size)
{
    return ImGui::Dummy(size);
}
CIMGUI_API void igIndent(float indent_w)
{
    return ImGui::Indent(indent_w);
}
CIMGUI_API void igUnindent(float indent_w)
{
    return ImGui::Unindent(indent_w);
}
CIMGUI_API void igBeginGroup()
{
    return ImGui::BeginGroup();
}
CIMGUI_API void igEndGroup()
{
    return ImGui::EndGroup();
}
CIMGUI_API ImVec2 igGetCursorPos()
{
    return ImGui::GetCursorPos();
}
CIMGUI_API float igGetCursorPosX()
{
    return ImGui::GetCursorPosX();
}
CIMGUI_API float igGetCursorPosY()
{
    return ImGui::GetCursorPosY();
}
CIMGUI_API void igSetCursorPos(const ImVec2 local_pos)
{
    return ImGui::SetCursorPos(local_pos);
}
CIMGUI_API void igSetCursorPosX(float x)
{
    return ImGui::SetCursorPosX(x);
}
CIMGUI_API void igSetCursorPosY(float y)
{
    return ImGui::SetCursorPosY(y);
}
CIMGUI_API ImVec2 igGetCursorStartPos()
{
    return ImGui::GetCursorStartPos();
}
CIMGUI_API ImVec2 igGetCursorScreenPos()
{
    return ImGui::GetCursorScreenPos();
}
CIMGUI_API void igSetCursorScreenPos(const ImVec2 screen_pos)
{
    return ImGui::SetCursorScreenPos(screen_pos);
}
CIMGUI_API void igAlignTextToFramePadding()
{
    return ImGui::AlignTextToFramePadding();
}
CIMGUI_API float igGetTextLineHeight()
{
    return ImGui::GetTextLineHeight();
}
CIMGUI_API float igGetTextLineHeightWithSpacing()
{
    return ImGui::GetTextLineHeightWithSpacing();
}
CIMGUI_API float igGetFrameHeight()
{
    return ImGui::GetFrameHeight();
}
CIMGUI_API float igGetFrameHeightWithSpacing()
{
    return ImGui::GetFrameHeightWithSpacing();
}
CIMGUI_API void igPushIDStr(const char* str_id)
{
    return ImGui::PushID(str_id);
}
CIMGUI_API void igPushIDRange(const char* str_id_begin,const char* str_id_end)
{
    return ImGui::PushID(str_id_begin,str_id_end);
}
CIMGUI_API void igPushIDPtr(const void* ptr_id)
{
    return ImGui::PushID(ptr_id);
}
CIMGUI_API void igPushIDInt(int int_id)
{
    return ImGui::PushID(int_id);
}
CIMGUI_API void igPopID()
{
    return ImGui::PopID();
}
CIMGUI_API ImGuiID igGetIDStr(const char* str_id)
{
    return ImGui::GetID(str_id);
}
CIMGUI_API ImGuiID igGetIDStrStr(const char* str_id_begin,const char* str_id_end)
{
    return ImGui::GetID(str_id_begin,str_id_end);
}
CIMGUI_API ImGuiID igGetIDPtr(const void* ptr_id)
{
    return ImGui::GetID(ptr_id);
}
CIMGUI_API void igTextUnformatted(const char* text,const char* text_end)
{
    return ImGui::TextUnformatted(text,text_end);
}
CIMGUI_API void igText(const char* fmt,...)
{
    va_list args;
    va_start(args, fmt);
    ImGui::TextV(fmt,args);
    va_end(args);
}
CIMGUI_API void igTextV(const char* fmt,va_list args)
{
    return ImGui::TextV(fmt,args);
}
CIMGUI_API void igTextColored(const ImVec4 col,const char* fmt,...)
{
    va_list args;
    va_start(args, fmt);
    ImGui::TextColoredV(col,fmt,args);
    va_end(args);
}
CIMGUI_API void igTextColoredV(const ImVec4 col,const char* fmt,va_list args)
{
    return ImGui::TextColoredV(col,fmt,args);
}
CIMGUI_API void igTextDisabled(const char* fmt,...)
{
    va_list args;
    va_start(args, fmt);
    ImGui::TextDisabledV(fmt,args);
    va_end(args);
}
CIMGUI_API void igTextDisabledV(const char* fmt,va_list args)
{
    return ImGui::TextDisabledV(fmt,args);
}
CIMGUI_API void igTextWrapped(const char* fmt,...)
{
    va_list args;
    va_start(args, fmt);
    ImGui::TextWrappedV(fmt,args);
    va_end(args);
}
CIMGUI_API void igTextWrappedV(const char* fmt,va_list args)
{
    return ImGui::TextWrappedV(fmt,args);
}
CIMGUI_API void igLabelText(const char* label,const char* fmt,...)
{
    va_list args;
    va_start(args, fmt);
    ImGui::LabelTextV(label,fmt,args);
    va_end(args);
}
CIMGUI_API void igLabelTextV(const char* label,const char* fmt,va_list args)
{
    return ImGui::LabelTextV(label,fmt,args);
}
CIMGUI_API void igBulletText(const char* fmt,...)
{
    va_list args;
    va_start(args, fmt);
    ImGui::BulletTextV(fmt,args);
    va_end(args);
}
CIMGUI_API void igBulletTextV(const char* fmt,va_list args)
{
    return ImGui::BulletTextV(fmt,args);
}
CIMGUI_API bool igButton(const char* label,const ImVec2 size)
{
    return ImGui::Button(label,size);
}
CIMGUI_API bool igSmallButton(const char* label)
{
    return ImGui::SmallButton(label);
}
CIMGUI_API bool igInvisibleButton(const char* str_id,const ImVec2 size)
{
    return ImGui::InvisibleButton(str_id,size);
}
CIMGUI_API bool igArrowButton(const char* str_id,ImGuiDir dir)
{
    return ImGui::ArrowButton(str_id,dir);
}
CIMGUI_API void igImage(ImTextureID user_texture_id,const ImVec2 size,const ImVec2 uv0,const ImVec2 uv1,const ImVec4 tint_col,const ImVec4 border_col)
{
    return ImGui::Image(user_texture_id,size,uv0,uv1,tint_col,border_col);
}
CIMGUI_API bool igImageButton(ImTextureID user_texture_id,const ImVec2 size,const ImVec2 uv0,const ImVec2 uv1,int frame_padding,const ImVec4 bg_col,const ImVec4 tint_col)
{
    return ImGui::ImageButton(user_texture_id,size,uv0,uv1,frame_padding,bg_col,tint_col);
}
CIMGUI_API bool igCheckbox(const char* label,bool* v)
{
    return ImGui::Checkbox(label,v);
}
CIMGUI_API bool igCheckboxFlags(const char* label,unsigned int* flags,unsigned int flags_value)
{
    return ImGui::CheckboxFlags(label,flags,flags_value);
}
CIMGUI_API bool igRadioButtonBool(const char* label,bool active)
{
    return ImGui::RadioButton(label,active);
}
CIMGUI_API bool igRadioButtonIntPtr(const char* label,int* v,int v_button)
{
    return ImGui::RadioButton(label,v,v_button);
}
CIMGUI_API void igProgressBar(float fraction,const ImVec2 size_arg,const char* overlay)
{
    return ImGui::ProgressBar(fraction,size_arg,overlay);
}
CIMGUI_API void igBullet()
{
    return ImGui::Bullet();
}
CIMGUI_API bool igBeginCombo(const char* label,const char* preview_value,ImGuiComboFlags flags)
{
    return ImGui::BeginCombo(label,preview_value,flags);
}
CIMGUI_API void igEndCombo()
{
    return ImGui::EndCombo();
}
CIMGUI_API bool igCombo(const char* label,int* current_item,const char* const items[],int items_count,int popup_max_height_in_items)
{
    return ImGui::Combo(label,current_item,items,items_count,popup_max_height_in_items);
}
CIMGUI_API bool igComboStr(const char* label,int* current_item,const char* items_separated_by_zeros,int popup_max_height_in_items)
{
    return ImGui::Combo(label,current_item,items_separated_by_zeros,popup_max_height_in_items);
}
CIMGUI_API bool igComboFnPtr(const char* label,int* current_item,bool(*items_getter)(void* data,int idx,const char** out_text),void* data,int items_count,int popup_max_height_in_items)
{
    return ImGui::Combo(label,current_item,items_getter,data,items_count,popup_max_height_in_items);
}
CIMGUI_API bool igDragFloat(const char* label,float* v,float v_speed,float v_min,float v_max,const char* format,float power)
{
    return ImGui::DragFloat(label,v,v_speed,v_min,v_max,format,power);
}
CIMGUI_API bool igDragFloat2(const char* label,float v[2],float v_speed,float v_min,float v_max,const char* format,float power)
{
    return ImGui::DragFloat2(label,v,v_speed,v_min,v_max,format,power);
}
CIMGUI_API bool igDragFloat3(const char* label,float v[3],float v_speed,float v_min,float v_max,const char* format,float power)
{
    return ImGui::DragFloat3(label,v,v_speed,v_min,v_max,format,power);
}
CIMGUI_API bool igDragFloat4(const char* label,float v[4],float v_speed,float v_min,float v_max,const char* format,float power)
{
    return ImGui::DragFloat4(label,v,v_speed,v_min,v_max,format,power);
}
CIMGUI_API bool igDragFloatRange2(const char* label,float* v_current_min,float* v_current_max,float v_speed,float v_min,float v_max,const char* format,const char* format_max,float power)
{
    return ImGui::DragFloatRange2(label,v_current_min,v_current_max,v_speed,v_min,v_max,format,format_max,power);
}
CIMGUI_API bool igDragInt(const char* label,int* v,float v_speed,int v_min,int v_max,const char* format)
{
    return ImGui::DragInt(label,v,v_speed,v_min,v_max,format);
}
CIMGUI_API bool igDragInt2(const char* label,int v[2],float v_speed,int v_min,int v_max,const char* format)
{
    return ImGui::DragInt2(label,v,v_speed,v_min,v_max,format);
}
CIMGUI_API bool igDragInt3(const char* label,int v[3],float v_speed,int v_min,int v_max,const char* format)
{
    return ImGui::DragInt3(label,v,v_speed,v_min,v_max,format);
}
CIMGUI_API bool igDragInt4(const char* label,int v[4],float v_speed,int v_min,int v_max,const char* format)
{
    return ImGui::DragInt4(label,v,v_speed,v_min,v_max,format);
}
CIMGUI_API bool igDragIntRange2(const char* label,int* v_current_min,int* v_current_max,float v_speed,int v_min,int v_max,const char* format,const char* format_max)
{
    return ImGui::DragIntRange2(label,v_current_min,v_current_max,v_speed,v_min,v_max,format,format_max);
}
CIMGUI_API bool igDragScalar(const char* label,ImGuiDataType data_type,void* v,float v_speed,const void* v_min,const void* v_max,const char* format,float power)
{
    return ImGui::DragScalar(label,data_type,v,v_speed,v_min,v_max,format,power);
}
CIMGUI_API bool igDragScalarN(const char* label,ImGuiDataType data_type,void* v,int components,float v_speed,const void* v_min,const void* v_max,const char* format,float power)
{
    return ImGui::DragScalarN(label,data_type,v,components,v_speed,v_min,v_max,format,power);
}
CIMGUI_API bool igSliderFloat(const char* label,float* v,float v_min,float v_max,const char* format,float power)
{
    return ImGui::SliderFloat(label,v,v_min,v_max,format,power);
}
CIMGUI_API bool igSliderFloat2(const char* label,float v[2],float v_min,float v_max,const char* format,float power)
{
    return ImGui::SliderFloat2(label,v,v_min,v_max,format,power);
}
CIMGUI_API bool igSliderFloat3(const char* label,float v[3],float v_min,float v_max,const char* format,float power)
{
    return ImGui::SliderFloat3(label,v,v_min,v_max,format,power);
}
CIMGUI_API bool igSliderFloat4(const char* label,float v[4],float v_min,float v_max,const char* format,float power)
{
    return ImGui::SliderFloat4(label,v,v_min,v_max,format,power);
}
CIMGUI_API bool igSliderAngle(const char* label,float* v_rad,float v_degrees_min,float v_degrees_max)
{
    return ImGui::SliderAngle(label,v_rad,v_degrees_min,v_degrees_max);
}
CIMGUI_API bool igSliderInt(const char* label,int* v,int v_min,int v_max,const char* format)
{
    return ImGui::SliderInt(label,v,v_min,v_max,format);
}
CIMGUI_API bool igSliderInt2(const char* label,int v[2],int v_min,int v_max,const char* format)
{
    return ImGui::SliderInt2(label,v,v_min,v_max,format);
}
CIMGUI_API bool igSliderInt3(const char* label,int v[3],int v_min,int v_max,const char* format)
{
    return ImGui::SliderInt3(label,v,v_min,v_max,format);
}
CIMGUI_API bool igSliderInt4(const char* label,int v[4],int v_min,int v_max,const char* format)
{
    return ImGui::SliderInt4(label,v,v_min,v_max,format);
}
CIMGUI_API bool igSliderScalar(const char* label,ImGuiDataType data_type,void* v,const void* v_min,const void* v_max,const char* format,float power)
{
    return ImGui::SliderScalar(label,data_type,v,v_min,v_max,format,power);
}
CIMGUI_API bool igSliderScalarN(const char* label,ImGuiDataType data_type,void* v,int components,const void* v_min,const void* v_max,const char* format,float power)
{
    return ImGui::SliderScalarN(label,data_type,v,components,v_min,v_max,format,power);
}
CIMGUI_API bool igVSliderFloat(const char* label,const ImVec2 size,float* v,float v_min,float v_max,const char* format,float power)
{
    return ImGui::VSliderFloat(label,size,v,v_min,v_max,format,power);
}
CIMGUI_API bool igVSliderInt(const char* label,const ImVec2 size,int* v,int v_min,int v_max,const char* format)
{
    return ImGui::VSliderInt(label,size,v,v_min,v_max,format);
}
CIMGUI_API bool igVSliderScalar(const char* label,const ImVec2 size,ImGuiDataType data_type,void* v,const void* v_min,const void* v_max,const char* format,float power)
{
    return ImGui::VSliderScalar(label,size,data_type,v,v_min,v_max,format,power);
}
CIMGUI_API bool igInputText(const char* label,char* buf,size_t buf_size,ImGuiInputTextFlags flags,ImGuiInputTextCallback callback,void* user_data)
{
    return ImGui::InputText(label,buf,buf_size,flags,callback,user_data);
}
CIMGUI_API bool igInputTextMultiline(const char* label,char* buf,size_t buf_size,const ImVec2 size,ImGuiInputTextFlags flags,ImGuiInputTextCallback callback,void* user_data)
{
    return ImGui::InputTextMultiline(label,buf,buf_size,size,flags,callback,user_data);
}
CIMGUI_API bool igInputFloat(const char* label,float* v,float step,float step_fast,const char* format,ImGuiInputTextFlags extra_flags)
{
    return ImGui::InputFloat(label,v,step,step_fast,format,extra_flags);
}
CIMGUI_API bool igInputFloat2(const char* label,float v[2],const char* format,ImGuiInputTextFlags extra_flags)
{
    return ImGui::InputFloat2(label,v,format,extra_flags);
}
CIMGUI_API bool igInputFloat3(const char* label,float v[3],const char* format,ImGuiInputTextFlags extra_flags)
{
    return ImGui::InputFloat3(label,v,format,extra_flags);
}
CIMGUI_API bool igInputFloat4(const char* label,float v[4],const char* format,ImGuiInputTextFlags extra_flags)
{
    return ImGui::InputFloat4(label,v,format,extra_flags);
}
CIMGUI_API bool igInputInt(const char* label,int* v,int step,int step_fast,ImGuiInputTextFlags extra_flags)
{
    return ImGui::InputInt(label,v,step,step_fast,extra_flags);
}
CIMGUI_API bool igInputInt2(const char* label,int v[2],ImGuiInputTextFlags extra_flags)
{
    return ImGui::InputInt2(label,v,extra_flags);
}
CIMGUI_API bool igInputInt3(const char* label,int v[3],ImGuiInputTextFlags extra_flags)
{
    return ImGui::InputInt3(label,v,extra_flags);
}
CIMGUI_API bool igInputInt4(const char* label,int v[4],ImGuiInputTextFlags extra_flags)
{
    return ImGui::InputInt4(label,v,extra_flags);
}
CIMGUI_API bool igInputDouble(const char* label,double* v,double step,double step_fast,const char* format,ImGuiInputTextFlags extra_flags)
{
    return ImGui::InputDouble(label,v,step,step_fast,format,extra_flags);
}
CIMGUI_API bool igInputScalar(const char* label,ImGuiDataType data_type,void* v,const void* step,const void* step_fast,const char* format,ImGuiInputTextFlags extra_flags)
{
    return ImGui::InputScalar(label,data_type,v,step,step_fast,format,extra_flags);
}
CIMGUI_API bool igInputScalarN(const char* label,ImGuiDataType data_type,void* v,int components,const void* step,const void* step_fast,const char* format,ImGuiInputTextFlags extra_flags)
{
    return ImGui::InputScalarN(label,data_type,v,components,step,step_fast,format,extra_flags);
}
CIMGUI_API bool igColorEdit3(const char* label,float col[3],ImGuiColorEditFlags flags)
{
    return ImGui::ColorEdit3(label,col,flags);
}
CIMGUI_API bool igColorEdit4(const char* label,float col[4],ImGuiColorEditFlags flags)
{
    return ImGui::ColorEdit4(label,col,flags);
}
CIMGUI_API bool igColorPicker3(const char* label,float col[3],ImGuiColorEditFlags flags)
{
    return ImGui::ColorPicker3(label,col,flags);
}
CIMGUI_API bool igColorPicker4(const char* label,float col[4],ImGuiColorEditFlags flags,const float* ref_col)
{
    return ImGui::ColorPicker4(label,col,flags,ref_col);
}
CIMGUI_API bool igColorButton(const char* desc_id,const ImVec4 col,ImGuiColorEditFlags flags,ImVec2 size)
{
    return ImGui::ColorButton(desc_id,col,flags,size);
}
CIMGUI_API void igSetColorEditOptions(ImGuiColorEditFlags flags)
{
    return ImGui::SetColorEditOptions(flags);
}
CIMGUI_API bool igTreeNodeStr(const char* label)
{
    return ImGui::TreeNode(label);
}
CIMGUI_API bool igTreeNodeStrStr(const char* str_id,const char* fmt,...)
{
    va_list args;
    va_start(args, fmt);
    bool ret = ImGui::TreeNodeV(str_id,fmt,args);
    va_end(args);
    return ret;
}
CIMGUI_API bool igTreeNodePtr(const void* ptr_id,const char* fmt,...)
{
    va_list args;
    va_start(args, fmt);
    bool ret = ImGui::TreeNodeV(ptr_id,fmt,args);
    va_end(args);
    return ret;
}
CIMGUI_API bool igTreeNodeVStr(const char* str_id,const char* fmt,va_list args)
{
    return ImGui::TreeNodeV(str_id,fmt,args);
}
CIMGUI_API bool igTreeNodeVPtr(const void* ptr_id,const char* fmt,va_list args)
{
    return ImGui::TreeNodeV(ptr_id,fmt,args);
}
CIMGUI_API bool igTreeNodeExStr(const char* label,ImGuiTreeNodeFlags flags)
{
    return ImGui::TreeNodeEx(label,flags);
}
CIMGUI_API bool igTreeNodeExStrStr(const char* str_id,ImGuiTreeNodeFlags flags,const char* fmt,...)
{
    va_list args;
    va_start(args, fmt);
    bool ret = ImGui::TreeNodeExV(str_id,flags,fmt,args);
    va_end(args);
    return ret;
}
CIMGUI_API bool igTreeNodeExPtr(const void* ptr_id,ImGuiTreeNodeFlags flags,const char* fmt,...)
{
    va_list args;
    va_start(args, fmt);
    bool ret = ImGui::TreeNodeExV(ptr_id,flags,fmt,args);
    va_end(args);
    return ret;
}
CIMGUI_API bool igTreeNodeExVStr(const char* str_id,ImGuiTreeNodeFlags flags,const char* fmt,va_list args)
{
    return ImGui::TreeNodeExV(str_id,flags,fmt,args);
}
CIMGUI_API bool igTreeNodeExVPtr(const void* ptr_id,ImGuiTreeNodeFlags flags,const char* fmt,va_list args)
{
    return ImGui::TreeNodeExV(ptr_id,flags,fmt,args);
}
CIMGUI_API void igTreePushStr(const char* str_id)
{
    return ImGui::TreePush(str_id);
}
CIMGUI_API void igTreePushPtr(const void* ptr_id)
{
    return ImGui::TreePush(ptr_id);
}
CIMGUI_API void igTreePop()
{
    return ImGui::TreePop();
}
CIMGUI_API void igTreeAdvanceToLabelPos()
{
    return ImGui::TreeAdvanceToLabelPos();
}
CIMGUI_API float igGetTreeNodeToLabelSpacing()
{
    return ImGui::GetTreeNodeToLabelSpacing();
}
CIMGUI_API void igSetNextTreeNodeOpen(bool is_open,ImGuiCond cond)
{
    return ImGui::SetNextTreeNodeOpen(is_open,cond);
}
CIMGUI_API bool igCollapsingHeader(const char* label,ImGuiTreeNodeFlags flags)
{
    return ImGui::CollapsingHeader(label,flags);
}
CIMGUI_API bool igCollapsingHeaderBoolPtr(const char* label,bool* p_open,ImGuiTreeNodeFlags flags)
{
    return ImGui::CollapsingHeader(label,p_open,flags);
}
CIMGUI_API bool igSelectable(const char* label,bool selected,ImGuiSelectableFlags flags,const ImVec2 size)
{
    return ImGui::Selectable(label,selected,flags,size);
}
CIMGUI_API bool igSelectableBoolPtr(const char* label,bool* p_selected,ImGuiSelectableFlags flags,const ImVec2 size)
{
    return ImGui::Selectable(label,p_selected,flags,size);
}
CIMGUI_API bool igListBoxStr_arr(const char* label,int* current_item,const char* const items[],int items_count,int height_in_items)
{
    return ImGui::ListBox(label,current_item,items,items_count,height_in_items);
}
CIMGUI_API bool igListBoxFnPtr(const char* label,int* current_item,bool(*items_getter)(void* data,int idx,const char** out_text),void* data,int items_count,int height_in_items)
{
    return ImGui::ListBox(label,current_item,items_getter,data,items_count,height_in_items);
}
CIMGUI_API bool igListBoxHeaderVec2(const char* label,const ImVec2 size)
{
    return ImGui::ListBoxHeader(label,size);
}
CIMGUI_API bool igListBoxHeaderInt(const char* label,int items_count,int height_in_items)
{
    return ImGui::ListBoxHeader(label,items_count,height_in_items);
}
CIMGUI_API void igListBoxFooter()
{
    return ImGui::ListBoxFooter();
}
CIMGUI_API void igPlotLines(const char* label,const float* values,int values_count,int values_offset,const char* overlay_text,float scale_min,float scale_max,ImVec2 graph_size,int stride)
{
    return ImGui::PlotLines(label,values,values_count,values_offset,overlay_text,scale_min,scale_max,graph_size,stride);
}
CIMGUI_API void igPlotLinesFnPtr(const char* label,float(*values_getter)(void* data,int idx),void* data,int values_count,int values_offset,const char* overlay_text,float scale_min,float scale_max,ImVec2 graph_size)
{
    return ImGui::PlotLines(label,values_getter,data,values_count,values_offset,overlay_text,scale_min,scale_max,graph_size);
}
CIMGUI_API void igPlotHistogramFloatPtr(const char* label,const float* values,int values_count,int values_offset,const char* overlay_text,float scale_min,float scale_max,ImVec2 graph_size,int stride)
{
    return ImGui::PlotHistogram(label,values,values_count,values_offset,overlay_text,scale_min,scale_max,graph_size,stride);
}
CIMGUI_API void igPlotHistogramFnPtr(const char* label,float(*values_getter)(void* data,int idx),void* data,int values_count,int values_offset,const char* overlay_text,float scale_min,float scale_max,ImVec2 graph_size)
{
    return ImGui::PlotHistogram(label,values_getter,data,values_count,values_offset,overlay_text,scale_min,scale_max,graph_size);
}
CIMGUI_API void igValueBool(const char* prefix,bool b)
{
    return ImGui::Value(prefix,b);
}
CIMGUI_API void igValueInt(const char* prefix,int v)
{
    return ImGui::Value(prefix,v);
}
CIMGUI_API void igValueUint(const char* prefix,unsigned int v)
{
    return ImGui::Value(prefix,v);
}
CIMGUI_API void igValueFloat(const char* prefix,float v,const char* float_format)
{
    return ImGui::Value(prefix,v,float_format);
}
CIMGUI_API bool igBeginMainMenuBar()
{
    return ImGui::BeginMainMenuBar();
}
CIMGUI_API void igEndMainMenuBar()
{
    return ImGui::EndMainMenuBar();
}
CIMGUI_API bool igBeginMenuBar()
{
    return ImGui::BeginMenuBar();
}
CIMGUI_API void igEndMenuBar()
{
    return ImGui::EndMenuBar();
}
CIMGUI_API bool igBeginMenu(const char* label,bool enabled)
{
    return ImGui::BeginMenu(label,enabled);
}
CIMGUI_API void igEndMenu()
{
    return ImGui::EndMenu();
}
CIMGUI_API bool igMenuItemBool(const char* label,const char* shortcut,bool selected,bool enabled)
{
    return ImGui::MenuItem(label,shortcut,selected,enabled);
}
CIMGUI_API bool igMenuItemBoolPtr(const char* label,const char* shortcut,bool* p_selected,bool enabled)
{
    return ImGui::MenuItem(label,shortcut,p_selected,enabled);
}
CIMGUI_API void igBeginTooltip()
{
    return ImGui::BeginTooltip();
}
CIMGUI_API void igEndTooltip()
{
    return ImGui::EndTooltip();
}
CIMGUI_API void igSetTooltip(const char* fmt,...)
{
    va_list args;
    va_start(args, fmt);
    ImGui::SetTooltipV(fmt,args);
    va_end(args);
}
CIMGUI_API void igSetTooltipV(const char* fmt,va_list args)
{
    return ImGui::SetTooltipV(fmt,args);
}
CIMGUI_API void igOpenPopup(const char* str_id)
{
    return ImGui::OpenPopup(str_id);
}
CIMGUI_API bool igBeginPopup(const char* str_id,ImGuiWindowFlags flags)
{
    return ImGui::BeginPopup(str_id,flags);
}
CIMGUI_API bool igBeginPopupContextItem(const char* str_id,int mouse_button)
{
    return ImGui::BeginPopupContextItem(str_id,mouse_button);
}
CIMGUI_API bool igBeginPopupContextWindow(const char* str_id,int mouse_button,bool also_over_items)
{
    return ImGui::BeginPopupContextWindow(str_id,mouse_button,also_over_items);
}
CIMGUI_API bool igBeginPopupContextVoid(const char* str_id,int mouse_button)
{
    return ImGui::BeginPopupContextVoid(str_id,mouse_button);
}
CIMGUI_API bool igBeginPopupModal(const char* name,bool* p_open,ImGuiWindowFlags flags)
{
    return ImGui::BeginPopupModal(name,p_open,flags);
}
CIMGUI_API void igEndPopup()
{
    return ImGui::EndPopup();
}
CIMGUI_API bool igOpenPopupOnItemClick(const char* str_id,int mouse_button)
{
    return ImGui::OpenPopupOnItemClick(str_id,mouse_button);
}
CIMGUI_API bool igIsPopupOpen(const char* str_id)
{
    return ImGui::IsPopupOpen(str_id);
}
CIMGUI_API void igCloseCurrentPopup()
{
    return ImGui::CloseCurrentPopup();
}
CIMGUI_API void igColumns(int count,const char* id,bool border)
{
    return ImGui::Columns(count,id,border);
}
CIMGUI_API void igNextColumn()
{
    return ImGui::NextColumn();
}
CIMGUI_API int igGetColumnIndex()
{
    return ImGui::GetColumnIndex();
}
CIMGUI_API float igGetColumnWidth(int column_index)
{
    return ImGui::GetColumnWidth(column_index);
}
CIMGUI_API void igSetColumnWidth(int column_index,float width)
{
    return ImGui::SetColumnWidth(column_index,width);
}
CIMGUI_API float igGetColumnOffset(int column_index)
{
    return ImGui::GetColumnOffset(column_index);
}
CIMGUI_API void igSetColumnOffset(int column_index,float offset_x)
{
    return ImGui::SetColumnOffset(column_index,offset_x);
}
CIMGUI_API int igGetColumnsCount()
{
    return ImGui::GetColumnsCount();
}
CIMGUI_API void igLogToTTY(int max_depth)
{
    return ImGui::LogToTTY(max_depth);
}
CIMGUI_API void igLogToFile(int max_depth,const char* filename)
{
    return ImGui::LogToFile(max_depth,filename);
}
CIMGUI_API void igLogToClipboard(int max_depth)
{
    return ImGui::LogToClipboard(max_depth);
}
CIMGUI_API void igLogFinish()
{
    return ImGui::LogFinish();
}
CIMGUI_API void igLogButtons()
{
    return ImGui::LogButtons();
}
CIMGUI_API bool igBeginDragDropSource(ImGuiDragDropFlags flags)
{
    return ImGui::BeginDragDropSource(flags);
}
CIMGUI_API bool igSetDragDropPayload(const char* type,const void* data,size_t size,ImGuiCond cond)
{
    return ImGui::SetDragDropPayload(type,data,size,cond);
}
CIMGUI_API void igEndDragDropSource()
{
    return ImGui::EndDragDropSource();
}
CIMGUI_API bool igBeginDragDropTarget()
{
    return ImGui::BeginDragDropTarget();
}
CIMGUI_API const ImGuiPayload* igAcceptDragDropPayload(const char* type,ImGuiDragDropFlags flags)
{
    return ImGui::AcceptDragDropPayload(type,flags);
}
CIMGUI_API void igEndDragDropTarget()
{
    return ImGui::EndDragDropTarget();
}
CIMGUI_API void igPushClipRect(const ImVec2 clip_rect_min,const ImVec2 clip_rect_max,bool intersect_with_current_clip_rect)
{
    return ImGui::PushClipRect(clip_rect_min,clip_rect_max,intersect_with_current_clip_rect);
}
CIMGUI_API void igPopClipRect()
{
    return ImGui::PopClipRect();
}
CIMGUI_API void igSetItemDefaultFocus()
{
    return ImGui::SetItemDefaultFocus();
}
CIMGUI_API void igSetKeyboardFocusHere(int offset)
{
    return ImGui::SetKeyboardFocusHere(offset);
}
CIMGUI_API bool igIsItemHovered(ImGuiHoveredFlags flags)
{
    return ImGui::IsItemHovered(flags);
}
CIMGUI_API bool igIsItemActive()
{
    return ImGui::IsItemActive();
}
CIMGUI_API bool igIsItemFocused()
{
    return ImGui::IsItemFocused();
}
CIMGUI_API bool igIsItemClicked(int mouse_button)
{
    return ImGui::IsItemClicked(mouse_button);
}
CIMGUI_API bool igIsItemVisible()
{
    return ImGui::IsItemVisible();
}
CIMGUI_API bool igIsItemEdited()
{
    return ImGui::IsItemEdited();
}
CIMGUI_API bool igIsItemDeactivated()
{
    return ImGui::IsItemDeactivated();
}
CIMGUI_API bool igIsItemDeactivatedAfterEdit()
{
    return ImGui::IsItemDeactivatedAfterEdit();
}
CIMGUI_API bool igIsAnyItemHovered()
{
    return ImGui::IsAnyItemHovered();
}
CIMGUI_API bool igIsAnyItemActive()
{
    return ImGui::IsAnyItemActive();
}
CIMGUI_API bool igIsAnyItemFocused()
{
    return ImGui::IsAnyItemFocused();
}
CIMGUI_API ImVec2 igGetItemRectMin()
{
    return ImGui::GetItemRectMin();
}
CIMGUI_API ImVec2 igGetItemRectMax()
{
    return ImGui::GetItemRectMax();
}
CIMGUI_API ImVec2 igGetItemRectSize()
{
    return ImGui::GetItemRectSize();
}
CIMGUI_API void igSetItemAllowOverlap()
{
    return ImGui::SetItemAllowOverlap();
}
CIMGUI_API bool igIsRectVisible(const ImVec2 size)
{
    return ImGui::IsRectVisible(size);
}
CIMGUI_API bool igIsRectVisibleVec2(const ImVec2 rect_min,const ImVec2 rect_max)
{
    return ImGui::IsRectVisible(rect_min,rect_max);
}
CIMGUI_API double igGetTime()
{
    return ImGui::GetTime();
}
CIMGUI_API int igGetFrameCount()
{
    return ImGui::GetFrameCount();
}
CIMGUI_API ImDrawList* igGetOverlayDrawList()
{
    return ImGui::GetOverlayDrawList();
}
CIMGUI_API ImDrawListSharedData* igGetDrawListSharedData()
{
    return ImGui::GetDrawListSharedData();
}
CIMGUI_API const char* igGetStyleColorName(ImGuiCol idx)
{
    return ImGui::GetStyleColorName(idx);
}
CIMGUI_API void igSetStateStorage(ImGuiStorage* storage)
{
    return ImGui::SetStateStorage(storage);
}
CIMGUI_API ImGuiStorage* igGetStateStorage()
{
    return ImGui::GetStateStorage();
}
CIMGUI_API ImVec2 igCalcTextSize(const char* text,const char* text_end,bool hide_text_after_double_hash,float wrap_width)
{
    return ImGui::CalcTextSize(text,text_end,hide_text_after_double_hash,wrap_width);
}
CIMGUI_API void igCalcListClipping(int items_count,float items_height,int* out_items_display_start,int* out_items_display_end)
{
    return ImGui::CalcListClipping(items_count,items_height,out_items_display_start,out_items_display_end);
}
CIMGUI_API bool igBeginChildFrame(ImGuiID id,const ImVec2 size,ImGuiWindowFlags flags)
{
    return ImGui::BeginChildFrame(id,size,flags);
}
CIMGUI_API void igEndChildFrame()
{
    return ImGui::EndChildFrame();
}
CIMGUI_API ImVec4 igColorConvertU32ToFloat4(ImU32 in)
{
    return ImGui::ColorConvertU32ToFloat4(in);
}
CIMGUI_API ImU32 igColorConvertFloat4ToU32(const ImVec4 in)
{
    return ImGui::ColorConvertFloat4ToU32(in);
}
CIMGUI_API int igGetKeyIndex(ImGuiKey imgui_key)
{
    return ImGui::GetKeyIndex(imgui_key);
}
CIMGUI_API bool igIsKeyDown(int user_key_index)
{
    return ImGui::IsKeyDown(user_key_index);
}
CIMGUI_API bool igIsKeyPressed(int user_key_index,bool repeat)
{
    return ImGui::IsKeyPressed(user_key_index,repeat);
}
CIMGUI_API bool igIsKeyReleased(int user_key_index)
{
    return ImGui::IsKeyReleased(user_key_index);
}
CIMGUI_API int igGetKeyPressedAmount(int key_index,float repeat_delay,float rate)
{
    return ImGui::GetKeyPressedAmount(key_index,repeat_delay,rate);
}
CIMGUI_API bool igIsMouseDown(int button)
{
    return ImGui::IsMouseDown(button);
}
CIMGUI_API bool igIsAnyMouseDown()
{
    return ImGui::IsAnyMouseDown();
}
CIMGUI_API bool igIsMouseClicked(int button,bool repeat)
{
    return ImGui::IsMouseClicked(button,repeat);
}
CIMGUI_API bool igIsMouseDoubleClicked(int button)
{
    return ImGui::IsMouseDoubleClicked(button);
}
CIMGUI_API bool igIsMouseReleased(int button)
{
    return ImGui::IsMouseReleased(button);
}
CIMGUI_API bool igIsMouseDragging(int button,float lock_threshold)
{
    return ImGui::IsMouseDragging(button,lock_threshold);
}
CIMGUI_API bool igIsMouseHoveringRect(const ImVec2 r_min,const ImVec2 r_max,bool clip)
{
    return ImGui::IsMouseHoveringRect(r_min,r_max,clip);
}
CIMGUI_API bool igIsMousePosValid(const ImVec2* mouse_pos)
{
    return ImGui::IsMousePosValid(mouse_pos);
}
CIMGUI_API ImVec2 igGetMousePos()
{
    return ImGui::GetMousePos();
}
CIMGUI_API ImVec2 igGetMousePosOnOpeningCurrentPopup()
{
    return ImGui::GetMousePosOnOpeningCurrentPopup();
}
CIMGUI_API ImVec2 igGetMouseDragDelta(int button,float lock_threshold)
{
    return ImGui::GetMouseDragDelta(button,lock_threshold);
}
CIMGUI_API void igResetMouseDragDelta(int button)
{
    return ImGui::ResetMouseDragDelta(button);
}
CIMGUI_API ImGuiMouseCursor igGetMouseCursor()
{
    return ImGui::GetMouseCursor();
}
CIMGUI_API void igSetMouseCursor(ImGuiMouseCursor type)
{
    return ImGui::SetMouseCursor(type);
}
CIMGUI_API void igCaptureKeyboardFromApp(bool capture)
{
    return ImGui::CaptureKeyboardFromApp(capture);
}
CIMGUI_API void igCaptureMouseFromApp(bool capture)
{
    return ImGui::CaptureMouseFromApp(capture);
}
CIMGUI_API const char* igGetClipboardText()
{
    return ImGui::GetClipboardText();
}
CIMGUI_API void igSetClipboardText(const char* text)
{
    return ImGui::SetClipboardText(text);
}
CIMGUI_API void igLoadIniSettingsFromDisk(const char* ini_filename)
{
    return ImGui::LoadIniSettingsFromDisk(ini_filename);
}
CIMGUI_API void igLoadIniSettingsFromMemory(const char* ini_data,size_t ini_size)
{
    return ImGui::LoadIniSettingsFromMemory(ini_data,ini_size);
}
CIMGUI_API void igSaveIniSettingsToDisk(const char* ini_filename)
{
    return ImGui::SaveIniSettingsToDisk(ini_filename);
}
CIMGUI_API const char* igSaveIniSettingsToMemory(size_t* out_ini_size)
{
    return ImGui::SaveIniSettingsToMemory(out_ini_size);
}
CIMGUI_API void igSetAllocatorFunctions(void*(*alloc_func)(size_t sz,void* user_data),void(*free_func)(void* ptr,void* user_data),void* user_data)
{
    return ImGui::SetAllocatorFunctions(alloc_func,free_func,user_data);
}
CIMGUI_API void* igMemAlloc(size_t size)
{
    return ImGui::MemAlloc(size);
}
CIMGUI_API void igMemFree(void* ptr)
{
    return ImGui::MemFree(ptr);
}
CIMGUI_API void ImGuiStyle_ScaleAllSizes(ImGuiStyle* self,float scale_factor)
{
    return self->ScaleAllSizes(scale_factor);
}
CIMGUI_API void ImGuiIO_AddInputCharacter(ImGuiIO* self,ImWchar c)
{
    return self->AddInputCharacter(c);
}
CIMGUI_API void ImGuiIO_AddInputCharactersUTF8(ImGuiIO* self,const char* utf8_chars)
{
    return self->AddInputCharactersUTF8(utf8_chars);
}
CIMGUI_API void ImGuiIO_ClearInputCharacters(ImGuiIO* self)
{
    return self->ClearInputCharacters();
}
CIMGUI_API bool ImGuiTextFilter_Draw(ImGuiTextFilter* self,const char* label,float width)
{
    return self->Draw(label,width);
}
CIMGUI_API bool ImGuiTextFilter_PassFilter(ImGuiTextFilter* self,const char* text,const char* text_end)
{
    return self->PassFilter(text,text_end);
}
CIMGUI_API void ImGuiTextFilter_Build(ImGuiTextFilter* self)
{
    return self->Build();
}
CIMGUI_API void ImGuiTextFilter_Clear(ImGuiTextFilter* self)
{
    return self->Clear();
}
CIMGUI_API bool ImGuiTextFilter_IsActive(ImGuiTextFilter* self)
{
    return self->IsActive();
}
CIMGUI_API const char* TextRange_begin(TextRange* self)
{
    return self->begin();
}
CIMGUI_API const char* TextRange_end(TextRange* self)
{
    return self->end();
}
CIMGUI_API bool TextRange_empty(TextRange* self)
{
    return self->empty();
}
CIMGUI_API void TextRange_split(TextRange* self,char separator,ImVector_TextRange* out)
{
    return self->split(separator,out);
}
CIMGUI_API const char* ImGuiTextBuffer_begin(ImGuiTextBuffer* self)
{
    return self->begin();
}
CIMGUI_API const char* ImGuiTextBuffer_end(ImGuiTextBuffer* self)
{
    return self->end();
}
CIMGUI_API int ImGuiTextBuffer_size(ImGuiTextBuffer* self)
{
    return self->size();
}
CIMGUI_API bool ImGuiTextBuffer_empty(ImGuiTextBuffer* self)
{
    return self->empty();
}
CIMGUI_API void ImGuiTextBuffer_clear(ImGuiTextBuffer* self)
{
    return self->clear();
}
CIMGUI_API void ImGuiTextBuffer_reserve(ImGuiTextBuffer* self,int capacity)
{
    return self->reserve(capacity);
}
CIMGUI_API const char* ImGuiTextBuffer_c_str(ImGuiTextBuffer* self)
{
    return self->c_str();
}
CIMGUI_API void ImGuiTextBuffer_appendfv(ImGuiTextBuffer* self,const char* fmt,va_list args)
{
    return self->appendfv(fmt,args);
}
CIMGUI_API void ImGuiStorage_Clear(ImGuiStorage* self)
{
    return self->Clear();
}
CIMGUI_API int ImGuiStorage_GetInt(ImGuiStorage* self,ImGuiID key,int default_val)
{
    return self->GetInt(key,default_val);
}
CIMGUI_API void ImGuiStorage_SetInt(ImGuiStorage* self,ImGuiID key,int val)
{
    return self->SetInt(key,val);
}
CIMGUI_API bool ImGuiStorage_GetBool(ImGuiStorage* self,ImGuiID key,bool default_val)
{
    return self->GetBool(key,default_val);
}
CIMGUI_API void ImGuiStorage_SetBool(ImGuiStorage* self,ImGuiID key,bool val)
{
    return self->SetBool(key,val);
}
CIMGUI_API float ImGuiStorage_GetFloat(ImGuiStorage* self,ImGuiID key,float default_val)
{
    return self->GetFloat(key,default_val);
}
CIMGUI_API void ImGuiStorage_SetFloat(ImGuiStorage* self,ImGuiID key,float val)
{
    return self->SetFloat(key,val);
}
CIMGUI_API void* ImGuiStorage_GetVoidPtr(ImGuiStorage* self,ImGuiID key)
{
    return self->GetVoidPtr(key);
}
CIMGUI_API void ImGuiStorage_SetVoidPtr(ImGuiStorage* self,ImGuiID key,void* val)
{
    return self->SetVoidPtr(key,val);
}
CIMGUI_API int* ImGuiStorage_GetIntRef(ImGuiStorage* self,ImGuiID key,int default_val)
{
    return self->GetIntRef(key,default_val);
}
CIMGUI_API bool* ImGuiStorage_GetBoolRef(ImGuiStorage* self,ImGuiID key,bool default_val)
{
    return self->GetBoolRef(key,default_val);
}
CIMGUI_API float* ImGuiStorage_GetFloatRef(ImGuiStorage* self,ImGuiID key,float default_val)
{
    return self->GetFloatRef(key,default_val);
}
CIMGUI_API void** ImGuiStorage_GetVoidPtrRef(ImGuiStorage* self,ImGuiID key,void* default_val)
{
    return self->GetVoidPtrRef(key,default_val);
}
CIMGUI_API void ImGuiStorage_SetAllInt(ImGuiStorage* self,int val)
{
    return self->SetAllInt(val);
}
CIMGUI_API void ImGuiStorage_BuildSortByKey(ImGuiStorage* self)
{
    return self->BuildSortByKey();
}
CIMGUI_API void ImGuiInputTextCallbackData_DeleteChars(ImGuiInputTextCallbackData* self,int pos,int bytes_count)
{
    return self->DeleteChars(pos,bytes_count);
}
CIMGUI_API void ImGuiInputTextCallbackData_InsertChars(ImGuiInputTextCallbackData* self,int pos,const char* text,const char* text_end)
{
    return self->InsertChars(pos,text,text_end);
}
CIMGUI_API bool ImGuiInputTextCallbackData_HasSelection(ImGuiInputTextCallbackData* self)
{
    return self->HasSelection();
}
CIMGUI_API void ImGuiPayload_Clear(ImGuiPayload* self)
{
    return self->Clear();
}
CIMGUI_API bool ImGuiPayload_IsDataType(ImGuiPayload* self,const char* type)
{
    return self->IsDataType(type);
}
CIMGUI_API bool ImGuiPayload_IsPreview(ImGuiPayload* self)
{
    return self->IsPreview();
}
CIMGUI_API bool ImGuiPayload_IsDelivery(ImGuiPayload* self)
{
    return self->IsDelivery();
}
CIMGUI_API void ImColor_SetHSV(ImColor* self,float h,float s,float v,float a)
{
    return self->SetHSV(h,s,v,a);
}
CIMGUI_API ImColor ImColor_HSV(ImColor* self,float h,float s,float v,float a)
{
    return self->HSV(h,s,v,a);
}
CIMGUI_API bool ImGuiListClipper_Step(ImGuiListClipper* self)
{
    return self->Step();
}
CIMGUI_API void ImGuiListClipper_Begin(ImGuiListClipper* self,int items_count,float items_height)
{
    return self->Begin(items_count,items_height);
}
CIMGUI_API void ImGuiListClipper_End(ImGuiListClipper* self)
{
    return self->End();
}
CIMGUI_API void ImDrawList_PushClipRect(ImDrawList* self,ImVec2 clip_rect_min,ImVec2 clip_rect_max,bool intersect_with_current_clip_rect)
{
    return self->PushClipRect(clip_rect_min,clip_rect_max,intersect_with_current_clip_rect);
}
CIMGUI_API void ImDrawList_PushClipRectFullScreen(ImDrawList* self)
{
    return self->PushClipRectFullScreen();
}
CIMGUI_API void ImDrawList_PopClipRect(ImDrawList* self)
{
    return self->PopClipRect();
}
CIMGUI_API void ImDrawList_PushTextureID(ImDrawList* self,ImTextureID texture_id)
{
    return self->PushTextureID(texture_id);
}
CIMGUI_API void ImDrawList_PopTextureID(ImDrawList* self)
{
    return self->PopTextureID();
}
CIMGUI_API ImVec2 ImDrawList_GetClipRectMin(ImDrawList* self)
{
    return self->GetClipRectMin();
}
CIMGUI_API ImVec2 ImDrawList_GetClipRectMax(ImDrawList* self)
{
    return self->GetClipRectMax();
}
CIMGUI_API void ImDrawList_AddLine(ImDrawList* self,const ImVec2 a,const ImVec2 b,ImU32 col,float thickness)
{
    return self->AddLine(a,b,col,thickness);
}
CIMGUI_API void ImDrawList_AddRect(ImDrawList* self,const ImVec2 a,const ImVec2 b,ImU32 col,float rounding,int rounding_corners_flags,float thickness)
{
    return self->AddRect(a,b,col,rounding,rounding_corners_flags,thickness);
}
CIMGUI_API void ImDrawList_AddRectFilled(ImDrawList* self,const ImVec2 a,const ImVec2 b,ImU32 col,float rounding,int rounding_corners_flags)
{
    return self->AddRectFilled(a,b,col,rounding,rounding_corners_flags);
}
CIMGUI_API void ImDrawList_AddRectFilledMultiColor(ImDrawList* self,const ImVec2 a,const ImVec2 b,ImU32 col_upr_left,ImU32 col_upr_right,ImU32 col_bot_right,ImU32 col_bot_left)
{
    return self->AddRectFilledMultiColor(a,b,col_upr_left,col_upr_right,col_bot_right,col_bot_left);
}
CIMGUI_API void ImDrawList_AddQuad(ImDrawList* self,const ImVec2 a,const ImVec2 b,const ImVec2 c,const ImVec2 d,ImU32 col,float thickness)
{
    return self->AddQuad(a,b,c,d,col,thickness);
}
CIMGUI_API void ImDrawList_AddQuadFilled(ImDrawList* self,const ImVec2 a,const ImVec2 b,const ImVec2 c,const ImVec2 d,ImU32 col)
{
    return self->AddQuadFilled(a,b,c,d,col);
}
CIMGUI_API void ImDrawList_AddTriangle(ImDrawList* self,const ImVec2 a,const ImVec2 b,const ImVec2 c,ImU32 col,float thickness)
{
    return self->AddTriangle(a,b,c,col,thickness);
}
CIMGUI_API void ImDrawList_AddTriangleFilled(ImDrawList* self,const ImVec2 a,const ImVec2 b,const ImVec2 c,ImU32 col)
{
    return self->AddTriangleFilled(a,b,c,col);
}
CIMGUI_API void ImDrawList_AddCircle(ImDrawList* self,const ImVec2 centre,float radius,ImU32 col,int num_segments,float thickness)
{
    return self->AddCircle(centre,radius,col,num_segments,thickness);
}
CIMGUI_API void ImDrawList_AddCircleFilled(ImDrawList* self,const ImVec2 centre,float radius,ImU32 col,int num_segments)
{
    return self->AddCircleFilled(centre,radius,col,num_segments);
}
CIMGUI_API void ImDrawList_AddText(ImDrawList* self,const ImVec2 pos,ImU32 col,const char* text_begin,const char* text_end)
{
    return self->AddText(pos,col,text_begin,text_end);
}
CIMGUI_API void ImDrawList_AddTextFontPtr(ImDrawList* self,const ImFont* font,float font_size,const ImVec2 pos,ImU32 col,const char* text_begin,const char* text_end,float wrap_width,const ImVec4* cpu_fine_clip_rect)
{
    return self->AddText(font,font_size,pos,col,text_begin,text_end,wrap_width,cpu_fine_clip_rect);
}
CIMGUI_API void ImDrawList_AddImage(ImDrawList* self,ImTextureID user_texture_id,const ImVec2 a,const ImVec2 b,const ImVec2 uv_a,const ImVec2 uv_b,ImU32 col)
{
    return self->AddImage(user_texture_id,a,b,uv_a,uv_b,col);
}
CIMGUI_API void ImDrawList_AddImageQuad(ImDrawList* self,ImTextureID user_texture_id,const ImVec2 a,const ImVec2 b,const ImVec2 c,const ImVec2 d,const ImVec2 uv_a,const ImVec2 uv_b,const ImVec2 uv_c,const ImVec2 uv_d,ImU32 col)
{
    return self->AddImageQuad(user_texture_id,a,b,c,d,uv_a,uv_b,uv_c,uv_d,col);
}
CIMGUI_API void ImDrawList_AddImageRounded(ImDrawList* self,ImTextureID user_texture_id,const ImVec2 a,const ImVec2 b,const ImVec2 uv_a,const ImVec2 uv_b,ImU32 col,float rounding,int rounding_corners)
{
    return self->AddImageRounded(user_texture_id,a,b,uv_a,uv_b,col,rounding,rounding_corners);
}
CIMGUI_API void ImDrawList_AddPolyline(ImDrawList* self,const ImVec2* points,const int num_points,ImU32 col,bool closed,float thickness)
{
    return self->AddPolyline(points,num_points,col,closed,thickness);
}
CIMGUI_API void ImDrawList_AddConvexPolyFilled(ImDrawList* self,const ImVec2* points,const int num_points,ImU32 col)
{
    return self->AddConvexPolyFilled(points,num_points,col);
}
CIMGUI_API void ImDrawList_AddBezierCurve(ImDrawList* self,const ImVec2 pos0,const ImVec2 cp0,const ImVec2 cp1,const ImVec2 pos1,ImU32 col,float thickness,int num_segments)
{
    return self->AddBezierCurve(pos0,cp0,cp1,pos1,col,thickness,num_segments);
}
CIMGUI_API void ImDrawList_PathClear(ImDrawList* self)
{
    return self->PathClear();
}
CIMGUI_API void ImDrawList_PathLineTo(ImDrawList* self,const ImVec2 pos)
{
    return self->PathLineTo(pos);
}
CIMGUI_API void ImDrawList_PathLineToMergeDuplicate(ImDrawList* self,const ImVec2 pos)
{
    return self->PathLineToMergeDuplicate(pos);
}
CIMGUI_API void ImDrawList_PathFillConvex(ImDrawList* self,ImU32 col)
{
    return self->PathFillConvex(col);
}
CIMGUI_API void ImDrawList_PathStroke(ImDrawList* self,ImU32 col,bool closed,float thickness)
{
    return self->PathStroke(col,closed,thickness);
}
CIMGUI_API void ImDrawList_PathArcTo(ImDrawList* self,const ImVec2 centre,float radius,float a_min,float a_max,int num_segments)
{
    return self->PathArcTo(centre,radius,a_min,a_max,num_segments);
}
CIMGUI_API void ImDrawList_PathArcToFast(ImDrawList* self,const ImVec2 centre,float radius,int a_min_of_12,int a_max_of_12)
{
    return self->PathArcToFast(centre,radius,a_min_of_12,a_max_of_12);
}
CIMGUI_API void ImDrawList_PathBezierCurveTo(ImDrawList* self,const ImVec2 p1,const ImVec2 p2,const ImVec2 p3,int num_segments)
{
    return self->PathBezierCurveTo(p1,p2,p3,num_segments);
}
CIMGUI_API void ImDrawList_PathRect(ImDrawList* self,const ImVec2 rect_min,const ImVec2 rect_max,float rounding,int rounding_corners_flags)
{
    return self->PathRect(rect_min,rect_max,rounding,rounding_corners_flags);
}
CIMGUI_API void ImDrawList_ChannelsSplit(ImDrawList* self,int channels_count)
{
    return self->ChannelsSplit(channels_count);
}
CIMGUI_API void ImDrawList_ChannelsMerge(ImDrawList* self)
{
    return self->ChannelsMerge();
}
CIMGUI_API void ImDrawList_ChannelsSetCurrent(ImDrawList* self,int channel_index)
{
    return self->ChannelsSetCurrent(channel_index);
}
CIMGUI_API void ImDrawList_AddCallback(ImDrawList* self,ImDrawCallback callback,void* callback_data)
{
    return self->AddCallback(callback,callback_data);
}
CIMGUI_API void ImDrawList_AddDrawCmd(ImDrawList* self)
{
    return self->AddDrawCmd();
}
CIMGUI_API ImDrawList* ImDrawList_CloneOutput(ImDrawList* self)
{
    return self->CloneOutput();
}
CIMGUI_API void ImDrawList_Clear(ImDrawList* self)
{
    return self->Clear();
}
CIMGUI_API void ImDrawList_ClearFreeMemory(ImDrawList* self)
{
    return self->ClearFreeMemory();
}
CIMGUI_API void ImDrawList_PrimReserve(ImDrawList* self,int idx_count,int vtx_count)
{
    return self->PrimReserve(idx_count,vtx_count);
}
CIMGUI_API void ImDrawList_PrimRect(ImDrawList* self,const ImVec2 a,const ImVec2 b,ImU32 col)
{
    return self->PrimRect(a,b,col);
}
CIMGUI_API void ImDrawList_PrimRectUV(ImDrawList* self,const ImVec2 a,const ImVec2 b,const ImVec2 uv_a,const ImVec2 uv_b,ImU32 col)
{
    return self->PrimRectUV(a,b,uv_a,uv_b,col);
}
CIMGUI_API void ImDrawList_PrimQuadUV(ImDrawList* self,const ImVec2 a,const ImVec2 b,const ImVec2 c,const ImVec2 d,const ImVec2 uv_a,const ImVec2 uv_b,const ImVec2 uv_c,const ImVec2 uv_d,ImU32 col)
{
    return self->PrimQuadUV(a,b,c,d,uv_a,uv_b,uv_c,uv_d,col);
}
CIMGUI_API void ImDrawList_PrimWriteVtx(ImDrawList* self,const ImVec2 pos,const ImVec2 uv,ImU32 col)
{
    return self->PrimWriteVtx(pos,uv,col);
}
CIMGUI_API void ImDrawList_PrimWriteIdx(ImDrawList* self,ImDrawIdx idx)
{
    return self->PrimWriteIdx(idx);
}
CIMGUI_API void ImDrawList_PrimVtx(ImDrawList* self,const ImVec2 pos,const ImVec2 uv,ImU32 col)
{
    return self->PrimVtx(pos,uv,col);
}
CIMGUI_API void ImDrawList_UpdateClipRect(ImDrawList* self)
{
    return self->UpdateClipRect();
}
CIMGUI_API void ImDrawList_UpdateTextureID(ImDrawList* self)
{
    return self->UpdateTextureID();
}
CIMGUI_API void ImDrawData_Clear(ImDrawData* self)
{
    return self->Clear();
}
CIMGUI_API void ImDrawData_DeIndexAllBuffers(ImDrawData* self)
{
    return self->DeIndexAllBuffers();
}
CIMGUI_API void ImDrawData_ScaleClipRects(ImDrawData* self,const ImVec2 sc)
{
    return self->ScaleClipRects(sc);
}
CIMGUI_API ImFont* ImFontAtlas_AddFont(ImFontAtlas* self,const ImFontConfig* font_cfg)
{
    return self->AddFont(font_cfg);
}
CIMGUI_API ImFont* ImFontAtlas_AddFontDefault(ImFontAtlas* self,const ImFontConfig* font_cfg)
{
    return self->AddFontDefault(font_cfg);
}
CIMGUI_API ImFont* ImFontAtlas_AddFontFromFileTTF(ImFontAtlas* self,const char* filename,float size_pixels,const ImFontConfig* font_cfg,const ImWchar* glyph_ranges)
{
    return self->AddFontFromFileTTF(filename,size_pixels,font_cfg,glyph_ranges);
}
CIMGUI_API ImFont* ImFontAtlas_AddFontFromMemoryTTF(ImFontAtlas* self,void* font_data,int font_size,float size_pixels,const ImFontConfig* font_cfg,const ImWchar* glyph_ranges)
{
    return self->AddFontFromMemoryTTF(font_data,font_size,size_pixels,font_cfg,glyph_ranges);
}
CIMGUI_API ImFont* ImFontAtlas_AddFontFromMemoryCompressedTTF(ImFontAtlas* self,const void* compressed_font_data,int compressed_font_size,float size_pixels,const ImFontConfig* font_cfg,const ImWchar* glyph_ranges)
{
    return self->AddFontFromMemoryCompressedTTF(compressed_font_data,compressed_font_size,size_pixels,font_cfg,glyph_ranges);
}
CIMGUI_API ImFont* ImFontAtlas_AddFontFromMemoryCompressedBase85TTF(ImFontAtlas* self,const char* compressed_font_data_base85,float size_pixels,const ImFontConfig* font_cfg,const ImWchar* glyph_ranges)
{
    return self->AddFontFromMemoryCompressedBase85TTF(compressed_font_data_base85,size_pixels,font_cfg,glyph_ranges);
}
CIMGUI_API void ImFontAtlas_ClearInputData(ImFontAtlas* self)
{
    return self->ClearInputData();
}
CIMGUI_API void ImFontAtlas_ClearTexData(ImFontAtlas* self)
{
    return self->ClearTexData();
}
CIMGUI_API void ImFontAtlas_ClearFonts(ImFontAtlas* self)
{
    return self->ClearFonts();
}
CIMGUI_API void ImFontAtlas_Clear(ImFontAtlas* self)
{
    return self->Clear();
}
CIMGUI_API bool ImFontAtlas_Build(ImFontAtlas* self)
{
    return self->Build();
}
CIMGUI_API bool ImFontAtlas_IsBuilt(ImFontAtlas* self)
{
    return self->IsBuilt();
}
CIMGUI_API void ImFontAtlas_GetTexDataAsAlpha8(ImFontAtlas* self,unsigned char** out_pixels,int* out_width,int* out_height,int* out_bytes_per_pixel)
{
    return self->GetTexDataAsAlpha8(out_pixels,out_width,out_height,out_bytes_per_pixel);
}
CIMGUI_API void ImFontAtlas_GetTexDataAsRGBA32(ImFontAtlas* self,unsigned char** out_pixels,int* out_width,int* out_height,int* out_bytes_per_pixel)
{
    return self->GetTexDataAsRGBA32(out_pixels,out_width,out_height,out_bytes_per_pixel);
}
CIMGUI_API void ImFontAtlas_SetTexID(ImFontAtlas* self,ImTextureID id)
{
    return self->SetTexID(id);
}
CIMGUI_API const ImWchar* ImFontAtlas_GetGlyphRangesDefault(ImFontAtlas* self)
{
    return self->GetGlyphRangesDefault();
}
CIMGUI_API const ImWchar* ImFontAtlas_GetGlyphRangesKorean(ImFontAtlas* self)
{
    return self->GetGlyphRangesKorean();
}
CIMGUI_API const ImWchar* ImFontAtlas_GetGlyphRangesJapanese(ImFontAtlas* self)
{
    return self->GetGlyphRangesJapanese();
}
CIMGUI_API const ImWchar* ImFontAtlas_GetGlyphRangesChineseFull(ImFontAtlas* self)
{
    return self->GetGlyphRangesChineseFull();
}
CIMGUI_API const ImWchar* ImFontAtlas_GetGlyphRangesChineseSimplifiedCommon(ImFontAtlas* self)
{
    return self->GetGlyphRangesChineseSimplifiedCommon();
}
CIMGUI_API const ImWchar* ImFontAtlas_GetGlyphRangesCyrillic(ImFontAtlas* self)
{
    return self->GetGlyphRangesCyrillic();
}
CIMGUI_API const ImWchar* ImFontAtlas_GetGlyphRangesThai(ImFontAtlas* self)
{
    return self->GetGlyphRangesThai();
}
CIMGUI_API bool GlyphRangesBuilder_GetBit(GlyphRangesBuilder* self,int n)
{
    return self->GetBit(n);
}
CIMGUI_API void GlyphRangesBuilder_SetBit(GlyphRangesBuilder* self,int n)
{
    return self->SetBit(n);
}
CIMGUI_API void GlyphRangesBuilder_AddChar(GlyphRangesBuilder* self,ImWchar c)
{
    return self->AddChar(c);
}
CIMGUI_API void GlyphRangesBuilder_AddText(GlyphRangesBuilder* self,const char* text,const char* text_end)
{
    return self->AddText(text,text_end);
}
CIMGUI_API void GlyphRangesBuilder_AddRanges(GlyphRangesBuilder* self,const ImWchar* ranges)
{
    return self->AddRanges(ranges);
}
CIMGUI_API void GlyphRangesBuilder_BuildRanges(GlyphRangesBuilder* self,ImVector_ImWchar* out_ranges)
{
    return self->BuildRanges(out_ranges);
}
CIMGUI_API bool CustomRect_IsPacked(CustomRect* self)
{
    return self->IsPacked();
}
CIMGUI_API int ImFontAtlas_AddCustomRectRegular(ImFontAtlas* self,unsigned int id,int width,int height)
{
    return self->AddCustomRectRegular(id,width,height);
}
CIMGUI_API int ImFontAtlas_AddCustomRectFontGlyph(ImFontAtlas* self,ImFont* font,ImWchar id,int width,int height,float advance_x,const ImVec2 offset)
{
    return self->AddCustomRectFontGlyph(font,id,width,height,advance_x,offset);
}
CIMGUI_API const CustomRect* ImFontAtlas_GetCustomRectByIndex(ImFontAtlas* self,int index)
{
    return self->GetCustomRectByIndex(index);
}
CIMGUI_API void ImFontAtlas_CalcCustomRectUV(ImFontAtlas* self,const CustomRect* rect,ImVec2* out_uv_min,ImVec2* out_uv_max)
{
    return self->CalcCustomRectUV(rect,out_uv_min,out_uv_max);
}
CIMGUI_API bool ImFontAtlas_GetMouseCursorTexData(ImFontAtlas* self,ImGuiMouseCursor cursor,ImVec2* out_offset,ImVec2* out_size,ImVec2 out_uv_border[2],ImVec2 out_uv_fill[2])
{
    return self->GetMouseCursorTexData(cursor,out_offset,out_size,out_uv_border,out_uv_fill);
}
CIMGUI_API void ImFont_ClearOutputData(ImFont* self)
{
    return self->ClearOutputData();
}
CIMGUI_API void ImFont_BuildLookupTable(ImFont* self)
{
    return self->BuildLookupTable();
}
CIMGUI_API const ImFontGlyph* ImFont_FindGlyph(ImFont* self,ImWchar c)
{
    return self->FindGlyph(c);
}
CIMGUI_API const ImFontGlyph* ImFont_FindGlyphNoFallback(ImFont* self,ImWchar c)
{
    return self->FindGlyphNoFallback(c);
}
CIMGUI_API void ImFont_SetFallbackChar(ImFont* self,ImWchar c)
{
    return self->SetFallbackChar(c);
}
CIMGUI_API float ImFont_GetCharAdvance(ImFont* self,ImWchar c)
{
    return self->GetCharAdvance(c);
}
CIMGUI_API bool ImFont_IsLoaded(ImFont* self)
{
    return self->IsLoaded();
}
CIMGUI_API const char* ImFont_GetDebugName(ImFont* self)
{
    return self->GetDebugName();
}
CIMGUI_API ImVec2 ImFont_CalcTextSizeA(ImFont* self,float size,float max_width,float wrap_width,const char* text_begin,const char* text_end,const char** remaining)
{
    return self->CalcTextSizeA(size,max_width,wrap_width,text_begin,text_end,remaining);
}
CIMGUI_API const char* ImFont_CalcWordWrapPositionA(ImFont* self,float scale,const char* text,const char* text_end,float wrap_width)
{
    return self->CalcWordWrapPositionA(scale,text,text_end,wrap_width);
}
CIMGUI_API void ImFont_RenderChar(ImFont* self,ImDrawList* draw_list,float size,ImVec2 pos,ImU32 col,unsigned short c)
{
    return self->RenderChar(draw_list,size,pos,col,c);
}
CIMGUI_API void ImFont_RenderText(ImFont* self,ImDrawList* draw_list,float size,ImVec2 pos,ImU32 col,const ImVec4 clip_rect,const char* text_begin,const char* text_end,float wrap_width,bool cpu_fine_clip)
{
    return self->RenderText(draw_list,size,pos,col,clip_rect,text_begin,text_end,wrap_width,cpu_fine_clip);
}
CIMGUI_API void ImFont_GrowIndex(ImFont* self,int new_size)
{
    return self->GrowIndex(new_size);
}
CIMGUI_API void ImFont_AddGlyph(ImFont* self,ImWchar c,float x0,float y0,float x1,float y1,float u0,float v0,float u1,float v1,float advance_x)
{
    return self->AddGlyph(c,x0,y0,x1,y1,u0,v0,u1,v1,advance_x);
}
CIMGUI_API void ImFont_AddRemapChar(ImFont* self,ImWchar dst,ImWchar src,bool overwrite_dst)
{
    return self->AddRemapChar(dst,src,overwrite_dst);
}



/////////////////////////////manual written functions
CIMGUI_API void igLogText(CONST char *fmt, ...)
{
    char buffer[256];
    va_list args;
    va_start(args, fmt);
    vsnprintf(buffer, 256, fmt, args);
    va_end(args);

    ImGui::LogText("%s", buffer);
}
CIMGUI_API void ImGuiTextBuffer_appendf(struct ImGuiTextBuffer *buffer, const char *fmt, ...)
{
    va_list args;
    va_start(args, fmt);
    buffer->appendfv(fmt, args);
    va_end(args);
}
CIMGUI_API void ImFontConfig_DefaultConstructor(ImFontConfig *config)
{
    *config = ImFontConfig();
}
CIMGUI_API float igGET_FLT_MAX()
{
    return FLT_MAX;
}
CIMGUI_API void igColorConvertRGBtoHSV(float r,float g,float b,float *out_h,float *out_s,float *out_v)
{
    ImGui::ColorConvertRGBtoHSV(r,g,b,*out_h,*out_s,*out_v);
}
CIMGUI_API void igColorConvertHSVtoRGB(float h,float s,float v,float *out_r,float *out_g,float *out_b)
{
    ImGui::ColorConvertHSVtoRGB(h,s,v,*out_r,*out_g,*out_b);
}
