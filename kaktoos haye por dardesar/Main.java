//package quera;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner a=new Scanner(System.in);
        int temp=a.nextInt();
        int array[]=new int[temp];
        for (int i=0;i<temp;i++){
            array[i]=a.nextInt();
        }
        for (int i=0;i<temp;i++){
            if (array[i]<=3) {
                for(int j=1;j<=array[i];j++)
                {
                    System.out.print("*");
                }

            }else System.out.print("*");
            if (i != temp-1) System.out.print("\n");
        }


	// write your code here
    }
}
