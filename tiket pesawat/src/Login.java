public class Login {
    //deklarasi
    private String username;
    private String password;

    //constructor
    public Login()
    {
        username = "admin";
        password = "admin";
        //nama = "Imam Ibnu Badri";
    }

    public Login(String username, String password, String nama)
    {
        this.username = username;
        this.password = password;
    }


    //setter
    public void setUsername(String username)
    {
        this.username = username;
    }
    public void setPassword(String password)
    {
        this.password = password;
    }

    //public void setNama(String nama)
    //{
    //    this.nama = nama;
    //}

    //getter
    public String getUsername()
    {
        return username;
    }
    public String getPassword()
    {
        return password;
    }
    //public String getNama()
    //{
    //    return nama;
    //}
}

