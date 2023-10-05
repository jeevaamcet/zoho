import java.util.HashMap;

public class QuizSet {

    public static HashMap<QuesionSet,Integer> setQues()
    {
        HashMap<QuesionSet,Integer> quesBank = new HashMap<>();
        QuesionSet q1 = new QuesionSet("What is the capital of France ?","1) Berlin  2) Madrid   3) Paris   4) Rome");
        QuesionSet q2 = new QuesionSet("Who is the author of the famous play Romeo and Juliet ?","1) Charles Dickens    2) William Shakespeare   3) Jane Austen   4) Leo Tolstoy");
        QuesionSet q3 = new QuesionSet("Which planet is known as the Red Planet ?","1) Venus   2) Mars   3) Jupiter   4) Saturn");
        QuesionSet q4 = new QuesionSet("What is the largest mammal in the world ?","1) Elephant  2) Giraffe   3) Blue Whale   4) Lion");
        QuesionSet q5 = new QuesionSet("Who was the first President of the United States ?","1) Benjamin Franklin   2) Thomas Jefferson   3) George Washington   4) Abraham Lincoln");
        QuesionSet q6 = new QuesionSet("Which gas makes up the majority of Earth's atmosphere? ","1) Oxygen     2) Carbon Dioxide   3) Nitrogen 4) Hydrogen");
        QuesionSet q7 = new QuesionSet("Which famous scientist is known for his theory of relativity (E=mc²)?","1) Isaac Newton     B) Charles Darwin   3) Albert Einstein  4) Stephen Hawking");
        QuesionSet q8 = new QuesionSet("What is the longest river in the world?"," 1) Nile   2) Amazon  3) Mississippi  4) Yangtze");
        QuesionSet q9 = new QuesionSet("In which year did Christopher Columbus first arrive in the Americas?","1) 1492   2) 1510   3) 1620   4) 1776");
        QuesionSet q10 = new QuesionSet("What is the currency of Japan? ","1) Yen   2) Won  3) Ringgit  4) Baht");

        quesBank.put(q1,3);
        quesBank.put(q2,2);
        quesBank.put(q3,2);
        quesBank.put(q4,3);
        quesBank.put(q5,3);
        quesBank.put(q6,3);
        quesBank.put(q7,3);
        quesBank.put(q8,1);
        quesBank.put(q9,1);
        quesBank.put(q10,1);

        return quesBank;
    }



}
