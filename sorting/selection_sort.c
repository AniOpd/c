#include <stdio.h>
#include<conio.h>
void display(int arr[], int size)
{
    printf("the list elements are:-\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}
void selectionsort(int arr[],int size){
for(int i=0;i<size-1;i++){
    for(int j=i+1;j<size;j++)
    if(arr[i]>arr[j]){
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }
}
}
int main()
{
    int a[5] = {5, 6, 4, 15, 3};
    display(a, 5);
    selectionsort(a,5);
    display(a,5);
    return 0;
}