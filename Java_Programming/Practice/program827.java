import java.io.*;

class program827
{
    public static void main(String[] args) throws IOException
    {
        int iNo = 0;
        int iTemp = 0;
        int iSquare = 0;
        int iCount = 0;
        int iDen = 0;
        
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter number : ");
        iNo = Integer.parseInt(bobj.readLine());

        iTemp = 0;
        
        iSquare = iNo*iNo;

        while(iNo != 0)
        {
            iCount++;
            iNo = iNo/10;
        }

        iDen = (int)Math.pow(10, iCount);

        if(iSquare%iDen == iTemp)
        {
            System.out.println("Automorphic");
        }
        else
        {
            System.out.println("Not Automorphic");
        }
    }
}
