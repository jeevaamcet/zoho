import java.util.*;
public class Median{
    public static void main(String []a)
    {
        int num1[] = {1,2};
        int num2[] = {3,4};

        int m[] = merge(num1,num2);
        // Collections.sort(m);
        
        System.out.println(Arrays.toString(m));

        int n = m.length / 2;
        if(m.length % 2 == 0)
        {
            System.out.println((double)((m[n])+m[n-1])/2);
        }
        else
        {
            System.out.println((m[n]));
        }
    }

    static int[] merge(int[] n1, int[] n2)
    {
        int m[] = new int[n1.length+n2.length];
        int j = 0;
        for(int i = 0; i < (n1.length+n2.length); i++){
            if(i < n1.length)
            {
                m[i] = n1[i];
            }
            else{
                m[i] = n2[j++];
            }
        }
        return m;
    }
}
