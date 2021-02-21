import java.util.Scanner;

class Student {
Scanner sc = new Scanner(System.in);
String name;
int marks[] = new int[3];
int roll;
double percent=0;
char grade;
Student(){
System.out.println("Name " );
name =sc.nextLine();
System.out.println("roll " );
roll =sc.nextInt();
System.out.println("Marks in 3 " );
for(int i=0;i<3;i++){
String s = sc.next();
marks[i] =Integer.parseInt(s);
}
}
void calc_percent(){
for(int i=0;i<3;i++){
percent += marks[i];
}
System.out.println("Percent is " + (percent/3));}
void calc_grade(){
if (percent/3 >80.0)grade='A' ;
else grade='B';
System.out.println("Grade is " + grade);
}
}
public class L10R9 {
public static void main(String [] args){
try
{
Student s = new Student();
s.calc_percent();
s.calc_grade();
}
catch (NumberFormatException ex)
{
System.out.println("exception is " + ex);
}
}
}