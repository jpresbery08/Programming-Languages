#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



/*------------------------------------------------------------ Question #6 -------------------------------------------------------- */

/*
Write a program that creates an array of integers called data of size
100 using malloc; then, set data[100] to zero. What happens
when you run this program? What happens when you run this
program using valgrind? Is the program correct?
 */


int main()
{

  // Allocatiing memory using malloc() call

  int *x = (int *) malloc(100 *sizeof(int));
  x[100] = 0;



  return 0;
}
