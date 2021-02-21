import java.util.Scanner;
public class l2q3 {
public static void main( String [] args){
Scanner sc = new Scanner(System.in);
char chr;
do{
System.out.println("Enter number operator and number ");
float f1 = sc.nextFloat();
char ch = sc.next().charAt(0);
float f2 = sc.nextFloat();
switch(ch){
case '+':
System.out.println("Addition is " + (f1+f2));
break;
case '-':
System.out.println("Subtraction is " + (f1-f2));
break;case '*':
System.out.println("Multiplication is " + (f1*f2));
break;
case '/':
System.out.println("Division is " + (f1/f2));
break;
default:
System.out.println("Wrong operator");
}
System.out.println("continue y/n");
chr=sc.next().charAt(0);
}while(chr !='n');
}
}