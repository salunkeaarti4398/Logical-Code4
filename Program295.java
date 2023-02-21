import java.util.*;

/*
    Row = 4
    Col = 4

    1   2   3   4
    5   6   7   8   
    9   1   2   3   
    4   5   6   7

 */
class Program295
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
        int iCnt = 0;

        for(int i = 1; i <= iRow ; i++)
        {
            for(int j = 1; j <= iCol; j++)
            {
                
                System.out.print(((iCnt%9)+1)+"\t");
                iCnt++;
            }
            System.out.println();
        }
    }
}
