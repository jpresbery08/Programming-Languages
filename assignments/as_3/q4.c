#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



/*------------------------------------------------------------ Question #4 -------------------------------------------------------- */

/*
Write a simple program that allocates memory using malloc() but
forgets to free it before exiting. What happens when this program
runs? Can you use gdb to find any problems with it? How about
valgrind (again with the --leak-check=yes flag)?
 */


int main()
{

  // Allocatiing memory using malloc() call

  int *x = (int *) malloc(sizeof(int));
  printf("%d\n", sizeof(x));



  return 0;
}
