/*
Aqui está um exemplo básico:

Suponha que você queira converter o número 3456 para hexadecimal.
Primeiro, você divide 3456 por 16: o quociente é 216 e o resto é 0 (então, o último dígito será 0).
Depois, divide 216 por 16: o quociente é 13 e o resto é 8 (então, o próximo dígito é 8).
Em seguida, divide 13 por 16: o quociente é 0 e o resto é 13 (em hexadecimal, 13 é representado como D).
Assim, a conversão de 3456 para hexadecimal resulta em D80.

Agora, pensando em código, você vai precisar de:

Uma variável para armazenar o número.
Um loop que continue até que o quociente da divisão seja zero.
Um meio de armazenar os restos de divisão, que serão os dígitos da representação hexadecimal.
Mapear restos maiores que 9 (10 a 15) para suas representações A, B, C, D, E e F.
Como você começaria esse código? Vamos discutir a lógica em termos de pseudocódigo antes de implementarmos?
Algo assim:

Iniciar com um número inteiro.
Fazer um loop: enquanto o número for maior que 0.
Dividir o número por 16.
Guardar o resto (convertendo se necessário para A-F).
Atualizar o número (dividido por 16).
Concatenar os restos na ordem inversa (já que o primeiro resto é o último dígito da resposta).
*/
