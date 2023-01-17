#pragma once
#include "wx\wx.h"

class Window : public wxFrame
{
	wxButton* zero = nullptr;
	wxButton* one = nullptr;
	wxButton* two = nullptr;
	wxButton* three = nullptr;
	wxButton* four = nullptr;
	wxButton* five = nullptr;
	wxButton* six = nullptr;
	wxButton* seven = nullptr;
	wxButton* eight = nullptr;
	wxButton* nine = nullptr;

	wxButton* divide = nullptr;
	wxButton* multi = nullptr;
	wxButton* plus = nullptr;
	wxButton* minus = nullptr;
	wxButton* equal = nullptr;

	wxButton* mode = nullptr;
	wxButton* backSpace = nullptr;
	wxButton* clear = nullptr;

	wxButton* dot = nullptr;
	wxButton* neg = nullptr;

	wxButton* sin = nullptr;
	wxButton* cos = nullptr;
	wxButton* tan = nullptr;


	wxTextCtrl* calscreen = nullptr;
public:

	Window();
	wxDECLARE_EVENT_TABLE();
	void OnButtonClick(wxCommandEvent& evt);
};


