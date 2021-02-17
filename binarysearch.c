#include <stdio.h>
#include <stdbool.h>

#define SIZE 10
int search (int arr[SIZE], int target)
{
  int start = 0;
  int end = SIZE - 1;
  bool found = false;
  int mid = 0;
  while(!found)
	{

	  mid = (start + end) / 2;
	  
	  if(arr[mid]==target)
		found = true;

	  else if (arr[mid] > target)
		  end = mid - 1;
		
	  else
	      start = mid + 1;
		
	}
	if (found)
		return mid;
	else
		return -1;

}

int main()
{
int arr[SIZE];
int key;
	printf("Please enter the values of the array ");
	for(int i = 0; i < SIZE; i++)
	  scanf("%d",&arr[i]);
	printf("Please enter the target number: ");
	scanf("%d",&key);
int l = search(arr, key);
	printf("The index of the target number is %d",l);
		
return 0;
}