package lab3;
class Calculator {
    void add(int a , int b){
        System.out.println(a+b);
    }

    void add(int a , int b ,int c){
        System.out.println(a+b+c);
    }

    void add(int a,int b,int c,int d){
        System.out.println(a+b+c+d);
    }
}
public class method_overloading {
    public static void main(String[] args){
        Calculator c1 = new Calculator();
        c1.add(1, 2);
        c1.add(12, 13, 14);
        c1.add(20, 45, 35, 55);
    }
}
