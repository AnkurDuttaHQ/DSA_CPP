public class Person {
    // Instance variables
    String name;
    int age;

    // Constructor
    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    // Method to display information
    void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println();
    }

    // Main method
    public static void main(String[] args) {
        // Create objects
        Person person1 = new Person("Suchi", 21);
        Person person2 = new Person("JIMJAM", 21);

        // Display details
        person1.displayInfo();
        person2.displayInfo();
    }
}