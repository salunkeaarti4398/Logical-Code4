import java.util.*;

/*
    *   *   *   *
    *   *   *   *
    *   *   *   *
    *   *   *   *

 */
class Program287
{
    public static void main(String A[])
    {
        Pattern pobj = new Pattern();
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int i = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        int j = sobj.nextInt();

        pobj.Display(i,j);
    }
}

class Pattern
{
    public void Display(int iRow, int iCol)
    {
        for(int i = 0; i < iRow ; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
    }
}
