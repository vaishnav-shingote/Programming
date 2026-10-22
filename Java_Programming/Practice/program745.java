// My name is amit
// ym eman si tima
import java.util.*;

class program745
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        str = str.trim();
        str = str.replaceAll("\\s+", " ");

        StringBuffer sb = null;

        String Tokens[] = str.split(" ");

        for(int i = 0; i<Tokens.length; i++)
        {
            sb = new StringBuffer(Tokens[i]);

            System.out.print(sb.reverse()+ " ");
        }
        

        
    }
}