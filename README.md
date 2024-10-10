# warcraft-III-joystick-driver

### Objetivo
Projeto final da materia de Interface Hardware/Software que modifica o drive hid-playstation do linux para que utilizar o dualshock 4 como keyboard e mouse, com funcionalidades focadas no jogo Warcraft III: reign of chaos.

### Uso
Após conectar o controle dualshock 4 via USB, como sudo execute o use com a opção mod.
Para retornar ao drive original, basta como sudo executar use com a opção original. <br>
Ex: sudo ./use mod <br>
EX: sudo ./use original

#### O arquivo do drive é hid-playstation.c
#### Link do drive original: https://github.com/torvalds/linux/blob/master/drivers/hid/hid-playstation.c
O drive original também se encontra na pasta drive_original, nomeado como hid-playstation.c

#### Desafios enfrentados
Ler e entender o codigo e organização do drive original custou bastante tempo. Fora o tempo necessario para entender o funcionamento de inputs no kernel linux.<br>
Tentei rodar scripts usando combinações de teclas do joystick e a função de kernel call_usermodehelper, os scripts iriam dar informações do projeto e abrir o Warcraft III. Porém aconteceu muitos kernel panics e erros de Null pointer exception, que me levou a mudar de ideia e usar prints no kernel para escrever as informações.

#### Ferramentas usadas
Para debuggar e verificar os inputs utilizei evtest e showkey
