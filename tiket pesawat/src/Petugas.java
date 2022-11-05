public class Petugas extends Identitas{
    private String id_petugas;
    private String gmail;

    public Petugas(){
    }

    public String getId_petugas() {
        return id_petugas;
    }

    public void setId_petugas(String id_petugas) {
        this.id_petugas = id_petugas;
    }

    public String getGmail() {
        return gmail;
    }

    public void setGmail(String gmail) {
        this.gmail = gmail;
    }

    @Override
    public void setNama(String nama) {
        super.setNama(nama);
    }
}
