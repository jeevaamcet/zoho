import jakarta.servlet.http.*;
import java.util.*;
import java.io.*;

public class AddStd extends HttpServlet{


    public void doGet(HttpServletRequest req,HttpServletResponse res)throws IOException{
        res.sendRedirect("addstd.html");
    }
    public void doPost(HttpServletRequest req,HttpServletResponse res)throws IOException{

        String name = req.getParameter("name");
        int age = Integer.parseInt(req.getParameter("age"));
        Student st = new Student(name,age);
        int cls = Integer.parseInt(req.getParameter("cls"));
    
        if(Database.hp.containsKey(cls))
        {
            Database.hp.get(cls).studentList.add(st);
        }
        else{
            Database.hp.put(cls,new Lists());
            Database.hp.get(cls).studentList.add(st);
        }
        // Database.hp.put(class,studentList);

        // HttpSession ses = req.getSession();
        // ses.setAttribute("session",Database.hp);

        res.sendRedirect("/bus/index.html");

       
    }
}