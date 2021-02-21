import java.util.*;
public class L9R4 {
public static void main(String [] args){
Scanner sc = new Scanner(System.in);
System.out.println("Enter string 1 ");
String str1 = sc.nextLine();
System.out.println("Enter string 2 ");
String str2 = sc.nextLine();
System.out.println("1.To compare two strings ");
System.out.println("2.convert the uppercase character to lower and vice-versa");
System.out.println("3.display whether an entered string is a substring of the other or not ");
System.out.println("4.If the entered string is a substring of the other, replace it with “Hello” ");
int c = sc.nextInt();switch(c){
case 1:
if(str1.compareTo(str2)==0)System.out.println("equal String " );
else if(str1.compareTo(str2)>0)System.out.println(" String1 is greater " );
if(str1.compareTo(str2)<0)System.out.println("String2 is greater " );
break;
case 2:
char charArray1[] = str1.toCharArray();
for(int i=0;i<charArray1.length;i++){
if(charArray1[i]>=65 && charArray1[i]<=90)charArray1[i]+=32;
else if(charArray1[i]>=97 && charArray1[i]<=122)charArray1[i]-=32;
}
System.out.println("New string 1 is " + new String(charArray1) );
break;
case 3:
if(str1.contains(str2))System.out.println("Word found " );
else System.out.println("Word not found " );
case 4:
System.out.println("String now " + str1.replace(str2,"Hello"));
break;
default:
System.out.println("Wrong input " );
}
}
}