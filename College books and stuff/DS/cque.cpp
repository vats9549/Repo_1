#include <iostream>

using namespace std;

class cqueue
{	int front,rear;
	int q[3];
	int max;
public:

	cqueue(int m);
bool IsFull();
	bool IsEmpty();
	void enque(int item);
	int deque();
	void display();
	};
cqueue::cqueue(int m)
{
max=m;
front=0;rear=0;
}
bool cqueue::IsFull()
	{
		if((rear+1)% max==front)
			return true;
		return false;
	}
bool cqueue::IsEmpty()

	{	if(front==rear)
			return true;
		return false;
	}
	void cqueue::enque(int item)
{       if(IsFull())
	cout<<"cqueue is full \n";
	else{rear=((rear+1)%max);
		q[rear]=item;
		cout<<rear;
}}

int cqueue::deque()
{
	if(IsEmpty())
		{cout<<"stack is empty\n"; return -1;}
	else{
      front=(front+1)%max;
    return (q[front]);
}}
void cqueue::display()
{        if(IsEmpty())
		cout<<"lqueue is empty\n";
	else
	for(int i=(front+1)%max;i!=rear;i=(i+1)%max)
		cout<<q[i];
		cout<<q[rear];
}
int main()
{	cqueue que(3);
	int option,ele;

	do{

cout<<"1.insert\n2.delete\n3.display\n4.exit\n";
cin>>option;
switch(option)
	{
	case 1:	cout<<"enter the element to be pushed\n";
		cin>>ele;
		que.enque(ele);
		break;
	case 2:	cout<<que.deque();
		break;
	case 3:	que.display();break;
	case 4:return (0);
	}
	}while(1);
}

