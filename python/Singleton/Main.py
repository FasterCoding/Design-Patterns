from Singleton import Singleton

if __name__ == "__main__":
    
    singleton = Singleton()
    singletonTwo = Singleton()

    singleton.setNumber(5)

    print("Singleton:")
    print("Number: ", singleton.getNumber())


    print("Singleton Two:")
    print("Number: ", singletonTwo.getNumber())

    singleton.setNumber(99)

    print("Singleton:")
    print("Number: ", singleton.getNumber())


    print("Singleton Two:")
    print("Number: ", singletonTwo.getNumber())

    print("Singleton:")
    print(singleton)

    print("Singleton Two:")
    print(singletonTwo)