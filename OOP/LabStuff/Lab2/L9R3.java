import java.util.Arrays;
import java.util.Scanner;

public class L9R3 {
public static void main(String [] args){Scanner sc = new Scanner(System.in);
System.out.println("Enter the string ");
String str = sc.nextLine();
System.out.println("1.Check for Palindrome ");
System.out.println("2.Write in aplhabetical order");
int c = sc.nextInt();
switch(c){
case 1:
StringBuffer s = new StringBuffer(str);
s.reverse();
if(s.toString().compareTo(str)==0) System.out.println("It is Palindrome");
else System.out.println("It is not Palindrome");
break;
case 2:
char charArray[] = str.toCharArray();
Arrays.sort(charArray);
System.out.println("Sorted is " + new String(charArray));
break;
default:
System.out.println("Wrong input " );
}
}
}