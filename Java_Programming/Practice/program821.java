import java.io.*;

class program821
{
    public static void main(String[] args) throws IOException
    {
        int iNo = 0;
        int iRev =0;
        
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter number : ");
        iNo = Integer.parseInt(bobj.readLine());
        

        while(iNo!=0)
        {
            iRev = iRev*10 + iNo%10;
            iNo = iNo/10;
        }

        System.out.println("Reverse of number is "+iRev);
       
    }
}
