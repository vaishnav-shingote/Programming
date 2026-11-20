import java.io.*;

class program811
{
    public static void main(String[] args) throws IOException
    {
        int iFact[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
       
        int iNo = 0;

        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter number: ");
        iNo = Integer.parseInt(bobj.readLine());

        int i = 0;
        int iDigit = 0;
        long iSum = 0;
        int iTemp = iNo;

        i = iNo;
        
        while(iNo !=0)
        {
            iDigit = iNo %10;

            iSum = iSum + iFact[iDigit];
            iNo = iNo/10;
           
            if(iSum>iTemp)
            {
                break;
            }
        }
        
        if(iSum == iTemp)
        {
            System.out.println("It is strong number");
        }
        else
        {
            System.out.println("It is not a strong number");
        }

    }
}