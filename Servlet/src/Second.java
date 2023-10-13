import jakarta.servlet.ServletException;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import jakarta.servlet.http.HttpSession;

import java.io.IOException;
import java.io.PrintWriter;

public class Second extends HttpServlet {
    @Override
    public void doPost(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
        PrintWriter print = resp.getWriter();
        HttpSession ses = req.getSession();
        String name  = (String) ses.getAttribute("key");
//        String name = req.getParameter("username6");

        print.println("from second servlet "+name);
    }
}
