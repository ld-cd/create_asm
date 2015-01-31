#include "main.h"
#include <string.h>

int get_opcode(char asm_instruction[3]){
  if(!strcmp(asm_instruction, "srt")){ //start
    return 128;
  }
  if(!strcmp(asm_instruction, "bud")){ //baud
    return 129;
  }
  if(!strcmp(asm_instruction, "saf")){ //safe
    return 131;
  }
  if(!strcmp(asm_instruction, "fll")){ //full
    return 132;
  }
  if(!strcmp(asm_instruction, "drv")){ //drive
    return 137;
  }
  if(!strcmp(asm_instruction, "drd")){ //drive direct
    return 145;
  }
  if(!strcmp(asm_instruction, "led")){ //leds
    return 139;
  }
  if(!strcmp(asm_instruction, "dos")){ //digital output
    return 147;
  }
  if(!strcmp(asm_instruction, "lsd")){ //low side driver
    return 138;
  }
  if(!strcmp(asm_instruction, "pwm")){ //pwm low side driver
    return 144;
  }
  if(!strcmp(asm_instruction, "sir")){ //send ir
    return 151;
  }
  if(!strcmp(asm_instruction, "sng")){ //song
    return 140;
  }
  if(!strcmp(asm_instruction, "psg")){ //play song
    return 141;
  }
  if(!strcmp(asm_instruction, "qls")){ //query list
    return 149;
  }
  if(!strcmp(asm_instruction, "sns")){ //sensors
    return 142;
  }
  if(!strcmp(asm_instruction, "stm")){ //stream
    return 148;
  }
  if(!strcmp(asm_instruction, "prs")){ //pause/resume stream
    return 150;
  }
  if(!strcmp(asm_instruction, "spt")){ //script
    return 152;
  }
  if(!strcmp(asm_instruction, "psc")){ //play script
    return 153;
  }
  if(!strcmp(asm_instruction, "ssc")){ //show script
    return 154;
  }
  if(!strcmp(asm_instruction, "wat")){ //wait time
    return 155;
  }
  if(!strcmp(asm_instruction, "wad")){ //wait distance
    return 156;
  }
  if(!strcmp(asm_instruction, "waa")){ //wait angle
    return 157;
  }
  if(!strcmp(asm_instruction, "wae")){ //wait event
    return 158;
  }
  else{
    return 0;
  }
}
