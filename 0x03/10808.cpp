#include<iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;


int main(void) {

	int a[26];
	fill(a, a + 26, 0);

	string S;
	cin >> S;

	for (int i = 0; i < S.length(); i++) a[S[i] - 97]++;


	for (int i = 0; i < 26; i++) cout << a[i] << ' ';

	return 0;
}
