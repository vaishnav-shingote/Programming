import java.util.*;
public class program775 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);

        HashMap<Character, Integer> hobj = new HashMap<Character, Integer>();

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();
        int iCount = 0;

        for(char ch : Arr)
        {
            if(hobj.containsKey(ch))
            {
                iCount = hobj.get(ch);
                hobj.put(ch, iCount+1);
            }else
            {
                hobj.put(ch, 1);
            }
        }

        int Max = 0;
        char temp = '\0';
        for(char cValue : hobj.keySet())
        {
            if(Max<hobj.get(cValue))
            {
                Max = hobj.get(cValue);
                temp = cValue;
            }
        }

        System.out.println(temp + " occures maximum times ie "+ Max);
    }
}
