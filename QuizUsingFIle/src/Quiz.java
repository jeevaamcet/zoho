import java.io.*;
import java.util.Scanner;

public class Quiz {
    public static void main(String[] args) throws IOException {
        int answers[] = {3,2,2,3,3,3,3,1,1,1};

        Scanner in = new Scanner(System.in);
        int score = 0;

        File file = new File("QuestionBank.txt");

        BufferedReader br = new BufferedReader(new FileReader(file));
        System.out.println("Enter number of questions out of 10 : ");
        int n = Integer.parseInt(in.nextLine());
        for(int i = 0; i < n; i++)
        {
            String s = br.readLine();
            System.out.println(s);
            s = br.readLine();
            System.out.println(s);
            int x = Integer.parseInt(in.nextLine());
            if(answers[i] == x)
            {
                score++;
            }
        }
        if(score == n)
        {
            System.out.println("congratulations");
            System.out.println("you win ");
        }
        else
        {
            System.out.println("your Score is "+score);
        }
//
    }
}
