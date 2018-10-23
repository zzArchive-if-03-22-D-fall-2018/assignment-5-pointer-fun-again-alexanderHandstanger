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

struct PlayStruct{
int int_value;
double double_value;
char a_string[64];
};

void print_struct(struct PlayStruct ps, struct PlayStruct *pps)
{
  printf("Values of the struct ps:%d %lf %s\n", ps.int_value, ps.double_value, ps.a_string);
  printf("Values of the struct pps:%d %lf %s\n", pps->int_value, pps->double_value, pps->a_string);
}

void change_struct(struct PlayStruct ps, struct PlayStruct *pps)
{
  ps.int_value = 14;
  ps.double_value = 8.8;
  pps->int_value = 16;
  pps->double_value = 18.8;

}

void print_string(char string_to_print[])
{
  printf("%s\n",string_to_print);
}

void change_string(char string1[], char *p_string[])
{
  string1[9] = "newString";
  p_string[9] = "newString";
  //The string1 didn't change, because i only copy the variable from the
  //main in this function, but in p_string i change it, because I take the
  //adress from the variable
}


int main(int argc, char const *argv[]) {
struct PlayStruct play_struct ={4,4.5, "alexander"};
struct PlayStruct *play_struct_pointer = &play_struct;
char another_string[16] = "handstanger";
char *another_string_p = another_string;
//For the struct we asiign the values due the line 52, but we also can do it
//variable for variable. The reason why I took the example like in line 52 is
//simply for the efficient

//The reason in line 53 is simple, because I don't know any other more efficient
//way to assigne a pointers

//In line 54 I took this, because it's a simple and edicient way to solve this.

//For the line 55 i already explained it(second comment).


//I only know one other way to do it. x = change_struct()

print_struct(play_struct, play_struct_pointer);
change_struct(play_struct, play_struct_pointer);
print_struct(play_struct, play_struct_pointer);
print_string(play_struct.a_string);
change_string(play_struct.a_string,&another_string_p);
print_string(play_struct.a_string);
print_string(another_string_p);

  return 0;
}
