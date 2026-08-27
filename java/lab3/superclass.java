package lab3;
class Employee{
    double salary;
    String name;

    Employee(double salary , String name){
        this.name = name;
        this.salary = salary;
    }
}

class Manager extends Employee{
    String department;

    Manager(double salary,String name, String department){
        super(salary, name);

        this.department = department;
    }

    void display (){
        System.out.println("Name: " + name);
        System.out.println("Salary: " + salary);
        System.out.println("department: " + department);
    }}


public class superclass {
    public static void main (String [] args){
        Manager m1 = new Manager (50000,"Ankur","IT");
        m1.display();

    }
}
