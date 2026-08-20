package lab1;

import java.util.*;

class Student {
    String name; int roll; int[] m=new int[5];

    void input(Scanner s) {
        name=s.next(); roll=s.nextInt();
        for(int i=0;i<5;i++) m[i]=s.nextInt();
    }

    void result() {
        int t=0;
        for(int x:m) t+=x;
        double p=t/5.0;
        String g=p>=90?"A+":p>=80?"A":p>=70?"B":p>=60?"C":p>=50?"D":"F";
        System.out.println("Total="+t+"\nPercentage="+p+"\nGrade="+g);
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        Student x=new Student();
        x.input(s);
        x.result();
    }
}
