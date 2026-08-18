

#include <iostream>
using namespace std;
class prime{
    public:
    bool isprime(int n){
        if(n<2){
            cout<<"Not a prime"<<endl;
            return false;
        }
        bool prime=true;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                prime=false;
                break;
            }
        }
        return prime;
    }
    void series(int count){
        int counter=0;
        int current_num=2;
        while(counter<count){
           bool isitprime=isprime(current_num);
           if(isitprime){
               cout<<current_num<<" ";
               counter+=1;
           }
           current_num+=1;
           
            
        }
    }
        
};

int main()
{
    prime p;
    p.series(10);
    return 0;
}