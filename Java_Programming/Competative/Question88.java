//Write a program to check whether a number is divisible by 5 and 11.
class Question88 {
    public static void main(String A[]) {
        Logic obj = new Logic();
        obj.checkDivisible(55);
    }
}

class Logic {
    void checkDivisible(int iNo) {
        if ((iNo % 5 == 0) && (iNo % 11 == 0)) {
            System.out.println("Divisible by 5 and 11");
        } else {
            System.out.println("Not divisible by 5 and 11");
        }
    }
}
