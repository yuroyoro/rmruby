require 'mkmf'

dir_config('mruby')

if have_header('mruby.h') and have_library('mruby')
  create_makefile('rmruby')
end
