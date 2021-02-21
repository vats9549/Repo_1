import java.util.Scanner;
/**
*
* @author student
*/
class Account {
String name , accountNum , type;
Scanner sc = new Scanner(System.in);
Account(){
System.out.println("Enter name ");
name=sc.nextLine();
System.out.println("Enter acc number ");
accountNum=sc.nextLine();
System.out.println("Enter type of account ");
type=sc.nextLine();
}
}
class SavingAccount extends Account{
    double balance = 5000.0;
    SavingAccount(){
    super();
    System.out.println("Saving Account created , initial balance : " + balance);
}
void depositAmount(){
System.out.println("Enter amount to deposit " );
int amt=sc.nextInt();balance+=amt;
}
void dispBalance(){
System.out.println("Balance is " + balance);
}
void depositInterest(){
balance += balance*0.06;
System.out.println("Interest deposited @6% " );
}
void withdrawAmount(){
System.out.println("Enter amount to withdraw " );
int amt=sc.nextInt();
if(amt>balance){
System.out.println("insufficient balance , cannot withdraw " );
return;
}
balance -= amt;
}
}
class CurrentAccount extends Account{
double balance = 5000.0;
CurrentAccount(){
super();
System.out.println("Current account created , initial balance : " + balance);
}
void depositAmount(){
System.out.println("Enter amount to deposit " );
int amt=sc.nextInt();balance+=amt;
System.out.println("Amount deposited " );
}
void dispBalance(){
if(balance < 4000){
System.out.println("Your balance is below limit , fine of Rs.100/- imposed");
balance -= 100;
}
System.out.println("Balance is " + balance);
}
void withdrawAmount(){
System.out.println("Enter amount to withdraw " );
int amt=sc.nextInt();
if(amt>balance){
System.out.println("insufficient balance , cannot withdraw " );
return;
}
balance -= amt;
}
}
public class l6q1 {
public static void main( String [] args){
System.out.println("For savings account " );
SavingAccount sa = new SavingAccount();
sa.depositAmount();
sa.dispBalance();
sa.depositInterest();
sa.dispBalance();sa.withdrawAmount();
sa.dispBalance();
System.out.println("For current account " );
CurrentAccount ca = new CurrentAccount();
ca.depositAmount();
ca.dispBalance();
ca.withdrawAmount();
ca.dispBalance();
}
}