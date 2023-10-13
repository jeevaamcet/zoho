import jakarta.servlet.ServletException;
import jakarta.servlet.ServletOutputStream;
import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

import java.io.IOException;
import java.io.PrintWriter;
import java.util.HashMap;

@WebServlet("/login")
public class First extends HttpServlet {

    @Override
    public void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        String name = req.getParameter("name");

        String password = req.getParameter("Password");
        PrintWriter p = resp.getWriter();
        resp.setContentType("text/html");
//        p.println("Hellooooooooo!!!"+name);
        if (database.db.containsKey(name)) {
            if( database.db.get(name).equals(password))
            {
                print(p,name);
            }
            else
            {
                p.println("<h1>Wrong password!!!</h1>");
            }

        }
        if(!(database.db.containsKey(name)))
        {
            display(p);

//            p.println("you are eligible to vote.....Congratulaions");
        }

    }
    public void print(PrintWriter p,String name)
    {
        p.println("<h1>Log in Successfully !!!! <h1> "+name);
    }
    public void display(HttpServletRequest req,HttpServletResponse resp) throws ServletException, IOException {

        req.getRequestDispatcher("/WEB-INF/register.html").forward(req,resp);
    }
    public void display(PrintWriter p )
    {
        p.println("<h1>Error.........user not found!!!!<h1>");
        p.println("<a href=\"/SAMPLE/register.html\">click here</a> to register ");

    }
}
