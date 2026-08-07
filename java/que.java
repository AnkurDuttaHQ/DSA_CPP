
import java.util.*;
public class que{
    public static void main(String[] args){
        Queue q = new PriorityQueue<>();
        q.offer(10);
        q.offer(20);
        q.offer(15);
        q.poll();

        System.out.println(q);
    }
}

