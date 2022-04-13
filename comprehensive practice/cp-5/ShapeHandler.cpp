#include <iostream>
#include "ShapeHandler.h"
#include "Rectangle.h"
#include "Ellipse.h"
#include "Triangle.h"

using namespace std;

void ShapeHandler::ShowMenu(void) const {
    cout<<"-----Menu------"<<endl;
    cout<<"1. ���� �����"<<endl;
    cout<<"2. ���� ��  ��"<<endl;
    cout<<"3. ���� �׸���"<<endl;
    cout<<"4. ���� ���ϱ�"<<endl;
    cout<<"5. ��絵�����"<<endl;
    cout<<"6. ���α׷� ����"<<endl;
}
void ShapeHandler::MakeShape(void) {
    int sel;
    cout<<"[�������� ����]"<<endl;
    cout<<"1. �簢�� ";
    cout<<"2. Ÿ���� "<<"3. �ﰢ�� "<<endl;
    cout<<"����: ";
    cin>>sel;
    switch (sel) {
	case 1: MakeRectangle();   break;
	case 2: MakeEllipse();     break;
	case 3: MakeTriangle();    break;
	default : cout<<"�߸��� ���� ����..."<<endl;
	}
}
void ShapeHandler::MakeRectangle(void) {
    int id;
    int x, y;
    int width, height;
    cout<<"[�簢�� �����]"<<endl;
    cout<<"����ID: ";cin>>id;
    cout<<"x ��ǥ: ";cin>>x;
    cout<<"y ��ǥ: ";cin>>y;
    cout<<"�� ��: ";    cin>>width;
    cout<<"�� ��: ";    cin>>height;
    cout<<endl;
    p[ShNum++]=new Rectangle(id, x, y, width, height);
}
void ShapeHandler::MakeEllipse(void) {
    int id;
    int x, y;
    int width, height;
    cout<<"[Ÿ���� �����]"<<endl;
    cout<<"����ID: ";cin>>id;
    cout<<"x ��ǥ: ";cin>>x;
    cout<<"y ��ǥ: ";cin>>y;
    cout<<"�� ��: ";    cin>>width;
    cout<<"�� ��: ";    cin>>height;
    cout<<endl;
    p[ShNum++]=new Ellipse(id, x, y, width, height);
}
void ShapeHandler::MakeTriangle(void) {
    int id;
    int x, y;
    int width, height;
    cout<<"[�ﰢ�� �����]"<<endl;
    cout<<"����ID: ";cin>>id;
    cout<<"x ��ǥ: ";cin>>x;
    cout<<"y ��ǥ: ";cin>>y;
    cout<<"�� ��: ";    cin>>width;
    cout<<"�� ��: ";    cin>>height;
    cout<<endl;
    p[ShNum++]=new Triangle(id, x, y, width, height);
}
void ShapeHandler::MoveShape(void) {
    int id;
    int x, y;
    cout<<"[��    ��]"<<endl;
    cout<<"����ID: ";cin>>id;
    cout<<"x: ";cin>>x;
    cout<<"y: ";cin>>y;
    for(int i=0; i<ShNum; i++) {
        if(p[i]->getShID()==id) {
          p[i]->move(x, y);
          cout<<"�̵��Ϸ�"<< endl<<endl;
          return;
        }
    }
    cout<<"��ȿ���� ���� ID �Դϴ�."<<endl<<endl;
}
void ShapeHandler::DrawShape(void) {
    int id;
    cout<<"[�����׸���]"<<endl;
    cout<<"����ID: ";cin>>id;
    for(int i=0; i<ShNum; i++) {
        if(p[i]->getShID()==id) {
           p[i]->draw();
           cout<<"�׸��� �Ϸ�"<< endl<<endl;
           return;
        }
    }
    cout<<"��ȿ���� ���� ID �Դϴ�."<<endl<<endl;
}
void ShapeHandler::AreaShape(void) {
    int id;
    cout<<"[��    ��]"<<endl;
    cout<<"����ID: ";cin>>id;
    for(int i=0; i<ShNum; i++) {
        if(p[i]->getShID()==id) {
           cout<<"������ "<<p[i]->getArea()<<"�Դϴ�.";
           cout<<"�����Ϸ�"<< endl<<endl;
           return;
        }
    }
    cout<<"��ȿ���� ���� ID �Դϴ�."<<endl<<endl;
}
ShapeHandler::ShapeHandler() {  }

void ShapeHandler::ShowAllShInfo(void) const {
    for(int i=0; i<ShNum; i++) {
        p[i]->showShInfo();
        p[i]->draw(); 
        cout<<endl;
    }
}
ShapeHandler::~ShapeHandler() {
    for(int i=0; i<ShNum; i++)
    	delete p[i];
}
void ShapeHandler::run() {
  int choice;

  while (1) {
     ShowMenu();
     cout << "����: ";
     cin >> choice;
     cout << endl;

     switch (choice) {
     case MAKE:
            MakeShape(); break;
     case MOVE:
            MoveShape(); break;
     case DRAW:
            DrawShape(); break;
     case AREA:
            AreaShape(); break;
     case PRINT:
            ShowAllShInfo(); break;
     case EXIT:   return;
     default:   cout << "Illegal selection.." << endl;
     }
   }
}


