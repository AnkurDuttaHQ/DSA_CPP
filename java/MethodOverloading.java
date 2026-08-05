// create 5 same name fnc with different parameters
public class MethodOverloading {
    
    public static void main(String[] args) {
        MethodOverloading obj = new MethodOverloading();
        obj.add(5, 10);
        obj.add(5.5, 10.5);
        obj.add(5, 10, 15);
        obj.add("Hello", "World");
        obj.add(5, "Hello");
    }

    

    // method with two int parameters
    public void add(int a, int b) {
        System.out.println("Sum of two integers: " + (a + b));
    }

    // method with two double parameters
    public void add(double a, double b) {
        System.out.println("Sum of two doubles: " + (a + b));
    }

    // method with three int parameters
    public void add(int a, int b, int c) {
        System.out.println("Sum of three integers: " + (a + b + c));
    }

    // method with two String parameters
    public void add(String a, String b) {
        System.out.println("Concatenation of two strings: " + a + " " + b);
    }

    // method with one int and one String parameter
    public void add(int a, String b) {
        System.out.println("Integer and String: " + a + " " + b);
    }
}