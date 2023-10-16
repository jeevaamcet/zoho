import jakarta.servlet.http.*;
import java.util.*;
import java.io.*;


public class AddTcr extends HttpServlet{
    public void doGet(HttpServletRequest req, HttpServletResponse res)throws IOException{
        res.sendRedirect("addtcr.html");
    }
    public void doPost(HttpServletRequest req, HttpServletResponse res)throws IOException{

        String name = req.getParameter("name");
        String sub = (req.getParameter("sub"));
        Teacher tt = new Teacher(name,sub);
        int cls = Integer.parseInt(req.getParameter("cls"));
    
        if(Database.hp.containsKey(cls))
        {
            Database.hp.get(cls).teacherList.add(tt);
        }
        else{
            Database.hp.put(cls,new Lists());
            Database.hp.get(cls).teacherList.add(tt);
        }
        // Database.hp.put(class,studentList);

        // HttpSession ses = req.getSession();
        // ses.setAttribute("session",Database.hp);
    }
}