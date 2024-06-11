#include<iostream>
#include <string>
#include <stack>
#include <algorithm>

using namespace std;

int main(void) {
	
	int N, K, yas, grade, room = 0;
	cin >> N >> K;
	int people[12] = { 0, };
	for (int i = 0; i < N; i++)
	{
		cin >> yas >> grade;
		if (yas == 1) people[grade-1]++;
		else people[6+grade-1]++;
	}

	for (int i = 0; i < 12; i++)
	{
		if (people[i] == 0) continue;
		room += (people[i] / K);
		if (people[i] % K != 0) room++;
	}

	cout << room;

	

	return 0;
}




