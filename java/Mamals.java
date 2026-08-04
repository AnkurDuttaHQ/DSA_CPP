public class Mamals {
    String name;
    int age;
}

class Animal extends Mamals {
    String breed;

    public Animal(String name, String breed, int age) {
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

class Dog extends Animal {

    public Dog(String name, String breed, int age) {
        super(name, breed, age);
    }

    public static void main(String[] args) {
        Dog dog = new Dog("Buddy", "Golden Retriever", 3);
        dog.displayInfo();
    }
}      //😁    😂  ❤️   😵‍💫

