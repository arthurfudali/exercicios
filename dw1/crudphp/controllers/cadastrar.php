<?php
include("../models/conexao.php");
$varAlunoNome = $_POST["alunoNome"];
$varAlunoCidade = $_POST["alunoCidade"];
$varAlunoSexo = $_POST["alunoSexo"];

mysqli_query($conexao, "INSERT INTO alunos (nome, cidade, sexo) values ('$varAlunoNome ', '$varAlunoCidade', '$varAlunoSexo')");
// guarda o que esta na caixinha alunoNome na variavel varAlunoNome
// variavel $_POST e uma variavel universal

header("location:../index.php"); //te manda pra index novamente


?>