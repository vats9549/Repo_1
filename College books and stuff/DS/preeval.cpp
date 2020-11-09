#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
typedef float elt_type;
class stack
{	int top;
	elt_type a[20];
	int max;
public:

	stack(int m);
bool IsFull();
	bool IsEmpty();
	void push(elt_type x);
	elt_type pop();
	void display();
	};
stack::stack(int m)
{
max=m;
top=-1;
}
bool stack::IsFull()
	{
		if(top==max-1)
			return true;
		return false;
	}
bool stack::IsEmpty()

	{	if(top==-1)
			return true;
		return false;
	}
	void stack::push(elt_type item)
{       if(IsFull())
	cout<<"Stack is full \n";
	else
		a[++top]=item;
}

elt_type stack::pop()
{
	if(IsEmpty())
		{cout<<"stack is empty\n"; return -1;}
	else{
	       //cout<<"deleted element is"<<(a[top]);
                                    return (a[top--]);


}}
void stack::display()
{        if(IsEmpty())
		cout<<"stack is empty\n";
	else
	for(int i=top;i>-1;i--)
		cout<<a[i];
}
void preeval(char * exp){
int i;stack  s(20);
int l=strlen(exp);

for(i=l-1;i>=0;i--){
        if(isdigit(exp[i]))
            s.push((float)(exp[i]-'0'));
 else {
        float opd1=s.pop();
        float opd2=s.pop();
        switch(exp[i]){
            case '+': s.push(opd1+opd2);break;
            case '-': s.push(opd1-opd2);break;
            case '*': s.push(opd1*opd2);break;
            case '/': s.push(opd1/opd2);break;
            case '^': s.push(pow(opd1,opd2));break;
            default: cout<<"Error"; return ;
        }

 }
}
cout<<s.pop();
}
int main(){
    char prefix[]="+*2/3-21*53";
    preeval(prefix);
}
