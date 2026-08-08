package Student;

public class Prod extends Thread {
    public void run(){
        try{
            int prod =1;
            for(int i=0;i<5;i++){
                prod*=i;
                Thread.sleep(1000);
            }
            System.out.println(prod);
        } catch(Exception e){}
    }
}
