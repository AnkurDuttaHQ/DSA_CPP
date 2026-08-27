package lab3;

class Person {
    String name;
    int age;

    Person (String name , int age){
        this.name = name;
        this.age = age;
    }
}

class Student extends Person {
    int rollNo;
    String course;

    Student(String name , int age , int rollNo , String course){
        super(name, age);
        this.rollNo = rollNo;
        this.course = course;
    }

    void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Roll No: " + rollNo);
        System.out.println("Course: " + course);
    }
}

public class inheritance {
    public static void main(String[] args) {
        Student s1 = new Student("Ankur", 21, 68, "bca");
        s1.display();
    }
}
