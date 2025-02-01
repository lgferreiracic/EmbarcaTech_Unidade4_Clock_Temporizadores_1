#include <stdio.h>
#include "pico/stdlib.h" // Biblioteca para uso das funções de entrada e saída padrão
#include "hardware/timer.h" // Biblioteca para uso dos temporizadores

#define LED_PIN_RED 11 // Definição do pino do LED vermelho
#define LED_PIN_YELLOW 12 // Definição do pino do LED amarelo
#define LED_PIN_GREEN 13 // Definição do pino do LED verde

int led_state = 1; // Variável para controlar o estado dos LEDs

// Função para inicializar os LEDs
void init_leds() {
    gpio_init(LED_PIN_RED);
    gpio_init(LED_PIN_YELLOW);
    gpio_init(LED_PIN_GREEN);
    gpio_set_dir(LED_PIN_RED, GPIO_OUT);
    gpio_set_dir(LED_PIN_YELLOW, GPIO_OUT);
    gpio_set_dir(LED_PIN_GREEN, GPIO_OUT);
}

// Função para ligar ou desligar os LEDs
void set_leds(bool red, bool yellow, bool green) {
    gpio_put(LED_PIN_RED, red);
    gpio_put(LED_PIN_YELLOW, yellow);
    gpio_put(LED_PIN_GREEN, green);
}

// Função para alternar os LEDs, ligando  um de cada vez na ordem vermelho, amarelo e verde
void select_leds() {
    switch (led_state) {
        case 0:
            set_leds(true, false, false);
            led_state = 1;
            break;
        case 1:
            set_leds(false, true, false);
            led_state = 2;
            break;
        case 2:
            set_leds(false, false, true);
            led_state = 0;
            break;
    }
}

// Função para controlar o temporizador
bool repeating_timer_callback(struct repeating_timer *t) {
    select_leds();
    return true;
}

// Função principal
int main()
{
    // Inicializa a comunicação serial
    stdio_init_all();

    // Inicializa os LEDs
    init_leds();

    // Inicializa o temporizador
    struct repeating_timer timer;
    // Inicializa o temporizador para piscar os LEDs a cada 3 segundos
    add_repeating_timer_ms(3000, repeating_timer_callback, NULL, &timer);

    // Liga o LED vermelho
    set_leds(true, false, false);

    // Loop principal
    while (true) {
        printf("Tempo de execução até o momento: %d segundos\n", to_ms_since_boot(get_absolute_time())/1000);
        // Aguarda 10 segundos para reduzir o uso da CPU
        sleep_ms(10000);
    }
}
