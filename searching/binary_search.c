#include<stdio.h>
int binary_search(int arr[], int size, int element)
{
    int low, mid, high; 
   low=0;
   high=size-1;
    while(low<=high){
         mid =(low + high)/2;
    if(arr[mid] == element){
        return mid;
    }
    if (arr[mid]<element){
        low=mid+1;
    }
    else{
        high=mid-1;
    }
    return -1;
    }
}
int main(){
    int arr[]={14,24,34,45,56,67,78,96,100,203,345};
    int size=sizeof(arr)/sizeof(int);
    int element;
    printf("Enter the element to be found :-\n");
    scanf("%d",&element);
    int search_index=binary_search(arr,size,element);
    printf("The %d is found at %d\n",element,search_index);
}