#include <stdio.h>
#include <Windows.h>

void Shutdown()
{
	int time, h, m, s;
	char command[50];
	system("cls");
	printf("	�ð� : "); scanf("%d", &h);
	printf("	�� : "); scanf("%d", &m);
	printf("	�� : "); scanf("%d", &s);
	fflush(stdin);
	time = (h * 3600 + m * 60 + s);
	if (time == 0) {
		printf("		��ǻ�� ���Ḧ ����մϴ�\n");
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
	printf("���� ����� ����Ͻ� �ǰ���?\n");
	printf("1. ���� ����\n");
	printf("2. �˴ٿ�\n");
	printf("3. ���� ����\n");
	printf("4. �ٽ� ����\n");
	printf("5. �α׿���\n");
	printf("6. ���α׷� ����\n");

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