//find smallest and largest number in an array
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
int smallest=INT_MAX;
int largest= INT_MIN;
int n;
cin>>n;
int a[n];
//take input
for(int i=0;i<n;i++){
    cin>>a[i];
}
//Algorithm to find smallest and largest number
for(int i=0;i<n;i++){
    if(a[i]<smallest){
        smallest=a[i];
    }
    if(a[i]>largest){
        largest=a[i];
    }
}
cout<<smallest<<" "<<largest;
}
