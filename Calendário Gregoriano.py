data = input()
dia, mes, ano = data.split('/')

if len(dia) != 2 or len(mes) != 2 or len(ano) != 4:
    print(false)

else:
    dia, mes, ano = int(dia), int(mes), int(ano)

    if mes == 1:
        if dia >= 1 and dia <=31:
            print(True)
        else:
            print(False)

    elif mes == 2:
        if dia >= 1 and dia <= 28:
            print(True)
        else:
            print(False)

    elif mes == 3:
        if dia >= 1 and dia <= 31:
            print(True)
        else:
            print(False)

    elif mes == 4:
        if dia >= 1 and dia <= 30:
            print(True)
        else:
            print(False)

    elif mes == 5:
        if dia >= 1 and dia <= 31:
            print(True)
        else:
            print(False)

    elif mes == 6:
        if dia >= 1 and dia <= 30:
            print(True)
        else:
            print(False)

    elif mes == 7:
        if dia >= 1 and dia <= 31:
            print(True)
        else:
            print(False)

    elif mes == 8:
        if dia >= 1 and dia <= 31:
            print(True)
        else:
            print(False)

    elif mes == 9:
        if dia >= 1 and dia <= 30:
            print(True)
        else:
            print(False)

    elif mes == 10:
        if dia >= 1 and dia <= 31:
            print(True)
        else:
            print(False)

    elif mes == 11:
        if dia >= 1 and dia <= 30:
            print(True)
        else:
            print(False)

    elif mes == 12:
        if dia >= 1 and dia <= 31:
            print(True)
        else:
            print(False)

    elif mes < 1 or mes > 12 or ano < 0:
        print(False)