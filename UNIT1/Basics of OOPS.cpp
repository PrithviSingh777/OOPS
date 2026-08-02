

#include <iostream>
#include<string>
using namespace std;
//Class declaration

class Student{
    // class members declaration
    /* protected access specifier is used in inheritance,
    its similar to private access specifier except these can be accessed by derived classes too*/
    private:
        int PRN=0;
        int GPA=0;
        
    public:
        string name="Unknown";// for default constructor
        //constructor declaration
        /*no of constructors allowed= no of combinations of parameterized
        adding more than one constructor is called constructor overloading
        */
        
        Student(){
            cout<<"I am default constructor" <<endl;
        }
        Student(int PRN,int GPA,string name){
            cout<<"I am a parameterized constructor"<<endl;
            // using THIS keyword, THIS keyword points back to the current object
            //assign PRN of class the value prn which is passed to the constructor
            this->PRN=PRN;
            
            this->GPA = GPA;   
            this->name = name;
            cout<<"Constructor of name "<< name<<endl;
        }
        ~ Student(){
            cout<<"I am a destructor,i dont take parameters and i cant be overloaded"<<endl;
            cout<<"I destroyed student "<<name<<endl;
        }
        Student(const Student&s){
            cout<<"Hi im a copy constructor"<<endl;
            cout<<"I am copying "<<s.name<<endl;
            this->name = s.name;
            this->PRN = s.PRN;
            this->GPA = s.GPA;
            
        }
    
    
};

int main()
{
    Student s1; // Calls default constructor
    Student s2(12345, 4, "Alex"); // Calls parameterized constructor
    //constructors=FIFO
    //DESTRUCTORS=LIFO
    {
        //example to observe scope and its effect on constructors and destructors
        Student s3(77777,54,"Sam");
    }
    //copy constructors
    Student a(1, 9, "John");
    Student b = a;
    cout<<b.name<<endl;
    
    return 0;
}