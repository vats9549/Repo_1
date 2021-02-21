import java.util.Scanner;
public class L9R1 {
public static void main(String [] args){
Scanner sc = new Scanner(System.in);
String str;
int ctr_line=0;
int ctr_character=0;
int ctr_words=0;
int ctr_vowels=0;
StringBuffer s = new StringBuffer();
System.out.println("Enter the string (double enter to terminate input) ");
while(true){str=sc.nextLine();
if(str.length()==0)
break;
ctr_character+=str.length();
ctr_line++;
String words[] = str.split(" ");
ctr_words+=words.length;
for(int i=0;i<str.length();i++){
char c=str.charAt(i);
switch(c){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
ctr_vowels++;
break;
}
}
s=s.append(str);
s=s.append("\n");
}
System.out.println("Number of lines is " + ctr_line);
System.out.println("Number of characters is " + ctr_character);
System.out.println("Number of words is " + ctr_words);
System.out.println("Number of vowels is " + ctr_vowels);}
}