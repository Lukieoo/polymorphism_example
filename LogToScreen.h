#include "KrzysciakLogger.h"
#pragma once
class LogToScreen : public KrzysciakLogger
{
public:
	void dangerLog();
	void warningLog();
};

