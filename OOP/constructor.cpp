#include <iostream> 
using namespace std ;

class Student{
    public:
    string name;
    int roll_no;
    float gpa;

    Student(string name, int roll_no, float gpa){
        this->name = name;
        this->roll_no = roll_no;
        this->gpa = gpa ;
    }
};

int main(){
    Student s1("vyanktesh",58,7.8);
    cout<<s1.name<<s1.roll_no<<s1.gpa;
}