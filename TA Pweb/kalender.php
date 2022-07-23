<?php
echo "<h1 color=red><center>Kalender</center></h1>";
echo "<center><b>";
echo date('l, d F');
echo "</b></center>";
echo "<hr>";

echo "<center>";
echo "<h3>Membuat kalender menggunakan PHP</h3>";

$hari = date("d");
$bulan = date("m");
$tahun = date("y");
$jumlahhari=date("t",mktime(0,0,0,$bulan,$hari,$tahun));
?>
<table style="border:2px solid #1e90ff" width="500px" height="300px">
	<tr bgcolor="#add8e6">
	<td align="center"><font color="#ff0000">Minggu</font></td>
	<td align="center">Senin</td>
	<td align="center">Selasa</td>
	<td align="center">Rabu</td>
	<td align="center">Kamis</td>
	<td align="center">Jumat</td>
	<td align="center">Sabtu</td></tr>

	<?php
	$s=date ("w", mktime (0,0,0,$bulan,1,$tahun));

	for ($ds=1;$ds<=$s;$ds++){
		echo "<td></td>";
	}

	for ($d=1; $d<=$jumlahhari;$d++){
		if (date("w", mktime(0,0,0,$bulan,$d,$tahun))==0){
			echo "<tr>";
		}
		$warna="#000000";

		if(date("1",mktime(0,0,0,$bulan,$d,$tahun))== "Sunday") { $warna="ff0000";}
		echo "<td align=center valign=middle><span style=\"color:$warna\">$d</span></td>";
		if (date("w", mktime(0,0,0,$bulan,$d,$tahun))==6){ echo "</tr>";}
	}
	echo '</table>';
	echo "</center>";
	echo "<br><br><br>";
?>
<hr>

<?php
$filecounter="counter.txt";
$fl=fopen($filecounter,"r+");
$hit=fread($fl,filesize($filecounter));
echo("<table width=250 align=center border=1 cellspacing=0 cellpadding=0 bordercolor=#0000ff><tr>");
echo("<td width=250 valign=middle align=center>");
echo("<font face=verdana size=2 color=#ff0000><b>");
echo("Anda pengunjung yang ke : ");
echo($hit);
echo("</b></font>");
echo("</td>");
echo("</tr></table>");
fclose($fl);
$fl=fopen($filecounter,"w+");
$hit=$hit+1;
fwrite($fl,$hit,strlen($hit));
fclose($fl);
?>