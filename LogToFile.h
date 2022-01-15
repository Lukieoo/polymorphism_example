#include "KrzysciakLogger.h"
#include <fstream>

#pragma once
using namespace std;
class LogToFile : public KrzysciakLogger
{
	ofstream fileOut;

public:
	LogToFile();
	~LogToFile();
	 void dangerLog();
	 void warningLog();
};

