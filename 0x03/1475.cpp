#include<iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;


int main(void) {

	int N, max;
	int asd[10] = {0,};
	
	cin >> N;
	string a = to_string(N);
	for (int i = 0; i < a.length(); i++) asd[a[i] - '0']++;
	if ((asd[6] + asd[9]) % 2 == 0) asd[6] = (asd[6] + asd[9]) / 2;
	else asd[6] = (asd[6] + asd[9]) / 2 + 1;
	asd[9] = 0;

	cout << *max_element(asd, asd + 10);
	

	return 0;
}




