//2-  GCD(Euclid’s algorithm using only subtractions - consective integer checking algorithm.)

//GCD Euclid’s algorithm using only subtractions
#include <iostream> 
using namespace std;

int main() {
	int x, y;
	cout << "Enter two numbers: " << endl;
	cin >> x >> y;

	int t;

	while (x != y) {
		if (x < y) {
			t = x;
			x = y;
			y = t;
		}

		x = x - y;
	}
	cout << x << endl;
	return 0;

}