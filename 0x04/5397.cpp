#include<iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

int main(void) {
	
	int N;
	cin >> N;
	string str;

	while (N--) {
		cin >> str;
		list<char> li;
		list<char>::iterator iter = li.begin();

		for (char e : str) {
			if (e == '<') {
				if (iter != li.begin()) iter--;
			}
			else if (e == '>') {
				if (iter != li.end()) iter++;
			}
			else if (e == '-') {
				if (iter != li.begin()) {
					iter--;
					iter = li.erase(iter);
				}
			}
			else {
				li.insert(iter, e);
			}
		}

		for (iter = li.begin(); iter != li.end(); iter++)
		{
			cout << *iter;
		}
		cout << '\n';

	}


	return 0;

}


