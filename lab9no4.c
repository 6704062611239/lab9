#include<stdio.h>
void swapValue(int *a, int *b, int *c);
void swapArray(int a[], int b[], int size); 


int main() {
	int a = 1, b = 2, c = 3;
	printf("Before swap function: a = %d, b = %d, c = %d\n", a, b, c);
	swapValue(&a, &b, &c);
	printf("After swap function: a = %d, b = %d, c = %d\n", a, b, c);
	
	int i;
	int arr[4] = {1, 2, 3, 4};
    int brr[4] = {10, 20, 30, 40};
    printf("\nBefore swap:\n");
    printf("arr1: %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3]);
    printf("arr2: %d %d %d %d\n",brr[0],brr[1],brr[2],brr[3]);
    swapArray(arr,brr,4);
    printf("\nAfter swap:\n");
    printf("arr1: %d %d %d %d\n",arr[0],arr[1],arr[2],arr[3]);
    printf("arr2: %d %d %d %d\n",brr[0],brr[1],brr[2],brr[3]);
}

void swapValue(int *a, int *b, int *c){
    int temp = *a; 
    *a = *b;         
    *b = *c;       
    *c = temp;       
}

void swapArray(int a[], int b[], int size){
	int i;
    for (i=0;i<size; i++) {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

