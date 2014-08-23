/*
 * FaceRecognizer.h
 *
 *  Created on: Aug 10, 2014
 *      Author: Sarat Tallamraju
 */

#ifndef FACERECOGNIZER_H_
#define FACERECOGNIZER_H_

#include <string>

using namespace std;

class FaceRecognizer {
public:

	// constructor/destructor
	FaceRecognizer();
	virtual ~FaceRecognizer();

	/**
	 * Compares the 2 image files and returns a score where 1.0 means the 2 images are exact matches.
	 */
	double compare(string fileA, string fileB);

private:
};

#endif /* FACERECOGNIZER_H_ */
