public class exception {
    public static void main(String[ ]args){
        System.out.println("Main starts");
        try{
            System.out.println(10/0);
        }
        catch (ArithmeticException e){ // catch the Arithmatic
            System.out.println("Exception handled");
        }
        System.out.println("Main ends");
    }
}


