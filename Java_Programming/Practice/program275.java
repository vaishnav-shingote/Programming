import java.util.*;

class StringX {
    public int CountCapital(String str) {
        int iCount = 0, i = 0;
        char Arr[] = str.toCharArray();
        for (i = 0; i < Arr.length; i++) {
            if (Arr[i] >= 'A' && Arr[i] <= 'Z') {
                iCount++;
            }
        }
        return iCount;
    }

    public int CountSmall(String str) {
        int iCount = 0, i = 0;
        char Arr[] = str.toCharArray();
        for (i = 0; i < Arr.length; i++) {
            if (Arr[i] >= 'a' && Arr[i] <= 'z') {
                iCount++;
            }
        }
        return iCount;
    }

    public int CountDigits(String str) {
        int iCount = 0, i = 0;
        char Arr[] = str.toCharArray();
        for (i = 0; i < Arr.length; i++) {
            if (Arr[i] >= '0' && Arr[i] <= '9') {
                iCount++;
            }
        }
        return iCount;
    }

    public int CountSpace(String str) {
        int iCount = 0, i = 0;
        char Arr[] = str.toCharArray();
        for (i = 0; i < Arr.length; i++) {
            if (Arr[i] == ' ') {
                iCount++;
            }
        }
        return iCount;
    }

    public int CountSpecial(String str) {
        int iCount = 0, i = 0;
        char Arr[] = str.toCharArray();
        for (i = 0; i < Arr.length; i++) {
            if ((Arr[i] >= '!' && Arr[i] <= '/') || (Arr[i] >= ':' && Arr[i] <= '@')
                    || (Arr[i] >= '[' && Arr[i] <= '`') || (Arr[i] >= '{' && Arr[i] <= '~')) {
                iCount++;
            }
        }
        return iCount;
    }
}

class program275 {
    public static void main(String A[]) {
        Scanner sobj = new Scanner(System.in);
        String data = null;
        int iRet = 0;

        StringX strobj = new StringX();

        System.out.println("Enter string : ");
        data = sobj.nextLine();

        iRet = strobj.CountCapital(data);
        System.out.println("Number of Capital Characters : " + iRet);

        iRet = strobj.CountSmall(data);
        System.out.println("Number of Small Characters : " + iRet);

        iRet = strobj.CountDigits(data);
        System.out.println("Number of Digits are : " + iRet);

        iRet = strobj.CountDigits(data);
        System.out.println("Number of white spaces are : " + iRet);

        iRet = strobj.CountDigits(data);
        System.out.println("Number of special Symbols are : " + iRet);

    }
}