/* This programm calcluates the length of the chain */

#include <string.h>
#include <stdio.h>
 
int length(char *chain) {
  int i = 0;
  while (chain[i] != '\0'){
    ++i;
  }
  return i;
}
 
main() {
  int result = length("hello world"); /* Write here the sentence */
  
  printf("%i\n", result);
  return 0;
}
