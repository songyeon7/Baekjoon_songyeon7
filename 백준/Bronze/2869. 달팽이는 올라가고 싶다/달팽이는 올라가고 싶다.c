#include<stdio.h>
#include<string.h>
int main(){
    int A, B, V;
    scanf("%d %d %d", &A, &B, &V);
    int date;
    date = (V-B-1)/(A-B)+1;
    printf("%d", date);
    return 0;
}