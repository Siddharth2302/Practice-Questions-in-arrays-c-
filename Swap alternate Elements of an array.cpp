/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int getMax(int n,int arr[]){
int max=INT_MIN;
for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
}
return max;

int getMin(int n,arr[]){
int min=INT_MAX;
for(i=0;i<n;i++){
    if(num[i]<min){
        min=num[i];
    }
}
}
return min;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The Max value is:"<<getMax<<" ";
    cout<<"The Min value is:"<<getMin<<" ";
    return 0;
}