#include<iostream>
using namespace std;
class Student {
public:
    void study() {
        cout << "Studying\n";
    }
};

class Athlete {
public:
    void train() {
        cout << "Training\n";
    }
};

class StudentAthlete : public Student, public Athlete {
public:
    void compete() {
        cout << "Competing\n";
    }
};
int main() {
    StudentAthlete s;

    s.study();    // inherited from Student
    s.train();    // inherited from Athlete
    s.compete();  // StudentAthlete's own function
}