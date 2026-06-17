//Write a program to display all the numbers that are divisible by 2 and 3.

class Logic {
    void printDivisibleBy2and3(int num) {
        int iCnt = 0;
        for (iCnt = 1; iCnt < num; iCnt++) {
            if (num % iCnt == 0) {
                System.out.println(iCnt);
            }
        }
    }
}

class Question97 {
    public static void main(String A[]) {
        Logic obj = new Logic();
        obj.printDivisibleBy2and3(30);
    }
}
