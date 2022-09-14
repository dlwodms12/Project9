#include <iostream>
#include <random>
#include <string>
#include <time.h>

using namespace std;

int main() {

	//문제1
	/*
	  사용자로부터 영문자를 받아서 자음과 모음의 개수를
	  세는 프로그램을 작성하여 보자.
	  while문과 switch - case문 사용
	  모음은 a, e, i, o, u 이고, 나머지는 모두 자음,
	  이때 소문자의 개수만 세어야 함
	*/

	/* 
	char c;
	int vowels = 0; //모음
	int consonants = 0; //자음
	cout << "영문자를 입력하고 종료를 위해선 '='를 치세요\n";
	cin >> c;
	while (1) {
		if ('A' <= c && c <= 'Z') {
			cout << "Check to alphabet\n";
			cin >> c;
		}
		if (c == '=') {
			cout << "모음: " << vowels << "\n";
			cout << "자음: " << consonants << "\n";
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

	//문제2
	/*
	초등학교 학생들을 위한 산수 문제를 자동으로 출체하는
	프로그램을 작성해보자.
	std::mt19937 난수 생성기를 이용할 것.
	사칙연산을 모두 구현할 것
	*/

	/*
	std::random_device rd; //시드값을 얻음
	std::mt19937 mtrand(rd()); //시드값을 통해 난수생성엔진을 초기화
	std::uniform_int_distribution<int> num1(0, 10); //범위 제한
	std::uniform_int_distribution<int> num2(0, 10); //범위 제한
	int answer;
	char c;
	int n1, n2;
	cout << "산수 문제를 자동으로 출제 합니다.";
	while (1) {
		n1 = num1(mtrand);
		n2 = num2(mtrand);
		cout <<"\n" << n1 << " " << n2 << "\n";
		cout << "연산자 입력하기 (+, -, *, /)\n";
		cin >> c;
		cout << "결과 입력하기\n";
		cin >> answer;
		if (c == '+') {
			if (answer == n1 + n2) {
				cout << "맞았습니다.\n";
			}
			else
				cout << "틀렸습니다.\n";
		}
		if (c == '-') {
			if (answer == n1 - n2) {
				cout << "맞았습니다.\n";
			}
			else
				cout << "틀렸습니다.\n";
		}
		if (c == '*') {
			if (answer == n1 * n2) {
				cout << "맞았습니다.\n";
			}
			else
				cout << "틀렸습니다.\n";
		}
		if (c == '/') {
			if (answer == n1 / n2) {
				cout << "맞았습니다.\n";
			}
			else
				cout << "틀렸습니다.\n";
		}
	}
	*/

	//문제3
	/*
	1부터 N까지 M의 배수합을 구하라
	10,2를 입력받았다면 1~10 중 2의 배수의 합이므로
	2+4+6+8+10 = 30 이고 30을 출력한다.
	*/

	/*
	int n, m, answer = 0;
	int i = 1;
	cin >> n >> m;
	cout << "N 값은 " << n << ", M 값은 " << m << "\n";
	while (1) {
		if (m * i > n) {
			cout << answer;
			return 0;
		}
		answer = answer + m * i;
		i++;
	}
	*/

	//문제4
	//진약수는 자기자신을 제외한 양의 약수를 말한다.
	//예를 들어, 6의 진약수는 1,2,3 이다. 
	//입력받은 수의 진약수의 합을 1+2+3 = 6 과 같은 형태로 출력하라.

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

	//문제5
	/*
	Tic-Tac-Toe 게임은 2명의 경기자가 보드를 이용하여서
	번갈아가며 O와 X를 놓는 게임이다.
	*/

	/*
	int x, y;
	char board[3][3] = { ' ' };
	for (int k = 0; k < 9; k++)
	{
		cout << " 선택 하시고 싶은 x 와 y 의 좌표를 입력 해주세요 : ";
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

	//문제6
	//지뢰찾기(p.111)

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

	//문제7
	/*
	이름 궁합 찾기
	두 사람의 이름을 알파벳 대문자로 표현하고, 이름 한 글자씩 번갈아 적음
	-DAVID / SUNNY => DSAUVNINDY
	이것을 배열을 하나 만든 뒤, 알파벳 순서대로 획수를 기입
	int cnt[26] = {3,2,1,2,4,3,1,3,1,1,3,1,3,2,1,2,2,2,1,2,1,1,1,2,2,1}
	알파벳에 대응하는 숫자를 바꾸고, 그 숫자와 그 숫자의 오른쪽 숫자를
	더한 값을 밑에 적음
	더하는 과정을 반복하고, 마지막에 숫자 2개만 남았을 때 남은 숫자가
	두 이름의 궁합이 됨
	의사 코드
	1. 두 이름에 대한 string 변수를 선언하고 대문자로 입력받는다.
	2. 다른 하나의 string 변수를 선언하고 두 이름을 번갈아 넣는다.
	3. 알파벳에 대응하는 숫자를 넣을 수 있는 배열 선언
	4. 두 알파벳의 획수를 더하고 배열 앞쪽부터 더한 값을 넣음
	5. 최종적으로 배열0,1번 값을 이용해 궁합을 출력한다.
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