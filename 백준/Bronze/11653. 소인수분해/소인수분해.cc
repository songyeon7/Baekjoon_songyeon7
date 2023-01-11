#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
   int N;
   scanf("%d", &N);
   int n=2;
   while (N!=1){
        if(!(N%n)){
            printf("%d\n", n);
            N/=n;
        }
        else
            n++;
   }
   
}