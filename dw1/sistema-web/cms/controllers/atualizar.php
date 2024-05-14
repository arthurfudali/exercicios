<?php
include("../models/conexao.php");
$diretorio = "../views/imgs/";
$varTitulo = $_POST["blogTitulo"];
$varCorpo = $_POST["blogCorpo"];
$varData = $_POST["blogData"];
$varImagem = $_POST["fk_codigoImagem"];
$varBlogCodigo = $_GET["blogCodigo"];
$arquivo = isset($_FILES['arquivo']) ? $_FILES['arquivo'] : FALSE;

mysqli_query($conexao, "UPDATE bloginfo set bloginfo_titulo = '$varTitulo', bloginfo_corpo = '$varCorpo', bloginfo_data = '$varData' where bloginfo_codigo = '$varBlogCodigo';");

$query = mysqli_query($conexao, "SELECT * FROM imagens WHERE fk_id_imagem = $varImagem");
$codigosImg = array();
while ($exibe = mysqli_fetch_array($query)) {
    $blogImagemRandom = $exibe[2];
    $codigosImg[] = $exibe[0];
}

if ($arquivo !== false && !empty($arquivo['name'][0])) {
	foreach($codigosImg as $codigoImagem)
	{

		mysqli_query($conexao, "SELECT * FROM imagens WHERE id_imagem = $codigoImagem");

		if (!empty($exibe[2]) && file_exists($diretorio . "/" . $exibe[2])) 
		{
			unlink($diretorio . "/" . $exibe[2]);
		}
	}

	for ($k = 0; $k < count($arquivo['name']); $k++) {
		$destino = $diretorio . "/" . $arquivo['name'][$k];
		$extension = pathinfo($destino, PATHINFO_EXTENSION);
		$nomeImagem = $arquivo['name'][$k];
		$nomeImagemRandom = md5(uniqid($nomeImagem));

		/* move_uploaded_file(arquivo, destino do arquivo) */
		if ($extension == "png") {
			/* Mover arquivo para a pasta com o nome randomico */
			if (move_uploaded_file($arquivo['tmp_name'][$k], $diretorio . "/" . $nomeImagemRandom . "." . $extension)) {
				$codigoImagem = $codigosImg[$k];
				mysqli_query($conexao, "UPDATE imagens SET nome_imagem ='$nomeImagem', nome_randomico_imagem = '$nomeImagemRandom.$extension' WHERE id_imagem = '$codigoImagem')");
			} else {
				echo "Falha ao enviar o arquivo";
				}   
			} 
		else{
				echo "Arquivo não é compatível com o tipo 'PNG'";
			}

		}
}
header("location:../")
    ?>