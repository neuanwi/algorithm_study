#include<iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int N;
	cin >> N;

	string a, b;
	
	while (N--) {
		int people[26] = { 0, };
		cin >> a >> b;
		for (int i = 0; i < a.length(); i++) people[a[i]-'a']++;
		for (int i = 0; i < b.length(); i++) people[b[i]-'a']--;
		for (int i = 0; i < 26; i++)
		{
			if(people[i] != 0) {
				cout << "Impossible" << '\n';
				break;
			}
			if (people[i] == 0 && i == 25) cout << "Possible" << '\n';
		}
	}

	

	return 0;
}




