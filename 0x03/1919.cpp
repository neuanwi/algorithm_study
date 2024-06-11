#include<iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	string a, b;
	int count = 0, people[26] = { 0, };
	cin >> a >> b;
	for (int i = 0; i < a.length(); i++) people[a[i] - 'a']++;
	for (int i = 0; i < b.length(); i++) people[b[i] - 'a']--;
	for (int i = 0; i < 26; i++) if (people[i] != 0) count += people[i] > 0 ? people[i] : -1 * people[i];
	
	cout << count;

	return 0;
}