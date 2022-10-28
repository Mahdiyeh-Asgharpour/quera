//package quera;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner a=new Scanner(System.in);
        String name=a.next();
        if((name.length()%2)==0)
            System.out.println("khoob");
        else
            System.out.println("bad");
    }
}
