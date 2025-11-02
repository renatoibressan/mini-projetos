# -*- coding: utf-8

print("----- CALCULADORA BRESSAN: Versão 1.0 -----")
saida = False
while saida == False:
    num1 = input("Insira o primeiro número: ")
    num1 = int(num1)
    operador = input("Insira o operador: ")
    num2 = input("Insira o segundo número: ")
    num2 = int(num2)
    if operador == "+":
        resultado = num1 + num2
        print("O resultado é: ")
        print(resultado)
    elif operador == "-":
        resultado = num1 - num2
        print("O resultado é: ")
        print(resultado)
    elif operador == "*":
        resultado = num1 * num2
        print("O resultado é: ")
        print(resultado)
    elif operador == "/":
        resultado = num1 / num2
        print("O resultado é: ")
        print(resultado)
    elif operador == "**":
        resultado = num1 ** num2
        print("O resultado é: ")
        print(resultado)
    else:
        print("Não foi possível realizar a operação. Por favor, tente novamente com um operador válido.")
    x = False
    while x == False:
        y = input("Deseja sair? Digite 0 para sair ou 1 para continuar: ")
        y = int(y)
        if y == 0:
            print("Obrigado por usar a calculadora, volte sempre!")
            saida = True
            x = True
        elif y == 1:
            saida = False
            x = True
        else:
            print("Erro. Por favor, tente novamente.")
            x = False