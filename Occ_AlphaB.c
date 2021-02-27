/* This program reads a string of characters from the keyboard and counts the occurrences of the letters.
of the alphabet (without distinguishing between upper and lower case letters). The processing will be carried out by a
occurrence(). The result will be an integer array of 26 cells dynamically reserved in the
function (using the malloc() function).
The return value of the function will consist of the address of the first cell of this table (value
returned by malloc()). */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *occurence(char *chain){
    int *occ;
    occ=(int *)malloc(26 *sizeof(int));

    for(int i = 0; i < 26; i++){
        occ[i] = 0;
    }

    for(int i = 0; chain[i] != '\0'; i++){
        if(chain[i] >= 'A' && chain[i] <= 'Z'){
            occ[chain[i] - 'A']++;
        }
        if(chain[i] >= 'a' && chain[i] <= 'z'){
            occ[chain[i] - 'a']++;
        }
    }
    return occ;
}

main()
{
    int *occ = NULL;
    char chain[100];
    printf("Write a sentence (max. 100 characters) : ");
    gets(chain);
    occ = occurence(chain);
    printf("The sentence %s contain : \n", chain);

    for(int i = 0; i < 26; i++){
        if(occ[i] != 0){
            printf("%i time the letter %c\n", occ[i], i + 'A');
        }
    }
}
