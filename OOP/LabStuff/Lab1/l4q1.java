import java.util.Scanner;

public class l4q1{
public static void main( String [] args){
Scanner sc = new Scanner(System.in);
System.out.println("Enter n ");
int n = sc.nextInt();int arr[][] = new int[n][n];
System.out.println("Enter the elements");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++)arr[i][j]=sc.nextInt();
}
System.out.println("Your matrix ");
for(int i=0;i<n;i++){
for(int j=0;j<n;j++)System.out.print(arr[i][j]+" ");
System.out.println();
}
int i,j;
int sum=0;
for( i=0;i<n ;i++) sum+=arr[i][n-i-1];
System.out.println("sum of Non Principal diagonal is " + sum);
}
}