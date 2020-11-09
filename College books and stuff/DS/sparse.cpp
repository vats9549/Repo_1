#include <iostream>

using namespace std;
class triples{
 public:   int row; int col; int ele;
 };

int main()
{
  triples s[20];//array of objects
  int m,n,c=0,k=0,e;

  cout<<"Enter matrix dimensions";
  cin>>m>>n;
  for(int i=0;i<m;i++)
    for(int j=0;j<n;j++)
  {  cin>>e;
     if(e!=0) { c++; s[++k].row=i;
     s[k].col=j; s[k].ele=e;}

  }
    s[0].row=m; s[0].col=n; s[0].ele=c;

    for(int i=0;i<=s[0].ele;i++)
cout<<s[i].row<<"\t"<<s[i].col<<"\t"<<s[i].ele<<endl;


    return 0;
}
