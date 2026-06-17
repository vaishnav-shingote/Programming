//Write a program to find the largest digit in the number.

class Logic {
    void FindLargestDigit(int iNo) {
        int iDigit = 0;
        int iMax = 0;
        while (iNo != 0) {
            iDigit = iNo % 10;
            if (iMax < iDigit) {
                iMax = iDigit;
            }
            iNo = iNo / 10;
        }
        System.out.println("Largest digit in number is " + iMax);
    }
}

class Question94 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.FindLargestDigit(65894);
    }
}