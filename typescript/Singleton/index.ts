import {Singleton} from './src/singleton/singleton';

let singleton: Singleton = Singleton.getInstance();
let singletonTwo: Singleton = Singleton.getInstance();

singleton.setNumber(5);

console.log("Singleton");
console.log("Number: ", singleton.getNumber());

console.log("Singleton Two");
console.log("Number: ", singletonTwo.getNumber());

singleton.setNumber(99);

console.log("Singleton");
console.log("Number: ", singleton.getNumber());

console.log("Singleton Two");
console.log("Number: ", singletonTwo.getNumber());
