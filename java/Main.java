class Animal {
    public String breed;
    public int age;
}

class Dog extends Animal {
    public String name;

    public Dog(String name, String breed, int age) {
        this.name = name;
        this.breed = breed;
        this.age = age;
    }

    void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("Breed: " + breed);
        System.out.println("Age: " + age);
        System.out.println();
    }
}

public class Main {
    public static void main(String[] args) {

        Dog dog1 = new Dog("Buddy", "Golden Retriever", 3);
        Dog dog2 = new Dog("Max", "German Shepherd", 5);

        dog1.displayInfo();
        dog2.displayInfo();
    }
}