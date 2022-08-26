# include <stdio.h>
# include <stdlib.h>


/*********************************/
/* This code is for running raw  */
/* shellcode and displaying the  */
/* assembly instructions that    */
/* result from said code         */
/*********************************/
int main(int argc, char *argv[]){
    // Buffer to hold shellcode 
    unsigned char buffer[100];

    // Read in shellcode from stdin
    printf("Reading in 100 bytes\n");
    read(0, buffer, 100);

    int(*foo)() = (int(*)())buffer;
    foo();

}