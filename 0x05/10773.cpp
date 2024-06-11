#include<iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

int main(void) {
	stack<int> st;
	int k, a, sum = 0;
	cin >> k;
	while (k--) {
		cin >> a;
		if (a != 0) st.push(a);
		else st.pop();
	}
	while (!st.empty()) {
		sum += st.top();
		st.pop();
	}
	cout << sum;

}

