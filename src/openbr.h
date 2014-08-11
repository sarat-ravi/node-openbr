/*
 * openbr.h
 *
 *  Created on: Aug 10, 2014
 *      Author: Sarat Tallamraju
 */

#ifndef OPENBR_H_
#define OPENBR_H_

using namespace std;

#define REQ_FUN_ARG(I, VAR)                                             	\
	if (args.Length() <= (I) || !args[I]->IsFunction())                   	\
    	return v8::ThrowException(v8::Exception::TypeError(                 \
                  	  String::New("Argument " #I " must be a function")));  \
                  	  Local<Function> VAR = Local<Function>::Cast(args[I]);


#define SETUP_FUNCTION(TYP)	\
	HandleScope scope;		\
	TYP *self = ObjectWrap::Unwrap<TYP>(args.This());

#define JSFUNC(NAME) \
	static Handle<Value> NAME(const Arguments& args);

#define JSTHROW_TYPE(ERR) \
	return v8::ThrowException(v8::Exception::TypeError(v8::String::New(ERR)));

#define JSTHROW(ERR) \
	return v8::ThrowException(v8::Exception::Error(v8::String::New(ERR)));


#define INT_FROM_ARGS(NAME, IND) \
	if (args[IND]->IsInt32()){ \
		NAME = args[IND]->Uint32Value(); \
	}

#define DOUBLE_FROM_ARGS(NAME, IND) \
	if (args[IND]->IsInt32()){ \
		NAME = args[IND]->NumberValue(); \
	}

#endif /* OPENBR_H_ */
