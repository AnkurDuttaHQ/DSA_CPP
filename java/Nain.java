//Hierarchical Inheritance
class Animal {
    String name;

    Animal(String name) {
        this.name = name;
    }

    void eat() {
        System.out.println(name + " is eating.");
    }
}

// Child Class 1
class Dog extends Animal {

    Dog(String name) {
        super(name);
    }

    void bark() {
        System.out.println(name + " is barking.");
    }
}

// Child Class 2
class Cat extends Animal {

    Cat(String name) {
        super(name);
    }

    void meow() {
        System.out.println(name + " is meowing.");
    }
}

// Child Class 3
class Cow extends Animal {

    Cow(String name) {
        super(name);
    }

    void moo() {
        System.out.println(name + " is mooing.");
    }
}

public class Nain{
    public static void main(String[] args) {

        Dog dog = new Dog("Buddy");
        Cat cat = new Cat("Kitty");
        Cow cow = new Cow("Gauri");

        dog.eat();
        dog.bark();

        System.out.println();

        cat.eat();
        cat.meow();

        System.out.println();

        cow.eat();
        cow.moo();
    }
}