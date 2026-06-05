import java.util.Scanner;

class NumberX {

    public boolean CheckPrime(int iNo) {
        int iCnt = 0;

        for (iCnt = 2; iCnt <= iNo / 2; iCnt++) {
            if (iNo % iCnt == 0) {
                return false; // Bad programming practice (toolchain diagram)
            }
        }

        return true;
    }
}

class program67 {
    public static void main(String A[]) {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;
        boolean iRet = false;

        System.out.println("Enter number : ");
        iValue = sobj.nextInt();

        NumberX nobj = new NumberX();
        iRet = nobj.CheckPrime(iValue);

        if (iRet) {
            System.out.println("Number is Prime");
        } else {
            System.out.println("Number is not Prime");
        }

        sobj.close();
    }

}
