# EmbarcaTech_Unidade4_Clock_Temporizadores_1.
<p align="center">
  <img src="Group 658.png" alt="EmbarcaTech" width="300">
</p>

## Atividade: Temporizador Periódico e Controle de Semáforo na BitDogLab

![C](https://img.shields.io/badge/c-%2300599C.svg?style=for-the-badge&logo=c&logoColor=white)
![CMake](https://img.shields.io/badge/CMake-%23008FBA.svg?style=for-the-badge&logo=cmake&logoColor=white)
![Raspberry Pi](https://img.shields.io/badge/-Raspberry_Pi-C51A4A?style=for-the-badge&logo=Raspberry-Pi)
![GitHub](https://img.shields.io/badge/github-%23121011.svg?style=for-the-badge&logo=github&logoColor=white)
![Windows 11](https://img.shields.io/badge/Windows%2011-%230079d5.svg?style=for-the-badge&logo=Windows%2011&logoColor=white)

## Descrição do Projeto

Este projeto tem como objetivo consolidar a compreensão dos conceitos relacionados ao uso de temporizadores periódicos no microcontrolador RP2040 e explorar as funcionalidades da placa de desenvolvimento BitDogLab. Para isso, foi implementado um semáforo utilizando a função add_repeating_timer_ms() presente na ferramenta Pico SDK.

O semáforo alterna entre as cores vermelho, amarelo e verde a cada 3 segundos, conforme definido no fluxograma da atividade. Além disso, uma mensagem é impressa na porta serial a cada segundo.

## Componentes Utilizados

- **Microcontrolador Raspberry Pi Pico W (RP2040)**: Responsável pelo controle dos pinos GPIO.
- **LED RGB**: Com os pinos conectados às GPIOs 11, 12 e 13.
- **03 Resistores de 330 Ω**: Para limitação de corrente nos LEDs.
- **LED RGB**: Utilizado para reproduzir o funcionamento do semáforo via GPIOs 11, 12 e 13 na placa BitDogLab.

## Ambiente de Desenvolvimento

- **VS Code**: Ambiente de desenvolvimento utilizado para escrever e debugar o código.
- **Linguagem C**: Linguagem de programação utilizada no desenvolvimento do projeto.
- **Pico SDK**: Kit de Desenvolvimento de Software utilizado para programar a placa Raspberry Pi Pico W.
- **Simulador Wokwi**: Ferramenta de simulação utilizada para testar o projeto.

## Guia de Instalação

1. Clone o repositório:
2. Importe o projeto utilizando a extensão da Raspberry Pi.
3. Compile o código utilizando a extensão da Raspberry Pi.
4. Caso queira executar na placa BitDogLab, insira o UF2 na placa em modo bootsel.
5. Para a simulação, basta executar pela extensão no ambiente integrado do VSCode.

## Guia de Uso

O semáforo inicia com o LED vermelho aceso.

A cada 3 segundos, a cor muda seguindo a ordem: vermelho → amarelo → verde → vermelho.

A cada 1 segundo, uma mensagem é impressa na porta serial.

O experimento também pode ser realizado utilizando o LED RGB nas GPIOs 11, 12 e 13 da BitDogLab.

## Testes

Testes básicos foram implementados para garantir que cada componente está funcionando corretamente. 

## Desenvolvedor

[Lucas Gabriel Ferreira](https://github.com/usuario-lider)

## Vídeo da Solução

Clique na imagem abaixo para assistir ao vídeo que demonstra a solução trabalhada e os resultados obtidos nos experimentos:

<p align="center">
  <a href="https://www.dropbox.com/scl/fi/85jdi33jg9t5v8y8r3mle/Tarefa-2-Sem-foro.mp4?rlkey=817p5komzlmqnsrt9o6wamzn5&st=box7wb0n&dl=0">
    <img src="Video.png" alt="Vídeo demonstrativo" width="900">
  </a>
</p>


