// #include<iostream>
// using namespace std;
// int main(){
//     int num1;
//     int num2;
//     cout<<"Enter the first number";
//     cin>>num1;
//     cout<<"Enter the second number";
//     cin>>num2;
//     int sum=0;
//     for(int i=num1; i<=num2;i++)
//     sum=sum+i;
//     cout<<sum;
//     return 0;

// }

#include<iostream>
using namespace std;
int main(){
    int num1;
    int num2;

    cout<<"Enter the first number";
    cin>>num1;
    cout<<"Enter the second number";
    cin>>num2; 
    int sum=0;
    for(int i=num1; i<=num2; i++){
        sum+=i;
    }
    cout<<sum;
    return 0;

}