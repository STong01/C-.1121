#include <iostream>
#include <string>
#include <vector>
using namespace std;

//�������������������
//xcopy / s c : \ d : \��
//�����������£�
//����1��������xcopy
//����2���ַ��� / s
//����3���ַ���c : \
//����4 : �ַ���d : \
//���дһ��������������ʵ�ֽ������и�����������������
//
//��������
//
//1.�����ָ���Ϊ�ո�
//2.�����á������������Ĳ���������м��пո񣬲��ܽ���Ϊ�������������������������xcopy / s ��C : \program files�� ��d : \��ʱ��������Ȼ��4������3������Ӧ�����ַ���C : \program files��������C : \program��ע���������ʱ����Ҫ������ȥ�������Ų�����Ƕ�������
//3.����������
//4.������������֤��������ֲ�����Ҫ�������
int main1() {
	string str;

	while (getline(cin, str)) 
	{
		bool flag = false;
		vector<string> vec;
		string row;

		for (int i = 0; i < str.size(); i++) 
		{
			if (flag) 
			{//��������
				if (str[i] != '\"') 
					row += str[i];
				else 
					flag = false;
			}
			else 
			{
				if (str[i] == ' ') 
				{
					vec.push_back(row);
					row = "";
				}
				else if (str[i] == '\"') 
					flag = true;
				else 
					row += str[i];
			}
		}

		vec.push_back(row);
		cout << vec.size() << endl;

		for (auto i : vec) 
			cout << i << endl;
	}
	system("pause");
	return 0;
}