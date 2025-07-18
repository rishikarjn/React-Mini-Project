#include<iostream>
using namespace std;
int main(){
    int sum=0;
     int arr[]={3,51,17,34,29};
    int n=sizeof(arr)/sizeof(arr[0]);

  
    for(int i=0;i<n;i++){
       sum=sum+arr[i];
    }
    cout<<sum;
    return 0;
}