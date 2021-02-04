//Generic Programming using tamplate
/*1.Alogrithm
2.Container
*/
//let try to make linear search as a generic function
template<typename T>
int LinearSearch(T arr[],int n,T key){
    for(int p=0;p<n;p++){
        if(arr[p]==key){
            return p;
        }
    }
    return n;
}

#include<iostream>
using namespace std;
int main(){
int a[5]={1,2,3,4,5};
int key=4;
float af[5]={1.2,1.3,1.4,1.5,1.7};
float keyf=1.3;
int ans=LinearSearch(af,5,keyf);
cout<<ans;
}
