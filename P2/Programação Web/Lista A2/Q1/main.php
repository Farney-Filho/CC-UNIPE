<?php

    $nomeAluno = $_REQUEST['nomeAluno'];
    $nota1 = $_REQUEST['primeiraNota'];
    $nota2 = $_REQUEST['segundaNota'];    
    $media = ($nota1+$nota2)/2;


    echo "O aluno $nomeAluno ficou com $media de média";
?>