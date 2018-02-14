#include <iostream>
#include "Singleton.h"

using namespace std;

// Badprog.com

//-----------------------------------------------------------------------------
// Main.
//-----------------------------------------------------------------------------
int main() {
	// Using instance
	Singleton *s1 = Singleton::theInstance();
	Singleton *s2 = Singleton::theInstance();
	Singleton &s3 = *s2;

	// Displaying instance adresses
	cout << s1 << endl;
	cout << s2 << endl;
	cout << &s3 << endl;

	return 0;
}