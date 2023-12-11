
// [do not edit,<auto-generated />]
// This file has been automatically generated, please do not change unless you disable auto-generation in the Makefile  
#include <curl/curl.h>
#include <stdint.h>
#include <lo.h>

namespace lo {
namespace curl {

using v8::String;
using v8::FunctionCallbackInfo;
using v8::Array;
using v8::Local;
using v8::ObjectTemplate;
using v8::Isolate;
using v8::Value;
using v8::Uint32Array;
using v8::ArrayBuffer;
using v8::Context;
using v8::Integer;
using v8::Function;
using v8::NewStringType;
using v8::Object;
using v8::BackingStore;
using v8::TryCatch;
using v8::ScriptCompiler;
using v8::Module;
using v8::FixedArray;
using v8::ScriptOrigin;
using v8::SharedArrayBuffer;
using v8::MaybeLocal;
using v8::HandleScope;
using v8::Promise;
using v8::Number;
using v8::StackTrace;
using v8::Message;
using v8::StackFrame;
using v8::Maybe;
using v8::FunctionTemplate;
using v8::FunctionCallback;
using v8::PromiseRejectMessage;
using v8::CFunction;
using v8::Global;
using v8::Exception;
using v8::CTypeInfo;
using v8::PropertyAttribute;
using v8::Signature;
using v8::ConstructorBehavior;
using v8::SideEffectType;
using v8::kPromiseRejectAfterResolved;
using v8::kPromiseResolveAfterResolved;
using v8::kPromiseHandlerAddedAfterReject;
using v8::Data;
using v8::PrimitiveArray;
using v8::TypedArray;
using v8::Uint8Array;
using v8::Boolean;
using v8::ModuleRequest;
using v8::CFunctionInfo;
using v8::OOMDetails;
using v8::V8;
using v8::BigInt;



void fopenFast(void* p, struct FastOneByteString* const p0, struct FastOneByteString* const p1, struct FastApiTypedArray* const p_ret);
v8::CTypeInfo cargsfopen[4] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kSeqOneByteString),
  v8::CTypeInfo(v8::CTypeInfo::Type::kSeqOneByteString),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32, v8::CTypeInfo::SequenceType::kIsTypedArray, v8::CTypeInfo::Flags::kNone)
};
v8::CTypeInfo rcfopen = v8::CTypeInfo(v8::CTypeInfo::Type::kVoid);
v8::CFunctionInfo infofopen = v8::CFunctionInfo(rcfopen, 4, cargsfopen);
v8::CFunction pFfopen = v8::CFunction((const void*)&fopenFast, &infofopen);

int32_t fcloseFast(void* p, void* p0);
v8::CTypeInfo cargsfclose[2] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
};
v8::CTypeInfo rcfclose = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo infofclose = v8::CFunctionInfo(rcfclose, 2, cargsfclose);
v8::CFunction pFfclose = v8::CFunction((const void*)&fcloseFast, &infofclose);

int32_t global_initFast(void* p, uint32_t p0);
v8::CTypeInfo cargsglobal_init[2] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32),
};
v8::CTypeInfo rcglobal_init = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo infoglobal_init = v8::CFunctionInfo(rcglobal_init, 2, cargsglobal_init);
v8::CFunction pFglobal_init = v8::CFunction((const void*)&global_initFast, &infoglobal_init);

void easy_initFast(void* p, struct FastApiTypedArray* const p_ret);
v8::CTypeInfo cargseasy_init[2] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),

  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32, v8::CTypeInfo::SequenceType::kIsTypedArray, v8::CTypeInfo::Flags::kNone)
};
v8::CTypeInfo rceasy_init = v8::CTypeInfo(v8::CTypeInfo::Type::kVoid);
v8::CFunctionInfo infoeasy_init = v8::CFunctionInfo(rceasy_init, 2, cargseasy_init);
v8::CFunction pFeasy_init = v8::CFunction((const void*)&easy_initFast, &infoeasy_init);

int32_t easy_setoptFast(void* p, void* p0, uint32_t p1, struct FastOneByteString* const p2);
v8::CTypeInfo cargseasy_setopt[4] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32),
  v8::CTypeInfo(v8::CTypeInfo::Type::kSeqOneByteString),
};
v8::CTypeInfo rceasy_setopt = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo infoeasy_setopt = v8::CFunctionInfo(rceasy_setopt, 4, cargseasy_setopt);
v8::CFunction pFeasy_setopt = v8::CFunction((const void*)&easy_setoptFast, &infoeasy_setopt);

