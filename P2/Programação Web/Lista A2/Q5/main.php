<?php

    $anoAtual = 2021;
    $idade = $anoAtual-($_REQUEST['ano']);
    $diasVividos = 365*$idade;
    $anos2022 = $idade+1;

    echo nl2br ("Você tem $idade anos. \n Você já viveu $diasVividos dias. \n Você terá $anos2022 anos em 2022.")

?>