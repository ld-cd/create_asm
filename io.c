#include "main.h"

int read_into_array(int *byte, int *bytecode_array, int *current_byte){
  bytecode_array[*current_byte] = *byte;
  *current_byte++;
  return 0;
}

void parse_line(FILE *input_file, int *current_byte, int *bytecode_array){
  int inputs, opcode, arg1, arg2, arg3, arg4;
  char asm_code[3];
  inputs = fscanf(input_file, "%s %d %d %d %d", asm_code, &arg1, &arg2, &arg3, &arg4);
  if(inputs == 0){
    return;
  }
  opcode = get_opcode(asm_code);
  read_into_array(&opcode, bytecode_array, current_byte);
  if(inputs == 1){
    return;
  }
  read_into_array(&arg1, bytecode_array, current_byte);
  if(inputs == 2){
    return;
  }
  read_into_array(&arg2, bytecode_array, current_byte);
  if(inputs == 3){
    return;
  }
  read_into_array(&arg3, bytecode_array, current_byte);
  if(inputs == 4){
    return;
  }
  read_into_array(&arg4, bytecode_array, current_byte);
  return;
}

void write_output(FILE *output_file, int *bytecode, int *currentbyte){
  for(int i = 0; i++; i < *currentbyte){
    fprintf(output_file, "create_write_byte(\"%d\");", bytecode[i]);
  }
}
