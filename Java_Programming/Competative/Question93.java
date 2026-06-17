//Write a program to check whether numbers is perfect number or not.

class Logic {
    void checkPerfect(int iNo) {
        int iSum = 0;
        int iCnt = 0;
        for (iCnt = 1; iCnt <= iNo / 2; iCnt++) {
            if (iNo % iCnt == 0) {
                iSum += iCnt;
            }
        }
        if (iSum == iNo) {
            System.out.println("Number is perfect");
        } else {
            System.out.println("Number is not perfect");
        }
    }
}

class Question93 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.checkPerfect(6);
    }
}
