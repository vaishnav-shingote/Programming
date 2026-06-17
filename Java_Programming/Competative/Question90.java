//Write a program to calculate the power of a number using loops.

class Question86 {
    public static void main(String A[]) {
        Logic obj = new Logic();
        obj.calculatePower(20, 4);
    }
}

class Logic {
    void calculatePower(int base, int exp) {
        int Result = 0;
        Result = 1;
        for (int iCnt = 0; iCnt < exp; iCnt++) {
            Result = Result * base;
        }
        System.out.println(Result);
    }
}
