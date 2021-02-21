import java.util.*;
public class L9R2
{
    public static void main(String args[])
    {
        Scanner in =new Scanner(System.in);
        System.out.println("enter string");
        String s=in.nextLine();
        
        System.out.println("enter replacing word");
        String w=in.nextLine();
        
        int a[]=new int[52];
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)>=97&&s.charAt(i)<=122)
            a[s.charAt(i)-97]++;
            if(s.charAt(i)>=65&&s.charAt(i)<=90)
            a[s.charAt(i)-65+26]++;  
            
        }
        
        String ns="";
        
        for(int i=0;i<s.length();i++)
        {
           if(s.charAt(i)>=97&&s.charAt(i)<=122&&a[s.charAt(i)-97]>1)
               ns+=w;
           else if(s.charAt(i)>=65&&s.charAt(i)<=90&&a[s.charAt(i)-65+26]>1)
               ns+=w;
           else
               ns+=s.charAt(i);
        }
        System.out.println(ns);
    }
    
}