package com.fastercoding;

import com.fastercoding.user.User;
import com.fastercoding.user.UserBuilder;

class Main {

    public static void main(String[] args) {
        
        User user = UserBuilder.user()
                               .withFirstName("Dave")
                               .withLastName("Johnson")
                               .withAge(55)
                               .liveInStreet("Example Street 123")
                               .build();

        user.print();
    }

}