#include<iostream> 
#include <cstdio>
using namespace std;

class student
{
int rollno;
char name[20];
public :
     void setname(char[]);
      void setroll(int);
char* getname();
int getroll();
};
void main()
{
student s;
int r; char n[20];
cout<<"enter the rollno.:";
cin>>r;  
cout<<"enter the name:";
gets(n) ;
s.setname(n) ;
s.setroll(r) ;
cout<<"rollno:"<<s.getroll() ;
cout<<"\n name:"; s.getname();
}