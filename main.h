#ifndef create_asm
#define create_asm
#define LEN(n)  (sizeof(n) / sizeof((n)[0]))
#include <stdio.h>
int get_opcode(char asm_instruction[3]);
void parse_line(FILE *input_file, int *current_byte, int *bytecode_array);
void write_output(FILE *output_file, int *bytecode, int *currentbyte);

#endif
