#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
class student {
public:
	string id;
	string name;
	int age;
	double score;
	void display() {
		cout << "ѧ��" << id
			<< "����" << name
			<< "����" << age
			<< "����" << score << endl;
	}
};
class manager {
private:
	vector<student> students;
public:
	void addstudent() {
		student s;
		cout << "����ѧ��";
		cin >> s.id;
		cout << "��������";
		cin >> s.age;
		cout << "��������";
		cin >> s.name;
		cout << "�������";
		cin >> s.score;
		students.push_back(s);
		cout << "��ӳɹ�" << endl;

	}
	void showALL() {
		if (students.empty()) {
			cout << "û��ѧ����¼" << endl;
			return;

		}
		for (auto& s : students)
		{
			s.display();

		}
	}
	void findbyid(string id)
	{
		for (auto& s : students) {
			if (s.id == id)
			{
				s.display();
				return;
			}
		}
		cout << "δ�ҵ���ѧ��" << endl;
	}
	void deletebyid(string id)
	{
		for (auto it = students.begin(); it != students.end();it++)
		{
			if (it->id == id)
			{
				students.erase(it);
				cout << "ɾ���ɹ�" << endl;
				return;
				}
			
}
cout << "δ�ҵ���ѧ��" << endl;
	}
	

};
int main()
{
	manager ban;
	int choice;
	string id;
	while (true) {
		cout << "1";
		cin >> choice;
		if (choice == 0)break;
		switch (choice) {
		case 1:
				ban.addstudent();
				break;



		case 2:
					ban.showALL();
					break;
		case 3:
						cout << "����Ҫ���ҵ�ѧ�ţ�";
						cin >> id;
						ban.findbyid(id);
						break;
					
		case 4:
			cout << "������Ҫɾ����ѧ�ţ�";
			cin >> id;
			ban.deletebyid(id);
		default:
			cout << "��Чѡ��" << endl;
		}
		
}
	return 0;
}