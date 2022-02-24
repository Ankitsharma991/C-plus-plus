#include<iostream>

using namespace std;

class Student{
    protected: 
        int roll_number;
    public: 
        void Set_roll_number(int);
        void get_roll_number(void);
};

void Student :: Set_roll_number(int r){
    roll_number = r;
}

void Student :: get_roll_number(){
    cout<<"The roll number is "<<roll_number<<endl;
}

class Exam : public Student{
    protected: 
        float maths;
        float physics;
    public : 
        void Set_marks(float, float);
        void get_marks(void);
};

void Exam ::Set_marks(float m1, float m2){
    maths = m1;
    physics = m2;
}

void Exam ::get_marks(){
    cout<<"The marks obtained in maths is "<<maths<<endl;
    cout<<"The marks obtained in physics is "<<physics<<endl;
}

class result :: public Exam{

    float percentage;
    public : 
        void display(){
            get_roll_number();
            get_marks();
            cout<<"Your percentage is "<<(maths+physics)/2<<endl;

        }
};
int main(){

/*
    Notes:
        if we are inheriting B from A and C from B : [A--->B--->C]
        1.A is the Base class for B and B is the Base class for C
        2.ABC is called inheritance Path 
*/
    result harry;
    harry.Set_roll_number(852);
    harry.get_marks(94.0, 96.0);
    harry.display();
    return 0;
}