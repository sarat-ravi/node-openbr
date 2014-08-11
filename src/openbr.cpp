#include <node.h>
#include <cstdlib>
#include <ctime>
#include <string>

#include "FaceRecognizer.h"

using namespace v8;
using namespace std;


/**
 * Gets string from arg at given index, or NULL otherwise.
 */
string getString(const Arguments& args, int index) {
	if (args.Length() < index + 1) {
		return NULL;
	}

	if (args[index]->IsString()) {
		Local<Value> localValue = args[index];
		Local<String> localString = localValue->ToString();
		String::Utf8Value utf8(localString);
		string str = string(*utf8);
		return str;
	}

	return NULL;
}


/**
 * Returns the version of the OpenBR installed.
 */
Handle<Value> version(const Arguments& args) {
    HandleScope scope;
    return scope.Close(
        String::New("0.0.1")
    );
}

Handle<Value> compareFaces(const Arguments& args) {
    HandleScope scope;

    string fileA = getString(args, 0);
    string fileB = getString(args, 1);

    FaceRecognizer faceRecognizer = FaceRecognizer();
    double score = faceRecognizer.compare(fileA, fileB);

    return scope.Close(
    	Number::New(score)
    );
}

void RegisterModule(Handle<Object> target) {
    // target is the module object you see when require()ing the .node file.
    target->Set(String::NewSymbol("version"),
        FunctionTemplate::New(version)->GetFunction());

    target->Set(String::NewSymbol("compareFaces"),
        FunctionTemplate::New(compareFaces)->GetFunction());
}

NODE_MODULE(openbr, RegisterModule);
