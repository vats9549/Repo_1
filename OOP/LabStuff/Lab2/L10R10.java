import java.util.Scanner;

class MyException extends Exception
{
String s;
MyException(String s){
this.s=s;
}
public String toString(){
return s;
}
}
public class L10R10 {
public static void main(String [] args){
try
{
throw new MyException("User Defined Error");
}
catch (MyException ex)
{
System.out.println("exception is " + ex);
}
}
}