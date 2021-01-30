//maximum sum using cumelity sum
#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
int cms[1000]={0};
int cs=0;
int ms=0;
cin>>a[0];
cms[0]=a[0];
for(int i=1;i<n;i++){
    cin>>a[i];
    cms[i]=cms[i-1]+a[i];
}
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        cs=0;
        cs=cms[j]-cms[i-1];
        ms=max(cs,ms);
    }

}
cout<<"Maxumum sum is : "<<ms;
return 0;
}
