#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[] = {4,3,1,2};
	int arr_size = sizeof(arr)/sizeof(arr[0]);
	// traverse once through the list
	for(int i=0;i<=arr_size;i++) {
		// traverse through i+1
		for(int j=i+1;j<=arr_size;j++) {
			// if the value on the right is smaller than the value on the right
			if(arr[j]<arr[i]) {
				//cout << arr[j] << endl;
				// swap operation
				//temp = arr[i];
				//arr[i] = arr[j];
				//arr[j] =  temp;
				swap(i,j);
			}
		}
	}
}