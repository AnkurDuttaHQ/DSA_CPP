package lab1;

import java.util.*;

class Bank {
    double bal;

    Bank(double b) { bal=b; }

    void deposit(double a) { bal+=a; }

    void withdraw(double a) {
        if(a<=bal) bal-=a;
        else System.out.println("Insufficient Balance");
    }

    void show() { System.out.println("Balance="+bal); }
}

public class elec {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        Bank b=new Bank(s.nextDouble());
        b.deposit(s.nextDouble());
        b.withdraw(s.nextDouble());
        b.show();
    }
}
