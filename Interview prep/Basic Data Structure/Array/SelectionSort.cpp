#include<iostream>
using namespace std;
void selectionSort(int a[],int n){
    int min_index;
    for(int i=0; i<n-1; i++){
        min_index=i;
        for(int j=i;j<n;j++){
            if(a[j]<a[min_index]){
                min_index=j;
            }
        }
        swap(a[i],a[min_index]);
    }

    for(int i=0;i<n;i++){
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
    selectionSort(a,n);
    return 0;
}
