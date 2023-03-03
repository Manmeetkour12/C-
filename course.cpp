#include<iostream>
#include<string>
using namespace std;
class course
{
    public:
    char name[10];
    int sem;
    int id;
    char branch[10];
    void input()
    {
        cout<<"enter the name of the course:";
        cin>>name;
        cout<<"enter the id of the course:";
        cin>>id;
        cout<<"enter the semester of the course:";
        cin>>sem;
        cout<<"enter the branch of the course:";
        cin>>branch;

    }
    void output()
    {
        cout<<"name of the course is:"<<name<<"\n";
        cout<<"id of the course is:"<<id<<"\n";
        cout<<"semester of the course is:"<<sem<<"\n";
        cout<<"branch of the course is:"<<branch<<"\n";
    }
};
int main()
{

    course c;
    c.input();
    c.output();
}



