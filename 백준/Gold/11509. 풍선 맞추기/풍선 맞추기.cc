#include <iostream>
using namespace std;
int arr[1000001];
int main() {
    int n, x, cnt = 0;
    cin >> n;
    while(n--) {
        cin >> x;
        arr[x]++;
        arr[x + 1] == 0 ? cnt++ : arr[x + 1]--;
    }
    cout << cnt;
}
