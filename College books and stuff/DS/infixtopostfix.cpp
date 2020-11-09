#include<iostream>

using namespace std;
int prec(char op){
    switch(op){
    case  '+':
    case '-':return 2;
    case '*':
    case '/':return 3;
    case '^' :return 4;

    }
    return 0;
}
typedef char elt_type;
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
void Postfix(char *a)
{    stack s(20);
    char t;
    for(int i=0;a[i]!='\0';i++)
    {   char ch = a[i];
        switch(ch)
        {
        case '(' : s.push(ch); break;
        case '^':
        case '-':
        case '+':
        case '/':
        case '*': if (s.IsEmpty())
                            s.push(ch);
                  else
                  if(s.peek()=='(')
                            s.push(ch);
                  else{
                  while (prec(ch)<=prec(s.peek()))

                     cout<<s.pop();
                     s.push(ch);}
                  break;
        case ')': while((t=s.pop())!='(')
                   cout<<t;
                    break;
        }
        if (isalnum(ch))
            cout<<ch;
    }
    while(!s.IsEmpty()) cout<<s.pop();
}
int main()
{
    char a[] = "2*3/(2-1)+5*3";
    Postfix(a);
    return 0;
}
