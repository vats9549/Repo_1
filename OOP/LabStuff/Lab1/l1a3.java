import java.util.Scanner;
/**
*
* @author student
*/
public class l1a3 {
public static void main( String [] args){
Scanner sc = new Scanner(System.in);
System.out.println("Enter the number");
int num = sc.nextInt();
for(int i=1;i<=10;i++){
System.out.println( num + "*" + i + " = " + (num*i));
}
}
}