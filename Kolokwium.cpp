#include "PawelApp.h"

#include <iostream>

int main()
{
	PawelApp *app1 = new PawelApp(true); 
	PawelApp *app2 = new PawelApp(false);

	cout << "Save in file\n";
	app1->testLog();
	cout << "Show on screen\n";
	app2->testLog();
}

 