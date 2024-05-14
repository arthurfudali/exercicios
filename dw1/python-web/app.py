from flask import Flask, render_template
app = Flask(__name__, template_folder="views") 
#importante pra prova; define o nome da aplicação


#funcao
@app.route("/") #criacao de rotas
def index():
    return render_template("index.html")
@app.route("/crud") #criacao de rotas
def crud():
    return render_template("crud.html")
@app.route("/a") #criacao de rotas
def a():
    return render_template("teste.html")


if __name__ == "__main__":
    app.run(debug=True) #debug true serve para mostrar os erros quando e executado 