import { User } from "./src/user/user";
import { UserBuilder } from "./src/user/user-builder";

let user: User = UserBuilder.user()
                            .withFirstName("Dave")
                            .withLastName("Johnson")
                            .withAge(55)
                            .liveInStreet("Example Street 123")
                            .build();

console.log(user.print());