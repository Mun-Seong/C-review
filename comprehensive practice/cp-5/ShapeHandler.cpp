#include <iostream>
#include "ShapeHandler.h"
#include "Rectangle.h"
#include "Ellipse.h"
#include "Triangle.h"

using namespace std;

void ShapeHandler::ShowMenu(void) const {
    cout<<"-----Menu------"<<endl;
    cout<<"1. 도형 만들기"<<endl;
    cout<<"2. 도형 이  동"<<endl;
    cout<<"3. 도형 그리기"<<endl;
    cout<<"4. 면적 구하기"<<endl;
    cout<<"5. 모든도형출력"<<endl;
    cout<<"6. 프로그램 종료"<<endl;
}
void ShapeHandler::MakeShape(void) {
    int sel;
    cout<<"[도형종류 선택]"<<endl;
    cout<<"1. 사각형 ";
    cout<<"2. 타원형 "<<"3. 삼각형 "<<endl;
    cout<<"선택: ";
    cin>>sel;
    switch (sel) {
	case 1: MakeRectangle();   break;
	case 2: MakeEllipse();     break;
	case 3: MakeTriangle();    break;
	default : cout<<"잘못된 도형 선택..."<<endl;
	}
}
void ShapeHandler::MakeRectangle(void) {
    int id;
    int x, y;
    int width, height;
    cout<<"[사각형 만들기]"<<endl;
    cout<<"도형ID: ";cin>>id;
    cout<<"x 좌표: ";cin>>x;
    cout<<"y 좌표: ";cin>>y;
    cout<<"가 로: ";    cin>>width;
    cout<<"세 로: ";    cin>>height;
    cout<<endl;
    p[ShNum++]=new Rectangle(id, x, y, width, height);
}
void ShapeHandler::MakeEllipse(void) {
    int id;
    int x, y;
    int width, height;
    cout<<"[타원형 만들기]"<<endl;
    cout<<"도형ID: ";cin>>id;
    cout<<"x 좌표: ";cin>>x;
    cout<<"y 좌표: ";cin>>y;
    cout<<"가 로: ";    cin>>width;
    cout<<"세 로: ";    cin>>height;
    cout<<endl;
    p[ShNum++]=new Ellipse(id, x, y, width, height);
}
void ShapeHandler::MakeTriangle(void) {
    int id;
    int x, y;
    int width, height;
    cout<<"[삼각형 만들기]"<<endl;
    cout<<"도형ID: ";cin>>id;
    cout<<"x 좌표: ";cin>>x;
    cout<<"y 좌표: ";cin>>y;
    cout<<"가 로: ";    cin>>width;
    cout<<"세 로: ";    cin>>height;
    cout<<endl;
    p[ShNum++]=new Triangle(id, x, y, width, height);
}
void ShapeHandler::MoveShape(void) {
    int id;
    int x, y;
    cout<<"[이    동]"<<endl;
    cout<<"도형ID: ";cin>>id;
    cout<<"x: ";cin>>x;
    cout<<"y: ";cin>>y;
    for(int i=0; i<ShNum; i++) {
        if(p[i]->getShID()==id) {
          p[i]->move(x, y);
          cout<<"이동완료"<< endl<<endl;
          return;
        }
    }
    cout<<"유효하지 않은 ID 입니다."<<endl<<endl;
}
void ShapeHandler::DrawShape(void) {
    int id;
    cout<<"[도형그리기]"<<endl;
    cout<<"도형ID: ";cin>>id;
    for(int i=0; i<ShNum; i++) {
        if(p[i]->getShID()==id) {
           p[i]->draw();
           cout<<"그리기 완료"<< endl<<endl;
           return;
        }
    }
    cout<<"유효하지 않은 ID 입니다."<<endl<<endl;
}
void ShapeHandler::AreaShape(void) {
    int id;
    cout<<"[면    적]"<<endl;
    cout<<"도형ID: ";cin>>id;
    for(int i=0; i<ShNum; i++) {
        if(p[i]->getShID()==id) {
           cout<<"면적은 "<<p[i]->getArea()<<"입니다.";
           cout<<"면적완료"<< endl<<endl;
           return;
        }
    }
    cout<<"유효하지 않은 ID 입니다."<<endl<<endl;
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
     cout << "선택: ";
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


