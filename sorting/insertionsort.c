#include <stdio.h>
#include <conio.h>

void display(int arr[],int n){
for(int i=0;i<n;i++){
    printf("at index %d is %d\n",i,arr[i]);
}
}
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main(){
    int a[8]={45,26,45,42,75,758,58,69};
    printf("before sorting the array is :-\n");
display(a,8);
insertionSort(a,8);
printf("after sorting the array is:-\n");
display(a,8);
return 0;
}