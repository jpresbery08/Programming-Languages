#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



/*------------------------------------------------------------ Question #5 -------------------------------------------------------- */

/*
Write a program that creates an array of integers called data of size
100 using malloc; then, set data[100] to zero. What happens
when you run this program? What happens when you run this
program using valgrind? Is the program correct?
 */


int main()
{

  // Allocatiing memory using malloc() call in to Array 

  int *data = (int *) malloc(100 *sizeof(int));
  printf("%d\n", sizeof(data));



  return 0;
}
