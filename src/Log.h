/*
 * Log.h
 *
 *  Created on: Aug 10, 2014
 *      Author: saratt
 */

#ifndef LOG_H_
#define LOG_H_

#include <string>

using namespace std;

class Log {
public:
	Log();
	virtual ~Log();

	static void i(string message);
	static void d(string message);
	static void t(string message);
	static void e(string message);
};

#endif /* LOG_H_ */
