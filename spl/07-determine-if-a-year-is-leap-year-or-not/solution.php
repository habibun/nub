<?php 
	$year=readline("Enter Year: \n");
	if($year%4==0){
		if($year%100==0){
			if($year%400==0){
				echo "$year is a leap year";
			}
				else{
					echo "$year is not a leap year";
				}
		}
			else{
				echo "$year is a leap year";
			}
	}
		else{
			echo "$year is not a leap year";
		}
 ?>