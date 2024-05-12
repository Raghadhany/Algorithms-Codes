//1-  (insertion sort - selection sort(recursive) - selection sort(iterative) - merge sort ) to sort string or sort  character in array of character

//Insertion sort:
//Insersion sort to sort array of numbers (not coming)
/*
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
*/

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

//###################################################################

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
	for (int i = 0; i < n - 1; i++) {
		int min = i;

		// Find the index of the minimum character from i+1 to end of array
		for (int j = i + 1; j < n; i++) {
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


//Or hossam's way:

/*

#include<iostream>
using namespace std;

int findMin(string& str, int i, int j)
{
	if (i == j)
		return i;
	int q = findMin(str, i + 1, j);
	if (str[q] < str[i])
		return q;
	return i;
}
void selSort(string& str, int s, int i = 0)
{
	if (i == s)
		return;
	int q = findMin(str, i, s);
	swap(str[i], str[q]);
	selSort(str, s, i + 1);

}
void main()
{
	string str;
	cin >> str;
	int n = str.length();

	//int s = sizeof(arr) / sizeof(arr[0]);
	//cout << findMin(arr, 0, s - 1) << endl;

	selSort(str, n - 1);

	cout << "Sorted array: " << str << endl;

}
*/


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

//or (hossam's way):
/*

#include<iostream>
using namespace std;

int findMin(char arr[], int i, int j)
{
	if (i == j)
		return i;
	int q = findMin(arr, i + 1, j);
	if (arr[q] < arr[i])
		return q;
	return i;
}
void selSort(char arr[], int s, int i = 0)
{
	if (i == s)
		return;
	int q = findMin(arr, i, s);
	swap(arr[i], arr[q]);
	selSort(arr, s, i + 1);

}
void main()
{
	int n;
	cin >> n;
	char* arr = new char[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	//int s = sizeof(arr) / sizeof(arr[0]);
	//cout << findMin(arr, 0, s - 1) << endl;

	selSort(arr, n - 1);

	cout << "Sorted array: ";
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;

}
*/

//###################################################################
//Merge sort to sort a string:

#include <iostream>
#include <string>
using namespace std;

// Function to merge two halves of a string
void merge(string& str, int start, int middle, int end) {
	int left = start;
	int right = middle + 1;
	int t = start;
	char* B = new char[end + 1]; // Temporary array for merging

	// Merge the two halves into B
	while ((left <= middle) || (right <= end)) {
		if (left > middle) { // If left half is exhausted
			B[t] = str[right];
			right++;
		}
		else if (right > end) { // If right half is exhausted
			B[t] = str[left];
			left++;
		}
		else if (str[left] > str[right]) { // If right element is smaller
			B[t] = str[right];
			right++;
		}
		else { // If left element is smaller or equal
			B[t] = str[left];
			left++;
		}
		t++;
	}

	// Copy the merged elements back into the original string
	for (int t = start; t <= end; t++) {
		str[t] = B[t];
	}

	delete[] B; // Free the temporary array
}

// Function to perform merge sort on a string
void mergesort(string& str, int s, int e) {
	if (s >= e) return; // Base case: if the segment size is 1 or 0

	int mid = (s + e) / 2; // Find the middle index
	mergesort(str, s, mid); // Sort the left half
	mergesort(str, mid + 1, e); // Sort the right half
	merge(str, s, mid, e); // Merge the sorted halves
}

// Main function to demonstrate merge sort on a string
int main() {
	string str = "cba";
	int size = str.length();
	mergesort(str, 0, size - 1);

	// Print the sorted string
	cout << str << endl;

	return 0;
}

//Merge sort to sort an array of characters:

#include <iostream>
#include <string>
using namespace std;

// Function to merge two halves of a string
void merge(char arr[], int start, int middle, int end) {
	int left = start;
	int right = middle + 1;
	int t = start;
	char* B = new char[end + 1]; // Temporary array for merging

	// Merge the two halves into B
	while ((left <= middle) || (right <= end)) {
		if (left > middle) { // If left half is exhausted
			B[t] = arr[right];
			right++;
		}
		else if (right > end) { // If right half is exhausted
			B[t] = arr[left];
			left++;
		}
		else if (arr[left] > arr[right]) { // If right element is smaller
			B[t] = arr[right];
			right++;
		}
		else { // If left element is smaller or equal
			B[t] = arr[left];
			left++;
		}
		t++;
	}

	// Copy the merged elements back into the original string
	for (int t = start; t <= end; t++) {
		arr[t] = B[t];
	}

	delete[] B; // Free the temporary array
}


// Function to perform merge sort on a string
void mergesort(char arr[], int s, int e) {
	if (s >= e) return; // Base case: if the segment size is 1 or 0

	int mid = (s + e) / 2; // Find the middle index
	mergesort(arr, s, mid); // Sort the left half
	mergesort(arr, mid + 1, e); // Sort the right half
	merge(arr, s, mid, e); // Merge the sorted halves
}

// Main function to demonstrate merge sort on a string
int main() {
	char arr[] = { 'c', 'b', 'a' };
	int size = sizeof(arr) / sizeof(arr[0]);
	mergesort(arr, 0, size - 1);

	// Print the sorted array
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}


//########################################################################################################
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


//GCD consective integer checking algorithm
//Way one

#include <iostream>
using namespace std;

int main() {
	int x = 8, y = 12;
	int t = min(x, y);
	while (t > 0)
	{
		if (x % t == 0 && y % t == 0)
		{
			cout << t << "  ";
			break;
		}
		t--;
	}
	return 0;
}


//GCD noraml Euclid's
//Euclid's Algorithm

/*
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
*/


//Other codes for GCD
/*
#include<iostream>
using namespace std;
int gcd(int m, int n)
{
	if (n == 0)
		return m;
	return gcd(n, m % n);
}
*/

//########################################################################################################

//3 - Design an algorithm for computing the value of a polynomial at a point x, which runs in time that is at most O(n) in the worst case.

#include<iostream>
using namespace std;

int main() {
	int n, sum = 0, po = 1, x;

	cout << "enter degree of polynomial: ";
	cin >> n;

	int* coff = new int[n + 1];
	cout << "enter x value: ";
	cin >> x;

	for (int i = 0; i <= n; i++)
	{
		cout << " coff x^" << i << " = ";
		cin >> coff[i];
		sum += coff[i] * po;
		po *= x;
	}
	cout << "result = " << sum << endl;
}


//########################################################################################################

//5- Design an algorithm to find all the common elements in two sorted lists of numbers.
//For example, for the lists 2, 5, 5, 5 and 2, 2, 3, 5, 5, 7, 
//the output should be 2, 5, 5. 
//What is the maximum number of comparisons your algorithm makes 
//if the lengths of the two given lists are m and n, respectively?


#include<iostream> 
#include<algorithm> 
#define ll long long 
using namespace std;

int main() {

	//Intiallizing the two arrays 
	int arr1[] = { 2,5,5,5 }, arr2[] = { 2,2,3,5,5,7 };
	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	int size2 = sizeof(arr2) / sizeof(arr2[0]);

	int i = 0;
	int j = 0;

	cout << "The common elements: ";

	//Comparing each element in arr1 with arr2 
	while (i < size1 && j < size2) {
		if (arr1[i] == arr2[j]) {
			cout << arr1[i] << " ";
			i++;
			j++;
		}
		else if (arr1[i] > arr2[j])
			j++;

		else
			i++;
	}

	return 0;
}


//########################################################################################################

//7 - Write c++ code for a divide - and -conquer algorithm for finding the position 
//of the largest element in an array of n numbers.


#include<iostream>
using namespace std;

int pos(int arr[], int s, int e) {
	if (s == e) 
    return s; 

	int mid = (s + e) / 2; // Find the middle index
	int largeleft  = pos(arr, s, mid); 
	int largeright = pos(arr, mid + 1, e); 
	
    if(arr[largeleft]>arr[largeright])
        return largeleft;
    else
        return largeright;

}

int main() {
	int arr[] = { 1, 0, 4, 3 };
	int size = sizeof(arr) / sizeof(arr[0]);

	int pos = pos(arr, 0, size - 1);
	cout << "The position is " << pos << endl;
	return 0;
}


//########################################################################################################
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
// int linearSR2(string str, char k, int s)
// {
// 	if (s < 0)
// 		return -1;
// 	if (str[s] == k)
// 		return s;
// 	return linearSR(str, k, s - 1);
// }

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