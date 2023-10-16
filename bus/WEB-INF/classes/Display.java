import jakarta.servlet.http.*;
import java.io.*;
import java.util.*;



public class Display extends HttpServlet{
    public void doGet(HttpServletRequest req,HttpServletResponse res)throws IOException{

        PrintWriter pr = res.getWriter();

        for( int key : Database.hp.keySet())
        {
            for( Student s :Database.hp.get(key).studentList)
            {
                pr.println("Student name "+s.name);
                pr.println("Student age "+s.age);
            }
            for( Teacher t :Database.hp.get(key).teacherList)
            {
                pr.println("Teacher name "+t.name);
                pr.println("Teacher subject "+t.sub);
            }
        }
        
    }
}