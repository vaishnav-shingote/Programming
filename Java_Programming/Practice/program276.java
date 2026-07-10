import java.util.*;

class program276 {
    public static void main(String A[]) {
        Scanner sobj = new Scanner(System.in);
        String data = null;
        int iRet = 0;

        Program280 strobj = new Program280(); // Error

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