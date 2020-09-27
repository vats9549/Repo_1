import java.util.Scanner;

interface Polygon{
    public int area(int b, int h);
    public int perimeter(int a, int b, int c);
} 

public class  Triangle implements Polygon {
    public int area(int b, int h ){
        return(b*h);
    }
    public int perimeter(int a, int b, int c){
        return(a+b+c);
    }
        

    public static void main(String[] args) {
        Triangle triangle1 = new Triangle();
        int a =triangle1.area(4,9);
        int b =triangle1.perimeter(2,9,3);
        System.out.println(a+" "+b);
    }
}