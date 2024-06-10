Algoritmo "converter segundos"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 05/04/2024
Var
// Seção de Declarações das variáveis
segundos:inteiro;
horastotais:inteiro;
sobrahoras:inteiro;
minutostotais:real;
sobraminutos:real;


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Digite uma quantidade de segundos para ser convertido: ")
leia(segundos)
//horastotais <- segundos\3600
//sobrahoras <- segundos%3600
//minutostotais <- sobrahoras\60
//sobraminutos <- sobrahoras%60

horastotais <- segundos\3600
sobrahoras <- segundos-(horastotais*3600)//joia


minutostotais <- sobrahoras\60
sobraminutos <- sobrahoras-(minutostotais*60)


escreval(sobrahoras)
escreval(minutostotais)
//escreval(sobraminutos)
escreval("A conversão dos segundos para horas será: ",horastotais," horas", minutostotais, " minutos", sobraminutos, " segundos")



Fimalgoritmo