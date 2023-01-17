#include "ButtonFactory.h"
#include "Window.h"
#include "App.cpp"


void ButtonFactory::NewButton()
{

	wxButton* button = nullptr;
	button = new wxButton(0, 2, "button", wxPoint(100, 310), wxSize(100, 50));
}

void ButtonFactory::NewNumButtons()
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

	zero = new wxButton(nullptr, 2, "0", wxPoint(100, 310), wxSize(100, 50));
	one = new wxButton(nullptr, 3, "1", wxPoint(0, 260), wxSize(100, 50));
	two = new wxButton(nullptr, 4, "2", wxPoint(100, 260), wxSize(100, 50));
	three = new wxButton(nullptr, 5, "3", wxPoint(200, 260), wxSize(100, 50));
	four = new wxButton(nullptr, 6, "4", wxPoint(0, 210), wxSize(100, 50));
	five = new wxButton(nullptr, 7, "5", wxPoint(100, 210), wxSize(100, 50));
	six = new wxButton(nullptr, 8, "6", wxPoint(200, 210), wxSize(100, 50));
	seven = new wxButton(nullptr, 9, "7", wxPoint(0, 160), wxSize(100, 50));
	eight = new wxButton(nullptr, 10, "8", wxPoint(100, 160), wxSize(100, 50));
	nine = new wxButton(nullptr, 11, "9", wxPoint(200, 160), wxSize(100, 50));
}

void ButtonFactory::NewOtherButtons()
{
	wxButton* mode = nullptr;
	wxButton* backSpace = nullptr;
	wxButton* clear = nullptr;

	wxButton* dot = nullptr;
	wxButton* neg = nullptr;

	wxButton* sin = nullptr;
	wxButton* cos = nullptr;
	wxButton* tan = nullptr;

	mode = new wxButton(nullptr, 17, "mode", wxPoint(200, 110), wxSize(100, 50));
	backSpace = new wxButton(nullptr, 18, "<-", wxPoint(100, 110), wxSize(100, 50));
	clear = new wxButton(nullptr, 19, "C", wxPoint(0, 110), wxSize(100, 50));

	dot = new wxButton(nullptr, 20, ".", wxPoint(0, 310), wxSize(100, 50));
	neg = new wxButton(nullptr, 21, "-neg", wxPoint(200, 310), wxSize(100, 50));

	sin = new wxButton(nullptr, 22, "sin", wxPoint(300, 210), wxSize(100, 50));
	cos = new wxButton(nullptr, 23, "cos", wxPoint(300, 260), wxSize(100, 50));
	tan = new wxButton(nullptr, 24, "tan", wxPoint(300, 310), wxSize(100, 50));
}
