#ifndef slic3r_GUI_hpp_
#define slic3r_GUI_hpp_

#include <wx/wx.h>
#include <wx/html/htmlwin.h>
#include "../../libslic3r/libslic3r.h"

namespace Slic3r { namespace GUI {

extern std::string VAR_PATH;

void disable_screensaver();
void enable_screensaver();

} }

#endif