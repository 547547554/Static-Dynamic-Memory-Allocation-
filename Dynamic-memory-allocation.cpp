//1.memory allocation done before program execution 
//2.It use heap
//3.Heap use for managing dynamic memory allocation 
//4.It is more efficient
//5.when memory is allocated the memory size can be changed
//6.This memory is allocated at run time.

#include<iostream>
using namespace std;
// dynamically access by the pointer 
class Student
{
  public:
  string name;
  int age, roll_no;
  string grade;
};
int main ()
{
    Student *s = new Student;
    (*s).name="Rakesh";
    (*s).age= 21;
    (*s).roll_no=1;
    (*s).grade="A++";

    cout<<s->name<<" ";
    cout<<s->age<<" ";
    cout<<s->roll_no<<" ";
    cout<<s->grade<<" ";
}