public abstract class Identitas {
    private String name;

    public Identitas(String name){
        this.name=name;
    }

    public void tampil(){
        System.out.println("Nama : "+this.name);
    }
}
