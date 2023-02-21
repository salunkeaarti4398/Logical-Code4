import java.util.*;

class Program272
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please Enter String  :");
        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();
        int iRet = obj.CapCount(str);
        System.out.println("Number of Capital case letters are : "+iRet);

    }
}

class MarvellousX
{
    public int CapCount(String s)
    {
        int iCnt = 0;

        for(int i = 0; i < s.length(); i++)
        {
            if((s.charAt(i) >= 'A') && (s.charAt(i) <= 'Z'))
            {
                iCnt++;
            }
        }
        return iCnt;
    }
}