int32_t easy_setopt_2Fast(void* p, void* p0, uint32_t p1, uint32_t p2);
v8::CTypeInfo cargseasy_setopt_2[4] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32),
};
v8::CTypeInfo rceasy_setopt_2 = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo infoeasy_setopt_2 = v8::CFunctionInfo(rceasy_setopt_2, 4, cargseasy_setopt_2);
v8::CFunction pFeasy_setopt_2 = v8::CFunction((const void*)&easy_setopt_2Fast, &infoeasy_setopt_2);

int32_t easy_setopt_3Fast(void* p, void* p0, uint32_t p1, uint64_t p2);
v8::CTypeInfo cargseasy_setopt_3[4] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
};
v8::CTypeInfo rceasy_setopt_3 = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo infoeasy_setopt_3 = v8::CFunctionInfo(rceasy_setopt_3, 4, cargseasy_setopt_3);
v8::CFunction pFeasy_setopt_3 = v8::CFunction((const void*)&easy_setopt_3Fast, &infoeasy_setopt_3);

int32_t easy_performFast(void* p, void* p0);
v8::CTypeInfo cargseasy_perform[2] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
};
v8::CTypeInfo rceasy_perform = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo infoeasy_perform = v8::CFunctionInfo(rceasy_perform, 2, cargseasy_perform);
v8::CFunction pFeasy_perform = v8::CFunction((const void*)&easy_performFast, &infoeasy_perform);

void easy_cleanupFast(void* p, void* p0);
v8::CTypeInfo cargseasy_cleanup[2] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
};
v8::CTypeInfo rceasy_cleanup = v8::CTypeInfo(v8::CTypeInfo::Type::kVoid);
v8::CFunctionInfo infoeasy_cleanup = v8::CFunctionInfo(rceasy_cleanup, 2, cargseasy_cleanup);
v8::CFunction pFeasy_cleanup = v8::CFunction((const void*)&easy_cleanupFast, &infoeasy_cleanup);

void global_cleanupFast(void* p);
v8::CTypeInfo cargsglobal_cleanup[1] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),

};
v8::CTypeInfo rcglobal_cleanup = v8::CTypeInfo(v8::CTypeInfo::Type::kVoid);
v8::CFunctionInfo infoglobal_cleanup = v8::CFunctionInfo(rcglobal_cleanup, 1, cargsglobal_cleanup);
v8::CFunction pFglobal_cleanup = v8::CFunction((const void*)&global_cleanupFast, &infoglobal_cleanup);

int32_t easy_getinfoFast(void* p, void* p0, uint32_t p1, struct FastApiTypedArray* const p2);
v8::CTypeInfo cargseasy_getinfo[4] = {
  v8::CTypeInfo(v8::CTypeInfo::Type::kV8Value),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint64),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32),
  v8::CTypeInfo(v8::CTypeInfo::Type::kUint32, CTypeInfo::SequenceType::kIsTypedArray, CTypeInfo::Flags::kNone),
};
v8::CTypeInfo rceasy_getinfo = v8::CTypeInfo(v8::CTypeInfo::Type::kInt32);
v8::CFunctionInfo infoeasy_getinfo = v8::CFunctionInfo(rceasy_getinfo, 4, cargseasy_getinfo);
v8::CFunction pFeasy_getinfo = v8::CFunction((const void*)&easy_getinfoFast, &infoeasy_getinfo);



void fopenSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  String::Utf8Value v0(isolate, args[0]);
  String::Utf8Value v1(isolate, args[1]);
  void* rc = fopen(*v0, *v1);
  Local<ArrayBuffer> ab = args[2].As<Uint32Array>()->Buffer();
  ((void**)ab->Data())[0] = rc;
}

