#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int roll;
    int math;
    int english;

    Student(string name, int roll, int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }

    void total()
    {
        cout << "Total marks of " << name << "is =" << math+english << endl;
    }


};


int main()
{
    Student sakib("Sakib Ahmed", 10, 80, 80);
    // cout << sakib.name << " " << sakib.roll << endl;

    sakib.total();

    Student Rahat("Rahat Kabir", 03, 90, 90);
    Rahat.total();


    
    return 0;
}
