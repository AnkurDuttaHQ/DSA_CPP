class mother {
    public void show(){
        System.out.println("This is mother class");
    }
}

class daughter extends mother {
    public void show(){
        System.out.println("This is daughter class");
    }

}

class C{
    int a =30;
}

class D extends C{
    String b = "Hello";
}

public class user {
        public static void main(String[] args){
        mother obj1 = new daughter(); // Runtime polymorphism: reference of mother class pointing to daughter class object
        obj1.show();
        C obj2 = new D(); // Runtime polymorphism: reference of C class pointing to D class object
        System.out.println(obj2.a); 
        System.out.println(obj2.b);
       
    }
}
