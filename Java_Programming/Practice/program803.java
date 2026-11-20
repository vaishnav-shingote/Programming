import java.io.*;
import java.util.*;

class program803
{
    public static void main(String[] args) throws IOException
    {
        int iNo = 0;
        Scanner sobj = new Scanner(System.in);
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter a number: ");
        iNo = Integer.parseInt(bobj.readLine());

        int iDigit = 0;
        int iTemp = 0;

        iTemp = iNo;

        while(iNo!=0)
        {
            iDigit = iNo%10;
            System.out.println(iDigit);
            iNo = iNo/10;
        }


    }
}