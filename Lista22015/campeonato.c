#include <stdio.h>

int main(){
	int cv,ce,cs,fv,fe,fs,pontoc,pontof;
	scanf("%d %d %d %d %d %d", &cv,&ce,&cs,&fv,&fe,&fs);
	pontoc = (cv*3)+(ce*1);
	pontof = (fv*3)+(fe*1);
	if (pontoc == pontof){
		if (cs == fs)
			printf("=\n");
		else	
			if(cs > fs)
				printf("C\n");
			else
				printf("F\n");
	}
	else if (pontoc > pontof)
		printf("C\n");
	else
		printf("F\n");
	return 0;
}
