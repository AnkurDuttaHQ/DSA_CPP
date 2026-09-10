class A {
    int bookId;
    static int count = 0;

    
    A(int id) {
        bookId = id;
        count++;
    }

    void display() {
        System.out.println("Book ID: " + bookId);
    }


    static void displayCount() {
        System.out.println("Total Books Issued: " + count);
    }
}

public class Main {
    public static void main(String[] args) {

        A b1 = new A(101);
        A b2 = new A(102);
        A b3 = new A(103);

        b1.display();
        b2.display();
        b3.display();

        A.displayCount();
    }
}

