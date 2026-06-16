//Write a program to check whether a number is a palindrome or not.

class Question77 {
    public static void main(String A[]) {
        Logic obj = new Logic();
        obj.CheckPalidrome(234);
    }
}

class Logic {
    void CheckPalidrome(int iNum) {
        int iDigit = 0, iRev = 0;
        int iTemp = iNum;
        while (iNum != 0) {
            iDigit = iNum % 10;
            iRev = iRev * 10 + iDigit;
            iNum = iNum / 10;
        }
        if (iTemp == iRev) {
            System.out.println("Number is Palidrome");
        } else {
            System.out.println("Number is not Palidrome");
        }
    }
}