#include <napi.h>
#include "functions.h"

Napi::Object InitAll(Napi::Env env, Napi::Object exports) {
  return functions::Init(env, exports);
}

NODE_API_MODULE(NODE_GYP_MODULE_NAME, InitAll)