#include <iostream>
#include <cstring>
using namespace std;
typedef char* elt_type;
class stack
{	int top;
	char a[20][20];
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
		strcpy(a[++top],item);
}

elt_type stack::pop()
{
	if(IsEmpty())
		{cout<<"stack is empty\n"; return NULL;}
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
void toinfix(char * exp){
    stack s(20);
    int i; char opd1[20],opd2[20],op[2];
    for(i=0;exp[i]!='\0';i++){
        if(isalnum(exp[i])){
            opd1[0]=exp[i];opd1[1]='\0';
                s.push(opd1);

        }
        else {
                strcpy(opd2,s.pop());
                strcpy(opd1,s.pop());
                op[0]=exp[i];op[1]='\0';
                char result[]="\0";
                strcat(result,opd1);
                strcat(result,op);
                strcat(result,opd2);
                s.push(result);

        }
    }
cout<<s.pop();}
int main(){
    char postfix[]="ABC*+";
    toinfix(postfix);

}
