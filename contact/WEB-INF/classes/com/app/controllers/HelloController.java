package com.app.controllers;


import java.sql.SQLException;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import com.app.resource.Contact;
import com.app.resource.User;
import com.app.services.ContactService;


@Controller
public class HelloController {

    @Autowired
    private ContactService cs;
    

    @RequestMapping("/create")
    public String createContact(Model model,
                                @RequestParam("name") String name,
                                @RequestParam("number") String num,
                                @RequestParam("email") String email,
                                @RequestParam("place") String place) throws SQLException {

      
        cs.createContact(new User(name, num, email, place));
        model.addAttribute("list",cs.disp());
        
        return "index";
    }

    @RequestMapping("/")
    public String second(Model model ) throws SQLException{

        if(cs.disp().isEmpty())
        {
            model.addAttribute("token",true);
        }
        else
        {
            model.addAttribute("list",cs.disp());
        }
        
        
        return "index";
    }
    
    @PostMapping("/edit")
    public String edit(Model model,
                        @RequestParam("name") String name,
                        @RequestParam("number") String num,
                        @RequestParam("email") String email,
                        @RequestParam("place") String place) throws SQLException{

        
        User u = new User(name, num, email, place);
        cs.updateContact(u,Contact.i);
        model.addAttribute("list",cs.disp());
        model.addAttribute("flag",false);
        return "index";
    }

    @GetMapping("/edit")
    public String edit(
        Model model,
        @RequestParam("button") int i
    ) throws SQLException {

        Contact.i = i;
        model.addAttribute("flag",true);
        model.addAttribute("user",cs.disp().get(i));
        model.addAttribute("list",cs.disp());
        return "index";
    }

    @RequestMapping("/delete")
    public String delete(Model model,@RequestParam("button") int i) throws SQLException{

        cs.deleteContact(i);
        
        if(cs.disp().isEmpty())
        {
            model.addAttribute("token",true);
        }
        else
        {
            model.addAttribute("list",cs.disp());
        }
        
        return "index";
    }
   
    
}
