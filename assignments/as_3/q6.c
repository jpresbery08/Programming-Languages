#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



/*------------------------------------------------------------ Question #6 -------------------------------------------------------- */

/*
Create a program that allocates an array of integers (as above), frees
them, and then tries to print the value of one of the elements of
the array. Does the program run? What happens when you use
valgrind on it?
 */


int main()
{

  // Allocatiing memory using malloc() call

  int *data = (int *) malloc(100 *sizeof(int));
  data[10] = 7;
  free(data);
  printf("%d\n", data[10]);



  return 0;
}
