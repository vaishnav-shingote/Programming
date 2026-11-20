import java.io.*;

class program819
{
    public static void main(String[] args) throws IOException
    {
        int iNo = 0;;
        int iTemp = 0;
        
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter number : ");
        iNo = Integer.parseInt(bobj.readLine());
        
        iTemp = iNo;
        int iSum = 0;

        while(iNo!=0)
        {
            iSum = iSum + iNo%10;
            iNo = iNo/10;
        }

        if(iTemp%iSum == 0)
        {
            System.out.println("It is Harshad number");
        }
        else
        {
            System.out.println("It is not Navid number");
        }
    }
}
