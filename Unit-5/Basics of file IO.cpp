


#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string s1;
    cout<<"Enter your name : ";
    cin>>s1;
    ofstream out("Sample.txt");
    out<<s1;//enters one word in file, or till the first blankspace/whitespace
    out.close();
    cin.ignore(1000,'\n');  // Remove leftover '\n' otherwise the next input wont run as the \n or enter is treated as input of next part
    
    string s2;
    cout<<"Enter your name : ";
    getline(cin,s2);//enters the full input
    ofstream out2("Sample.txt");
    out2<<s2;
    out2.close();
    
    
    string s3;
    ifstream in("Sample.txt");
    getline(in,s3);
    cout<<s3;

    return 0;
}