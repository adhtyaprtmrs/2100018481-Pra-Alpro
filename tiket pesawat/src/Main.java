import java.util.Scanner;
import java.io.*;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String usr, psw,lg, my_user,my_password;;
        BufferedReader br = new BufferedReader (new InputStreamReader (System.in));

        //instance of class
        Login user1= new Login();
        System.out.println("=============LOGIN===============");
        System.out.print("|  Masukan username = "); my_user=br.readLine();
        System.out.print("|  Masukan password = "); my_password=br.readLine();
        System.out.println("=================================");

        if(my_user.equals(user1.getUsername())&& my_password.equals(user1.getPassword()))
        {
            System.out.println("=================================");
            System.out.println("      * Login Sukses *");
            System.out.println("=================================");
        }
        else
        {
            System.out.println("=================================");
            System.out.println("       * Login Galgal***");
            System.out.println("=================================");
            do{
                System.out.println("=============LOGIN===============");
                System.out.print("|  Masukan username = "); my_user=br.readLine();
                System.out.print("|  Masukan password = "); my_password=br.readLine();
                System.out.println("=================================");
            }while(my_user.equals(user1.getUsername())&& my_password.equals(user1.getPassword()));
        }

        Petugas ptgs = new Petugas();

        System.out.print("ID Petugas : ");
        String id = input.nextLine();
        ptgs.setId_petugas(id); //enkapsulasi dengan private di class main

        System.out.print("Nama : ");
        String nama = input.nextLine();
        ptgs.setNama(nama); //enkapsulasi dengan protected di class main

        System.out.print("Gmail : ");
        String gmail = input.nextLine();
        ptgs.setGmail(gmail);

        //output petugas
        System.out.println("\nID Petugas : "+ptgs.getId_petugas());
        System.out.println("Nama : " +ptgs.getNama());
        System.out.println("Gmail : " +ptgs.getGmail());

        Jadwal j1 = new Jadwal();
        j1.jdwl();
        Penumpang pnp = new Penumpang();

    }
}