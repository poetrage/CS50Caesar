#include <stdio.h>
//libraries to include
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

//get a single command line argument of a non-negaitive integer, this will be used as the key to change the plaintext to ciphertext
int main(int argc, string argv[])
{
//define variables
string p_txt; 
int key;

    // if there is a single command line argument ask for plaintext input
    if (argc != 2)// check to make sure there is a command line argument
        //error message if there is no command line argument
        {
        printf("***error error will robinson***\n");
        return 1;
        }       
        printf("plaintext:");//get text to encode from the user
        p_txt=get_string (); 
        printf("ciphertext: ");//prepare to print the encoded message
    
    for (int i = 0; i< strlen(p_txt); i++)//iterate over the letters of the plaintext
    {
        key=atoi(argv[1]); //change key to a number
        
        if (p_txt[i]>='a' && p_txt[i]<='z')  //if the char of plaintext is lowercase 
        {    
            printf("%c",(((p_txt[i] + key) - 97)%26)+ 97); //use the remainder of key/26 and add the remainder to char of p_txt in position i 

        }
        else if (p_txt[i]>='A' && p_txt[i]<='Z') //if the char of plaintext is uppercase
        {
            printf("%c",(((p_txt[i] + key) - 65)%26)+ 65); //use the remainder of key/26 and add the remainder to char of p_txt in position i 
        }
        else
        {
            printf("%c",p_txt[i]); //else return the character as it was entered by the user
        }
    }
printf("\n");    
return 0;    
} 