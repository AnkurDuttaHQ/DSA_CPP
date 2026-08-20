final class A {
    void display(){
        System.out.println("It is parent class method");
    }
}

class B extends A{
    void display(){
        System.out.println("It is child class method");
    }
}

public class Main {
    public static void main (String[] args){
        A obj = new B();
        obj.display();
    }
}
