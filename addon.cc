#include <node.h>

using namespace v8;

//simple recursive fibonacci implementation
int fib(int n) {
    if(1 == n || 2 == n) {
        return 1;
    } else {
        return fib(n-1) + fib(n-2);
    }
}

void Calculate(const FunctionCallbackInfo<Value>& args) {
  //isolate scope
  Isolate* isolate = Isolate::GetCurrent();
  HandleScope scope(isolate);

  int value = args[0]->NumberValue();
  int result = fib(value);
  Local<Number> num = Number::New(isolate, result);

  //return the fib result
  args.GetReturnValue().Set(num);
}

void Init(Handle<Object> exports) {
  //set the method
  NODE_SET_METHOD(exports, "fibonacci", Calculate);
}

//export the module
NODE_MODULE(addon, Init)
