import java.io.IOException;
import java.io.PrintWriter;
import java.util.Enumeration;


import jakarta.servlet.RequestDispatcher;
import jakarta.servlet.ServletException;
import jakarta.servlet.http.*;
//import jakarta.servlet.http.HttpServletRequest;
//import jakarta.servlet.http.HttpServletResponse;

public class Practice extends HttpServlet {

    public void doPost(HttpServletRequest req, HttpServletResponse res) throws IOException, ServletException {
        PrintWriter out = res.getWriter();
        String name = req.getParameter("username6");
//        res.sendRedirect("sec");
        HttpSession ses = req.getSession();
        ses.setAttribute("key","username6");


//        RequestDispatcher rd = req.getRequestDispatcher("sec");
//        rd.forward(req,res);
//        out.println("hello");


    }
}
