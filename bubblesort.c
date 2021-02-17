#include <stdio.h>
#define SIZE 10
void swap(int *x, int *y)	// to swap two variables without taking a copy
{
*x = *y - *x;
*y -= *x;
*x += *y;
}
void sort(int arr[SIZE])
{
for(int i = 0; i < SIZE; i++)
for(int j = i; j < SIZE; j++)
if(arr[i]>arr[j])
swap(&arr[i], &arr[j]);

}
int main()
{
int arr[SIZE];
printf("ENTER NUMBERS IN ARRAY");
for(int i = 0; i < SIZE; i++) scanf("%d",&arr[i]);
sort(arr);
for(int i = 0; i < SIZE; i++) printf("%d ",arr[i]);

return 0;
}