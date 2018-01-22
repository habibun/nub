<?php 
	$val=readline("Press 1 for celsius to ferhenheit or \n 2 to ferhenheit to celsius");
		if($val==1){
			celsius();
		}
		elseif($val==2){
			ferhenheit();
		}
		function celsius(){
			$cel=readline("Enter celsius to ferhenhite");
			$resultcel=$cel*33.8;
			echo $resultcel;
		}
		function ferhenheit(){
			$fer=readline("Enter ferhenheit to celsius");
			$resultfer=$fer*-17.22;
			echo $resultfer;
		}
	 ?>