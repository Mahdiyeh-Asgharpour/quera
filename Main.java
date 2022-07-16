//package quera;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner q=new Scanner(System.in);
        String n=q.next();
        for (int i=0;i<n.length();i++)
        {
            char e=n.charAt(i);
            int w=Integer.parseInt(Character.toString(e));
            System.out.print(w+": ");
            for (int j=0;j<w;j++)
                System.out.print(w);
            System.out.println();
        }
	// write your code here
    }
}
