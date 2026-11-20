import java.io.*;

class program820
{
    public static void main(String[] args) throws Exception
    {
        int iNo = 0;
        int iTemp = 0;
        int iSart = 0;
        int iEnd = 0;
        
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter Starting point : ");
        iSart = Integer.parseInt(bobj.readLine());

        System.out.println("Enter Ending point : ");
        iEnd = Integer.parseInt(bobj.readLine());
        
        for(int i = iSart; i<=iEnd; i++)
        {
            iNo = i;
            int iSum = 0;

            while(iNo!=0)
            {
                iSum = iSum + iNo%10;
                iNo = iNo/10;
            }

            if(i%iSum == 0)
            {
                System.out.println(i);
            }
            
        }
        
    }
}
