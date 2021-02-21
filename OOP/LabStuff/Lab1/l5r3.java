import java.util.Scanner;

class Time {
int hours , minutes , seconds;
Time(){
hours =0 ;
minutes = 0 ;
seconds = 0;
}
Time(int h , int m , int s){
hours = h ;
minutes = m ;
seconds = s;
}
void dispTime(){
System.out.print(" The time is ");
System.out.println( hours + " : " + minutes + " : " + seconds + " : ");
}
void addTime(Time t1 , Time t2){
seconds = (t1.seconds + t2.seconds)%60;
minutes = (t1.minutes + t2.minutes)%60 + (t1.seconds + t2.seconds)/60;
hours = (t1.hours + t2.hours)%24 + (t1.minutes + t2.minutes)/60 ;
}
}
public class l5r3 {
public static void main( String [] args){
Scanner sc = new Scanner(System.in);
Time t1 = new Time( 19 , 58 , 54);
Time t2 = new Time( 19 , 45 , 59);t1.dispTime();
t2.dispTime();
Time t3 = new Time();
System.out.println("after adding time");
t3.addTime(t1 , t2);
t3.dispTime();
}
}