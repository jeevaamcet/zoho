import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class School {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        HashMap<Integer, Detail> db = new HashMap<>();
        while (true) {
            System.out.println("Enter the choice : ");
            System.out.println("1.add teacher");
            System.out.println("2.add student");
            System.out.println("3.print details");
            System.out.println("4.exit");
            System.out.println("Enter the choice : ");
            int choice = Integer.parseInt(sc.nextLine());

            if (choice == 1) {
                System.out.println("Enter the teacher name : ");
                String tname = sc.nextLine();
                System.out.println("Enter the teacher id : ");
                String id = sc.nextLine();
                System.out.println("Enter the teacher age : ");
                int age = Integer.parseInt(sc.nextLine());
                Teacher tt = new Teacher(tname, id, age);
                System.out.println("Enter the class : ");
                int c = Integer.parseInt(sc.nextLine());

                if (db.containsKey(c)) {
                    db.get(c).teacherarr.add(tt);
                }
                else {
                    db.put(c, new Detail());
                    db.get(c).teacherarr.add(tt);
                }
            }
            else if (choice == 2) {
                System.out.println("Enter the class : ");
                int std = Integer.parseInt(sc.nextLine());
                System.out.println("Enter the student name : ");
                String sname = (sc.nextLine());
                System.out.println("Enter the roll number of student :");
                int roll = Integer.parseInt(sc.nextLine());
                Student st = new Student(sname, roll);

                if (db.containsKey(std)) {
                    db.get(std).studentarr.add(st);

                }
                else {
                    db.put(std, new Detail());
                    db.get(std).studentarr.add(st);
                }
            }
            else if (choice == 3) {
                System.out.println("1. student detail : ");
                System.out.println("2.teacher details : ");
                System.out.println("3.total school details : ");
                System.out.println("enter your choice : ");
                int c = Integer.parseInt(sc.nextLine());

                if(c == 1) {
                    System.out.println("1.All students : ");
                    System.out.println("2.specific class : ");
                    System.out.println("Enter the choice : ");
                    int a = Integer.parseInt(sc.nextLine());
                    if(a == 1)
                    {
                        for (int i : db.keySet())
                            for (Student s : db.get(i).studentarr) {
                                System.out.println("Student name : " + s.name);
                                System.out.println("Student roll no : " + s.rollno);
                            }
                    }
                    else
                    {
                        System.out.println("Enter the class : ");
                        int i = Integer.parseInt(sc.nextLine());

                        for (Student s : db.get(i).studentarr) {
                            System.out.println("Student name : " + s.name);
                            System.out.println("Student roll no : " + s.rollno);
                        }
                    }


                }
                else if(c == 2)
                {
                    System.out.println("1.All Teachers : ");
                    System.out.println("2.specific class : ");
                    System.out.println("Enter the choice : ");
                    int a = Integer.parseInt(sc.nextLine());
                    if(a == 1) {
                        for (int i : db.keySet())
                            for (Teacher t : db.get(i).teacherarr) {
                                System.out.println("teacher name : " + t.name);
                                System.out.println("teacher id : " + t.id);
                                System.out.println("teacher age : " + t.age);
                            }
                    }
                    else
                        {
                            System.out.println("Enter the class : ");
                            int i = Integer.parseInt(sc.nextLine());

                            for (Teacher t : db.get(i).teacherarr) {
                                System.out.println("teacher name : " + t.name);
                                System.out.println("teacher id : " + t.id);
                                System.out.println("teacher age : " + t.age);
                            }
                        }
                    }

                else if(c == 3)
                {
                    for (int i : db.keySet()) {
                        for (Student s: db.get(i).studentarr) {
                            System.out.println("Student name : "+s.name);
                            System.out.println("Student roll no : "+s.rollno);

                        }
                        for(Teacher t : db.get(i).teacherarr){
                            System.out.println("teacher name : "+t.name);
                            System.out.println("teacher id : "+t.id);
                            System.out.println("teacher age : "+t.age);
                        }
                    }
                }

            }
            else if(choice == 4)
            {
                break;
            }
            else {
                System.out.println("Invalid input please reenter the choice : ");
            }
        }
    }
}
class Student {
    Student(String name, int rollno) {
        this.name = name;
        this.rollno = rollno;
    }

    public String name;
    public int rollno;


}
class Teacher
{
    Teacher(String name,String id, int age)
    {
        this.name = name;
        this.id = id;
        this.age = age;
    }
    public String name;
    public int age;
    public String id ;

}
class Detail
{
    ArrayList<Student> studentarr = new ArrayList<>();
    ArrayList<Teacher> teacherarr = new ArrayList<>();
}
