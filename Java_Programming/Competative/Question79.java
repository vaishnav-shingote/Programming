//Write a program to find the minimum of three numbers.

class Question79 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.findMin(20, 15, 7);
    }
}

class Logic
{
    void findMin(int a, int b, int c) {
        if (a < b && a < c) {
            System.out.println(a + " is minimum among three.");
        } else if (b < a && b < c) {
            System.out.println(b + " is minimum among three.");
        } else {
            System.out.println(c + " is minimum among three.");
        }
    }
}
