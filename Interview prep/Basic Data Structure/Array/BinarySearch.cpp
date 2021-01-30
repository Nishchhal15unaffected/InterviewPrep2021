#include<iostream>
using namespace std;
int BinarySearch(int a[],int n,int key){
int Start=0;
int Mid,End=n-1;
while(Start<End){
    Mid=(Start+End)/2;
    if(a[Mid]==key){
        return Mid;
    }
    if(a[Mid]>key){
        End=Mid-1;
    }else{
        Start=Mid+1;
    }
    return -1;
}
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
    cin>>key;
    int ans=BinarySearch(a,n,key);

    cout<<ans;

    return 0;
}
