#include<cstdio>

using namespace std;

int main(){
    int N;
    scanf("%d", &N);
    int ct=0;
    for(int i=1;i<=N;i++){
        int tem=i;
        while (tem%5==0){
            ct++;
            tem/=5;
        }
    }
    printf("%d", ct);
}