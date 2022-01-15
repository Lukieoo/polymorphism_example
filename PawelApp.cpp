#include "PawelApp.h"

PawelApp::PawelApp(bool logToFile)
{
	if (logToFile) {
		logger = new  LogToFile();
	}
	else { 
		logger = new  LogToScreen();
	}

}

void PawelApp::testLog()
{
	logger->dangerLog();
	logger->warningLog();
}
