#include <stdio.h>
int main(){
    int n;
    int arr[] = {25,63, 45, 55, 76, 45, 87};
    printf(" element you want to search");
    scanf("%d", &n);
    for (int i = 0; i < 7; i++) {
        if (arr [i]== n){
            printf("element found at index %d",i);
            break;
        }
    }
}


