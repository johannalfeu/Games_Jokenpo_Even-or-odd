#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
/* 
Integrantes da dupla: João Pedro Loro, Johann Alfeu Reis Goulart, José Natan da Silva
*/

using namespace std;

int main(){
	for (int i = 1; i < 2 ; i){
    string repete;
	int jogo;
    cout << "Escolha o jogo: (1)Par ou impar (2)Pedra, Papel e Tesoura: " << endl;
    cin >> jogo;
    
    switch(jogo){

		//Par ou Impar
        case 1:
            int escolhe, numero, sorteio;
            cout << "Voce escolhe (1)impar ou (2)par " << endl;
            cin >> escolhe;
            cout << "Escolha o numero: " << endl;
            cin >> numero;
            srand (time(NULL));
            sorteio = rand() % 2 + 1;
        	cout << "Voce escolheu: " << numero << endl;
        	cout << "" << endl;
        	cout << "Jogador 2 escolheu: " << sorteio << endl;
        	cout << "" << endl;
        	cout << "Resultado:" << numero + sorteio << endl;
        	if(escolhe == 2 && (numero + sorteio) % 2 == 0){
        		cout << "Voce ganhou!!" <<  endl;
        
			}
			if(escolhe == 2 && (numero + sorteio) % 2 != 0){
        		cout << "Voce perdeu!!" <<  endl;
        
			}
			
			if(escolhe == 1 && (numero + sorteio) % 2 == 0){
        		cout << "Voce perdeu!!" <<  endl;
        
			}
			
			if(escolhe == 1 && (numero + sorteio) % 2 != 0){
        		cout << "Voce ganhou!!" <<  endl;
        
			}
			
			int repete;
            cout << "" << endl;
			cout << "Deseja jogar novamente? (1)Sim (2)Nao" << endl;
			cin >> repete;
			if(repete == 2){
				i++;	
			}
			system("cls");
			//Fim de Jogo
            break;
            
			
		//Pedra, Papel e Tesoura
        case 2:
        	int opcao, sorteio1, sorteio2;
        	string opcao1, sorteio11, sorteio22;
            cout << "Voce escolhe (1)Pedra, (2)Papel ou (3)Tesoura" << endl;
            cin >> opcao;
            
            
            if(opcao == 1){
            	opcao1 = "Pedra";
			}
			
            if(opcao == 2){
            	opcao1 = "Papel";
			}
			
            if(opcao == 3){
            	opcao1 = "Tesoura";
			}
            
            cout << "Voce escolheu: " << opcao1 << endl;
            cout << "" << endl;
            
            //Jogador 2
            srand (time(NULL));
            sorteio1 = rand() % 3 + 1;
            
            
            if(sorteio1 == 1){
            	sorteio11 = "Pedra";
			}
			
		
            if(sorteio1 == 2){
            	sorteio11 = "Papel";
			}
			
			
            if(sorteio1 == 3){
            	sorteio11 = "Tesoura";
			}
        
        	cout << "Jogador 2: " << sorteio11 << endl;
        	cout << "" << endl;
        	
        	//Jogador 3
        	srand (time(NULL));
            sorteio2 = rand() % 3 + 1;
            
			
            if(sorteio2 == 1){
            	sorteio22 = "Pedra";
			}
			
		
            if(sorteio2 == 2){
            	sorteio22 = "Papel";
			}
			
			
            if(sorteio2 == 3){
            	sorteio22 = "Tesoura";
			}
			
 			cout << "Jogador 3: " << sorteio22 << endl;
			cout << "" << endl;
				       	
				       	
        	//Pedra
        	if(opcao == 1){
        		// Empates
        		if(opcao1 == "Pedra" && sorteio11 == "Pedra" && sorteio22 == "Pedra"){
        			cout << "Empate " << endl;
				}
        		
        		if(opcao1 == "Pedra" && sorteio11 == "Pedra" && sorteio22 == "Tesoura"){
        			cout << "Empate" << endl;
				}
				
				if(opcao1 == "Pedra" && sorteio11 == "Papel" && sorteio22 ==  "Tesoura"){
        			cout << "Empate" << endl;
				}
				
        		if(opcao1 == "Pedra" && sorteio11 ==  "Tesoura" && sorteio22 == "Pedra"){
        			cout << "Empate" << endl;
				}
				
				if(opcao1 == "Pedra" && sorteio11 ==  "Tesoura" && sorteio22 == "Papel"){
        			cout << "Empate" << endl;
				}
				
				// Vitórias
				if(opcao1 == "Pedra" && sorteio11 ==  "Tesoura" && sorteio22 ==  "Tesoura"){
        			cout << "Vitoria" << endl;
				}
				
				//Derrotas
				if(opcao1 == "Pedra"&& sorteio11 == "Pedra" && sorteio22 == "Papel"){
        			cout << "Derrota" << endl;
				}
				
				if(opcao1 == "Pedra" && sorteio11 == "Papel" && sorteio22 =="Pedra"){
        			cout << "Derrota" << endl;
				}
				
				if(opcao1 == "Pedra" && sorteio11 == "Papel" && sorteio22 == "Papel"){
        			cout << "Derrota" << endl;
				}
				
			}
			
			//Papel
			if(opcao == 2){
				// Empates
        		if(opcao1 == "Papel" && sorteio11 == "Papel" && sorteio22 == "Papel"){
        			cout << "Empate" << endl;
				}
        		
        		if(opcao1 == "Papel" && sorteio11 == "Pedra" && sorteio22 == "Papel"){
        			cout << "Empate" << endl;
				}
				
				if(opcao1 == "Papel" && sorteio11 == "Papel" && sorteio22 == "Pedra"){
        			cout << "Empate" << endl;
				}
				
        		if(opcao1 == "Papel" && sorteio11 ==  "Tesoura" && sorteio22 == "Pedra"){
        			cout << "Empate" << endl;
				}
				
				if(opcao1 == "Papel" && sorteio11 == "Pedra" && sorteio22 ==  "Tesoura"){
        			cout << "Empate" << endl;
				}
				
				// Vitórias
				if(opcao1 == "Papel" && sorteio11 == "Pedra" && sorteio22 == "Pedra"){
        			cout << "Vitoria" << endl;
				}
				
				//Derrotas
				if(opcao1 == "Papel" && sorteio11 == "Papel"&& sorteio22 ==  "Tesoura"){
        			cout << "Derrota" << endl;
				}
				
				if(opcao1 == "Papel" && sorteio11 ==  "Tesoura" && sorteio22 ==  "Tesoura"){
        			cout << "Derrota" << endl;
				}
				
				if(opcao1 == "Papel" && sorteio11 ==  "Tesoura" && sorteio22 == "Papel"){
        			cout << "Derrota" << endl;
				}
			}
			
			//Tesoura
			if(opcao == 3){
					// Empates
        		if(opcao1 ==  "Tesoura" && sorteio11 ==  "Tesoura" && sorteio22 ==  "Tesoura"){
        			cout << "Empate" << endl;
				}
        		
        		if(opcao1 ==  "Tesoura" && sorteio11 == "Pedra" && sorteio22 == "Papel"){
        			cout << "Empate" << endl;
				}
				
				if(opcao1 ==  "Tesoura" && sorteio11 == "Papel" && sorteio22 == "Pedra"){
        			cout << "Empate" << endl;
				}
				
        		if(opcao1 ==  "Tesoura" && sorteio11 == "Papel" && sorteio22 ==  "Tesoura"){
        			cout << "Empate" << endl;
				}
				
				if(opcao1 ==  "Tesoura" && sorteio11 ==  "Tesoura" && sorteio22 == "Papel"){
        			cout << "Empate" << endl;
				}
				
				// Vitórias
				if(opcao1 ==  "Tesoura" && sorteio11 == "Papel" && sorteio22 =="Papel"){
        			cout << "Vitoria" << endl;
				}
				
				//Derrotas 
				if(opcao1 ==  "Tesoura" && sorteio11 == "Pedra" && sorteio22 == "Pedra"){
        			cout << "Derrota" << endl;
				}
				
				if(opcao1 ==  "Tesoura" && sorteio11 == "Pedra" && sorteio22 ==  "Tesoura"){
        			cout << "Derrota" << endl;
				}
				
				if(opcao1 ==  "Tesoura" && sorteio11 == "Tesoura" && sorteio22 == "Pedra"){
        			cout << "Derrota" << endl;
				}
			}
			
            cout << "" << endl;
			cout << "Deseja jogar novamente? (1)Sim (2)Nao" << endl;
			cin >> repete;
			if(repete == 2){
				i++;	
			}
			system("cls");
            break;
    }
}

    
   
    
    
    
    
    
    return 0;
}





