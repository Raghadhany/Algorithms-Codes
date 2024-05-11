//Selection Sort:

//1-selection sort to sort string (iterative) :

#include <iostream>
using namespace std;

void selectionSort(string str) {
	int n = str.length();

	for (int i = 0; i < n - 1; i++) {
		char min = i;

		// Find the index of the minimum character from i+1 to end of string
		for (int j = i + 1; j < n; j++) {
			if (str[j] < str[min]) {
				min = j;
			}
		}

		// Swap the minimum character with the character at index i
		
			swap(str[i], str[min]);
		
	}
	cout << "Sorted string: " << str << endl;
}

int main() {
	string str;
	cin >> str;

	cout << "Original string: " << str << endl;

	selectionSort(str);

	return 0;
}


//2-selection sort to sort array of chars (iterative) :

#include <iostream>
using namespace std;

void selectionSort(char arr[], int n) {
	for (int i = 0; i < n - 1; ++i) {
		int min = i;

		// Find the index of the minimum character from i+1 to end of array
		for (int j = i + 1; j < n; ++j) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}

		// Swap the minimum character with the character at index i

			swap(arr[i], arr[min]);

	}
	cout << "Sorted array: ";
	for (int i = 0; i < n; ++i) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int n;
	cin >> n;
	char* arr = new char[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	//char arr[] = { 'z', 'a', 'b', 'x', 'c' };
	//int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Original array: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	selectionSort(arr, n);
	return 0;
}

//3- selection sort(recursive)  to sort string 

#include <iostream>
#include <string>
using namespace std;

// Recursive function to perform selection sort on string
void recursiveSelectionSort(string& str, int start, int n) {
	// Base case
	if (start >= n - 1)
		return;

	// Find the minimum element's index
	int min_index = start;
	for (int i = start + 1; i < n; i++) {
		if (str[i] < str[min_index])
			min_index = i;
	}

	// Swap the found minimum element with the first element
	swap(str[start], str[min_index]);

	// Recursively calling selection sort for the rest of the string
	recursiveSelectionSort(str, start + 1, n);
}

int main() {
	string str = "edcba";
	recursiveSelectionSort(str, 0, str.length());
	cout << "Sorted string: " << str << endl;
	return 0;
}

//4- selection sort(recursive)  to sort array of chars

#include <iostream>
using namespace std;

// Recursive function to perform selection sort on an array of chars
void recursiveSelectionSort(char arr[], int start, int n) {
	// Base case
	if (start >= n - 1)
		return;

	// Find the minimum element's index
	int min_index = start;
	for (int i = start + 1; i < n; i++) {
		if (arr[i] < arr[min_index])
			min_index = i;
	}

	// Swap the found minimum element with the first element
	swap(arr[start], arr[min_index]);

	// Recursively calling selection sort for the rest of the array
	recursiveSelectionSort(arr, start + 1, n);
}

int main() {
	int n;
	cin >> n;
	char* arr = new char[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	//char arr[] = { 'z', 'a', 'b', 'c', 'f', 'e' };
	//int n = sizeof(arr) / sizeof(arr[0]);

	cout << "Original array: ";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;

	recursiveSelectionSort(arr, 0, n);

	cout << "Sorted array: ";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;

	return 0;
}