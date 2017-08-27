#include <stdio.h>
#include <Windows.h>

void Shutdown()
{
	int time, h, m, s;
	char command[50];
	system("cls");
	printf("	시간 : "); scanf("%d", &h);
	printf("	분 : "); scanf("%d", &m);
	printf("	초 : "); scanf("%d", &s);
	fflush(stdin);
	time = (h * 3600 + m * 60 + s);
	if (time == 0) {
		printf("		컴퓨터 종료를 취소합니다\n");
		system("shutdown -a");
		return;
	}
	sprintf(command, "shutdown -s -f -t %d", time);
	system(command);
}

void forcingShutdown()
{
	system("cls");
	system("shutdown -p -f");
}

void releaseShutdown()
{
	system("shutdown -a");
}

void restart()
{
	system("shutdown -t 0 -r -f");
}

void logoff()
{
	system("shutdown -l -f");
}

void systemoff()
{
	return;
}

int prtMenu()
{
	int num;
	printf("무슨 기능을 사용하실 건가요?\n");
	printf("1. 강제 종료\n");
	printf("2. 셧다운\n");
	printf("3. 예약 해제\n");
	printf("4. 다시 시작\n");
	printf("5. 로그오프\n");
	printf("6. 프로그램 종료\n");

	scanf("%d", &num);
	switch (num)
	{
	case 1: forcingShutdown(); break;
	case 2: Shutdown(); break;
	case 3: releaseShutdown(); break;
	case 4: restart(); break;
	case 5: logoff(); break;
	case 6: systemoff(); break;
	}
}
int main()
{
	prtMenu();
	
	return 0;
}