<?php
echo "hello world";
    include "connection.php";
    $name_email=$_POST["textemail"];
    $number_of_password=$_POST["textpassword"];
    $uplord_data="insert into user_db(id,email,password)valus('','$name_email','$password')";
    if(mysqli_query($myserver,$uplord_data)){
        echo "<a href='project.html'>success full</a>";
    }
    else {
        echo "<a href='http://localhost:8080/.vscode/form.php'>Enter you information agen</a>";
    }
?>