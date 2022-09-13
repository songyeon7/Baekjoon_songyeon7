#include <stdio.h>
int main(){
	int arr[8] = {0};
  for(int i = 0; i<8;i++){
	scanf(" %d", &arr[i]);
  }
  int count1=0, count2 = 0;
	for(int i = 0; i<8; i++){
		if(arr[i] == i+1){
			count1++;
		}
		else if(arr[i] == 8-i){
			count2++;
		}
	}  
  if(count1==8){
    printf("ascending");
  }
  else if(count2 == 8){
    printf("descending");
  }
  else{
			printf("mixed");
		}
}