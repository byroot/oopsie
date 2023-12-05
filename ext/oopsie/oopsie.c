#include "ruby.h"

VALUE rb_mOopsie;

static VALUE oopsie_crash(VALUE self, VALUE obj) {
  VALUE str;
  if (RB_TYPE_P(obj, T_STRING)) {
    str = obj;
  } else {
    str = rb_inspect(obj);
  }

  rb_bug("[Oopsie] %s", RSTRING_PTR(str));

  return Qnil;
}

RUBY_FUNC_EXPORTED void
Init_oopsie(void)
{
  rb_global_variable(&rb_mOopsie);
  rb_mOopsie = rb_define_module("Oopsie");
  rb_define_singleton_method(rb_mOopsie, "crash", oopsie_crash, 1);
}
