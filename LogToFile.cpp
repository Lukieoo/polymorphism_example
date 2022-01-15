#include "LogToFile.h"
LogToFile::LogToFile()
{
	fileOut.open("path.txt"); 
}
LogToFile::~LogToFile()
{
	fileOut.close();
}
void LogToFile::dangerLog()
{
	fileOut << "dangerLog";
	fileOut.flush();
}

void LogToFile::warningLog()
{
	fileOut << "warningLog";
	fileOut.flush();
}
