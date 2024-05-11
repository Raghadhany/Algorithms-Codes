
//GCD noraml Euclid's
//Euclid's Algorithm


#include <iostream>
using namespace std;
int main() {
	int x, y;
	cout << "Enter two numbers: " << endl;
	cin >> x >> y;
	int t;
	while (y > 0) {
		t = x % y;
		x = y;
		y = t;
	}
	cout << x << endl;
	return 0;
}

//Other codes for GCD
#include<iostream>
using namespace std;
int gcd(int m, int n)
{
	if (n == 0)
		return m;
	return gcd(n, m % n);
}
