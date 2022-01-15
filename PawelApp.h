#include "KrzysciakLogger.h"
#include "LogToScreen.h"
#include "LogToFile.h"

#pragma once

class PawelApp :public KrzysciakLogger
{
	KrzysciakLogger *logger;
public:
	PawelApp(bool logToFile);
	void testLog();
};

