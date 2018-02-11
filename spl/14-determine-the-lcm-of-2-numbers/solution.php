<?php
$num1=readline("Enter a number: \n");
$num2=readline("Enter another number: \n");
$val=0;
$flag=1;
if($num1>$num2){
	$val=$num1;
}
else{
	$val=$num2;
}

while($flag==1){
	if($val%$num1==0 && $val%$num2==0){
		echo "LCM of " .$num1. " & ".$num2. " is ".$val;
		break;
		
	}
		$val++;
}
 ?>