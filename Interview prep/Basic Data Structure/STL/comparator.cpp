#include<iostream>
#include<list>
#include<string>
using namespace std;
class Book{
public :
    string name;
    int amount;
    Book(int name,int amount){
    this->name=name;
    this->amount=amount;
    }
};
class BookCompare{
public:
    bool operator()(Book A,Book B){
        if(A.name==B.name){
            return true;
        }else{
            return false;
        }
    }
};
template<class forwardList,class T,class Compare>
forwardList LinearSearch(forwardList start,forwardList end, T key,Compare cmp){
    while(start!=end){
        if(cmp(*start,key)){
            return start;
        }
        start++;
    }
    return end;
}
int main(){
Book b1('C++',100);
Book b2('C',101);
Book b3('Java',102);
list<Book> l;
l.push_back(b1);
l.push_back(b2);
l.push_back(b3);
Book bookFind('C++',110);
BookCompare cmp;
auto it =LinearSearch(l.begin(),l.end(),bookFind,cmp);
if(it!=l.end()){
    cout<<" found";
}
}
