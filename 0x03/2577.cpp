#include<iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;


int main(void) {

	int a[3];
	for (int i = 0; i < 3; i++) cin >> a[i];
	int hap[10];
	fill(hap, hap + 10, 0);

	string sum = to_string(a[0] * a[1] * a[2]);
	for (int i = 0; i < sum.length(); i++) hap[sum[i]-'0']++;
	
	for (int i = 0; i < 10; i++) cout << hap[i] << '\n';
	

	return 0;
}
