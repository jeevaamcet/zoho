import java.util.*;

public class KeyBoard{
    public static void main(String []args){

        String str = "";
        int count = 1;
        int button = 0;
        int val=0;

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the string  : ");
        str = sc.nextLine();

        Map<Character, Integer>freq = new HashMap<>();
        Map<Character, Integer>pos = new HashMap<>();

        for(char k: str.toCharArray()){
            if(freq.containsKey(k)){
                freq.put(k,freq.get(k)+1);
            }
            else
            {
                freq.put(k,1);
            }
        }

        Set<Map.Entry<Character, Integer>> li = freq.entrySet();

        ArrayList <Map.Entry<Character, Integer>> list = new ArrayList<>(li);

        // for(Map.Entry<Character, Integer> x: list){
        //     System.out.println(x);
        // }

        Collections.sort(list,(p1,p2)->{
            return p2.getValue().compareTo(p1.getValue());
        });

        // for(Map.Entry<Character, Integer> x: list){
        //     System.out.println(x);
        // }

        for(Map.Entry<Character, Integer> p: list)
        {
            pos.put(p.getKey(),button);

            if(button <= 25)
            {
                button += 3;
            }

            else 
            {
                button = count;
                count++;
            }
        }

        for(char c : str.toCharArray())
        {
            int temp = pos.get(c);

            if( temp % 3 == 0 )
                {
                    val += 1;
                } 
            else if(temp %3 == 1 )
                {
                    val += 2;
                }
            else{
                    val += 3;
                }
        }
        
        System.out.println(val);
    }
}