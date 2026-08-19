
class prime {
    public static void main(String[] args) {
        int num = 5;
    
        for(int i=2;i<num;i++){
            if(num % i == 0){
                System.err.println("The number is not prime");
                break;
            }

           
        }

         System.err.println("The number is prime");
    }
}
