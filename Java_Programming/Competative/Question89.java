//Write a program to print each digit of a number separately.

class Question89 {
    public static void main(String A[]) {
        Logic obj = new Logic();
        obj.printDigits(2024);
    }
}

class Logic {
    void printDigits(int iNo) {
        int iDigit = 0;
        while (iNo != 0) {
            iDigit = iNo % 10;
            System.out.println(iDigit);
            iNo = iNo / 10;
        }
    }
}
