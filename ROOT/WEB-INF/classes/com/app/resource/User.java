package com.app.resource;

public class User {
    
    String name;
    String number;
    String email;
    String place;
    
    public User(String name, String number, String email, String place) {
        this.name = name;
        this.number = number;
        this.email = email;
        this.place = place;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public String getNumber() {
        return number;
    }
    public void setNumber(String number) {
        this.number = number;
    }
    public String getEmail() {
        return email;
    }
    public void setEmail(String email) {
        this.email = email;
    }
    public String getPlace() {
        return place;
    }
    public void setPlace(String place) {
        this.place = place;
    }
    
}
