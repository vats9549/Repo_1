import java.util.Scanner;
/**
*
* @author student
*/
public class l4q4 {
public static void main( String [] args){
Scanner sc = new Scanner(System.in);
System.out.println("Enter row1 col1 row2 col2 ");
int r1 , c1 , r2, c2;
r1 = sc.nextInt();
c1 = sc.nextInt();
r2 = sc.nextInt();
c2 = sc.nextInt();
if(c1!=r1){
System.out.println("Cannot multiply matrix using above dimensions");
return;
}
int arr1[][] = new int[r1][c1];
int arr2[][] = new int[r2][c2];
System.out.println("Enter the elements for matrix 1");
for(int i=0;i<r1;i++){
for(int j=0;j<c1;j++)arr1[i][j]=sc.nextInt();}
System.out.println("Enter the elements for matrix 2");
for(int i=0;i<r2;i++){
for(int j=0;j<c2;j++)arr2[i][j]=sc.nextInt();
}
System.out.println("Your matrix 1 ");
for(int i=0;i<r1;i++){
for(int j=0;j<c1;j++)System.out.print(arr1[i][j]+" ");
System.out.println();
}
System.out.println("Your matrix 2 ");
for(int i=0;i<r2;i++){
for(int j=0;j<c2;j++)System.out.print(arr2[i][j]+" ");
System.out.println();
}
int c[][] = new int[r1][c2];
int i,j;
int sum=0;
for(i=0;i<r1;i++){
for( j=0;j<c2;j++){
c[i][j]=0;
for(int k=0 ;k<c1;k++)c[i][j]+=arr1[i][k]*arr2[k][j];
}
}
System.out.println("New Matrix after multiplication is ");
for(i=0;i<r1;i++){
for( j=0;j<c2;j++)System.out.print(c[i][j]+" ");
System.out.println();}
}
}