#include "module.h"
#include <node.h>

namespace module
{

  using v8::FunctionCallbackInfo;
  using v8::Isolate;
  using v8::Local;
  using v8::Object;
  using v8::String;
  using v8::Value;
  using v8::Number;
  using v8::Exception;

  // void _process(const FunctionCallbackInfo<Value> &args)
  // {
  //   Process();
  // }

  void _run(const FunctionCallbackInfo<Value> &args)
  {
    Run();
  }

  void _rand(const FunctionCallbackInfo<Value> &args)
  {
    Isolate *isolate = args.GetIsolate();

    Local<Number> num = Number::New(isolate, Rand());

    args.GetReturnValue().Set(num);
  }

  void init(Local<Object> exports)
  {
    // NODE_SET_METHOD(exports, "process", _process);
    NODE_SET_METHOD(exports, "run", _run);
    NODE_SET_METHOD(exports, "rand", _rand);
  }

  NODE_MODULE(module, init)
}