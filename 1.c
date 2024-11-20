/*Q.1 Negative Elements in 1D Array
Develop a program that finds all the negative elements from a given 1D array.
Example:
Input:
Enter the array's size: 5
Enter array's elements:
a[0] = 2
a[1] = -4
a[2] = 1
a[3] = -3
a[4] = -5
Output:
Negative elements from an Array: -4, -3, -5*/

#include<stdio.h>
int main(){
	int size,i,j;
	printf("enter the size of array:");
	scanf("%d",&size);
	int arr[size];
	printf("enter the elements:\n");
	for(i=0;i<size;i++){
		printf("enter the aaray[%d]elements:",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		if(arr[i]<0){
			printf("nagetiv array number is %d\n",arr[i]);
		}
		
		}
	}
	

