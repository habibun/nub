<?php
$a=3;
$b=4;
$c=2;
if($a<$b){
echo $a;
}
elseif($b<$c){
echo $b;
}
elseif($c<$a or $c<$b){
echo $c;
}
?>
