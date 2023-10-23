import java.io.IOException;

import org.thymeleaf.TemplateEngine;
import org.thymeleaf.context.Context;
import org.thymeleaf.templatemode.TemplateMode;
import org.thymeleaf.templateresolver.ClassLoaderTemplateResolver;

import jakarta.servlet.RequestDispatcher;
import jakarta.servlet.ServletException;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

public class Create extends HttpServlet {
    
    public void doPost(HttpServletRequest req, HttpServletResponse res) throws IOException, ServletException{

        String name = req.getParameter("name");
        String number = req.getParameter("number");

        Store.hp.put(name,number);
        
        
        TemplateEngine t = new TemplateEngine();
        ClassLoaderTemplateResolver resolver = new ClassLoaderTemplateResolver();
        Context ct = new Context();

        resolver.setTemplateMode(TemplateMode.HTML);
        resolver.setCharacterEncoding("UTF-8");
        resolver.setSuffix(".html");

        res.setContentType("text/html");
        res.getWriter().println("Created...");
        ct.setVariable("choice", 4);
       
        t.setTemplateResolver(resolver);
        t.process("temp", null, ct, res.getWriter());
    }

}
 