Algoritmo "fabrica"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 05/04/2024
Var
// Seção de Declarações das variáveis 
ipi:real;
codigo1:inteiro;
codigo2:inteiro;
valor1:real;
valor2:real;
qtd1:inteiro;
qtd2:inteiro;
total:real;



Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite o valor do IPI a ser acrescentado: ")
leia(ipi)

escreval("Digite o codigo da peça 1: ")
leia(codigo1)
escreval("Digite o valor da primeira peça: ")
leia(valor1)
escreval("Digite a quantidade de peças: ")
leia(qtd1)

escreval("Digite o codigo da peça 2: ")
leia(codigo2)
escreval("Digite o valor da segunda peça: ")
leia(valor2)
escreval("Digite a quantidade de peças: ")
leia(qtd2)
total <- ((valor1*qtd1) + (valor2*qtd2)) * ((ipi/100)+1) )
escreval("O valor total das peças é: ", total,"RS$")
//fazer um resultado mais detalhado com os codigos das peças


Fimalgoritmo