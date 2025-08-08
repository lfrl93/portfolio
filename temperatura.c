#include <stdio.h>
#include <string.h>
	
	
	typedef struct datahora{
		int dia,mes,ano,hora,minuto;
		}datahora;
	typedef struct sensor {
		char nome[30];
		float temperatura;
		datahora timestamp;
		} sensor;
	
	int main(){
		sensor s;
		printf("Nome do sensor:  ");
		fgets(s.nome,sizeof(s.nome),stdin);
		s.nome[strcspn(s.nome,"\n")]='\0';
		printf("Temperatura: ");
		scanf("%f",&s.temperatura);
		printf("Dia__ Mês__ Ano__ Hora__ Minunto__\n");
		scanf("%d %d %d %d %d",&s.timestamp.dia,&s.timestamp.mes,&s.timestamp.ano,&s.timestamp.hora,&s.timestamp.minuto);
		printf(" No dia %d do mês %d  do ano %d à hora %d:%d a temperatura do sensor %s estava a %0.1f",s.timestamp.dia,s.timestamp.mes,s.timestamp.ano,s.timestamp.hora,s.timestamp.minuto,s.nome,s.temperatura);
		return 0;
		}
