<?php
include "connection.php";
$lastname=$_POST["textfirstname"];
$firstname=$_POST["textlastname"];
$phone_number=$_POST["textphonenumber"];
$email=$_POST["text_G_email"];
$password=$_POST["text_G_password"];
$comfirmpassword=$_POST["text_G_comfirmpassword"];
$insert="insert into tbl_gaete(id,firstname,lastname,phonenumber,Email,password,comfirmpassword) valus('','$firstname','$lastname','$phone_number','$email','$passsword','$comfirmpassword')";
if(mysqli_query($myserver,$insert)){
    echo "<a href='index.html'>success</a>";
}
else{
    echo "<a href='http://localhost:8080/.vscode/form.php'>Enter you agen</a>";
}

?>