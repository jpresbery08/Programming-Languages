#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void stdDevSummer()

{

  // Read the numbers in inputGenerator in this function and find formula
}


int main()
{

  // This file variable enables the communication between both the program and file
  FILE *fptr;

/*---------------------------------------- Opening Files Area ---------------------------------------------------*/

  // Opening avg.txt File to have results from program to be written to file
  if((fptr = fopen("9/avg/avg.txt", "w")) == NULL)
     {
         fprintf(stdout, "Can't Open file\n");
         exit(1);
     }
/*---------------------------------------- Opening Files Area ---------------------------------------------------*/


// In this your are gonna wanna fork the avg file in here and this will allow you  to then
// Set it to a variable
// then


/*---------------------------------------- Closing Files Area ---------------------------------------------------*/
     // Closing of avg.txt file
       if(fclose(ftpr) != 0)
     {
         fprintf(stderr,"Error closing file\n");
     }

  return 0;
}
