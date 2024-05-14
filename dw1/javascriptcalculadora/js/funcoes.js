// funcao da calculadora
function funccalc()
        {
        num1 = document.getElementById("num1").value;
        num2 = document.getElementById("num2").value;
        operador = document.querySelector("input[name ='opt']:checked").value;
        resultado = eval(parseInt(num1) + operador + parseInt(num2));
        document.getElementById("mostrar-resultado").innerHTML = resultado;
        }