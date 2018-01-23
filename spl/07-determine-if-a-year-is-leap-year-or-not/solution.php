<?php 
	$year=readline("Enter Year: \n");
	
	if($year%4==0 or $year%100==0 or $year%400==0){
		echo $year ." is a Leap Year";
	}
	else{
		echo $year. " is not a Leap Year";
	}
 ?>