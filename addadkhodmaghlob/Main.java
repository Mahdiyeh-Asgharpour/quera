//package quera;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner a=new Scanner(System.in);
        String b=a.next();
        int c = 0;
        for (int i=(b.length()-1);i>=0;i--)
        {
            c = Integer.parseInt(c + String.valueOf(b.charAt(i)));
        }
        if (Integer.parseInt(b)== c)
            System.out.println("YES");
        else
            System.out.println("NO");
	// write your code here
    }
}
