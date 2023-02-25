
#include <iostream>
using namespace std;
struct student
{
    char name[10];
    int rollno;
    float marks;
    char branch[10];
};
int main()
{
    int num;
    cout<<"enter the number of students";
    cin>>num;
    struct student s[10];
    for(int i=0;i<num;i++)
   {
    cout<<"enter details:" <<endl;
    cout<<"enter the name ";
    cin>>s[i].name;
    cout<<"enter the roll no ";
    cin>>s[i].rollno;
    cout<<"enter the marks ";
    cin>>s[i].marks;
    cout<<"enter the branch ";
    cin>>s[i].branch;
}
    cout<<"\ndisplaying details" <<endl;
    for(int i=0;i<num;i++)
    {
    cout<<"name :"<<s[i].name <<endl;
    cout<<"roll no :"<<s[i].rollno <<endl;
    cout<<"marks :"<<s[i].marks <<endl;
    cout<<"branch :"<<s[i].branch <<endl;
    return 0;
    }
}







