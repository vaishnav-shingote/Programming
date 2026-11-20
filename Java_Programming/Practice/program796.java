import java.util.*;

class program796
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iRow = 0, iCol = 0;

        System.out.println("Enter no of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter no of colums : ");
        iCol = sobj.nextInt();

        MatrixLB mobj = new MatrixLB(iRow, iCol);

        mobj.Accept();
        mobj.Display();

        mobj = null;

        System.gc();

    }
}

class Matrix
{
    protected int Arr[][];
    protected int iRow;
    protected int iCol;

    public Matrix(int iRow, int iCol)
    {
        System.out.println("Inside finalize constructor");
        this.iRow = iRow;
        this.iCol = iCol;

        Arr = new int[iRow][iCol];
        
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the elements of Matrix :");

        for(int i = 0; i<iRow ; i++)
        {
            for(int j = 0; j<iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
            
        }
    }

    public void Display()
    {
        System.out.println("Entered the elements of Matrix are :");
        for(int i = 0; i<iRow ; i++)
        {
            for(int j = 0; j<iCol; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
            
        }
    }
}

class MatrixLB extends Matrix
{
    public MatrixLB(int iRow, int iCol)
    {
        super(iRow, iCol);
    }
}