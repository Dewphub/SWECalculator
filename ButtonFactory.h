#pragma once
#include "wx/wx.h"
#include <string>
#include "Window.h"

class ButtonFactory
{
public:
	wxDECLARE_EVENT_TABLE();
	void OnButtonClick(wxCommandEvent& evt);
	void NewButton();
	void NewNumButtons();
	void NewOtherButtons();
};


