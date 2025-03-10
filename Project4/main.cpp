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
		cout << "学号" << id
			<< "姓名" << name
			<< "年龄" << age
			<< "分数" << score << endl;
	}
};
class manager {
private:
	vector<student> students;
public:
	void addstudent() {
		student s;
		cout << "输入学号";
		cin >> s.id;
		cout << "输入年龄";
		cin >> s.age;
		cout << "输入姓名";
		cin >> s.name;
		cout << "输入分数";
		cin >> s.score;
		students.push_back(s);
		cout << "添加成功" << endl;

	}
	void showALL() {
		if (students.empty()) {
			cout << "没有学生记录" << endl;
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
		cout << "未找到该学生" << endl;
	}
	void deletebyid(string id)
	{
		for (auto it = students.begin(); it != students.end();it++)
		{
			if (it->id == id)
			{
				students.erase(it);
				cout << "删除成功" << endl;
				return;
				}
			
}
cout << "未找到该学生" << endl;
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
						cout << "输入要查找的学号：";
						cin >> id;
						ban.findbyid(id);
						break;
					
		case 4:
			cout << "输入你要删除的学号：";
			cin >> id;
			ban.deletebyid(id);
		default:
			cout << "无效选择" << endl;
		}
		
}
	return 0;
}