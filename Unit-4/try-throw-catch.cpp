

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin>>a;
    cin>>b;
    try{
        if(b==0){
            throw "division by 0";
        }
        cout<<a/b;
        
    }
    catch(const char* e){
        cout<<e;
    }

    return 0;
}