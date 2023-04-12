#pragma once
#include <string>
#include <vector>
#include <wx/wx.h>

class ChartControl : public wxWindow {
public:
    ChartControl(wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size);

    std::vector<double> values;
    std::string title;

private:
    void OnPaint(wxPaintEvent& evt);
    std::tuple<int, double, double> calculatedChartSegmentCountAndRange(double origLow, double origHigh);
};
