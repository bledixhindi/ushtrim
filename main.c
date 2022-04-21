#include <stdio.h>
#define KAPACITETI 100

struct artikull
{
	int id;
	char emri[20];
	int sasia;
}magazina[KAPACITETI];

	int gjej_artikullin(int n);
	void shto(void);
	void kerko(void);
	void update(void);
	void printo(void);
	void menu(void);
	
	int nr_artikuj=0;
	
int main()
{
}

	int gjej_artikullin(int n)
	{
		int i;
		for(i=0;i<nr_artikuj;i++)
		{
			if(n==magazina[1].id)
			{
				return i;
			}
		}
		return -1;
	}
	
	void shto(void)
	{
		if(nr_artikuj==KAPACITETI)
		{
			printf("Magazina eshte plot nuk punt te shtoni asnje artikull te ri.");
			return;
		}
		
		int temp;
		printf("Shkruani id e artikullit qe deshironi te shtoni:");
		scanf("%d",&temp);
			
		int index==gjej_artikullin(temp);
		
		if(index>=0)
		{
			printf("Artikulli eshte i zene.");
			return;
		}
		else 
		{
			magazina[nr_artikuj].id=temp;
			printf("shkruani emrin e artikullit:");
			scanf("%s",magazina[nr_artikuj].emri);
			printf("shkruani sasin e artikullit:");
			scanf("%d",&magazina[nr_artikuj].sasia);
			nr_artikuj++;
		}
	
		
	}
	
