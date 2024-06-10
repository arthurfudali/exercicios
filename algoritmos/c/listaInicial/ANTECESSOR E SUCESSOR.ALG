Algoritmo "Antecessor e sucessor"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 05/04/2024
Var
// Seção de Declarações das variáveis 
numero:inteiro;
antecessor:inteiro;
sucessor:inteiro;


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite o numero que deseja saber os adjacentes: ")
leia(numero)
antecessor <- numero-1;
sucessor <- numero+1;
escreval("O antecessor é: ", antecessor)
escreval("O sucessor é: ", sucessor)


Fimalgoritmo