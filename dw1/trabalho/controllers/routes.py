from flask import (
    render_template,
)  # render template pega a pagina em html e a renderiza


# funcao
# todas as funcoes comecam com def
def init_app(app):

    @app.route("/")
    def index():
        universo = "marvel"
        heroi = "miranha"
        return render_template("index.html", pHeroi=heroi, pUniverso=universo)
