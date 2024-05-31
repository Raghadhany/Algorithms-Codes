//7 - Write c++ code for a divide - and -conquer algorithm for finding the position 
//of the largest element in an array of n numbers.


#include<iostream>
using namespace std;

int PositionOfLargEle(int arr[], int low, int high) {
	if (low == high) {
		return low;
	}
	int mid = (low + high) / 2;
	int largest_left = PositionOfLargEle(arr, low, mid);
	int largest_right = PositionOfLargEle(arr, mid + 1, high);
	if (arr[largest_left] > arr[largest_right]) {
		return largest_left;
	}
	else {
		return largest_right;
	}
}

int main() {
	int arr[] = { 1, 0, 4, 3 };
	int size = sizeof(arr) / sizeof(arr[0]);

	int pos = PositionOfLargEle(arr, 0, size - 1);
	cout << "The position is " << pos << endl;
	return 0;
}
