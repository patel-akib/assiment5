/*Q.2 Largest Element in 2D Array
Develop a Program to find the largest element from a given 2D array.
Example:
Input:
Enter the array's row size: 3
Enter the array's column size: 3
Enter array's elements:
a[0][0] = 2
a[0][1] = 7
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 9
a[2][2] = 6
Output:
The largest element is: 9*/

#include<stdio.h>
int main(){
	int row,colum,i,j,largest;
	printf("enter the number of row:");
	scanf("%d",&row);
	printf("enter the number of colum:");
	scanf("%d",&colum);
	int arr[row][colum];
	printf("enter the arr element:\n");
	for(i=0;i<row;i++){
		for(j=0;j<colum;j++){
			printf("enter[%d][%d]elements:",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<colum;j++){
			if(arr[i][j]>largest){
				largest=arr[i][j];
			}
		}
	}
	printf("The largest elements in the aarry is: %d\n",largest);
}

