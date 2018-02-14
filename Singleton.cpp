#include <iostream>
#include <cstdlib>
#include "Singleton.h"

using namespace std;

// Badprog.com

Singleton *Singleton::_instance = 0;

//-----------------------------------------------------------------------------
// Constructor.
//-----------------------------------------------------------------------------
Singleton::Singleton() {
	cout << "Begin of Singleton." << endl;
	atexit(&(endOfProgram));
}

//-----------------------------------------------------------------------------
// Destructor.
//-----------------------------------------------------------------------------
Singleton::~Singleton() {
	cout << "End of Singleton." << endl;
}

//-----------------------------------------------------------------------------
// Destructor.
//-----------------------------------------------------------------------------
void Singleton::endOfProgram() {
	delete _instance;
	_instance = 0;	// avoids dangling pointer and bad read memory
}

//-----------------------------------------------------------------------------
// Returns the Singleton instance.
//-----------------------------------------------------------------------------
Singleton *Singleton::theInstance() {
	if (0 == _instance) {
		_instance = new Singleton();
	}
	return _instance;
}