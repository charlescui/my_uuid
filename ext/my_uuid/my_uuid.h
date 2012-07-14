#ifndef __MY_UUID_H
#define __MY_UUID_H

#include <uuid/uuid.h>
#include <ruby.h>

/* Defined in uuid */
extern void uuid_generate(uuid_t out);

/* Defined in my_uuid.c */
static VALUE my_uuid_generate(VALUE self);

#endif