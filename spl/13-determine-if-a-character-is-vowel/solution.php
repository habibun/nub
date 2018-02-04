<?php
$char=readline("Enter a charcter :\n"); 
$vowels=array('a','e','i','o','u','A','E','I','O','U');
$flag=0;
for($i=0;$i<count($vowels);$i++){
    if($vowels[$i]==$char){
	    $flag=1;
	    break;
    }
}
if($flag==1){
    echo $char. ' is a vowel';
}
else{
    echo $char. ' is not a vowel';
}
?>
