//import java.util.Scanner;



class Box
{
    double width;
    double height;
    double depth;
    // This is the constructor for Box.
    Box()
    {
        System.out.println("Constructing Box");
    width = 10;
    height = 10;
    depth = 10;
}
// compute and return volume
    double volume()
    {
        return width * height * depth;
    }
}
    public class classExamples {
public static void main(String args[])
    {
// declare, allocate, and initialize Box objects
    Box mybox1 = new Box();
    Box mybox2 = new Box();
    Box b1 = new Box();
    Box b2 = b1;
    b1 = null;
    double vol;
// get volume of first box
    vol =b2.volume();
    System.out.println("Volume is " + vol);
// get volume of second box
    vol = b2.volume();
    System.out.println("Volume is " + vol);
    }
}