<?php
echo "<div align=center><strong><font size=6>TABLE GUEST BOOK </font></strong></div><br>";
echo "<div align=center><a href=guestbook.html> :: Isi Buku Tamu :: </a></div><br><br>";
echo "<hr size=10px>";

echo "<head><title>My Guest Book</title></head>";
$fp = fopen("guestbook.txt","r");
echo "<table align=center border=2 width=1000px>";

echo "<tr><td>Tanggal </td> <td>Nama </td> <td>Alamat </td><td>Email </td><td>Status </td><td>Komentar </td></tr>";
while ($isi=fgets($fp,80)){
	$pisah = explode ("|",$isi);

	echo "<tr><td> $pisah[0]</td><td> $pisah[1]</td><td> $pisah[2]</td><td> $pisah[3]</td><td> $pisah[4]</td><td> $pisah[5]</td></tr>";
	
}
echo "</table>";

?>