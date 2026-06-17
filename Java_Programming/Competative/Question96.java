//Write a program to calculate the product of digits of a number.

class Logic {
    void productOfDigits(int num) {
        int iDigit = 0;
        int iMult = 0;
        iMult = 1;
        while (num != 0) {
            iDigit = num % 10;
            iMult = iMult * iDigit;
            num = num / 10;
        }
        System.out.println("Product of digits of a number is " + iMult);
    }

}

class Question96 {
    public static void main(String A[]) {
        Logic obj = new Logic();
        obj.productOfDigits(234);
    }
}