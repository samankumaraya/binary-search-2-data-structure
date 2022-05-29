#include <stdio.h>
#include <stdlib.h>

int binarysearch(int arr[],int first,int last,int x){

    if(last>=first){
    int middle;
    middle=(first+last)/2;
    if(arr[middle]==x)
        return middle;
    if(x>arr[middle]){
        return binarysearch(arr,middle+1,last,x);
    }
    if(x<arr[middle]){
        return binarysearch(arr,first,middle-1,x);
    }
    return -1;
}
}
int main()
{
   int arr[]={5,7,1,4,8,3,2,9};

   int n=sizeof(arr)/sizeof(arr[0]);
   int x=13;//value that need to search

   int ans binarysearch(arr,0,n-1,x);

   if(ans == -1)
    printf("item out found");
   else
    printf("item found at %d position",ans+1);
    return 0;
}
