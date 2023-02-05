#include <stdio.h>
int main(){
   FILE * file;
   if (file = fopen("my.txt", "r")){
      printf("File opened successfully in read mode");
   }
   else
   printf("The file is not present! cannot create a new file using r mode");
   fclose(file);
   return 0;
}
