#include<iostream>
#include <string>
#include <queue>
using namespace std;

int main(void) {
    int N, K;
    cin >> N >> K;
    queue<int> Q;
        
    for (int i = 1; i <= N; i++) Q.push(i);

    cout << "<";
    while (true) {
        for (int i = 0; i < K-1; i++)
        {
            Q.push(Q.front());
            Q.pop();
        }
        cout << Q.front();
        Q.pop();
        if (!Q.empty()) cout << ", ";
        else break;
    }
    cout << ">";
    return 0;
}