class program146 {

    public static void main(String A[]) {
        int Brr[] = { 10, 20, 30, 40, 50 };
        int iCnt = 0;
        System.out.println("Array Before function call : ");
        for (iCnt = 0; iCnt < Brr.length; iCnt++) {
            System.out.println(Brr[iCnt]);
        }

        ArrayX.Update(Brr);

        System.out.println("Array after function call: ");
        for (iCnt = 0; iCnt < Brr.length; iCnt++) {
            System.out.println(Brr[iCnt]);
        }
    }
}

class ArrayX {
    public static void Update(int Arr[]) {
        int iCnt = 0;
        for (iCnt = 0; iCnt < Arr.length; iCnt++) {
            Arr[iCnt]++;
        }
    }
}
