#include <iostream>

#include "User/User.hpp"
#include "UserBuilder/UserBuilder.hpp"

int main(int argc, char const *argv[]) {
    
    UserBuilder builder;
    
    User user = builder.withFirstName("Dave")
                        .withLastName("Johnson")
                        .withAge(55)
                        .liveInStreet("Example Street 123")
                        .build();

    user.print();

    return 0;
}
