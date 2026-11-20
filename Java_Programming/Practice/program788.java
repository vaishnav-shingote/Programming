import java.util.*;

class program788
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iRow = 0, iCol = 0;

        System.out.println("Enter no of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter no of colums : ");
        iCol = sobj.nextInt();

        int Arr[][] = new int[iRow][iCol];

        System.out.println(Arr.length);

        System.out.println(Arr[0].length);

    }
}
