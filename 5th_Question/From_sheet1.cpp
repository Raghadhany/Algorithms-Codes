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
