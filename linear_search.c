#include<stdio.h>
int linear_search(int arr[], int size, int element)
{
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={53,34,63,12,35,15,16,46,74,45};
    int size=sizeof(arr)/sizeof(int);
    int element=16;
    int search_index=linear_search(arr,size,element);
    printf("The %d is found at %d\n",element,search_index);
}