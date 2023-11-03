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
import com.app.resource.User;

@Service
public class ContactService {

    @Autowired
    private DatabaseConfig db;

    public HashMap<Integer,User> disp() throws SQLException{


        ResultSet rs  =db.smt.executeQuery("select * from contact;");
        HashMap<Integer,User> hp = new HashMap<>();

        while (rs.next())
        {
             String nam = rs.getString("name");
             String number = rs.getString("number");
             String emai = rs.getString("email");
             String plac = rs.getString("place");
             int key = rs.getInt("id");
            hp.put(key,new User(nam, number, emai, plac));
        }

        rs.close();
         
        return hp;
    }

    public void createContact(User u) throws SQLException
    {
       
        db.smt.executeUpdate("insert into contact values('"+u.getName()+"','"
                            +u.getEmail()+"','"+u.getNumber()+"','"
                            +u.getPlace()+"');");
    }


    public void updateContact(User u, int i) throws SQLException
    {
        

        db.smt.executeUpdate("update contact set name = '"+u.getName()+"',email = '"
                            +u.getEmail()+"',number ='"+u.getNumber()+"',place = '"
                            +u.getPlace()+"' where id = '"+i+"';");
    }

    public void deleteContact(int i) throws SQLException{


        db.smt.executeUpdate("delete from contact where id = '"+i+"';");
    }
}
