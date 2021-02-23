#include <stdio.h> 
int binarySearch(int arr[], int l, int r, int x) 
{ 
   if (r >= l) 
   { 
        int mid = l + (r - l)/2; 
        if (arr[mid] == x)  return mid; 
        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x); 
        return binarySearch(arr, mid+1, r, x); 
   } 
   return -1; 
} 
  
int main(void) 
{ 
    int a[20],x,n,i;
    scanf("%d",&n); // input no.of elements
    for(i=0;i<n;++i)
    scanf("%d",&a[i]); // input array elements
    scanf("%d",&x); // input key to search
  
    int result = binarySearch(a, 0, n-1, x); 
    (result == -1)? printf("-1") : printf("Element is present at index %d", result); 
    return 0; 
} 