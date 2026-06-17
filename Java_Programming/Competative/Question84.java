//Write a program to find the sum of even and odd digits separately in number.

class Question84 {
    public static void main(String A[]) {
        Logic obj = new Logic(23);
        obj.sumEvenOddDigits();
    }
}

class Logic {
    public int iNum;
    public int iCnt;
    public int iDigit;
    public int iSum1;
    public int iSum2;

    public Logic(int iNo) {
        iNum = iNo;
        iDigit = 0;
        iSum1 = 0;
        iSum2 = 0;
    }

    public void sumEvenOddDigits() {
        while (iNum != 0) {
            iDigit = iNum % 10;
            if (iDigit % 2 == 0) {
                iSum1 = iSum1 + iDigit;
            } else {
                iSum2 = iSum2 + iDigit;
            }
            iNum = iNum / 10;
        }

        System.out.println("Sum of Even digits is " + iSum1);
        System.out.println("Sum of Odd digits is " + iSum2);
    }
}
