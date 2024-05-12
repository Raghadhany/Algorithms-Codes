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
