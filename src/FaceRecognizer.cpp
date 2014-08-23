/*
 * FaceRecognizer.cpp
 *
 *  Created on: Aug 10, 2014
 *      Author: Sarat Tallamraju
 */

#include "FaceRecognizer.h"
#include "Log.h"
//#include <openbr/openbr_plugin.h>

using namespace std;

FaceRecognizer::FaceRecognizer() {
	// constructor
}

FaceRecognizer::~FaceRecognizer() {
	// destructor
}

double FaceRecognizer::compare(string fileA, string fileB) {
	Log::i("Comparing face '" + fileA + "' with '" + fileB + "'");
	return 0.001;
}

