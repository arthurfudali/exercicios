<?php include("blades/header.php"); ?>
<div class="container bg-white pt-2 mt-5 p-3 rounded-2 shadow">
<form action="../controllers/cadastrar.php" method="post">
<h3 class="p-3" > Cadastrar</h3>
    <!-- metodo: "post" serve para enviar as paginas desse formulario pro "cadastrar.php" -->
    <label class="form-label">nome</label>
    <input class="form-control" type="text" name="alunoNome"> <br>
    <label class="form-label">cidade</label>
    <input class="form-control"type="text" name="alunoCidade"> <br>
    <label class="form-label" >sexo</label> <br>
    <input type="radio" name="alunoSexo" value="m">Masculino
    <input type="radio" name="alunoSexo" value="f">Feminino <br>
    <input class="btn btn-success mt-3 ms-1" type="submit" value="Cadastrar">

</form>
</div>
<?php include("blades/footer.php"); ?>