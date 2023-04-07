#pragma once

#include <wx/wx.h>

struct GraphicObject {
    wxRect2DDouble rect;
    wxColour colour;
    wxString text;
    wxAffineMatrix2D transform;
};