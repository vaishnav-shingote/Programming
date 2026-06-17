//Write a program to check wether a number is prime or not.

class program81 {
    public static void main(String A[]) {
        Logic obj = new Logic(11);
        obj.checkPrime();
    }
}

class Logic {
    public int iNo;
    public int iCnt;
    public int iCount;

    public Logic(int iNum) {
        iNo = iNum;
        iCount = 0;
    }

    void checkPrime() {
        for (iCnt = 2; iCnt <= (iNo / 2); iCnt++) {
            if (iNo % iCnt == 0) {
                iCount++;
            }
        }
        if (iCount != 0) {
            System.out.println("Number is not Prime");
        } else {
            System.out.println("Number is Prime");
        }
    }
}
