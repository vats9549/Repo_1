import java.util.Scanner;
class book
{
   String title,author , edition;
   book(String title,String author , String edition)
    {
        this.title=title;
        this.author=author;
        this.edition=edition;
    }
}
class l5r6{

     public static void main(String args[])
    {
        book ob1=new book("Potter","Harry","2.0");
        book ob2=new book("Java","Sumith","3.0");
        book ob3=new book("Tom and Jerry","Tom","2.0");
        book ob4=new book("c++","nar","2.0");
        book ob5=new book("Test","Harry","2.0");
        book ob6=new book("liverpool","klop","2.0");
        
        book list[]={ob1,ob2,ob3,ob4,ob5,ob6};
        
        Scanner in= new Scanner(System.in);
        System.out.println("enter author to search");
        String auth=in.nextLine();
        
        for(int i=0;i<6;i++)
        {
            if(list[i].author.equalsIgnoreCase(auth))
                System.out.println("title: "+list[i].title );
        }
        
    }
}