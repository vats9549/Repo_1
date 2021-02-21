import java.util.Scanner;

class StudentDetail{
Scanner sc = new Scanner(System.in);
String name;
int id;
static String college_name="MIT";
StudentDetail(){
System.out.println("Name? ");
name = sc.nextLine();
System.out.println("ID? ");
id= sc.nextInt();
}void display_details(){
System.out.println("Student Name : " + name );
System.out.println("Student ID : " + id );
System.out.println("Student college : " + college_name );
}
}
public class L7R1 {
public static void main(String [] args){
StudentDetail[] sd = new StudentDetail[5];
for(int i=0;i<5;i++){
System.out.println("Enter the details of stud " + (i+1));
sd[i] = new StudentDetail();
}
System.out.println("Details are " );
for(int i=0;i<5;i++)sd[i].display_details();
}
}