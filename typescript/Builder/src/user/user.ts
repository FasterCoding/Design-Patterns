export class User {

    private _firstName: string;
    private _lastName: string;
    private _age: number;
    private _street: string;

    constructor(firstName: string,
                lastName: string,
                age: number,
                street: string) {
        this._firstName = firstName;
        this._lastName = lastName;
        this._age = age;
        this._street = street;
    }

    public getFirstName(): string {
        return this._firstName;
    }
    
    public setFirstName(name: string) {
        this._firstName = name;
    }

    public getLastName(): string {
        return this._lastName;
    }
    
    public setLastName(name: string) {
        this._lastName = name;
    }

    public getAge(): number {
        return this._age;
    }
    
    public setAge(age: number) {
        this._age = age;
    }
    
    public getStreet(): string {
        return this._street;
    }
    
    public setStreet(street: string) {
        this._street = street;
    }
    
    public print(): void {
        console.log("=== User ===");
        console.log("Name: ", this._firstName, this._lastName);
        console.log("Age: ", this._age);
        console.log("Street: ", this._street);
    }
}
