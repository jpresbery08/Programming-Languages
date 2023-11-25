#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{

  // This file variable enables the communication between both the program and file
  FILE *fptr;

  // Opening input.txt File
  if((fptr = fopen("inputs/inputNumbers.txt", "w")) == NULL)
     {
         fprintf(stdout, "Can't Open file\n");
         exit(1);
     }
  // Intalization of Random Number Generator
  srand(time(NULL));

  // Intalization of the amount of numbers I wanna output
  const int INSTANCES = 10;

  // This outputs 10 random numbers between 0 and 99
  for(int i = 0; i < INSTANCES; i++)
  {
        fprintf(fptr," %d ", rand() % 99); // fprintf outputs to text file
  }



  // Numbers that are written to the inputNumbers.txt in csci320/finalExam/inputs


  // Closing of file
  if(fclose(fptr) != 0)
{
    fprintf(stderr,"Error closing file\n");
}


  return 0;
}
