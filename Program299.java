import java.util.*;

/*
    Input : 4529

    9   2   5   4

*/


class Program299
{
    public static void main(String a[])
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        int i = sobj.nextInt();
        
        pobj.Display(i);
    }
}

class Pattern
{
    public void Display(int iNo)
    {
        int iDigit = 0;

        while(iNo != 0)
        {
           iDigit = iNo % 10;
           System.out.print(iDigit+"\t");
           iNo = iNo / 10;
        }
        System.out.println();
    }
}
