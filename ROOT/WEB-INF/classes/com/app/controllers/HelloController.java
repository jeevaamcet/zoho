package com.app.controllers;


import java.sql.SQLException;
import java.util.HashMap;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import com.app.resource.Option;
import com.app.resource.Ques;
import com.app.services.ContactService;


@Controller
public class HelloController {

    @Autowired
    private ContactService cs;


    private static int num = 1;
    public static int score = 0;
    public HashMap<Integer,Ques> ques = new HashMap<>();
    public HashMap<Integer,Option> opt = new HashMap<>(); 
    

    @RequestMapping("/verify")
    public String verifyAnswer(Model model,
                                @RequestParam("opt") String userAns) throws SQLException {
        if(userAns.equals(cs.getQuesFromDb().get(num).getAnswer()))
        {
            score++;
        }
        num++;
        if(ques.size() <= num)
        {
            model.addAttribute("Ques",ques.get(num));
            model.addAttribute("opt",opt.get(num));
            return "index";
        }
        else
        {
            num = 0;
            model.addAttribute("message","Game over");
            model.addAttribute("flag",true);
            model.addAttribute("score",score);
            return "index";
        }
    }

    @RequestMapping("/")
    public String home(Model model ) throws SQLException{

        ques = cs.getQuesFromDb();
        opt = cs.getOptFromDb();

        model.addAttribute("Ques",ques.get(num));
        model.addAttribute("opt",opt.get(num));

        return "index";
    }
    
}
