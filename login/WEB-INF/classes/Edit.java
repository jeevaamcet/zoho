import java.io.IOException;
import org.thymeleaf.TemplateEngine;
import org.thymeleaf.context.Context;
import org.thymeleaf.templatemode.TemplateMode;
import org.thymeleaf.templateresolver.ClassLoaderTemplateResolver;

import jakarta.servlet.ServletException;
import jakarta.servlet.http.HttpServlet;
import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;

public class Edit extends HttpServlet {


    public void doGet(HttpServletRequest req, HttpServletResponse res)throws IOException,ServletException
    {
        
        TemplateEngine t = new TemplateEngine();
        ClassLoaderTemplateResolver resolver = new ClassLoaderTemplateResolver();
        Context ct = new Context();

        String name = req.getParameter("name");

        if(Store.hp.containsKey(name)) {
            Store.key = name;
        } else {

            res.setContentType("text/html");
            res.getWriter().println("There is no contact in "+name+" ");
        }

        

        resolver.setTemplateMode(TemplateMode.HTML);
        resolver.setCharacterEncoding("UTF-8");
        resolver.setSuffix(".html");
        
        ct.setVariable("choice", 2);
        ct.setVariable("key", 2);

        t.setTemplateResolver(resolver);
        t.process("temp", null, ct, res.getWriter());
        
    }
    public void doPost(HttpServletRequest req, HttpServletResponse res) throws IOException{

        TemplateEngine t = new TemplateEngine();
        ClassLoaderTemplateResolver resolver = new ClassLoaderTemplateResolver();
        Context ct = new Context();

        String number = req.getParameter("number");

        Store.hp.put(Store.key,number);

        resolver.setTemplateMode(TemplateMode.HTML);
        resolver.setCharacterEncoding("UTF-8");
        resolver.setPrefix("./../../");
        resolver.setSuffix(".html");

        res.getWriter().println("Created...");
        res.setContentType("text/html");
        res.getWriter().println("Edited...");
        ct.setVariable("choice", 2);

        t.setTemplateResolver(resolver);
         t.process("temp", null, ct, res.getWriter());


        
    }
    
}