void fopenFast(void* p, struct FastOneByteString* const p0, struct FastOneByteString* const p1, struct FastApiTypedArray* const p_ret) {
  struct FastOneByteString* const v0 = p0;
  struct FastOneByteString* const v1 = p1;
  void* r = fopen(v0->data, v1->data);
  ((void**)p_ret->data)[0] = r;

}
void fcloseSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  FILE* v0 = reinterpret_cast<FILE*>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  int32_t rc = fclose(v0);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t fcloseFast(void* p, void* p0) {
  FILE* v0 = reinterpret_cast<FILE*>(p0);
  return fclose(v0);
}
void global_initSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  uint32_t v0 = Local<Integer>::Cast(args[0])->Value();
  int32_t rc = curl_global_init(v0);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t global_initFast(void* p, uint32_t p0) {
  uint32_t v0 = p0;
  return curl_global_init(v0);
}
void easy_initSlow(const FunctionCallbackInfo<Value> &args) {

  void* rc = curl_easy_init();
  Local<ArrayBuffer> ab = args[0].As<Uint32Array>()->Buffer();
  ((void**)ab->Data())[0] = rc;
}

void easy_initFast(void* p, struct FastApiTypedArray* const p_ret) {

  void* r = curl_easy_init();
  ((void**)p_ret->data)[0] = r;

}
void easy_setoptSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  CURL* v0 = reinterpret_cast<CURL*>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  uint32_t v1 = Local<Integer>::Cast(args[1])->Value();
  String::Utf8Value v2(isolate, args[2]);
  int32_t rc = curl_easy_setopt(v0, (CURLoption)v1, *v2);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t easy_setoptFast(void* p, void* p0, uint32_t p1, struct FastOneByteString* const p2) {
  CURL* v0 = reinterpret_cast<CURL*>(p0);
  uint32_t v1 = p1;
  struct FastOneByteString* const v2 = p2;
  return curl_easy_setopt(v0, (CURLoption)v1, v2->data);
}
void easy_setopt_2Slow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  CURL* v0 = reinterpret_cast<CURL*>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  uint32_t v1 = Local<Integer>::Cast(args[1])->Value();
  uint32_t v2 = Local<Integer>::Cast(args[2])->Value();
  int32_t rc = curl_easy_setopt(v0, (CURLoption)v1, v2);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t easy_setopt_2Fast(void* p, void* p0, uint32_t p1, uint32_t p2) {
  CURL* v0 = reinterpret_cast<CURL*>(p0);
  uint32_t v1 = p1;
  uint32_t v2 = p2;
  return curl_easy_setopt(v0, (CURLoption)v1, v2);
}
void easy_setopt_3Slow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  CURL* v0 = reinterpret_cast<CURL*>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  uint32_t v1 = Local<Integer>::Cast(args[1])->Value();
  uint64_t v2 = Local<Integer>::Cast(args[2])->Value();
  int32_t rc = curl_easy_setopt(v0, (CURLoption)v1, v2);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t easy_setopt_3Fast(void* p, void* p0, uint32_t p1, uint64_t p2) {
  CURL* v0 = reinterpret_cast<CURL*>(p0);
  uint32_t v1 = p1;
  uint64_t v2 = p2;
  return curl_easy_setopt(v0, (CURLoption)v1, v2);
}
void easy_performSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  CURL* v0 = reinterpret_cast<CURL*>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  int32_t rc = curl_easy_perform(v0);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t easy_performFast(void* p, void* p0) {
  CURL* v0 = reinterpret_cast<CURL*>(p0);
  return curl_easy_perform(v0);
}
void easy_cleanupSlow(const FunctionCallbackInfo<Value> &args) {
  CURL* v0 = reinterpret_cast<CURL*>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  curl_easy_cleanup(v0);
}

void easy_cleanupFast(void* p, void* p0) {
  CURL* v0 = reinterpret_cast<CURL*>(p0);
  curl_easy_cleanup(v0);
}
void global_cleanupSlow(const FunctionCallbackInfo<Value> &args) {

  curl_global_cleanup();
}

void global_cleanupFast(void* p) {

  curl_global_cleanup();
}
void easy_getinfoSlow(const FunctionCallbackInfo<Value> &args) {
  Isolate *isolate = args.GetIsolate();
  CURL* v0 = reinterpret_cast<CURL*>((uint64_t)Local<Integer>::Cast(args[0])->Value());
  uint32_t v1 = Local<Integer>::Cast(args[1])->Value();
  Local<Uint32Array> u322 = args[2].As<Uint32Array>();
  uint8_t* ptr2 = (uint8_t*)u322->Buffer()->Data() + u322->ByteOffset();
  void* v2 = reinterpret_cast<void*>(ptr2);
  int32_t rc = curl_easy_getinfo(v0, (CURLINFO)v1, v2);
  args.GetReturnValue().Set(Number::New(isolate, rc));
}

