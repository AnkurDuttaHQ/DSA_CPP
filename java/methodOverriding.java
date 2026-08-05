
    class A{
        public void display(){
            System.out.println("Class A");
        }
    }

    class B extends A{
        public void display(){
            System.out.println("Class B");
        }

        public static void main(String[] args){
            A obj1 = new A();
            A obj2 = new B();
            obj2.display(); // This will call the display method of class B due to method overriding
        }

    }
