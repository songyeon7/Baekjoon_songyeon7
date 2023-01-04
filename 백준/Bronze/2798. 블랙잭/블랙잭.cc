#include<stdio.h>
int main(){
    int N, M;
    int arr[105];
    int ans=0;
    scanf("%d %d", &N, &M);
    for(int i = 0; i <N; i++)
        scanf("%d", &arr[i]);
    for(int i=0; i<N;i++)
        for(int j=i+1; j<N;j++)
            for(int k=j+1; k<N;k++)
                if(arr[i]+arr[j]+arr[k]<=M)
                    ans = (ans<arr[i]+arr[j]+arr[k])?arr[i]+arr[j]+arr[k]:ans;
    printf("%d", ans);
    return 0;
}