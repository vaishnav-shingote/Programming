//Write a program to display number of factors of a given number.

class Logic {
    void countFactors(int num) {
        int iCnt = 0;
        int iCount = 0;
        for (iCnt = 1; iCnt <= num / 2; iCnt++) {
            if (num % iCnt == 0) {
                iCount++;
            }
        }
        System.out.println("No of factors are : "+iCount);
    }
}

class Question97 {
    public static void main(String A[]) {
        Logic obj = new Logic();
        obj.countFactors(234);
    }
}
