#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}
void sort(int arr[], int i, int j, int size, int flag)
{
    if (i < size - 1)
    {
        if (flag)
        {
            j = i + 1;
        }
        if (j < size)
        {
            if (arr[i] >arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
            sort(arr, i, j + 1, size, 0);
        }
        sort(arr, i + 1, 0, size, 1);
    }
}
int main()
{
    int a[5] = {5, 6, 4, 9, 3};
    printf("befor any operation the list is \n");
    display(a, 5);
    printf("The list after sorting operation\n");
    sort(a, 0, 0, 5, 1);
    display(a, 5);
    return 0;
}