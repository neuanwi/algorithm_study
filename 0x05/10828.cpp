#include<iostream>
#include <string>
#include <stack>
using namespace std;

int main(void) {
    int N;
    cin >> N;
    stack<int> S;
    string a;
    int num;

    for (int i = 0; i < N; i++)
    {
        cin >> a;
        if (a == "empty") cout << (S.empty() ? 1 : 0) << endl;
        else if (a == "size") cout << S.size() << endl;
        else if (a == "top") {
            if (!S.empty()) cout << S.top() << endl;
            else cout << -1 << endl;
        }
        else if (a == "push") {
            cin >> num;
            S.push(num);
        }
        else {
            if (!S.empty()) {
                cout << S.top() << endl;
                S.pop();
            }
            else {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}