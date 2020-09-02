#include <iostream>
using namespace std;
int main() {
	int arr[100];
	//int size_arr = sizeof(arr)/sizeof(int);
	int size_arr;
	int temp;
	int i,j,l;


	// taje input
	printf("Enter number of elements\n");
	scanf("%d",&size_arr);
	printf("Enter elements\n");
	for(i=0;i<size_arr;i++) {
		scanf("%d\n",&arr[i]);
	}
	for(i=0;j<size_arr;i++) {
		for(j=i+1;j<size_arr;j++) {
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(l=0;i<size_arr;l++) {
		cout << arr[l] << endl;
	}

	return 0;
}
