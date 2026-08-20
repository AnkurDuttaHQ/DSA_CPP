package lab1;

import java.util.*;

class Employee {
    double basic;

    Employee(double b) { basic=b; }

    double hra() { return basic*.20; }
    double da() { return basic*.10; }
    double gross() { return basic+hra()+da(); }

    void show() {
        System.out.println("HRA="+hra());
        System.out.println("DA="+da());
        System.out.println("Gross="+gross());
    }
}

public class salary {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        Employee e=new Employee(s.nextDouble());
        e.show();
    }
}
