<?php 
$x=readline("Enter value of x: \n");
$y=readline("Enter value of y: \n");
$result=1;
for($i=1;$i<=$y;$i++){
	$result=$result*$x;
}
echo "Power of ".$x. " to power ".$y. " is ".$result;
 ?>