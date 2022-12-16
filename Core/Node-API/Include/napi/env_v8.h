#pragma once

#include "env.h"

namespace Napi::V8
{
  Napi::Env Attach(v8::Local<v8::Context>);

  void Detach(Napi::Env);

  v8::Local<v8::Context> GetContext(Napi::Env);
}
