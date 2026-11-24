#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void whine(){ 
    printf("I hope they would let me in their team this year\n");
}
void typical(){ 
    printf("I haven't been part of a team since i was with the Four Peters\n");
}
void chant(){
    printf("5\n4\n3\n2\n1\n0\n");
    for(int i=0; i<20; i++){
    printf("he he he, he he he he he he\n");
    }
}


int main(){ 

    whine();
    typical();
    chant();
   return 0;
}