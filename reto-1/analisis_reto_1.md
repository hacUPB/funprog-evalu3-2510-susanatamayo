# Analisis del reto 1 🏋🏻‍♀️

## 1. Análisis del problema. 
Para este proyecto debemos generar una calculadora de ingenieria, con la finalidad de solucionar problemas como: 
1. Calcular Ley de Ohm
2. Calcular Factor de Potencia
3. Calcular Resistencia de un Conductor
4. Calcular Valor de la Resistencia para un LED
5. Salir

Para realizar el programa:
1. Usaremos un bucle do-while ya que no tenemos el conocimiemto de cuantas veces el usuario desea usar la calculadora .
2. Primeramente realizaremos el menú con las opciones que puede hacer nuestra calculadora, usando un case para cada una de las opciones.
3. *Para la leyde Ohm* : Usaremos un bucle el cual debe reslizarse hasta que el usuario decida salir, switf para cada uno de los casos
- Voltaje. Se la pedira al usurio lo valores de resistencia e intensidad para que el programa realice la siguente operación V= R x I 
- Resistencia. Se le pedira al usuario los valores de voltaje e intesidad, para que el programa realice la siguiente opereción  R= V/I
- Intensidad.Se le pedira al usuario los valores de voltaje y resistencia, para que el programa realice la siguiente opereción  I= V/R
4. *Para el factor de potencia* : Usaremos un bucle el cual debe reslizarse hasta que el usuario decida salir, switf para cada uno de los casos
- Potencia Activa: Se le pedira al usuario los valores de Tensión eficaz y de Intensidad eficaz para poder usar la siguente formula P=V×I×cos(θ)
- Potencia Aparente  Se le pedira al usuario los valores de Tensión eficaz y de Intensidad eficaz para poder usar la siguente formula S=V×I
- Factor de potencia  Se le pediran los dalos de potencia activa y potencia aparente para poder usar la siguente formula S = sqrt (P^2 + Q^2)
5. *Para la Resistencia de un Conductor* :
6. *Para el Valor de la Resistencia para un LED* :
7. *Para la opción Salir* : Para la opción salir usaremos un case 5 el cual se encarga de expualsar al usuario de la calculadora. 