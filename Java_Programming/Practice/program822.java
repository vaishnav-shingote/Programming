import java.io.*;

class program821
{
    public static void main(String[] args) throws IOException
    {
        int iNo = 0;
        int iRev =0;
        int iTemp = 0;
        
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter number : ");
        iNo = Integer.parseInt(bobj.readLine());

        iTemp = 0;
        

        while(iNo!=0)
        {
            iRev = iRev*10 + iNo%10;
            iNo = iNo/10;
        }

        if(iRev == iTemp)
        {
            System.out.println("It is palidrome number");
        }
        else
        {
            System.out.println("It is not a Palidrome number");
        }
    }
}
