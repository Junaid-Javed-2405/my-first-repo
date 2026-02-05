#include<iostream>
#include<string>
using namespace std;
class Student{
private:
    string name;
    string rollno;
    int n_subject;
    int *marks;
public:
Student(string name="unknown",string rollno="0",int n_subject=0,int const *mark=nullptr )
{
this->name=name;
this->rollno=rollno;
this->n_subject=n_subject;

if(n_subject>0 && mark!=nullptr){
marks=new int[n_subject];
for(int i=0;i<n_subject;i++)
marks[i]=mark[i];
}
else 
{
    marks=nullptr;
}
}

~Student(){
    delete []marks;
}

string getName () const
{ 
    return name;
}

string getRollNo() const
{
  return rollno;
}

int getGrades() const
{
    if(n_subject==0)
    cout<<"No grade no subject added yet ";
    else
    {
      cout<<"Grades: ";
      for(int i=0;i<n_subject;i++)
      cout<<marks[i]<<" ";
      cout<<endl;
    }
  
}

void addGrade(int grade){
   int *newMarks=new int[n_subject+1];
   for(int i=0;i<n_subject;i++)
   {
     newMarks[i]=marks[i];
   }
   newMarks[n_subject]=grade;
   delete [] marks;
   marks=newMarks;
   n_subject++;

   cout<<"Marks updated! "<<endl;
}

float averageGrade()
{

    if(n_subject==0)
    return 0.00;
    else{
    float sum=0;
    for(int i=0;i<n_subject;i++)
    sum+=marks[i];

    return sum/n_subject;
}

}

};


int main() {

    // Create a student object (no grades initially)
    Student s("Ali", "22F-1234");

    cout << "Student Name: " << s.getName() << endl;
    cout << "Roll No: " << s.getRollNo() << endl;

    // Adding grades one-by-one
    s.addGrade(85);
    s.addGrade(90);
    s.addGrade(78);
    s.addGrade(92);

    // Show all grades
    cout << "\nChecking Grades: ";
    s.getGrades();

    // Calculate average
    cout << "Average Grade = " << s.averageGrade() << endl;

    return 0;
}
