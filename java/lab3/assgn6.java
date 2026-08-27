package lab3;

// Assignment 6: Dynamic Method Dispatch

class Shape {

    void draw() {
        System.out.println("Drawing a shape");
    }
}

class Circle extends Shape {

    @Override
    void draw() {
        System.out.println("Drawing a Circle");
    }
}

class Rectangle extends Shape {

    @Override
    void draw() {
        System.out.println("Drawing a Rectangle");
    }
}

class Triangle extends Shape {

    @Override
    void draw() {
        System.out.println("Drawing a Triangle");
    }
}

public class assgn6{

    public static void main(String[] args) {

        // Superclass reference
        Shape s;

        // Reference points to Circle object
        s = new Circle();
        s.draw();

        // Reference points to Rectangle object
        s = new Rectangle();
        s.draw();

        // Reference points to Triangle object
        s = new Triangle();
        s.draw();
    }
}
