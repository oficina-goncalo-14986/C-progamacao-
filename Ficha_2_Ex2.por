programa {


	//Crie um programa que leia um valor inicial A e imprima a sequência de valores do cálculo de A! e o seu resultado.


	inteiro n1, fator = 1 
	funcao inicio() {
				
		escreva("Diga me um número: \n")
		leia(n1)

		para(inteiro i = n1 ; i >= 1 ; i--){
			fator = fator * i   
			
		}
		escreva("O valor da mutiplicação desses numeros ate 1 é de ", fator )
		
		
		

		
		

	}
}
