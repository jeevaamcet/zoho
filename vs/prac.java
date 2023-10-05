import java.util.Scanner;

public class prac
{
    public static void main(String[] a)
    {
        Scanner sc = new Scanner(System.in);
           String str = "unchanged";
           int num =-1;
        

        if(sc.hasNextInt())
        {
            // str = sc.nextLine();
            // num = sc.nextInt();

            System.out.println("Success");
        }
        else
        {
            System.out.println(str+" "+num);
        }
    }
    static String toString(int n)
    {
        return n+"";
    }
}