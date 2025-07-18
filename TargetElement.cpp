#include<iostream>
using namespace std;
int binarySearch(int arr[],int size, int target){
    int left=0;
    int right=size-1;
    while(left<=right){
        int mid= left+(right-left)/2;
        if(arr[mid]=target){
            return mid;
        }
        if(arr[mid]<target){
            left=mid+1;        
     }
     if(arr[mid]>target){
        right=mid-1;
     }
    }
    return -1;
}