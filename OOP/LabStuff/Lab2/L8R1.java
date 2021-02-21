import java.util.Scanner;

interface Company {
Scanner sc = new Scanner(System.in);
void calculate_Total_Sales();}
class Hardware implements Company {
String category;
String manufacturer;
static int sales=0;
Hardware() {
System.out.println("For hardware");
System.out.println("enter category ");
this.category = sc.nextLine();
System.out.println("enter manufacturer ");
this.manufacturer = sc.nextLine();
sales++;
}
public void calculate_Total_Sales() {
System.out.println("Total hardware sales is " + sales);
}
}
class Software implements Company {
String type;
String operatingSystem;
static int sales=0;
Software() {
System.out.println("For software:");
System.out.println("Enter type ");this.type = sc.nextLine();
System.out.println("Enter operating system ");
this.operatingSystem = sc.nextLine();
sales++;
}
public void calculate_Total_Sales() {
System.out.println("Total software sales: " + sales);
}
}
public class L8R1 {
public static void main(String args[]) {
Software s1 = new Software();
Software s2 = new Software();
Software s3 = new Software();
s3.calculate_Total_Sales();
Hardware h1 = new Hardware();
Hardware h2 = new Hardware();
h2.calculate_Total_Sales();
}
}