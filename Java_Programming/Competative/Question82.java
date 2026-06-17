//Write a program to print all even numbers up to N.

class program82 {
    public static void main(String A[]) {
        Logic obj = new Logic(11);
        obj.printEvenNumbers();
    }
}

class Logic {
    public int iNo;
    public int iCnt;

    public Logic(int iNum) {
        iNo = iNum;
    }

    void printEvenNumbers() {
        for (iCnt = 0; iCnt <= iNo; iCnt++) {
            if (iCnt % 2 == 0) {
                System.out.println(iCnt);
            }
        }

    }
}
