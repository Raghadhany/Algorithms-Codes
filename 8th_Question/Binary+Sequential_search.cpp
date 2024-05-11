//8 - binary search or sequential search(iterative or recursive) about character in string

#include<iostream>
using namespace std;

// Iterative linear search in a string
int linearS(string str, char k)
{
	for (int i = 0; i <= str.length(); i++)
		if (str[i] == k)
			return i;
	return -1;
}

// Recursive linear search in a string (forward direction)
int linearSR(string str, char k, int i = 0)
{
	if (i > str.length())
		return -1;
	if (str[i] == k)
		return i;
	return linearSR(str, k, i + 1);

}

// Recursive linear search in a string (backward direction)
int linearSR2(string str, char k, int s)
{
	if (s < 0)
		return -1;
	if (str[s] == k)
		return s;
	return linearSR(str, k, s - 1);
}

// Iterative binary search in a string
int binS(string str, char k)
{
	int left = 0;
	int right = str.length() - 1;

	while (left <= right)
	{
		int m = (left + right) / 2;
		if (str[m] == k)
			return m;
		else if (str[m] > k)
			right = m - 1;
		else
			left = m + 1;
	}
	return -1;
}

// Recursive binary search in a string
int binSR(string str, char k, int left, int right)
{
	if (left <= right )
	{
		int m = (left + right) / 2;
		if (str[m] == k)
			return m;
		else if (str[m] > k)
			return binSR(str, k, left, m - 1);
		else
			return binSR(str, k, m + 1, right);
	}
	return -1;
}
int main()
{
	string str = "Hello, World!";
	char k = 'o';
	int position1 = linearS(str, k);
	int position2 = linearSR(str, k);
	int position3 = linearSR2(str, k, str.length() - 1);

	cout << "Iterative search position: " << position1 << endl;
	cout << "Recursive search (forward) position: " << position2 << endl;
	cout << "Recursive search (backward) position: " << position3 << endl;
	
	int position4 = binS(str, k);
	int position5 = binSR(str, k, 0, str.length() - 1);

	cout << "Iterative binary search position: " << position1 << endl;
	cout << "Recursive binary search position: " << position2 << endl;

	return 0;
}