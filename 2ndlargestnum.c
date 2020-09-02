#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {100,5,201,13,4,-8,12,91,3,56};
    int largest,second_largest,i;
    int arr_size = sizeof(arr)/sizeof(int);

    for(i=0;i<arr_size;i++) {
    	if (largest < arr[i]) {
    		second_largest = largest;
    		largest = arr[i];
    	}
    	else if(arr[i]<largest && arr[i]> second_largest) {
    		second_largest = arr[i];
    	}
    }
    printf("%d\n",second_largest);
    return second_largest;
}
