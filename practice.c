#include <stdio.h>

int main(){
    if(1&2){
        printf("binary poerator performed");
    }
    if(1&&2){
        printf("logical operator performed");
    }    
    printf("%d", 3&7);
    return 0;
}