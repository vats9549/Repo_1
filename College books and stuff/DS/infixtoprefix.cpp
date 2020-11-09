#include<iostream>
#include <cstring>

using namespace std;
int prec(char op){
    switch(op){
    case  '+':
    case '-':return 2;
    case '*':
    case '/':return 3;
    case '^' :return 4;
    //case ')': return 0;

    }
    return 0;
}
typedef int elt_type;
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
	elt_type peek(){ return a[top];}
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
void Prefix(char *a)
{    stack s(20);
    char t;
    char outstr[20]; int k=0;
    int len=strlen(a);
    for(int i=len-1;i>=0;i--)
    {   char ch = a[i];
        switch(ch)
        {
        case ')' : s.push(ch); break;
        case '^':
        case '-':
        case '+':
        case '/':
        case '*': if (s.IsEmpty())
                            s.push(ch);
                  else
                  if(s.peek()==')')
                            s.push(ch);
                  else{
                  while (prec(ch)<=prec(s.peek()))

                     outstr[k++]=s.pop();
                     s.push(ch);}
                  break;
        case '(' :while((t=s.pop())!=')')
                   outstr[k++]=t;
                    break;
        }
        if (isalnum(ch))
            outstr[k++]=ch;
    }
    while(!s.IsEmpty()) outstr[k++]=s.pop();
outstr[k]='\0';
for(int i=strlen(outstr); i>=0;i--)
    cout<<outstr[i];
}
int main()
{
    char a[] ="A+B*(C^D-E)";
    Prefix(a);
    return 0;
}
