package lab3;

// Assignment 7: Integrated Employee Management System

class Employee {

    // Final variable
    final String companyName = "Tech Solutions";

    String name;
    int id;
    double basicSalary;

    // Constructor
    Employee(String name, int id, double basicSalary) {
        this.name = name;
        this.id = id;
        this.basicSalary = basicSalary;
    }

    // Method to be overridden
    double calculateSalary() {
        return basicSalary;
    }

    // Method overloading - no parameter
    void displayDetails() {
        System.out.println("Name: " + name);
        System.out.println("ID: " + id);
        System.out.println("Company: " + companyName);
    }

    // Method overloading - with salary parameter
    void displayDetails(double salary) {
        displayDetails();
        System.out.println("Salary: " + salary);
    }
}


// Developer class
class Developer extends Employee {

    Developer(String name, int id, double basicSalary) {
        super(name, id, basicSalary);   // Calling superclass constructor
    }

    @Override
    double calculateSalary() {
        return basicSalary + 10000;
    }
}


// Manager class
class Manager extends Employee {

    Manager(String name, int id, double basicSalary) {
        super(name, id, basicSalary);
    }

    @Override
    double calculateSalary() {
        return basicSalary + 20000;
    }
}


// Intern class
class Intern extends Employee {

    Intern(String name, int id, double basicSalary) {
        super(name, id, basicSalary);
    }

    @Override
    double calculateSalary() {
        return basicSalary + 5000;
    }
}


// Main class
public class EmployeeManagementSystem {

    public static void main(String[] args) {

        // Dynamic Method Dispatch
        Employee emp;

        // Developer object
        emp = new Developer("Ankur", 101, 40000);
        System.out.println("----- Developer -----");
        emp.displayDetails(emp.calculateSalary());

        // Manager object
        emp = new Manager("Rahul", 102, 60000);
        System.out.println("\n----- Manager -----");
        emp.displayDetails(emp.calculateSalary());

        // Intern object
        emp = new Intern("Amit", 103, 20000);
        System.out.println("\n----- Intern -----");
        emp.displayDetails(emp.calculateSalary());
    }
}
