#include <stdio.h>
#include "pico/stdlib.h"

//constantes de escopo global
const uint led_pin_red = 13; 
const uint led_pin_blue = 12;
const uint led_pin_green = 11;


int main()
{
    gpio_init(led_pin_red); //inicializa a porta 13 do microcontrolador
    gpio_set_dir(led_pin_red, GPIO_OUT); //configura a porta como saída

    gpio_init(led_pin_blue); //inicializa a porta 12 do microcontrolador
    gpio_set_dir(led_pin_blue, GPIO_OUT); //configura a porta 12 como saída

    gpio_init(led_pin_green); //inicializa a porta 11 do microcontrolador
    gpio_set_dir(led_pin_green, GPIO_OUT); //configura a porta 11 como saída

    stdio_init_all(); // Inicializa todos os códigos stdio padrão que estão ligados ao binário.


    while (true) {

        printf("pisca led vermelho\r\n");
        gpio_put(led_pin_red, true); //ligar o led vermelho
        sleep_ms(1000); // função de temporização em ms
        gpio_put(led_pin_red,false); //desligar o led vermelho
        sleep_ms(1000);

        printf("pisca led azul\r\n");
        gpio_put(led_pin_blue,true);
        sleep_ms(1000); 
        gpio_put(led_pin_blue,false); 
        sleep_ms(1000);

        printf("pisca led verde\r\n");
        gpio_put(led_pin_green,true);
        sleep_ms(1000); 
        gpio_put(led_pin_green,false); 
        sleep_ms(1000);

    }
}
