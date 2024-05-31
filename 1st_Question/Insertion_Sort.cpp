//1-  (insertion sort - selection sort(recursive) - selection sort(iterative) - merge sort ) to sort string or sort  character in array of character

//Insertion sort:

//Insersion sort to sort array of numbers (not coming)

#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		int key = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = key;
	}

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

int main() {
	int arr[] = { 9,4,6,7 };
	int s = sizeof(arr) / sizeof(arr[0]);
	insertion_sort(arr, s);

	return 0;
}


//Insertion sort to sort a string

#include <iostream> 
#include <string> 
using namespace std;

void sort_S(string a) {
	int s = a.length();

	for (int i = 1; i < s; i++) {
		char key = a[i];
		int j = i - 1;
		while (j >= 0 && a[j] > key) {
			a[j + 1] = a[j];
			j--;
		}

		a[j + 1] = key;
	}
	cout << a << endl;
}

int main() {
	string a;
	cin >> a;
	sort_S(a);
	return 0;
}


//Insertion sort to sort character in array of character

#include <iostream> 
using namespace std;

void sort_A(char arr[], int s) {
	for (int i = 1; i < s; i++) {
		char key = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = key;
	}

	for (int i = 0; i < s; i++)
		cout << arr[i] << " ";
}

int main() {
	int n;
	cin >> n;

	char* arr = new char[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort_A(arr, n);
	return 0;
}
