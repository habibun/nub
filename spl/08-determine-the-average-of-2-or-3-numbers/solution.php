<?php 
	$numbers=readline("How many Numbers do you want to average: ");
	if($numbers==2){
		inpTwo();
	}
	elseif($numbers==3){
		inpThree();
	}
	else{
		echo "Number is greater than 2 or 3";
	}
	function inpTwo(){
		$sum=0;
		$average=0;
		$arrcount=0;
		for($i=0;$i<2; $i++){
			$arr=array(readline("Enter numbers: "));
				$sum=$sum+array_sum($arr);
				$arrcount=$arrcount+count($arr);
				$average=($sum/$arrcount);
			}
			echo "Average of ".$arrcount. " number is: ". $average;
			
		}
		function inpThree(){
		$sum=0;
		$average=0;
		$arrcount=0;
		for($i=0;$i<3; $i++){
			$arr=array(readline("Enter numbers: "));
				$sum=$sum+array_sum($arr);
				$arrcount=$arrcount+count($arr);
				$average=($sum/$arrcount);
			}
			echo "Average of ".$arrcount. " number is: ". $average;
			
		}
	
 ?>