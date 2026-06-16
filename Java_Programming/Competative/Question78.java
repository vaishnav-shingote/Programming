//Write a program to find the maximum of two numbers.

class Question78 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.findMax(20, 15);
    }
}

class Logic {
    void findMax(int a, int b) {
        if (a > b) {
            System.out.println(a + " is greater");
        } else {
            System.out.println(b + " is greater");
        }
    }
}
