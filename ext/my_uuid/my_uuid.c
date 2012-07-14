#include "my_uuid.h"

static VALUE rb_cMyUUID;

Init_my_uuid()
{
	rb_cMyUUID = rb_define_class("MyUUID", rb_cObject);
	// rb_define_alloc_func(rb_cMyUUID, my_uuid_alloc);
	rb_define_module_function(rb_cMyUUID, "generate", my_uuid_generate, 0);
}

static VALUE
	my_uuid_generate(VALUE self)
{
    uuid_t uuid;
	int size = 36;
    char  *uuid_s = malloc(sizeof(char)*size);
	VALUE str;
	
    uuid_generate(uuid);
    if(uuid)
    {
            uuid_unparse_lower(uuid, uuid_s);
			str = rb_tainted_str_new(uuid_s, size);
    }
    free(uuid_s);
	
	return str;
}
