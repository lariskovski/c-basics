#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr; // Needs to be declared to open files

   fptr = fopen("./text","a"); // w a r

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   fprintf(fptr,"%d\n", 55555);
   fclose(fptr);

   return 0;
}