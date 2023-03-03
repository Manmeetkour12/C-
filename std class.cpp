#include<iostream>
#include<string>
using namespace std;
class student
{
    public:
    char name[10];
    int age;
    int rollno;
    int sem;
    int year;
    void input()
    {
        cout<<"enter the name of the student:";
        cin>>name;
        cout<<"enter the age of the student:";
        cin>>age;
        cout<<"enter the roll no of the student:";
        cin>>rollno;
        cout<<"enter the semester of the student:";
        cin>>sem;
        cout<<"enter the year of the student:";
        cin>>year;

    }
    void output()
    {
        cout<<"name of the student is:"<<name<<"\n";
        cout<<"age of the student is:"<<age<<"\n";
        cout<<"roll no of the student is:"<<rollno<<"\n";
        cout<<"semester of the student is:"<<sem<<"\n";
        cout<<"year of the student is:"<<year<<"\n";
    }
};
int main()
{

    student s;
    s.input();
    s.output();
}


