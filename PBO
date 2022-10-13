import java.util.Scanner;

public class perpustakaan {

        public static void main (String[]args){
            int n;
            int mn;
            int[] id = new int[10];
            int[] stok = new int[10];

            String[] judul_bk = new String[10];
            String[] pengarang = new String[10];
            Scanner input = new Scanner(System.in);

            System.out.println("SELAMAT DATANG DI PERPUSTAKAAN AHLAN");
            System.out.println();

                System.out.println("[1.] Input data");
                System.out.println("[2.] Keluar");
                System.out.println("Pilih menu:");
                mn = input.nextInt();

                switch (mn) {
                    case 1:
                        System.out.print("Masukkan banyak data yang ingin di data : ");
                        n = input.nextInt();
                        for (int i = 0; i < n; i++) {
                            System.out.print("Masukan id buku        :");
                            id[i] = input.nextInt();
                            System.out.print("Masukan judul buku     :");
                            judul_bk[i] = input.next();
                            System.out.print("Masukan nama pengarang :");
                            pengarang[i] = input.next();
                            System.out.print("Masukan stok buku      :");
                            stok[i] = input.nextInt();
                            System.out.println();

                        }
                        System.out.println("Cetak data :");
                        for (int i = 0; i < n; i++) {
                            System.out.println("Data ke-" + (i + 1) + ":");
                            System.out.println("Id buku        :" + id[i]);
                            System.out.println("Judul buku     :" + judul_bk[i]);
                            System.out.println("Nama pengarang :" + pengarang[i]);
                            System.out.println("Stok buku      :" + stok[i]);
                            System.out.println();
                        }
                        break;
                    case 2:
                        return;


                    default:
                        System.out.println("Errorr !!!");
                }
            }
        }
