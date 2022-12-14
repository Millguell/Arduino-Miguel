/* 
  Sketch generated by the Arduino IoT Cloud Thing "Untitled"
  https://create.arduino.cc/cloud/things/8b8999cd-a2f8-42f5-9d64-bef9f0bdfa05 

  Arduino IoT Cloud Variables description

  The following variables are automatically generated and updated when changes are made to the Thing

  - No variables have been created, add cloud variables on the Thing Setup page
    to see them declared here

  Variables which are marked as READ/WRITE in the Cloud Thing will also have functions
  which are called when their values are changed from the Dashboard.
  These functions are generated with the Thing and added at the end of this sketch.
*/

#include "thingProperties.h"

void setup() {
  // O Setup é uma seção obrigatória de um programa para Arduino
  // Inicialize a serial e esperando a porta abrir:
  Serial.begin(9600);
  /* 
     Este indicador permite um tempo de espera por uma resposta de sinal (monitor serial), sem bloquear ações se nenhum (sinal) for 
     encontrado. Monitor Serial é o responsável pela comunicação entre seu equipamento e a placa de arduíno. Com ele você pode enviar 
     e receber informações na forma de texto, útil para depuração e também para controlar o Arduino pelo teclado do PC.
     Para acessar o monitor serial corretamente, você primeiramente deve conectar a placa, fazer upload do seu código e então clicar 
     no simbolo da lupa que se encontra no canto superior direito na tela do Arduino.
  */
  delay(1500); 
  // Definido em thingProperties.h
  initProperties();

  // Conectando para Arduino IoT Cloud
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  
  /*
     The following function allows you to obtain more information
     related to the state of network and IoT Cloud connection and errors
     the higher number the more granular information you’ll get.
     The default is 0 (only errors).
     Maximum is 4
 */
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
  
  /*
  Qualquer código que estiver dentro do setup (), portanto, entre as chaves ({ }) é executado uma única vez no início do seu programa.

  Essa função é útil para configurar o Arduino, é aqui por exemplo que você coloca as configurações iniciais, como por exemplo se 
  um LED começa desligado ou ligado, quais são os pinos de entrada e saída, entre outras coisas. Vamos explorar esses conceitos 
  nos próximos tópicos.

  Você pode explorar mais a função setup() na página do Arduino:
  http://arduino.cc/en/Reference/Setup
  */
}

void loop() {
  ArduinoCloud.update();
  // Insira seu código aqui 
  
  /*
  Assim como a seção Setup, o Loop também é obrigatório em um programa para Arduino.
  A grande maioria do seu código será executado dentro dessa seção. Após a execução do setup(), o loop() é iniciado. O programa começa 
  logo após a abertura da chave ({), e o processador vai executando as linhas de código até chegar na chave de fechamento (}). Uma vez 
  chegado ao fim, ele retorna para a primeira linha do loop e reinicia tudo novamente.

  A função loop () será executada para sempre, ou até que você faça upload de um novo código, reiniciando o processo. Ela também pode 
  ser reiniciada resetando o Arduino (através do botão de reset por exemplo).
  Você também pode explorar mais a função loop() na página do Arduino: 
  http://arduino.cc/en/Reference/Loop
  */
}

/* nota do professor:
A proposta é iniciar os estudos sobre o arduino da sua concepção e uso mais básico. 
Esse primeiro tutorial apresentará os primeiros conceitos para programação em Arduino.

Existem milhares de códigos diferentes feitos para o Arduino, porem todos eles seguem sempre uma mesma estrutura com duas 
seções principais chamadas de Setup e Loop, que veremos logo a seguir

Este arquivo poderá ser acessado e recuperado, com atualizações (vide notação do professor), conforme as versões publicadas, sendo
sempre a última disponível no canal do github:
http://github.com/profluizangelo/arduinoCC/Thing_nov22a.ino
*/
