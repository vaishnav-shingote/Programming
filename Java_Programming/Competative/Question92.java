//Write a program to print numbers from N down to 1 in reverse order.

class Logic {
    void printReverse(int n) {
        for (int iCnt = n; iCnt > 0; iCnt--) {
            System.out.println(iCnt);
        }
    }
}

class Question93 {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.printReverse(10);
    }
}
