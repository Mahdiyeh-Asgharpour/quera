//package quera;

import java.util.Scanner;
//KHOB BAGHER SARMA KHORDE
public class Main {

    public static void main(String[] args) {
       
        String a[ ] = new String[5];
        Scanner q=new Scanner(System.in);
        for (int i=0;i<5;i++)
            a[i]=q.nextLine();
        for (int j=0;j<5;j++)

            {
                if (a[j].contains("HAFEZ") || a[j].contains("MOLANA"))
                {
                    System.out.print(j+1+" ");
                }

                 // else System.out.println("NOT FOUND!");
            }

    }
}
