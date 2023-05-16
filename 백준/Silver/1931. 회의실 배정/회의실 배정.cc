#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int N;
    vector<pair<int, int>> v;
    scanf("%d", &N);
    for(int i=0;i<N;i++){
        int a, b;
        scanf("%d %d", &a, &b);
        v.push_back({b, a});
    }
    sort(v.begin(), v.end());
    int now=0;
    int ans=0;
    for(int i=0;i<N;i++){
        if(now>v[i].second)
            continue;
        now=v[i].first;
        ans++;
    }
    printf("%d", ans);
}