#include<iostream>;
using namespace std;
#include"employer.h";

Employer::Employer(int id, string name, int deptname) {
	this->m_id = id;
	this->m_name = name;
	this->m_deptname = deptname;
}

void Employer::showInfor() {
	cout << "员工编号: " << this->m_id << endl;
	cout << "员工姓名: " << this->m_name << endl;
	switch (m_deptname)
	{
	case 1:
		cout << "员工职位: " << "员工" << endl;
		break;
	case 2:
		cout << "员工职位: " << "经理" << endl;
		break;
	case 3:
		cout << "员工职位: " << "老板" << endl;
		break;
	default:
		break;
	}
	cout << "完成老板布置的任务，给员工分配任务" << endl;
}

string Employer::getInfor() {
	return string ("经理");
}