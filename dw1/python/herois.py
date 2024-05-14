mv = ["miranha", "homem de ferro", "hulk", "wanda", "thor"] 
dc = ["flash", "batma", "super homem", "shazam", "ww"]
universo = input("Digite o universo: ")
if universo == "marvel":
    mv.sort()
    print("Voce escolheu marvel!", "\nHerois disponíveis: ")
    for x in mv:
        print(x)
    heroi = input("digite o nome do heroi: ")
    if heroi in mv: 
        n = int(input("quantas vezes?"))
        count = 0
        while(count < n):
            count = count + 1
            print(heroi)
    else:
        print("heroi não encontrado!")
elif universo == "dc":
    dc.sort()
    print("Voce escolheu DC!" , "\nHerois diponíveis: ")
    for x in dc:
        print(x)
    heroi = input("digite o nome do heroi: ")
    if heroi in dc: 
        n = int(input("quantas vezes?"))
        count = 0
        while(count < n):
            count = count + 1
            print(heroi)
    else:
        print("heroi não encontrado!")
else:
    print("universo não encontrado!")