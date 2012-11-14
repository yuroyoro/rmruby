#include <mruby.h>
#include <mruby/compile.h>

void eval(char* prog)
{
    mrb_state *mrb;
    mrb_value return_value;

    /* new interpreter instance */
    mrb = mrb_open();
    /* evaluate given code */
    return_value = mrb_load_string(mrb, prog);
    /* puts result */
    mrb_p(mrb, return_value);

    mrb_close(mrb);
}
