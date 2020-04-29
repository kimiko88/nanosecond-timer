#include <napi.h>

namespace functions {
    int start();
    int end();
    uint64_t diff();
    Napi::Number StartWrapped(const Napi::CallbackInfo& info);
    Napi::Number EndWrapped(const Napi::CallbackInfo& info);
    Napi::Number DiffWrapped(const Napi::CallbackInfo& info);
    Napi::Object Init(Napi::Env env, Napi::Object exports);   
}