import java.io.IOException;

import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

public class Home extends HttpServlet {
    
    public void doPost(HttpServletRequest req, HttpServletResponse res) throws IOException{

        res.sendRedirect("./index.html");
    }
}
