// My name is amit
// ym eman si tima
import java.util.*;

class program748
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        StringX strobj = new StringX();

        String sret = strobj.WordReverse(str);

        System.out.println(sret);
    }
}

class StringX
{
    public String WordReverse(String str)
    {
        str = str.trim();
        str = str.replaceAll("\\s+", " ");

        StringBuffer sb = null;
        StringBuffer FinalStr = new StringBuffer();
        String Tokens[] = str.split(" ");

        for(int i = 0; i<Tokens.length; i++)
        {
            sb = new StringBuffer(Tokens[i]);
            FinalStr = FinalStr.append(sb.reverse());
            FinalStr = FinalStr.append(" ");
        }

        String Output = new String(FinalStr);
        Output = Output.trim();

        return Output;
    }
}