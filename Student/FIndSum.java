package Student;
// import java.util.*;
public class FIndSum extends Thread{
    public void run (){
        try{
            int sum=0;
            for(int i=0;i<5;i++){
                sum+=i;
                Thread.sleep(1000);
            }
            System.out.println(sum);
        } catch(Exception e){}
    }
}
