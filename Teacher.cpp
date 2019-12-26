#include"Teacher.h"


//   进行类外定义。 
void Teacher::setName(string _name){
	m_strName=_name;
}
string Teacher::getName(){
	return m_strName;
}
void Teacher::setAge(int _age){
	m_iAge=_age;
}
int Teacher::getAge(){
	return m_iAge;
}
void Teacher::setGender(string _gender){
	m_strGender=_gender;
}
string Teacher::getGender(){
	return m_strGender;
}
void Teacher::teach(){
	cout<<"准备上课"<<endl;
} 
int main(){
	Teacher Te;
	Te.setName("liujiaxin");
	Te.setGender("male");
	Te.setAge(22);
	cout<<Te.getName()<<" "<<Te.getGender()<<" "<<Te.getAge()<<" "<<endl;
	Te.teach();
	system("pause");
	return 0;
}
