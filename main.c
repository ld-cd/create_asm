#include "main.h"
int main(int argc, char *argv[]){
  FILE *inputfile, *outputfile;
  int current_byte = 0;
  int bytecode_array[99];
  int *bytecode = &bytecode_array;
  int *current = &current_byte;
  if(argc != 3){
    printf("Usage: %s inputfile.asm outputfile.c\n", argv[0]);
    return 1;
  }
  inputfile = fopen(argv[1], "r");
  if(inputfile == NULL){
    printf("Failed to open %s.\n", argv[1]);
    return 2;
  }
  outputfile = fopen(argv[2], "w+");
  if(outputfile == NULL){
    printf("Failed to open %s.\n", argv[2]);
    return 3;
  }
  while(!feof(inputfile)){
    if(current_byte < 100){
      parse_line(inputfile, current, bytecode);
    }
  }
  write_output(outputfile, bytecode, current);
  return 0;
}
