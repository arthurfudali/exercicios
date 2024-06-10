Algoritmo "consumo"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 05/04/2024
Var
// Seção de Declarações das variáveis
Ki:real;
Kf:real;
Cc:real;
Dp:real;
Gc:real;


Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreval("Escreva a quilometragem inicial: ")
leia(Ki)
escreval("Escreva a quilometragem final: ")
leia(Kf)
escreval("Escreva o consumo de combustivel, em litros, da viagem: ")
leia(Cc)
Dp <- Kf-Ki
Gc <- Dp/Cc
escreval("O consumo do seu carro é de: ", Gc, "Km/l")



Fimalgoritmo