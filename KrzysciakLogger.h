#pragma once
#include <iostream>

using namespace std;

class KrzysciakLogger
{
public:
	virtual void dangerLog() { cout << "Danger"; };
	virtual void warningLog() { cout << "Warning"; };
};

