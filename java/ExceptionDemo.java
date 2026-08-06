public class ExceptionDemo {

    int[] arr = {1, 2, 3};

    public static void main(String[] args) throws Exception {

        System.out.println("Main starts");

        try {
            System.out.println(10 / 0);
        }
        catch (ArithmeticException e) {
            System.out.println("Arithmetic Exception handled");
            System.out.println(e.getMessage());
        }

        ExceptionDemo obj = new ExceptionDemo();
        obj.handleArrayException();
        obj.handleNullPointerException();

        System.out.println("Main ends");
    }

    public void handleArrayException() {

        try {
            System.out.println(arr[5]);
        }
        catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Array Index Out of Bounds Exception handled");
            System.out.println(e.getMessage());
        }
    }

    public void handleNullPointerException() {

        String str = null;

        try {
            System.out.println(str.length());
        }
        catch (NullPointerException e) {
            System.out.println("Null Pointer Exception handled");
            System.out.println(e.getMessage());
        }
    }


}

class Test {
    public static void displayArray(int[] arr){
        System.out.println("Array elements are: ");
        for(int i=0; i<arr.length; i++){
            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5};
        displayArray(arr);
    }
}