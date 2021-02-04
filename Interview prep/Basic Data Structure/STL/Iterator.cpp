#include<iostream>
#include<list>
using namespace std;
template<class forwardList,class T>
forwardList LinearSearch(forwardList start,forwardList end, T key){
    while(start!=end){
        if(*start==key){
            return start;
        }
        start++;
    }
    return end;
}
int main(){
list<int>l;
l.push_back(1);
l.push_back(2);
l.push_back(3);
l.push_back(4);
auto ans=LinearSearch(l.begin(),l.end(),4);
if(ans==l.end()){
    cout<<"not found";
}else{
    cout<<*ans;
}
}
