// x = 3  y = 5
// 3*3*3*3*3

import java.io.*;

class program815
{
    public static void main(String[] args) throws IOException
    {
        int iNo = 0;
        int iCount = 0;
        int iTemp = 0;
        
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter number as a base : ");
        iNo = Integer.parseInt(bobj.readLine());
        
        System.out.println("Number of digits are : "+ String.valueOf(iNo).length());
        
    }
}
