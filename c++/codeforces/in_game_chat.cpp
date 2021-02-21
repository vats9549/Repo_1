#include <iostream>
using namespace std;
/*You have been assigned to develop a filter for bad messages in the in-game chat. A message is a string S of length n, consisting of lowercase English letters and characters ')'. The message is bad if the number of characters ')' at the end of the string strictly greater than the number of remaining characters. For example, the string ")bc)))" has three parentheses at the end, three remaining characters, and is not considered bad.Input
The first line contains the number of test cases t (1≤t≤100). Description of the t test cases follows.

The first line of each test case contains an integer n (1≤n≤100). The second line of each test case contains a string S of length n, consisting of lowercase English letters and characters ')'.

Output
For each of t test cases, print "Yes" if the string is bad. Otherwise, print "No".

You can print each letter in any case (upper or lower).*/
int main()
{
        ios_base::sync_with_stdio(0); cin.tie(0);int t; cin>>t;
        while(t--)
        {
            int n; cin>>n;            string s; cin>>s;            int c=0,d=0,index;            bool x=true;            for(int i=n-1;i>=0;i--){
 
 
                if(s[i]==')'&& x)
                {
                    c++;
                }
                if(s[i]!=')')
                {
                    x=false;
 
                }
 
            }
      if(c>n/2)
        {cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
}
    return 0;
}