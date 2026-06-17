//Write a program to count how many even and odd numbers are present between 1 and N.

class Logic {
    void countEvenOddRange(int num) {
        int iCnt = 0;
        int iCount1 = 0;
        int iCount2 = 0;
        for (iCnt = 1; iCnt <= num; iCnt++) {
            if (num % 2 == 0) {
                iCount1++;
            } else {
                iCount2++;
            }
        }
        System.out.println("Number of Even numbers are " + iCount1);
        System.out.println("Number of Odd numbers are " + iCount2);
    }
}

class Question97 {
    public static void main(String A[]) {
        Logic obj = new Logic();
        obj.countEvenOddRange(234);
    }
}