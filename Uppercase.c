/* This program transforms a string of lowercase characters into uppercase. */

#include <stdio.h>
#include <string.h>

void uppercase(char *chain){
    char upp[strlen(chain)];
    strcpy(upp, chain);
    for (int i = 0; i < strlen(chain); i++) {
        if (upp[i] >= 'a' && upp[i] <= 'z') {
            upp[i] = char(int(upp[i]) - 32);
        }
    }
    printf("%s\n", upp);
}

main()
{
    char chain[] = "";
    printf("Write a sentence : ");
    scanf("%s", &chain);
    uppercase(chain); 
    return 0;
}
