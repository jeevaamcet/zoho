import java.util.ArrayList;


public class Database {
    ArrayList<Students> st = new ArrayList<>();

    public void addStudent(Students student)
    {
        st.add(student);
    }
    public void displayDetails()
    {
            for (Students x:st) {
                System.out.println("Name of student : "+x.name);
                System.out.println("********* Marks ********** ");
                for (int i: x.marks) {
                    System.out.println(i);
                }
                System.out.println("Average mark of student is : "+x.average+"\n");
            }
    }
}
