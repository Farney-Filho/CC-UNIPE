<?php

    $baseMenor = $_REQUEST['baseMenor'];
    $baseMaior = $_REQUEST['baseMaior'];
    $Altura = $_REQUEST['altura'];
    $areaTrapezio = (($baseMaior+$baseMenor)*$Altura)/2;

    echo nl2br ("A área do trapezio é $areaTrapezio.");

?>