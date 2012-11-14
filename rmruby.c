#include "ruby.h"

void eval(char* prog);

VALUE
wrap_eval(self, code)
     VALUE self, code;
{
    char* prog = StringValuePtr(code);
    eval(prog);
    return Qnil;
}

void Init_rmruby()
{
  VALUE module;

  module = rb_define_module("Rmruby");
  rb_define_module_function(module, "eval", wrap_eval, 1);
}
