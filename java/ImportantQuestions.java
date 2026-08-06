public class ImportantQuestions {
    String name;
    String name1;
    public void compareStrings(String str1, String str2) {
        this.name = new String(str1);
        this.name1 = new String(str2);
        if(name == name1) {
        System.out.println("true");
       } else {
        System.out.println("false");
         }

        if(str1.equals(str2)){
            System.out.println("true");
        } else {
            System.out.println("false");
        }

    }

    public static void main(String[] args) {
        ImportantQuestions obj = new ImportantQuestions();
        obj.compareStrings("hello", "hello");
    }
    
}