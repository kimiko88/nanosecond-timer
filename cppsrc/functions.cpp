#include "functions.h"
#include "nanotimer.h"

NanoTimer nanoTimer;
NanoTimer::nanosec s, e;

int functions::start()
{
    s = NanoTimer::clock_::now();
    return 0;
}

int functions::end()
{
    e = NanoTimer::clock_::now();
    return 0;
}

uint64_t functions::diff()
{
    return NanoTimer::elapsed(e, s);
}

Napi::Number functions::StartWrapped(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Number returnValue = Napi::Number::New(env, functions::start());
    return returnValue;
}

Napi::Number functions::EndWrapped(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Number returnValue = Napi::Number::New(env, functions::end());
    return returnValue;
}

Napi::Number functions::DiffWrapped(const Napi::CallbackInfo &info)
{
    Napi::Env env = info.Env();
    Napi::Number returnValue = Napi::Number::New(env, functions::diff());
    return returnValue;
}

Napi::Object functions::Init(Napi::Env env, Napi::Object exports)
{
    exports.Set("start", Napi::Function::New(env, functions::StartWrapped));
    exports.Set("end", Napi::Function::New(env, functions::EndWrapped));
    exports.Set("diff", Napi::Function::New(env, functions::DiffWrapped));
    return exports;
}