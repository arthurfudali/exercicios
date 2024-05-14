from flask import (  # flask e a biblioteca web do python
    Flask,
)
from controllers import routes
import os


app = Flask(
    __name__, template_folder="views"
)  # importante pra prova; define o nome da aplicação e depois define onde fica o diretorio dos templates web
routes.init_app(app)
if __name__ == "__main__":
    app.run(debug=True)  # debug true serve para mostrar os erros quando e executado