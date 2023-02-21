import java.util.*;

class Program270
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please Enter String  :");
        String str = sobj.nextLine();

        MarvellousX obj = new MarvellousX();
        obj.Display(str);

    }
}

class MarvellousX
{
    public void Display(String s)
    {
        for(int i = 0; i < s.length(); i++)
        {
            System.out.println(s.charAt(i));
        }
    }
}