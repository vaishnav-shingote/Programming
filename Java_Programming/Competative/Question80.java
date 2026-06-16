//Write a program to print the multiplication table of number.

class Question80 {
    public static void main(String A[]) {
        Logic obj = new Logic();
        obj.printTable(5);
    }
}

class Logic {
    void printTable(int iNo) {
        int iCnt = 0;
        for (iCnt = 1; iCnt <= 10; iCnt++) {
            System.out.println("5 X " + iCnt + " = " + 5 * iCnt);
        }
    }
}
