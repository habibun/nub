<?php 
$str=readline("Enter Sentence: \n");
$tmp_str="";
for($i=0;$i<strlen($str);$i++){
	$char=ord($str[$i]);
	if($char>=97 && $char<=122){
		$tmp_str=$tmp_str.chr($char-32);
	}
	elseif($char>=65 && $char<=90){
		$tmp_str=$tmp_str.chr($char+32);
	}
	elseif($char==32){
		$tmp_str=$tmp_str.chr($char);
	}
}
echo $tmp_str;
 ?>