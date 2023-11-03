package com.app.config;

import java.sql.Statement;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

import org.springframework.stereotype.Service;

@Service
public class DatabaseConfig{

    public Connection c = null;
    public Statement smt = null;


    public DatabaseConfig() throws SQLException{
        try{
            c = DriverManager
                .getConnection("jdbc:postgresql://localhost:5432/mydb","postgres","12345");
            }
        catch(Exception e)
        {
            e.printStackTrace();
            System.err.println(e.getClass().getName()+": "+e.getMessage());
            System.exit(0);
        }
        smt = c.createStatement();
    }
   
    
}
