#include <stdio.h>
int main(){
  int a;
  scanf("%d", &a);
  if(a ==0){
    printf("1");
  }
  else{
    int result = 1;
    for(int i =a; i>0; i--){
      result *= i;
    }
    printf("%d", result);
  }
  return 0;
}