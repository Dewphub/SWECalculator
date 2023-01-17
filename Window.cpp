#include "Window.h"
//#include "ButtonFactory.h"


wxBEGIN_EVENT_TABLE(Window, wxFrame)

EVT_BUTTON(2, Window::OnButtonClick)
EVT_BUTTON(3, Window::OnButtonClick)
EVT_BUTTON(4, Window::OnButtonClick)
EVT_BUTTON(5, Window::OnButtonClick)
EVT_BUTTON(6, Window::OnButtonClick)
EVT_BUTTON(7, Window::OnButtonClick)
EVT_BUTTON(8, Window::OnButtonClick)
EVT_BUTTON(9, Window::OnButtonClick)
EVT_BUTTON(10, Window::OnButtonClick)
EVT_BUTTON(11, Window::OnButtonClick)
EVT_BUTTON(12, Window::OnButtonClick)
EVT_BUTTON(13, Window::OnButtonClick)
EVT_BUTTON(14, Window::OnButtonClick)
EVT_BUTTON(15, Window::OnButtonClick)
EVT_BUTTON(16, Window::OnButtonClick)
EVT_BUTTON(17, Window::OnButtonClick)
EVT_BUTTON(18, Window::OnButtonClick)
EVT_BUTTON(19, Window::OnButtonClick)
EVT_BUTTON(20, Window::OnButtonClick)
EVT_BUTTON(21, Window::OnButtonClick)
EVT_BUTTON(22, Window::OnButtonClick)
EVT_BUTTON(23, Window::OnButtonClick)
EVT_BUTTON(24, Window::OnButtonClick)

wxEND_EVENT_TABLE()


Window::Window() :
	wxFrame(nullptr, 0, "Calculator", wxPoint(400, 400), wxSize(500, 400))
{
	calscreen = new wxTextCtrl(this, 1, "", wxPoint(0, 0), wxSize(500, 100));


	zero = new wxButton(this, 2, "0", wxPoint(100, 310), wxSize(100, 50));
	one = new wxButton(this, 3, "1", wxPoint(0, 260), wxSize(100, 50));
	two = new wxButton(this, 4, "2", wxPoint(100, 260), wxSize(100, 50));
	three = new wxButton(this, 5, "3", wxPoint(200, 260), wxSize(100, 50));
	four = new wxButton(this, 6, "4", wxPoint(0, 210), wxSize(100, 50));
	five = new wxButton(this, 7, "5", wxPoint(100, 210), wxSize(100, 50));
	six = new wxButton(this, 8, "6", wxPoint(200, 210), wxSize(100, 50));
	seven = new wxButton(this, 9, "7", wxPoint(0, 160), wxSize(100, 50));
	eight = new wxButton(this, 10, "8", wxPoint(100, 160), wxSize(100, 50));
	nine = new wxButton(this, 11, "9", wxPoint(200, 160), wxSize(100, 50));

	divide = new wxButton(this, 12, "/", wxPoint(390, 110), wxSize(100, 50));
	multi = new wxButton(this, 13, "*", wxPoint(390, 160), wxSize(100, 50));
	minus = new wxButton(this, 14, "+", wxPoint(390, 210), wxSize(100, 50));
	plus = new wxButton(this, 15, "-", wxPoint(390, 260), wxSize(100, 50));
	equal = new wxButton(this, 16, "=", wxPoint(390, 310), wxSize(100, 50));

	mode = new wxButton(this, 17, "mode", wxPoint(200, 110), wxSize(100, 50));
	backSpace = new wxButton(this, 18, "<-", wxPoint(100, 110), wxSize(100, 50));
	clear = new wxButton(this, 19, "C", wxPoint(0, 110), wxSize(100, 50));

	dot = new wxButton(this, 20, ".", wxPoint(0, 310), wxSize(100, 50));
	neg = new wxButton(this, 21, "-neg", wxPoint(200, 310), wxSize(100, 50));

	sin = new wxButton(this, 22, "sin", wxPoint(300, 210), wxSize(100, 50));
	cos = new wxButton(this, 23, "cos", wxPoint(300, 260), wxSize(100, 50));
	tan = new wxButton(this, 24, "tan", wxPoint(300, 310), wxSize(100, 50));
	//ButtonFactory::NewButton();
}

void Window::OnButtonClick(wxCommandEvent& evt)
{
	int id = evt.GetId();
	switch (id)
	{
	case 2:
		calscreen->AppendText("0");
		break;
	case 3:
		calscreen->AppendText("1");
		break;
	case 4:
		calscreen->AppendText("2");
		break;
	case 5:
		calscreen->AppendText("3");
		break;
	case 6:
		calscreen->AppendText("4");
		break;
	case 7:
		calscreen->AppendText("5");
		break;
	case 8:
		calscreen->AppendText("6");
		break;
	case 9:
		calscreen->AppendText("7");
		break;
	case 10:
		calscreen->AppendText("8");
		break;
	case 11:
		calscreen->AppendText("9");
		break;
	case 12:
		calscreen->AppendText("/");
		break;
	case 13:
		calscreen->AppendText("*");
		break;
	case 14:
		calscreen->AppendText("+");
		break;
	case 15:
		calscreen->AppendText("-");
		break;
	case 16:

		break;
	case 17:

		break;
	case 18:

		break;
	case 19:

		break;
	case 20:

		break;
	case 21:

		break;
	case 22:

		break;
	case 23:

		break;
	case 24:

		break;
	default:
		break;
	}
}
