import java.util.*;

class program799
{
    public static void main(String[] args)
    {
        Scanner sobj = new Scanner(System.in);

        int iRow = 0, iCol = 0, iRet = 0;

        System.out.println("Enter no of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter no of colums : ");
        iCol = sobj.nextInt();

        MatrixLB mobj = new MatrixLB(iRow, iCol);

        mobj.Accept();

        mobj.Display();

        iRet = mobj.SummationAll();
        System.out.println("Summation of all elements of array is : "+iRet);

        mobj.SummationRow();

        iRet = mobj.MaximumAll();
        System.out.println("Maximum no is : "+iRet);


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

    public int SummationAll()
    {
        int iSum = 0;
        for(int i = 0; i<iRow ; i++)
        {
            for(int j = 0; j<iCol; j++)
            {
                iSum+=Arr[i][j];
            }   
        }

        return iSum;
    }

    public void SummationRow()
    {
        for(int i = 0; i<iRow ; i++)
        {
            int iSum = 0;
            for(int j = 0; j<iCol; j++)
            {
                iSum+=Arr[i][j];
            }   
            System.out.println("Summation of row "+ (i+1) + " is : "+iSum);
        }

    }

    public int MaximumAll()
    {
        int iMax = 0;
        for(int i = 0; i<iRow ; i++)
        {
            for(int j = 0; j<iCol; j++)
            {
                if(iMax < Arr[i][j])
                {
                    iMax = Arr[i][j];
                }
            }   
        }

        return iMax;
    }
}