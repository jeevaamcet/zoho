package com.app.controllers;



import java.util.HashMap;

import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.ResponseBody;

import com.app.resource.Contact;
import com.app.resource.User;

// @ResponseBody
@Controller
public class HelloController {
    
    // public HelloController() {
    // }

    @RequestMapping("/create")
    public String createContact(Model model,@RequestParam("name") String name,@RequestParam("number") String num,@RequestParam("email") String email,@RequestParam("place") String place) {

        Contact.list.add(new User(name,num,email,place));
        
        model.addAttribute("list", hp);

        return "index";
    }
    @RequestMapping("/")
    public String second(Model model ){

        
        
        return "index";
    }
    // @RequestMapping("/contact")
    // public String menu(Model model, @RequestParam("button") String button){

        // Contact.button = button;
        // if(button.equals("displaycontact")){
        //     model.addAttribute("hp",Contact.hp);
        //     model.addAttribute("button",button);
        //     return "index";
        // } else {
        //     model.addAttribute("button",button);
        //     return "index";
        // }
    // }
    @RequestMapping("/edit")
    public String edit(Model model,@RequestParam("name") String name,@RequestParam("number") String num){


        if(Contact.hp.containsKey(name))
        {
            Contact.hp.put(name,num);
            // model.addAttribute("flag","success");
            model.addAttribute("button",Contact.button);
            return "index" ;
        }
        else
        {
            // model.addAttribute("flag","fail");
            // model.addAttribute("button",Contact.button);
            return "index";
        }
    }

    @RequestMapping("/delete")
    public String delete(Model model,@RequestParam("button") ){

        
        
        return "index";
    }

    
}
