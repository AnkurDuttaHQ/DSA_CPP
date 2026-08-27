package lab3;

class Parent {

    // 1. final variable
    final int number = 100;

    void show() {
        System.out.println("Number: " + number);
    }

    // 2. final method
    final void display() {
        System.out.println("This is a final method.");
    }
}

// Child class inherits Parent
class Child extends Parent {

    // This would produce an error because number is final.
    // number = 200;
    
    // This would produce an error because display() is final.
    /*
    void display() {
        System.out.println("Trying to override final method");
    }
    */
}


// 3. final class
final class FinalClass {

    void message() {
        System.out.println("This is a final class.");
    }
}

// This would produce an error because FinalClass is final.
// A final class cannot be inherited.
/*
class AnotherClass extends FinalClass {
}
*/


public class Main {

    public static void main(String[] args) {

        Child obj = new Child();

        // Accessing final variable
        System.out.println("Final variable: " + obj.number);

        // Calling final method
        obj.display();

        // Creating object of final class
        FinalClass f = new FinalClass();
        f.message();
    }
}
