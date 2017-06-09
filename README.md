# Sensor HC-SR04 usando LEDs - 

O Sensor ultrassônico HC-SR04 é capaz de medir distâncias de 2cm a 4m com ótima precisão e baixo preço. Este módulo possui um circuito pronto com emissor e receptor acoplados e 4 pinos \(**VCC\(5v\)**,**Trigger**,**ECHO**,**GND\(Terra\)**\) para medição.

# **Especificações do sensor -**

**- Alimentação: 5V DC**

**- Corrente de Operação: 2mA**

**- Ângulo de efeito: 15°**

**- Alcance.: 2cm ~ 4m**

**- Precisão.: 3mm**

# Funcionamento -

Para começar é necessário alimentar o módulo e colocar o pino **Trigger **em nível logico alto por mais de **10us**\(microssegundos\). Assim o sensor emitirá uma onda sonora que ao encontrar um obstáculo rebaterá de volta em direção ao módulo, sendo que neste tempo de emissão e recebimento do sinal o pino **ECHO **ficará em nível logico alto/high. Logo o calcula da distância pode ser feito de acordo com o tempo em que o pino **ECHO **permaneceu em nível logico alto/high após o pino **Trigger **ter sido colocado em nível logico alto/high. Depois de feito as ligações do sensor, coloque as 3 LEDs\(verde, amarelo, vermelho\) na proto board , aonde, cada LED deve ter um resistor de 100/200/300 ohms\(pode ser mais\) no **Catodo**\(negativo\) do LED e depois conectar no **GND**\(Terra\). o **Anodo**\(positivo\) do LED deve ser ligado ao** VCC**\(5v\).

# Calculo da Distancia - 

Distância = \(Tempo echo em nível alto \* velocidade do som\) /2

# Material Necessário - 

**1x - Arduino**

**1x - Sensor HC-SR04**

**1x - Protoboard**

**3x - LEDs \(Verde,Amarelo e Vermelho, ou qualquer outras cores da sua preferência\)**

**1x a 3x** - **Resistor\(100/200/300 ohms ou mais alto/baixo vai da sua preferência\)\*\(OBS:. eu usei apenas 1 e coloquei o catodo das LEDs em serie\)**

**Jumper**

# Montagem do Circuito - ![](/assets/Sensor_HC_SR04_com_LED_esquema_bb.png)



