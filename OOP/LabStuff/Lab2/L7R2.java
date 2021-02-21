class ObjCreation{
static int ctr=0;
ObjCreation(){
ctr++;
}
}
public class L7R2 {
public static void main(String [] args){
ObjCreation ob1 = new ObjCreation();
ObjCreation ob2 = new ObjCreation();
ObjCreation ob3 = new ObjCreation();
ObjCreation ob4 = new ObjCreation();
System.out.println("number of objects created is " + ob4.ctr );
}}