import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        HashMap<Integer,Database> hp = new HashMap<>();
        Scanner sc = new Scanner(System.in);
        int key;
        String name ;

        while(true)
        {
            System.out.println("Enter the choice to perform : ");
            System.out.println("1.Add student");
            System.out.println("2.display details ");
            System.out.println("3.exit");

            int choice = Integer.parseInt(sc.nextLine());

            if(choice == 3)
            {
                break;
            }

            System.out.println("Enter the class to proceed ");
            key = Integer.parseInt(sc.nextLine());

            if(choice == 1)
            {
                System.out.println("Enter the name of student : ");
                name = sc.nextLine();

                ArrayList<Integer> marks = addMarks(sc);

                if(hp.containsKey(key))
                {
                    hp.get(key).addStudent(new Students(name,marks));
                }
                else
                {
                    Database db = new Database();
                    db.addStudent(new Students(name,marks));
                    hp.put(key,db);

                }

            }
            else if(choice == 2)
            {
                if(!hp.containsKey(key))
                {
                    System.out.println("invalid class : "+key+" Please add class details first :\n");
                }

                hp.get(key).displayDetails();
            }


        }

    }
    public static ArrayList<Integer> addMarks(Scanner sc)
    {
        ArrayList<Integer> marks = new ArrayList<>();
//            Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of subjects : ");
        int n = Integer.parseInt(sc.nextLine());
        for(int i = 0; i < n; i++)
        {
            System.out.println("Enter the mark for subject "+(i+1)+" : ");
            marks.add(Integer.parseInt(sc.nextLine()));
        }
        return marks;
    }
}
