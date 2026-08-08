package Student;
import java.util.ArrayList;
public class q1 {
    public static void main(String[] args){
        ArrayList<StudentmanagementSystem> arr = new ArrayList();
        StudentmanagementSystem var2 = new StudentmanagementSystem(1, 101, 20, "ankur@gmail.com");
      StudentmanagementSystem var3 = new StudentmanagementSystem(2, 102, 21, "rahul@gmail.com");
      StudentmanagementSystem var4 = new StudentmanagementSystem(3, 103, 19, "priya@gmail.com");
      StudentmanagementSystem var5 = new StudentmanagementSystem(4, 104, 22, "rohit@gmail.com");
        arr.add(var2);
        arr.add(var3);
        arr.add(var4);
        arr.add(var5);

        System.out.println(arr);
    }
}
