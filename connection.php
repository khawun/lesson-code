<?php
$servername="localhost";
$user="root";
$password="";
$database="clien";
$myserver=mysqli_connect($servername,$user,$password,$database);
if(!$myserver){
    echo "can not connection!";
}
else{
    echo "success for connection";
}
?>