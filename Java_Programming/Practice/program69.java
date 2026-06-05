import java.util.Scanner;

class NumberX {

    public boolean CheckPrime(int iNo) {
        int iCnt = 0;
        boolean bFlage = false;

        for (bFlage = true, iCnt = 2; iCnt <= iNo / 2; iCnt++) {
            if (iNo % iCnt == 0) {
                bFlage = false;
                break;
            }
        }

        return bFlage;

    }
}

class program69 {
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
