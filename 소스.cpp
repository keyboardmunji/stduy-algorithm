#include <bits/stdc++.h>
using namespace std;

int func3 (int num)
{
	for (int i = 2; num >= i * i; i++)
		if (num == i * i)
			return 1;
	return 0;
}
int main(void)
{
	int num;
	cin >> num;
	cout << func3(num);
	return 0;
}