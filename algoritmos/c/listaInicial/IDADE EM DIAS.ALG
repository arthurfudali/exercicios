Algoritmo "Idade em dias"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 05/04/2024
Var
// Seção de Declarações das variáveis 
anos:inteiro;
meses:inteiro;
dias:inteiro;
total:inteiro;

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Quantos anos voce tem? ")
leia(anos)
escreval("Quantos meses voce tem? ")
leia(meses)
escreval("Quantos dias voce tem? ")
leia(dias)
total <- (anos * 365) + (meses * 30) + dias
escreval("Voce tem ",total," dias de idade!")



Fimalgoritmo