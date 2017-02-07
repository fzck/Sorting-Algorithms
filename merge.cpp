#include<iostream>

using namespace std;



void merge(int A[], int B[], int C[], int n){
	int i = 0, j= 0, k=0;

	
	while (i < n && j < n){
		if (A[i] < B[j])
			C[k++] = A[i++];
		else
			C[k++] = B[j++];
	}
	
	while (i < n)
		C[k++] = A[i++];	

	while (j < n)
		C[k++] = B[j++];

	for(i = 0; i < 2*n ; i++) printf("%d ",C[i]);
		
	
	
}

int main() {
	/* Code to test the MergeSort function. */
	int i,n;
	int A[] = {1,2,3,14};
	int B[] = {2,3,4,88}; 
	int C[2*n];// creating an array of integers. 
	

	// finding number of elements in array as size of complete array in bytes divided by size of integer in bytes. 
	// This won't work if array is passed to the function because array
	// is always passed by reference through a pointer. So sizeOf function will give size of pointer and not the array.
	// Watch this video to understand this concept - http://www.youtube.com/watch?v=CpjVucvAc3g  
	n = 4;

	// Calling merge sort to sort the array. 
	merge(A,B,C,n);

	//printing all elements in the array once its sorted.
	//for(i = 0; i < 2*n ; i++) printf("%d ",C[i]);
	return 0;
}


