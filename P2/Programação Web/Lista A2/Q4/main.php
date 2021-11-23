<?php

    $nome = $_REQUEST['nome'];
    $senha = $_REQUEST['senha'];
    $genero = $_REQUEST['genero'];

    echo nl2br ("Olá $nome. \n Você é do gênero $genero \n Sua senha é $senha.");

?>