<?php

$tanggal=$_POST['tanggal'];
$nama = $_POST['nama'];
$alamat = $_POST['alamat'];
$email = $_POST['email'];
$status = $_POST['status'];
$komentar = $_POST['komentar'];

echo "<head><title>My Guest Book</head></title>";
$fp = fopen("guestbook.txt","a+");
fputs($fp,"$tanggal|$nama|$alamat|$email|$status|$komentar\n");
fclose($fp);

echo "Terimakasih Atas Partisipasi Anda Mengisi Buku Tamu<br>";
echo "<a href=tampilan.php> Isi Buku Tamu </a><br>";
echo "<a href=lihat.php>Lihat Buku Tamu </a><br>";
?>