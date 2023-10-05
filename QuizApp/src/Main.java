import java.io.*;
import java.util.HashMap;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) throws IOException {
//            int answers[] = {3,2,2,3,3,3,3,1,1,1};
        HashMap<QuesionSet,Integer> quesBank = QuizSet.setQues();
        Scanner in = new Scanner(System.in);
        int score = 0;


//
//
            for(QuesionSet x :quesBank.keySet())
            {
                System.out.println(x.ques);
                System.out.println(x.option);
                System.out.println("Enter your answer : ");
                int ans = Integer.parseInt(in.nextLine());
                if(quesBank.get(x) == ans)
                {
//                    System.out.println("Correct !");
                    score++;
                }
                else
                {
//                    System.out.println("Wrong answer !");
//                    System.out.println("Your score : "+score);
//                    break;
                }

            }
            if(score == quesBank.size())
            {
                System.out.println("$$$$$$ Congratulations $$$$$$$");
                System.out.println("you win !");
            }
            else
            {
                System.out.println("Your score : "+score);
            }



    }
}
