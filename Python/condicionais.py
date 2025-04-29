# Simples , Composto , Encadeado
9
n1 = n2 = 0.0
media = 0.0

n1 = float(input('Digite a primeira nota:\n'))
n2 = float(input('Digite a segunda nota:\n'))

# Calcular a média aritmética das notas

media = (n1 + n2) / 2
if (media >= 7):
    print('Aluno aprovado')
    print('Parabéns')
elif (media >= 5):
    print('Você está de recuperação')
else:
    print('Aluno reprovado....')

print('Sua média é {}' .format(media))   
  
    
       




  