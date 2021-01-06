//Linear Search
#include<iostream>
using namespace std;
int main()
{
    int key,i,arr[5]={1,3,5,3,6};
    cout<<"Enter the key which you want to find";
    cin>>key;
    for(i=0;i<5;i++){
        if(arr[i]==key){
            cout<<key<<" is at position "<<i+1;
            break;
        }
    }
    if(i==5){
        cout<<"key is not in an array";
    }

}
