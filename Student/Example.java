package Student;
class Example {
    
    public static void main(String[] args) {
        System.out.println("main starts");
        FIndSum thread1 = new FIndSum();
        Prod thread2 = new Prod();
        thread1.start();
        thread2.start();
        System.out.println("main ends");
    }
}