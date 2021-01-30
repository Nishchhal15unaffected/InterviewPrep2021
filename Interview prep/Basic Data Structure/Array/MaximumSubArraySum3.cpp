//using Kadane's algorithms
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
int cs=0;
int ms=0;
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    cs=a[i]+cs;
    if(cs<0){
        cs=0;
    }
    ms=max(cs,ms);
}
cout<<"maximum sum is : "<<ms;
}
