<?php 
	$data=readline("Press 1 for Even and 2 for Odd ");
	if($data==1){
		funceven();
	}
	elseif($data==2){
		funcodd();
	}
	function funceven(){
		for($i=1;$i<=1000;$i++){
   			if($i%2==0){
        		echo $i,"\n";
   		 	}
		}
	}
	function funcodd(){
		for($i=1;$i<=1000;$i++){
   			if($i%2!==0){
        		echo $i,"\n";
   		 	}
		}
	}
 ?>