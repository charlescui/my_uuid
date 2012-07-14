require 'mkmf'

# if have_library("uuid") and have_header("uuid/uuid.h")
if have_header("uuid/uuid.h")
  create_makefile("my_uuid/my_uuid")
end