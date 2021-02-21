import java.util.Scanner;
import java.io.*;
/**
*
* @author student
*/
public class L10R8 {
public static void main(String [] args){
Scanner sc = new Scanner(System.in);
int arr[] = {0 , 1 , 2 , 3 ,4};
try {
for (int i=0; i<=arr.length; i++)System.out.println(arr[i]);
}
catch (ArrayIndexOutOfBoundsException e){
System.out.println("error is " + e);
}
finally{
System.out.println("Exiting");
}
}
}