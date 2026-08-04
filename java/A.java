public class A {
    public A(){
        System.out.println("A class constructor");
    }
}

class B extends A {
    public B(){
        super();
        System.out.println("B class constructor");
    }

    public static void main(String[] args) {
        B b = new B();
    }
}


