Algoritmo "volume cilindro"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 05/04/2024
Var
// Seção de Declarações das variáveis 
raio:real;
altura:real;
volume:real;


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite o valor do raio: ")
leia(raio)
escreval("Digite o valor da altura: ")
leia(altura)
volume <- (raio^2)*pi*altura
escreva("O volume do cilindro é: ", volume)
Fimalgoritmo