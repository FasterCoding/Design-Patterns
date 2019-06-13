package com.fastercoding.user;

import com.fastercoding.user.User;

public class UserBuilder {

    String firstName;
    String lastName;
    int age;
    String street;

    private UserBuilder() {

    }

    public static UserBuilder user() {
        return new UserBuilder();
    }

    public UserBuilder withFirstName(String name) {
        this.firstName = name;
        return this;
    }

    public UserBuilder withLastName(String name) {
        this.lastName = name;
        return this;
    }

    public UserBuilder withAge(int age) {
        this.age = age;
        return this;
    }

    public UserBuilder liveInStreet(String street) {
        this.street = street;
        return this;
    }

    public User build() {
        User user = new User(this.firstName,
                             this.lastName,
                             this.age,
                             this.street);
        
        return user;
    }

}