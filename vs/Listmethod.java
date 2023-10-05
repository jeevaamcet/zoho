
import java.util.ArrayList;
import java.util.Scanner;
public class Listmethod extends ArrayList<Integer>
{
    public static void main (String [] a)
    {
        Listmethod list = new Listmethod();
        ArrayList<Integer> list2 = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        list.add(4);
        list.add(5);
        list.add(6);
        list.add(7);
        list.add(8);

        // for(int i = 0; i < 5; i++)
        // {
        //     int n = sc.nextInt();
        //     list.add(n);
        // }
        // for(int x: list)
        // {
            list.removeRange(1,4);
            // list.set(1,0);
            // list.remove(0);
            // list2=list.clone();
            if(list.contains(8))
            {
                System.out.println(list);
            }
            
        // }
    }

}