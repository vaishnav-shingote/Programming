import java.io.*;

class program810
{
    public static void main(String[] args) throws IOException
    {
        int iNo = 0;
        long iFact = 0;
        int i = 0;
        int iDigit = 0;
        long iSum = 0;


        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter number: ");
        iNo = Integer.parseInt(bobj.readLine());

        int iTemp = iNo;
        
        iFact = 1;
        i = iNo;
        
        while(iNo !=0)
        {
            iDigit = iNo %10;
            while(iDigit!=0)
            {
                iFact = iFact*iDigit;
                iDigit--;
            }
            iSum = iSum + iFact;
            iNo = iNo/10;

            iFact = 1;
        
        }
        
        if(iSum == iTemp)
        {
            System.out.println("It is strong number");
        }
        else
        {
            System.out.println("It is not a strong number");
        }
    

        System.out.println("Factorial is :"+iFact);
        


    }
}