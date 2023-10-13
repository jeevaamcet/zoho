import jakarta.servlet.annotation.WebServlet;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

import java.io.IOException;
import java.io.PrintWriter;

@WebServlet("/register")
public class Register extends HttpServlet {
    public  void doPost(HttpServletRequest req, HttpServletResponse res) throws IOException {
        String name = req.getParameter("username");
        String password = req.getParameter("Password");
        PrintWriter Out = res.getWriter();
        if(!database.db.containsKey(name))
        {
            database.db.put(name,password);
            Out.println("<h1>Hello<h1> "+name+"<h2>registered successfully!!</h2>");
            Out.println("<a href=\"/SAMPLE/login.html\">click here</a> to log in ");
        }
        else
        {
            Out.println("user already existed......");
            Out.println("<a href=\"/SAMPLE/login.html\">click here</a> to log in ");
            res.setHeader("Refresh","10,/SAMPLE");

        }
    }
}
