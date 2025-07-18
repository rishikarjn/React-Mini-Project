#include<iostream>
using namespace std;

int main(){
    int N,M;
    cout<<"Enter the two integers N and M ";
    cin>>N>>M;
    int SumOfCubes=0;

    for(int i=N;i<M;i++){

        SumOfCubes=+(i*i*i);

    }
    cout<<"Enter the sum of Cubes from N to m "<<SumOfCubes<<endl;
    return 0;
}
