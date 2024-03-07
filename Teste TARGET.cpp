/*1) Observe o trecho de código abaixo:

int INDICE = 13, SOMA = 0, K = 0;

enquanto K < INDICE faça

{

K = K + 1;

SOMA = SOMA + K;

}

imprimir(SOMA);



Ao final do processamento, qual será o valor da variável SOMA?*/

Resposta 1 -- 91


/*2) Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.*/

Resposta 2 --

#include <stdio.h>

int pertenceFibonacci(int num) {
    int a = 0, b = 1, c;
    
    if (num == 0 || num == 1)
        return 1;

    while (b <= num) {
        c = a + b;
        if (c == num)
            return 1; 
        a = b;
        b = c;
    }

    return 0; 
}

int main() {
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if (pertenceFibonacci(num))
        printf("O numero %d pertence a sequencia de Fibonacci.\n", num);
    else
        printf("O numero %d nao pertence a sequencia de Fibonacci.\n", num);

    return 0;
}

/*MPORTANTE:

Esse número pode ser informado através de qualquer entrada de sua preferência ou pode ser previamente definido no código;



3) Descubra a lógica e complete o próximo elemento:



a) 1, 3, 5, 7, ___

b) 2, 4, 8, 16, 32, 64, ____

c) 0, 1, 4, 9, 16, 25, 36, ____

d) 4, 16, 36, 64, ____

e) 1, 1, 2, 3, 5, 8, ____

f) 2,10, 12, 16, 17, 18, 19, ____*/

Resposta 3 --

a) A sequência está aumentando de 2 em 2. Portanto, o próximo elemento será 9.

b) Cada elemento é o dobro do anterior. Então, o próximo elemento será 128.

c) A sequência está aumentando pelos quadrados dos números inteiros consecutivos. O próximo número será 49 (7^2).

d) Esta sequência consiste nos quadrados dos números pares consecutivos. O próximo número será 100 (10^2).

e) Esta é a sequência de Fibonacci. O próximo número será 13 (5 + 8).

f) Cada número é o resultado da adição do número anterior com um número que aumenta gradualmente(múltiplos de 2). Portanto, o próximo número é 20.


/*4) Você está em uma sala com três interruptores, cada um conectado a uma lâmpada em uma sala diferente. Você não pode ver as lâmpadas da sala em que está, mas pode ligar e desligar os interruptores quantas vezes quiser. Seu objetivo é descobrir qual interruptor controla qual lâmpada.

Como você faria para descobrir, usando apenas duas idas até uma das salas das lâmpadas, qual interruptor controla cada lâmpada?*/

Resposta 4 -- 

Eu ligaria o primeiro interruptor e deixaria ligado por alguns minutos,depois desligaria e ligaria o segundo interruptor.
Depois disso, com o segundo interruptor ligado eu iria até a sala e saberia que a lâmpada que está apagada porém está quente se refere ao primeiro interruptor,a lâmpada que estiver acessa obviamente se refere
os segundo interruptor e a última lâmpada se refere ao terceiro interruptor.

/*5) Escreva um programa que inverta os caracteres de um string.


IMPORTANTE:

a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;

b) Evite usar funções prontas, como, por exemplo, reverse;*/

Resposta 5 --

#include <stdio.h>

void inverterString(char *str) {

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char string[100];

    printf("Digite uma string: ");
    scanf("%s", string);

    inverterString(string);

    printf("String invertida: %s\n", string);

    return 0;
}
