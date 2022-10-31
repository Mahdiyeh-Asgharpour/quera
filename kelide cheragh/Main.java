//package quera;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner a=new Scanner(System.in);
        int n=a.nextInt();
        int[] array=new int[n];
        int temp=0;
        for (int i=0;i<n;i++)
        {
            array[i]=a.nextInt();
        }
        for (int i=0;i<n-1;i++){
            if (array[i]!= array[i+1])
                temp++;
        }
        System.out.println(temp);
	// write your code here
    }
}
