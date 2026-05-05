#include <stdio.h> 
 
void merge(int arr[], int low, int mid, int high) 
{ 
int b[10]; 
int i = low, j = mid + 1, k = 0; 
while (i <= mid && j <= high)  
{ 
if (arr[i] < arr[j]) 
{ 
b[k] = arr[i]; 
i++; 
} 
else 
{ 
b[k] = arr[j]; 
j++;        
} 
k++; 
} 
while (i <= mid)  
{ 
b[k] = arr[i]; 
i++;    
k++; 
} 
while (j <= high) 
{ 
b[k] = arr[j]; 
j++;        
k++; 
} 
 // Copy merged elements back to original array 
for (i = low, k = 0; i <= high; i++, k++) 
arr[i] = b[k]; 
} 
// Function to perform merge sort 
void mergeSort(int arr[], int left, int right) 
 { 
	 if (left < right) 
			 { 
		 int mid = (left + right) / 2; // Find the middle point 		 // Recursively sort first and second halves 
		 mergeSort(arr, left, mid); 
		 mergeSort(arr, mid + 1, right); 
		 // Merge the sorted halves 
		 merge(arr, left, mid, right); 
 

	 } 
} 
// Main function 
int main() 
{ 
	 int a[25],i,n;  
	 printf("How many elements are you going to enter? "); 	 scanf("%d", &n); 
	 printf("Enter %d elements: ", n); 
	 for(i=0;i<n;i++) 
	 scanf("%d",&a[i]); 
	 mergeSort(a, 0, n - 1); 
	 printf("Sorted array:\n"); 
		for(i=0;i<n;i++) 
		printf("%d\t",a[i]); 
	 return 0; 
} 

