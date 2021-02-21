import java.util.Scanner;
public class l3q5 {
public static void main( String [] args){
Scanner sc = new Scanner(System.in);
int a[]={1,2,3,1,2,1,5,6,7};
int searchValue;
System.out.println("Enter the search value ");
searchValue = sc.nextInt();
System.out.print( searchValue + " was found at locations ");
for(int i=0;i<a.length ; i++){
if(searchValue == a[i])System.out.print(" a[" + i + "] ,");
}
}
}