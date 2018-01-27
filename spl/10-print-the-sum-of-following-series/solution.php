<?php
    $n=readline("Enter the max values of the series : \n");
    $sum=0;
    for($i=1; $i<$n;$i*=3){
        $sum=$sum+$i;
        echo $i."\n";
    }
    echo "Sum of the series 1+3+9+....".$n. " is = ". $sum."\n";
?>