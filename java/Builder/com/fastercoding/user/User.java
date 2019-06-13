package com.fastercoding.user;

public class User {

    String firstName;
    String lastName;
    int age;
    String street;

    public User(String firstName,
                String lastName,
                int age,
                String street) {       
        this.firstName = firstName;
        this.lastName = lastName;
        this.age = age;
        this.street = street;
    }

    public String getFirstName() {
        return this.firstName;
    }
    public void setFirstName(String firstName) {
        this.firstName = firstName;
    }

    public String getLastName() {
        return this.lastName;
    }
    
    public void setLastName(String lastName) {
        this.lastName = lastName;
    }

    public int getAge() {
        return this.age;
    }
    
    public void setAge(int age) {
        this.age = age;
    }

    public String getStreet() {
        return this.street;
    }
    
    public void setStreet(String street) {
        this.street = street;
    }

    public void print() {
        System.out.println("=== User ===");
        System.out.println("Name: " + this.firstName + " " + this.lastName);
        System.out.println("Age: " + this.age);
        System.out.println("Street: " + this.street);
    }
}