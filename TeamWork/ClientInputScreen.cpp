#include "stdafx.h" 
#include "ClientInputScreen.h" 

void ClientInputScreen::setClient()  //���� ��������
{
	cout << "������� ��� ������� (������ �.�.): " << endl;
	getaLine(addName);
	cout << "������� ��� ������ (��������, ������): " << endl;
	getaLine(addClother);
	cout << "������� ��� ������ (� ������ ����������, �������� ���� ������): " << endl;
	getline(cin, addService);
	cout << "������� ���� ��������� (01.10.2020): " << endl;
	getaLine(addDate);
	Client* ptrClient = new Client(addName, addClother, addService, addDate); 
	ptrClientList->insertClient(ptrClient);    //�������� ������� � �������       

}