#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main()
{

  // Intalization of vairables
  double sum = 0, mean = 0, tmp = 0;
  int i = 0;
  // char ch;
  // ch = fgetch(srcFile);

  // This file variable enables the communication between both the program and file
  FILE *srcFile;
  FILE *desFile;


    // Opening inputNumbers.txt File to be read
    if((srcFile = fopen("inputs/inputNumbers.txt", "r")) == NULL)
       {
           fprintf(stdout, "Can't Open file\n");
           exit(1);
       }

     // Opening avg.txt File to have results from program to be written to file
     if((desFile = fopen("9/avg/avg.txt", "w")) == NULL)
        {
            fprintf(stdout, "Can't Open file\n");
            exit(1);
        }
/*--------------------------------------------------------------------------------------------------*/

     while(!feof(srcFile))
   {
       if (fscanf(srcFile, "%lf", &tmp) != 1) {
           // No numbers
           break;
       }
       sum += tmp;    // adds the numbers from inputNumbers file together
       ++ i;          // The i adds up each number in the inputNumbers file which is 10
   }
   // This gets the mean from the numbers added up
   mean = sum / i;

/*--------------------------------------------------------------------------------------------------*/

  // Closing of file inputGenerator.txt File
    if(fclose(srcFile) != 0)
  {
      fprintf(stderr,"Error closing file\n");
  }

  // This writes the mean to the avg.txt file
  fprintf(desFile, "%f", mean);

  // Closing of avg.txt file
    if(fclose(desFile) != 0)
  {
      fprintf(stderr,"Error closing file\n");
  }


  return 0;
}
