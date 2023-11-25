#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



/*------------------------------------------------------------ Question #1 -------------------------------------------------------- */

/*
First, write a simple program called null.c that creates a pointer
to an integer, sets it to NULL, and then tries to dereference it. Compile this into an executable called null. What happens when you
run this program?
 */


int main()
{

  // Creating a pointer to an integer and setting it to NULL

  int *x = NULL;
  int y = *x;


  return 0;
}
