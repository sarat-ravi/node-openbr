/*
 * Log.cpp
 *
 *  Created on: Aug 10, 2014
 *      Author: saratt
 */

#include "Log.h"
#include <iostream>
#include <string>

using namespace std;

void Log::i(string message) {
	cout << message << endl;
}

void Log::d(string message) {
	cout << message << endl;
}

void Log::t(string message) {
	cout << message << endl;
}

void Log::e(string message) {
	cerr << message << endl;
}
