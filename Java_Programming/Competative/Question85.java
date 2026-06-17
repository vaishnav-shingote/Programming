//Write a program to check whether number is positive, negative or zero.

class Question85 {
    public static void main(String A[]) {
        Logic obj = new Logic();
        obj.checkSign(-8);
    }
}

class Logic {
    public void checkSign(int iNo) {
        if (iNo < 0) {
            System.out.println("Number is Negative");
        } else if (iNo > 0) {
            System.out.println("Number is Positive");
        } else {
            System.out.println("Number is zero");
        }
    }
}
