class Bank{
    int getRateOfInterest(){
    return 10;
    }
    }
    class SBI extends Bank{
    int getRateOfInterest(){
    return 8;
    }
    }
    class ICICI extends Bank{
    int getRateOfInterest(){
    return 7;
    }
    }
    class AXIS extends Bank {
    int getRateOfInterest(){
    return 9;
    }
    }
    public class l6q3 {
    public static void main( String [] args){SBI b = new SBI();
    ICICI c = new ICICI();
    AXIS d = new AXIS();
    System.out.println("SBI " + b.getRateOfInterest());
    System.out.println("ICICI " + c.getRateOfInterest());
    System.out.println("AXIS " + d.getRateOfInterest());
    }
    }