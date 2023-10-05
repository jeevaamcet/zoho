import java.util.*;

public class Revstr{
    public static void main(String []args){
        String s = "hello";
        char[] c = s.toCharArray();
        for(int i = 0,j = c.length-1; i <j; i++,j--)
        {
            if(Character.isVowel(c[i]))
            {
                c[i]=0;
            }
        }
    }

}