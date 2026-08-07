package Student;
import java.util.Scanner;


public class user{

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        // Four Student Objects
        StudentmanagementSystem s1 = new StudentmanagementSystem(1, 101, 20, "ankur@gmail.com");
        StudentmanagementSystem s2 = new StudentmanagementSystem(2, 102, 21, "rahul@gmail.com");
        StudentmanagementSystem s3 = new StudentmanagementSystem(3, 103, 19, "subha@gmail.com");
        StudentmanagementSystem s4 = new StudentmanagementSystem(4, 104, 22, "monika@gmail.com");

        int choice;

        do {

            System.out.println("\n STUDENT MANAGEMENT SYSTEM ");
            System.out.println("1. Display All Students");
            System.out.println("2. Search Student by ID");
            System.out.println("3. Update Student Email");
            System.out.println("4. Compare Two Students");
            System.out.println("5. Validate Student Email");
            System.out.println("6. Print Hash Codes");
            System.out.println("7. Exit");

            System.out.print("Enter Choice: ");
            choice = sc.nextInt();

            switch (choice) {

                case 1:

                    System.out.println("\nStudent Details");
                    s1.displayStudent();
                    s2.displayStudent();
                    s3.displayStudent();
                    s4.displayStudent();

                    break;

                case 2:

                    System.out.print("Enter Student ID: ");
                    int id = sc.nextInt();

                    if (id == s1.getId())
                        s1.displayStudent();
                    else if (id == s2.getId())
                        s2.displayStudent();
                    else if (id == s3.getId())
                        s3.displayStudent();
                    else if (id == s4.getId())
                        s4.displayStudent();
                    else
                        System.out.println("Student Not Found.");

                    break;

                case 3:

                    System.out.print("Enter Student ID: ");
                    int updateId = sc.nextInt();

                    System.out.print("Enter New Email: ");
                    String newEmail = sc.next();

                    if (updateId == s1.getId())
                        s1.setEmail(newEmail);

                    else if (updateId == s2.getId())
                        s2.setEmail(newEmail);

                    else if (updateId == s3.getId())
                        s3.setEmail(newEmail);

                    else if (updateId == s4.getId())
                        s4.setEmail(newEmail);

                    else {
                        System.out.println("Student Not Found.");
                        break;
                    }

                    System.out.println("Email Updated Successfully.");

                    break;

                case 4:

                    System.out.println("Comparing Student 2 and Student 4");

                    if (s2.equals(s4))
                        System.out.println("Both Students have same ID.");
                    else
                        System.out.println("Students are Different.");

                    break;

                case 5:

                    System.out.print("Enter Student ID: ");
                    int checkId = sc.nextInt();

                    StudentmanagementSystem temp = null;

                    if (checkId == s1.getId())
                        temp = s1;
                    else if (checkId == s2.getId())
                        temp = s2;
                    else if (checkId == s3.getId())
                        temp = s3;
                    else if (checkId == s4.getId())
                        temp = s4;

                    if (temp == null) {
                        System.out.println("Student Not Found.");
                    } else if (temp.isValidEmail()) {
                        System.out.println("Valid Email");
                    } else {
                        System.out.println("Invalid Email");
                    }

                    break;

                case 6:

                    System.out.println("Student 1 HashCode : " + s1.hashCode());
                    System.out.println("Student 2 HashCode : " + s2.hashCode());
                    System.out.println("Student 3 HashCode : " + s3.hashCode());
                    System.out.println("Student 4 HashCode : " + s4.hashCode());

                    break;

                case 7:

                    System.out.println("Thank You!");
                    break;

                default:

                    System.out.println("Invalid Choice.");

            }

        } while (choice != 7);

        sc.close();
    }
}