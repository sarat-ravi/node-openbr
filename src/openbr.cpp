#include <node.h>

// C standard library
#include <cstdlib>
#include <ctime>

using namespace v8;

Handle<Value> Version(const Arguments& args) {
    // At the top of every function that uses anything about v8, include a
    // definition like this. It ensures that any v8 handles you create in that
    // function are properly cleaned up. If you see memory rising in your
    // application, chances are that a scope isn't properly cleaned up.
    HandleScope scope;

    // When returning a value from a function, make sure to wrap it in
    // scope.Close(). This ensures that the handle stays valid after the current
    // scope (declared with the previous statement) is cleaned up.
    return scope.Close(
        String::New("0.0.1")
    );
}

void RegisterModule(Handle<Object> target) {
    srand(time(NULL));

    // target is the module object you see when require()ing the .node file.
    target->Set(String::NewSymbol("version"),
        FunctionTemplate::New(Version)->GetFunction());
}

NODE_MODULE(openbr, RegisterModule);
