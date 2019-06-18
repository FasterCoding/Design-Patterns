import {User} from "./user";

export class UserBuilder {

    private _firstName: string;
    private _lastName: string;
    private _age: number;
    private _street: string;

    private constructor() {
        this._firstName = "";
        this._lastName = "";
        this._age = -1;
        this._street = "";
    }

    public static user(): UserBuilder {
        return new UserBuilder();
    }

    public withFirstName(name: string): UserBuilder {
        this._firstName = name;
        return this;
    }

    public withLastName(name: string): UserBuilder {
        this._lastName = name;
        return this;
    }

    public withAge(age: number): UserBuilder {
        this._age = age;
        return this;
    }

    public liveInStreet(street: string): UserBuilder {
        this._street = street;
        return this;
    }

    public build(): User {
        let user: User = new User(this._firstName,
                              this._lastName,
                              this._age,
                              this._street);
        
        return user;
    }


}