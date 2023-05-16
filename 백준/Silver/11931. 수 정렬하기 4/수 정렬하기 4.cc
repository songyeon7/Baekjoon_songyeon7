#include <iostream>
#include <algorithm>
using namespace std;

int main(){
int N;
cin >> N;
int A[N];
for (int i=0; i<N; i++){
    cin >> A[i];
}

    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    sort(A, A+N);

    for (int i=N-1; i>=0; i--){
        cout << A[i] << '\n';
    }
}