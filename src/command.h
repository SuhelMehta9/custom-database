#ifndef COMMAND_H
#define COMMAND_H

#include "input.h"
#include "statement.h"

typedef enum {
  META_COMMAND_SUCCESS,
  META_COMMAND_UNRECOGNIZED_COMMAND
} MetaCommandResult;

MetaCommandResult do_meta_command(InputBuffer *input_buffer, Table *table);

#endif
