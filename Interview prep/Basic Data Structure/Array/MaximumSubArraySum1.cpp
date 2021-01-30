#include<iostream>
using namespace std;
void subArray(int a[],int n){
    int MaxSum=0;
    int left=-1;
    int right=-1;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        int current=0;
        for(int k=i;k<=j;k++){
            current=a[k]+current;
        }
    if(MaxSum<current){
     MaxSum=current;
     left=i;
     right=j;
     }
    }
    }
    cout<<"Maximum sum of SubArray is "<<MaxSum<<endl;
    for(int i=left;i<=right;i++){
        cout<<a[i]<<" ";
}
}
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
subArray(a,n);
}

