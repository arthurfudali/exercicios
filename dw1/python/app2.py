idade = int(input("Digite sua idade"))
if idade >= 12 and idade <21:
    print("voce e adoslecente")
elif idade >= 21 and idade < 30:
    print("voce e jovem")
elif idade >= 30 and idade <= 100:
    print("voce e adulto") 
else:
    print("valor nao encontrado")