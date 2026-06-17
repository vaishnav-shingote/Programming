//Write a program to print all odd numbers up to N.

class program83 {
    public static void main(String A[]) {
        Logic obj = new Logic(11);
        obj.printOddNumbers();
    }
}

class Logic {
    public int iNo;
    public int iCnt;

    public Logic(int iNum) {
        iNo = iNum;
    }

    void printOddNumbers() {
        for (iCnt = 0; iCnt <= iNo; iCnt++) {
            if (iCnt % 2 != 0) {
                System.out.println(iCnt);
            }
        }

    }
}
