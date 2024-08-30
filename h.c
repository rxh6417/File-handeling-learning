#include <stdio.h>
#include <stdlib.h> //for exit function
#include <string.h>


int main(){
char Ifile[20] = {}; // where our given file name will be stored
char ofile[20] = {};// where our given file name will be stored
int a = 0;
int b = 0;
int c = 0;

printf("Give a file name here:  ");
scanf("%s",Ifile);  

printf("Give a output file name: ");
scanf("%s",ofile);

FILE *file1;
file1 = NULL; // initializing to NULL means it is not indicating any file yet

file1 = fopen(Ifile,"r"); // indicating that "file1" pointer points the file stored in "Ifile"
    if(file1 == NULL){
        printf("Could't open the file");
        exit(0);
    }
fscanf(file1,"%d",&a); // reads the integers from file1 and stores in a
fscanf(file1,"%d",&b); // reads the integers from file1 and stores in b
fscanf(file1,"%d",&c);// same thing as above

fclose(file1); // closing file1. file1 closed = file stored in "file1" will  close too

FILE *OFH;
OFH = NULL; // intialize or set to NULL means it doesn indicate any real file yet.

OFH = fopen(ofile,"a"); // indicating pointer OFH to point the real file stored in "Ofile"
    if(OFH == NULL){
        printf("couldn't open the file");
        exit(0);
    }

fprintf(OFH,"\nsum = %d + %d + %d = %d",a,b,c,a+b+c);
fclose(OFH);


return 0;
}
