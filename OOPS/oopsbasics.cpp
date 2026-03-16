#include <iostream>
#include <string>
using namespace std;

class Teacher
{
    private:
        double salary;
    public:
        //Non - parameterized constructors
        Teacher(){
            cout << "Non - parameterized constructors";
        }

        //parameterized constructors
        Teacher(string name){
            cout << "Parameterized constructors";
            this -> name = name;//This keyword
        }

        //Copy constructors
        Teacher(Teacher &object);
        
        // propreties(attributes)
        string name;
        string Dept;
        string subject;
    

        // methods(member functions)
        void changedept(string newDept)
        {
            Dept = newDept;
        }

        //setters
        void setSalary(double newSalary){
            salary = newSalary;
        }
        //getters
        double getSalary(){
            return salary;
        }
};

class Student{
    public:
        string name;
        double *cgpaPtr;

        Student(string name , double cgpa){//parameterized constructors
            this -> name = name;
            cgpaPtr = new double;
            *cgpaPtr = cgpa;
        }

        Student(Student &obj){
            this -> name = obj.name;
            cgpaPtr  = new double;
            *cgpaPtr = *obj.cgpaPtr;
        }

        void getinfo(){
            cout <<"Name :" << name << endl;
            cout <<"CGPA :" << *cgpaPtr << endl;

        }
};

int main()
{
    cout << "Basics of OOPs\n";

    // creation of object
    Teacher t1("Sanidhya Malviya");
    t1.name = "Sanidhya";
    t1.Dept = "CSE(AIML)";
    t1.subject = "probability and statics";
    t1.setSalary(56000);
    cout << t1.getSalary();
    // Teacher t2(t1);//Copy Constructors 
    // cout << t2.Dept;
    cout << endl;

    //student object
    Student s1("Sanidhya" , 7.8);
    s1.getinfo();


    
}