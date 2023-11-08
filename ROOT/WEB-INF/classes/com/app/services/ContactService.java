package com.app.services;

import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.HashMap;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.app.config.DatabaseConfig;
import com.app.resource.Option;
import com.app.resource.Ques;

@Service
public class ContactService {

    @Autowired
    private DatabaseConfig db;

    public HashMap<Integer,Option>getOptFromDb() throws SQLException{


        ResultSet rs  =db.smt.executeQuery("select * from option ;");
        HashMap<Integer,Option> opt = new HashMap<>();

        while (rs.next())
        {
             String opt1 = rs.getString("opt1");
            
             String opt2 = rs.getString("opt2");

             String opt3 = rs.getString("opt3");
    
             String opt4 = rs.getString("opt4");
            int key = rs.getInt("id");
            opt.put(key,new Option(opt1, opt2, opt3, opt4));
            
        }

        rs.close();
         
        return opt;
    }

    public HashMap<Integer,Ques> getQuesFromDb() throws SQLException
    {
        HashMap<Integer,Ques> ques = new HashMap<>();
       
        ResultSet rs  =db.smt.executeQuery("select * from quiz ;");
        while(rs.next())
        {
            String que = rs.getString("quesion");
            String ans = rs.getString("answer");
            int key = rs.getInt("id");
            ques.put(key,new Ques(que, ans));
        }

        return ques;
    }


    // public void updateContact(User u, int i) throws SQLException
    // {
        

    //     db.smt.executeUpdate("update contact set name = '"+u.getName()+"',email = '"
    //                         +u.getEmail()+"',number ='"+u.getNumber()+"',place = '"
    //                         +u.getPlace()+"' where id = '"+i+"';");
    // }

    // public void deleteContact(int i) throws SQLException{


    //     db.smt.executeUpdate("delete from contact where id = '"+i+"';");
    // }
}
