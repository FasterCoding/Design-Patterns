
public class Main {

    public static void main(String[] args) {

        Singleton singleton = Singleton.getInstance();
        Singleton singletonTwo = Singleton.getInstance();
    
        singleton.setNumber(5);

        System.out.println("Singleton");
        System.out.println("Number: " + singleton.getNumber());

        System.out.println("Singleton Two");
        System.out.println("Number: " + singletonTwo.getNumber());

        singleton.setNumber(99);

        System.out.println("Singleton");
        System.out.println("Number: " + singleton.getNumber());

        System.out.println("Singleton Two");
        System.out.println("Number: " + singletonTwo.getNumber());
    }

}