import java.util.*;

public class HAsh{
    public static void main(String[] ar)
    {
        Scanner sc = new Scanner(System.in);
        Map<Character, String> hash = new HashMap<>();

        String Name;
        char k;

        for(int i = 0; i < 3; i++)
        {
            System.out.println("Enter the Name : ");
            Name = sc.nextLine();
            hash.put(Name.charAt(0),Name);
        }
        for(char c: hash.keySet()){
            System.out.println(hash.keySet()+" "+hash.values());
        }

    }
}