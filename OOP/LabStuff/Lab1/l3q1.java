import java.util.Scanner;
public class l3q1 {
public static void main( String [] args){
Scanner sc = new Scanner(System.in);
System.out.println("Enter a number ");
int num = sc.nextInt();
int n =num;
int ctr=3;

num =n;
int sum=0;
while(num>0){
sum+=Math.pow((num%10) , ctr);
num=num/10;
}
if(sum==n)System.out.println("Armstrong number");
else System.out.println("Not an armstrong number");
}
}