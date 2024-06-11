#include<iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

int main(void) {
	
	int M, N;
	char asd;
	string str;
	list<char> li;
	cin >> str >> M;
	for (int i = 0; i < str.length(); i++) li.push_back(str[i]);
	list<char>::iterator iter = li.end();
	list<char>::iterator iter1 = iter;
	
	
	while (M--) {
		cin >> asd;
		iter1 = iter;
		if (asd == 'P') {
			cin >> asd;
			li.insert(iter, asd);
		}
		else if (asd == 'L') {
			if(iter != li.begin()) iter--;
		}
		else if (asd == 'D') {
			if (iter != li.end()) iter++;
		}
		else if (asd == 'B') {
			if (iter != li.begin()) {
				iter--;
				iter = li.erase(iter);
			}
		}
	}

	for (iter = li.begin(); iter != li.end(); iter++) {
		cout << *iter;
	}

	return 0;

}


