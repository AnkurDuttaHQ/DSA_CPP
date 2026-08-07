package Student;
import java.util.Objects;
public class StudentmanagementSystem {

    private int roll;
    private int id;
    private int age;
    private String email;

    // Default Constructor
    public StudentmanagementSystem() {
        System.out.println("Default Constructor Called");
    }

    // Parameterized Constructor
    public StudentmanagementSystem(int roll, int id, int age, String email) {
        this.roll = roll;
        this.id = id;
        this.age = age;
        this.email = email;
    }

    // Getters
    public int getRoll() {
        return roll;
    }

    public int getId() {
        return id;
    }

    public int getAge() {
        
        return age;
    }

    public String getEmail() {
        return email;
    }

    // Setters
    public void setRoll(int roll) {
        this.roll = roll;
    }

    public void setId(int id) {
        this.id = id;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    // Email Validation
    public boolean isValidEmail() {
        return email.contains("@") && email.endsWith(".com");
    }

    // Display Method
    public void displayStudent() {
        System.out.println(this);
    }

    @Override
    public String toString() {
        return "Student{" +
                "Roll=" + roll +
                ", ID=" + id +
                ", Age=" + age +
                ", Email='" + email + '\'' +
                '}';
    }

    @Override
    public boolean equals(Object obj) {

        if (this == obj)
            return true;

        if (!(obj instanceof StudentmanagementSystem))
            return false;

        StudentmanagementSystem other = (StudentmanagementSystem) obj;

        return this.id == other.id;
    }

    @Override
    public int hashCode() {
        return Objects.hash(id);
    }
}
