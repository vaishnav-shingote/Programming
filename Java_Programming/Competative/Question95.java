//Write a program to find the smallest digit in the number.

class Logic {
    void FindSmallestDigit(int iNo) {
        int iDigit = 0;
        int iMin = iNo % 10;
        while (iNo != 0) {
            iDigit = iNo % 10;
            if (iMin > iDigit) {
                iMin = iDigit;
            }
            iNo = iNo / 10;
        }
        System.out.println("Smallest digit in number is " + iMin);
    }
}

class Question95 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.FindSmallestDigit(658914);
    }
}
