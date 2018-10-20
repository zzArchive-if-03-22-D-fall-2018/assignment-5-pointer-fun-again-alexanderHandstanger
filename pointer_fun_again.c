/*----------------------------------------------------------
 *				HTBLA-Leonding / 2DHIF
 * ---------------------------------------------------------
 * Exercise Number: 5
 * Title:			PonterFunAgain
 * Author:			Alexander Handstanger
 * ----------------------------------------------------------
 * Description:
 * This assignment lets you practise the usage of structs,
 * arrays and pointers to structs.
 * ----------------------------------------------------------
 */

#include <stdio.h>
#include <float.h>
#include <string.h>

void print_struct(struct ps, struct pps*);

int main(int argc, char const *argv[]) {
  struct PlayStruct {
    int int_value;
    double double_value;
    char a_string[64];
  };
  struct PlayStruct play_struct = {10, 56.7, alexander};
  struct PlayStruct* play_struct_pointer = &play_struct;
  print_struct(play_struct, play_struct_pointer);
  return 0;
}

void print_struct(struct ps, struct pps*){
  printf("Values of struct ps:%d, %lf, %s\n", int_value, double_value, a_string);
}
