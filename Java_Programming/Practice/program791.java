import java.util.*;

class program791
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iRow = 0, iCol = 0;

        System.out.println("Enter no of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter no of colums : ");
        iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);

        mobj = null;
        System.gc();

        /*
        
        int Arr[][] = new int[iRow][iCol];

        System.out.println("Enter the elements of Matrix :");

        for(int i = 0; i<iRow ; i++)
        {
            for(int j = 0; j<iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
            
        }

        System.out.println("Entered the elements of Matrix are :");
        for(int i = 0; i<iRow ; i++)
        {
            for(int j = 0; i<iCol; j++)
            {
                System.out.println(Arr[i][j]+"\t");
            }
            
        }
         */
    }
}

class Matrix
{
    public int Arr[][];

    public Matrix(int iRow, int iCol)
    {
        Arr = new int[iRow][iCol];
    }

    protected void finalize()
    {
        System.out.println("Inside finalize method");
        Arr = null;
        System.gc();
    }
}

