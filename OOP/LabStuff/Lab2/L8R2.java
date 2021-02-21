import java.util.Scanner;

abstract class Shape{
Scanner sc = new Scanner(System.in);
public abstract void dispArea();
}
class Rectangle extends Shape{
int l , b;
Rectangle(){
System.out.println("For Rectangle ");
System.out.println("enter length ");
l = sc.nextInt();
System.out.println("enter breadth ");
b = sc.nextInt();}
public void dispArea(){
System.out.println("Area of Rectangle is " + (l*b));
}
}
class Circle extends Shape{
int n;
Circle(){
System.out.println("For Circle ");
System.out.println("enter r ");
n = sc.nextInt();
}
public void dispArea(){
System.out.println("Area of circle is " + (float)(3.14*n*n));
}
}
public class L8R2 {
public static void main(String [] args){
Rectangle r = new Rectangle();
r.dispArea();
Circle s = new Circle();
s.dispArea();
}
}