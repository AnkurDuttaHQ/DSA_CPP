package lab3;
class vehicle{
    void start(){
        System.out.println("Parent class method");
    }
}

class bike extends vehicle{
    void start(){
        System.out.println("bike class method calling");
    }
}

class car extends vehicle {
    void start (){
        System.out.println("car class method calling");
    }
}

class bus extends vehicle {
    void start (){
        System.out.println("Bus class method calling");
    }
}
public class method_overriding {
    public static void main(String[] args) {
        bike b1 = new bike();
        car c1 = new car ();
        bus bus1 = new bus();

        b1.start();
        c1.start();
        bus1.start();


    }
}