int32_t easy_getinfoFast(void* p, void* p0, uint32_t p1, struct FastApiTypedArray* const p2) {
  CURL* v0 = reinterpret_cast<CURL*>(p0);
  uint32_t v1 = p1;
  void* v2 = reinterpret_cast<void*>(p2->data);
  return curl_easy_getinfo(v0, (CURLINFO)v1, v2);
}

void Init(Isolate* isolate, Local<ObjectTemplate> target) {
  Local<ObjectTemplate> module = ObjectTemplate::New(isolate);
  SET_FAST_METHOD(isolate, module, "fopen", &pFfopen, fopenSlow);
  SET_FAST_METHOD(isolate, module, "fclose", &pFfclose, fcloseSlow);
  SET_FAST_METHOD(isolate, module, "global_init", &pFglobal_init, global_initSlow);
  SET_FAST_METHOD(isolate, module, "easy_init", &pFeasy_init, easy_initSlow);
  SET_FAST_METHOD(isolate, module, "easy_setopt", &pFeasy_setopt, easy_setoptSlow);
  SET_FAST_METHOD(isolate, module, "easy_setopt_2", &pFeasy_setopt_2, easy_setopt_2Slow);
  SET_FAST_METHOD(isolate, module, "easy_setopt_3", &pFeasy_setopt_3, easy_setopt_3Slow);
  SET_FAST_METHOD(isolate, module, "easy_perform", &pFeasy_perform, easy_performSlow);
  SET_FAST_METHOD(isolate, module, "easy_cleanup", &pFeasy_cleanup, easy_cleanupSlow);
  SET_FAST_METHOD(isolate, module, "global_cleanup", &pFglobal_cleanup, global_cleanupSlow);
  SET_FAST_METHOD(isolate, module, "easy_getinfo", &pFeasy_getinfo, easy_getinfoSlow);

  SET_VALUE(isolate, module, "CURLINFO_OFF_T", Integer::New(isolate, (int32_t)CURLINFO_OFF_T));
  SET_VALUE(isolate, module, "CURL_GLOBAL_DEFAULT", Integer::New(isolate, (int32_t)CURL_GLOBAL_DEFAULT));
  SET_VALUE(isolate, module, "CURLOPT_URL", Integer::New(isolate, (int32_t)CURLOPT_URL));
  SET_VALUE(isolate, module, "CURLOPT_BUFFERSIZE", Integer::New(isolate, (int32_t)CURLOPT_BUFFERSIZE));
  SET_VALUE(isolate, module, "CURLOPT_HTTP_VERSION", Integer::New(isolate, (int32_t)CURLOPT_HTTP_VERSION));
  SET_VALUE(isolate, module, "CURL_HTTP_VERSION_1_1", Integer::New(isolate, (int32_t)CURL_HTTP_VERSION_1_1));
  SET_VALUE(isolate, module, "CURLOPT_FOLLOWLOCATION", Integer::New(isolate, (int32_t)CURLOPT_FOLLOWLOCATION));
  SET_VALUE(isolate, module, "CURLINFO_SIZE_DOWNLOAD_T", Integer::New(isolate, (int32_t)CURLINFO_SIZE_DOWNLOAD_T));
  SET_VALUE(isolate, module, "CURLOPT_WRITEFUNCTION", Integer::New(isolate, (int32_t)CURLOPT_WRITEFUNCTION));
  SET_VALUE(isolate, module, "CURLOPT_WRITEDATA", Integer::New(isolate, (int32_t)CURLOPT_WRITEDATA));
  SET_VALUE(isolate, module, "CURLINFO_RESPONSE_CODE", Integer::New(isolate, (int32_t)CURLINFO_RESPONSE_CODE));
  SET_VALUE(isolate, module, "CURLOPT_FAILONERROR", Integer::New(isolate, (int32_t)CURLOPT_FAILONERROR));


  SET_MODULE(isolate, target, "curl", module);
}
} // namespace curl
} // namespace lo

extern "C" {
  void* _register_curl() {
    return (void*)lo::curl::Init;
  }
}
