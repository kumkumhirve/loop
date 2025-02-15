#include<iostream>
using namespace std;

class add
{
    int a,b,c;
    public:
    void getdata()
    {
        cout<<"enter two number:";
        cin>>a>>b;
        c=a+b;
        cout<<c;


    }};
    int main(){
        add a1;
        a1.getdata();
        return 0;
    }