import java.util.*;

public class Main{
    public static void main(String[] args)
    {
    //    Hascet<Integer> hs = new Hascet<>();
       NavigableSet<Integer> c = new TreeSet<>();


        c.add(3);
        c.add(1);
        c.add(2);
        c.add(2);
        c.add(4);
        c.add(5);
        c.add(6);
        c.add(7);
        c.add(8);
        c.add(9);
        c.add(10);
        System.out.println(c.pollFirst());


        // cc =c.clone();

        // Iterator<Integer> i = cc.iterator();

        // while (i.hasNext())
        // {
        //     System.out.println(i.next());
        // }
        System.out.println(c.toString());
    }
}