import java.util.*;

public class Shyam{
    public static void main(String[] args){
        HashMap<Integer, Integer> hp = new HashMap<>();
        int arr[] = {5,4,8,2,6,6};
        HashSet<Integer> li =new HashSet<>();
        for(int x: arr)
        {
            li.add(x);
        }

        System.out.println(li);
        
        arr = new int[li.size()];
        int i = 0;

        for(int s: li)
        {
            arr[i++] = s;
        }
        // li.toArray(arr);

        System.out.println(Arrays.toString(arr));

        int max  = setMap(arr,hp);
        for(int x: hp.keySet())
        {
            if(max == hp.get(x))
            {
                System.out.println(x);
            }
        }
    }
    

    static int setMap(int arr[],HashMap<Integer,Integer> hp)
    {
        int max = 0;
        for(int i = 0; i < arr.length; i++)
        {
            if(i == 0)
            {
                hp.put((arr[i]),(arr[i+1]-arr[i]));
            }
            else if( i == arr.length-1)
            {
                hp.put((arr[i]),(arr[i]-arr[i-1]));
            }
            else
            {
                hp.put((arr[i]),((arr[i]-arr[i-1])+(arr[i+1]-arr[i])));
            }
            if(max < hp.get(arr[i]))
            {
                max = hp.get(arr[i]);
            }
            
        }
        return max;
    }
}