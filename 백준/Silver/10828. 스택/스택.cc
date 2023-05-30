#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <deque>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int n;
    cin >> n;
    stack<int> stk;
    for (int i = 0; i < n; i++){
        string order;
        int x;
        cin >> order;
        if (order == "push"){
            cin >> x;
            stk.push(x);
        }
        else if (order == "pop"){
            if (stk.empty())
                cout << "-1\n";
            else{
                cout << stk.top() << '\n';
                stk.pop();
            }
        }
        else if (order == "top"){
            if (stk.empty())
                cout << "-1\n";
            else{
                cout << stk.top() << '\n';
            }
        }
        else if (order == "size"){
            cout << stk.size() << '\n';
        }
        else if (order == "empty"){
            cout << stk.empty() << '\n';
        }
    }
}