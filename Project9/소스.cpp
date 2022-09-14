#include <iostream>
#include <random>
#include <string>
#include <time.h>

using namespace std;

int main() {

	//����1
	/*
	  ����ڷκ��� �����ڸ� �޾Ƽ� ������ ������ ������
	  ���� ���α׷��� �ۼ��Ͽ� ����.
	  while���� switch - case�� ���
	  ������ a, e, i, o, u �̰�, �������� ��� ����,
	  �̶� �ҹ����� ������ ����� ��
	*/

	/* 
	char c;
	int vowels = 0; //����
	int consonants = 0; //����
	cout << "�����ڸ� �Է��ϰ� ���Ḧ ���ؼ� '='�� ġ����\n";
	cin >> c;
	while (1) {
		if ('A' <= c && c <= 'Z') {
			cout << "Check to alphabet\n";
			cin >> c;
		}
		if (c == '=') {
			cout << "����: " << vowels << "\n";
			cout << "����: " << consonants << "\n";
			return 0;
		}
		switch (c) {
		case 'a':
			vowels++;
			cin >> c;
			break;
		case 'e':
			vowels++;
			cin >> c;
			break;
		case 'i':
			vowels++;
			cin >> c;
			break;
		case 'o':
			vowels++;
			cin >> c;
			break;
		case 'u':
			vowels++;
			cin >> c;
			break;
		default:
			consonants++;
			cin >> c;
			break;
		}
	}
	*/

	//����2
	/*
	�ʵ��б� �л����� ���� ��� ������ �ڵ����� ��ü�ϴ�
	���α׷��� �ۼ��غ���.
	std::mt19937 ���� �����⸦ �̿��� ��.
	��Ģ������ ��� ������ ��
	*/

	/*
	std::random_device rd; //�õ尪�� ����
	std::mt19937 mtrand(rd()); //�õ尪�� ���� �������������� �ʱ�ȭ
	std::uniform_int_distribution<int> num1(0, 10); //���� ����
	std::uniform_int_distribution<int> num2(0, 10); //���� ����
	int answer;
	char c;
	int n1, n2;
	cout << "��� ������ �ڵ����� ���� �մϴ�.";
	while (1) {
		n1 = num1(mtrand);
		n2 = num2(mtrand);
		cout <<"\n" << n1 << " " << n2 << "\n";
		cout << "������ �Է��ϱ� (+, -, *, /)\n";
		cin >> c;
		cout << "��� �Է��ϱ�\n";
		cin >> answer;
		if (c == '+') {
			if (answer == n1 + n2) {
				cout << "�¾ҽ��ϴ�.\n";
			}
			else
				cout << "Ʋ�Ƚ��ϴ�.\n";
		}
		if (c == '-') {
			if (answer == n1 - n2) {
				cout << "�¾ҽ��ϴ�.\n";
			}
			else
				cout << "Ʋ�Ƚ��ϴ�.\n";
		}
		if (c == '*') {
			if (answer == n1 * n2) {
				cout << "�¾ҽ��ϴ�.\n";
			}
			else
				cout << "Ʋ�Ƚ��ϴ�.\n";
		}
		if (c == '/') {
			if (answer == n1 / n2) {
				cout << "�¾ҽ��ϴ�.\n";
			}
			else
				cout << "Ʋ�Ƚ��ϴ�.\n";
		}
	}
	*/

	//����3
	/*
	1���� N���� M�� ������� ���϶�
	10,2�� �Է¹޾Ҵٸ� 1~10 �� 2�� ����� ���̹Ƿ�
	2+4+6+8+10 = 30 �̰� 30�� ����Ѵ�.
	*/

	/*
	int n, m, answer = 0;
	int i = 1;
	cin >> n >> m;
	cout << "N ���� " << n << ", M ���� " << m << "\n";
	while (1) {
		if (m * i > n) {
			cout << answer;
			return 0;
		}
		answer = answer + m * i;
		i++;
	}
	*/

	//����4
	//������� �ڱ��ڽ��� ������ ���� ����� ���Ѵ�.
	//���� ���, 6�� ������� 1,2,3 �̴�. 
	//�Է¹��� ���� ������� ���� 1+2+3 = 6 �� ���� ���·� ����϶�.

	/*
	int num;
	int i = 1;
	int answer = 0;
	cin >> num;
	cout << i;
	i++;
	while (i<num) {
		if (num % i == 0) {
			cout << "+";
			cout << i;
			answer = answer + i;
			i++;
		}
		else
			i++;
	}
	cout << " = " << answer + 1 << "\n";
	return 0;
	*/

	//����5
	/*
	Tic-Tac-Toe ������ 2���� ����ڰ� ���带 �̿��Ͽ���
	�����ư��� O�� X�� ���� �����̴�.
	*/

	/*
	int x, y;
	char board[3][3] = { ' ' };
	for (int k = 0; k < 9; k++)
	{
		cout << " ���� �Ͻð� ���� x �� y �� ��ǥ�� �Է� ���ּ��� : ";
		cin >> x, cin >> y;
		if (k % 2 == 0)
		{
			board[x][y] = 'X';
		}
		else
			board[x][y] = 'O';
		cout << "---|---|---" << endl;
		cout << " " << board[0][0] << " |" << " " << board[0][1] << "  |" << " " << board[0][2] << endl;
		cout << "---|---|---" << endl;
		cout << " " << board[1][0] << "  |" << " " << board[1][1] << " |" << " " << board[1][2] << endl;
		cout << "---|---|---" << endl;
		cout << " " << board[2][0] << "  |" << " " << board[2][1] << "  |" << " " << board[2][2] << endl;
	}
	return 0;
	*/

	//����6
	//����ã��(p.111)

/*

    bool board[10][10] = { 0 };
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			if ((rand() % 100) < 30)
				board[i][j] = true;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++)
			if (board[i][j])
				cout << "# ";
			else
				cout << ". ";
		cout << endl;
	}
	return 0;

*/

	//����7
	/*
	�̸� ���� ã��
	�� ����� �̸��� ���ĺ� �빮�ڷ� ǥ���ϰ�, �̸� �� ���ھ� ������ ����
	-DAVID / SUNNY => DSAUVNINDY
	�̰��� �迭�� �ϳ� ���� ��, ���ĺ� ������� ȹ���� ����
	int cnt[26] = {3,2,1,2,4,3,1,3,1,1,3,1,3,2,1,2,2,2,1,2,1,1,1,2,2,1}
	���ĺ��� �����ϴ� ���ڸ� �ٲٰ�, �� ���ڿ� �� ������ ������ ���ڸ�
	���� ���� �ؿ� ����
	���ϴ� ������ �ݺ��ϰ�, �������� ���� 2���� ������ �� ���� ���ڰ�
	�� �̸��� ������ ��
	�ǻ� �ڵ�
	1. �� �̸��� ���� string ������ �����ϰ� �빮�ڷ� �Է¹޴´�.
	2. �ٸ� �ϳ��� string ������ �����ϰ� �� �̸��� ������ �ִ´�.
	3. ���ĺ��� �����ϴ� ���ڸ� ���� �� �ִ� �迭 ����
	4. �� ���ĺ��� ȹ���� ���ϰ� �迭 ���ʺ��� ���� ���� ����
	5. ���������� �迭0,1�� ���� �̿��� ������ ����Ѵ�.
	*/

/*

	string name1, name2;
	int t;
	int cnt[26] = { 3,2,1,2,4,3,1,3,1,1,3,1,3,2,1,2,2,2,1,2,1,1,1,2,2,1 };
	//1
	cin >> name1;
	cin.ignore();
	cin >> name2;
	cin.ignore();
	//2
	string str;
	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			str[i] = name1[i];
		}
		else {
			str[i] = name2[i];
		}
	}
	//3
	int arr[100];
	for (int i = 0; i < 10; i++) {
		t = str[i] - 65;
		arr[i] = cnt[t];
		cout << arr[i] << " ";
	}
*/

}