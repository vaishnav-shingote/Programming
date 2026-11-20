import java.io.*;

class program807
{
    public static void main(String[] args) throws IOException
    {
        int iNo = 0;
        int iFact = 0;
        int i = 0;

        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter number: ");
        iNo = Integer.parseInt(bobj.readLine());

        iFact = 1;
        i = iNo;
        
        while(i!=0)
        {
            iFact = iFact*i;
            i--;
        }

        System.out.println("Factorial is :"+iFact);
        


    }
}