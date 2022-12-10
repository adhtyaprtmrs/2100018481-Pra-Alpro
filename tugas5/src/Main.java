public class Main {
    public static void main(String[] args) {
    //non abstract class
        Penumpang penumpang1 = new Penumpang("Adull");
        System.out.println("Identitas penumpang : ");
        penumpang1.tampil();

        Petugas petugas1 = new Petugas("Farhan");
        System.out.println("Identitas petugas : ");
        petugas1.tampil();
    //abstract class tidak bisa digunakan untuk membuat object
    //    Identitas identitas1 = new Identitas("Kesya");
    //    identitas1.tampil();
    }
}

