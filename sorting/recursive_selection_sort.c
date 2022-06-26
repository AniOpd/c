#include <stdio.h>
#include<math.h>
#include<stdlib.h>
void selection(int list[], int i, int j, int size, int flag)
{
    int temp;
 
    if (i < size - 1)
    {
        if (flag)
        {
            j = i + 1;
        }
        if (j < size)
        {
            if (list[i] > list[j])
            {
                temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
            selection(list, i, j + 1, size, 0);
        }
        selection(list, i + 1, 0, size, 1);
    }
}
void display(int arr[], int size)
{
    printf("the list elements are:-\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int main()
{
    int a[5] = {5, 6, 4, 15, 3};
    display(a, 5);
   selection(a, 0,0,5, 1);
    display(a, 5);
    return 0;
}