//Write a program to display all the factors of a given number.

class Logic {
    void displayFactors(int num) {
        int iCnt = 0;
        for (iCnt = 1; iCnt <= num / 2; iCnt++) {
            if (num % iCnt == 0) {
                System.out.println(iCnt);
            }
        }
    }
}

class Question97 {
    public static void main(String A[]) {
        Logic obj = new Logic();
        obj.displayFactors(234);
    }
}
