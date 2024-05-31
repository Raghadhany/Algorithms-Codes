//GCD consective integer checking algorithm
//Way one
#include <iostream>
using namespace std;

int main() {
	int m = 8, n = 12;
	int t = min(m, n);
	while (t > 0)
	{
		if (m % t == 0 && n % t == 0)
		{
			cout << t << "  ";
			break;
		}
		t--;
	}
	return 0;
}