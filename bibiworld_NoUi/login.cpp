#include "login.h"

login::login(QWidget *parent)
    : QDialog(parent)
{
    int width = 450;
    int height = 300;
    this->setFixedSize(width,height);

    setWindowTitle(tr("欢迎来到 BibiWorld"));

    pic = new QLabel;
   /* QPixmap icon("1.png");
    pic->setPixmap(icon);
    pic->resize(450,150);*/

    pic->setStyleSheet("background-image:url(/home/lihy45/Qt5.2.0/lhysource/bibiworld_NoUi/1.jpg)");
    //We can not use this path to find path of the picture. We need to try another way to find path.
    pic->resize(450,1500);

    userNameLabel = new QLabel;
    userNameLabel->setText(tr("用户名："));
    userPasswordLabel = new QLabel;
    userPasswordLabel->setText(tr("密码："));

    userNameEdit = new QLineEdit;
    userPasswordEdit = new QLineEdit;
    userPasswordEdit->QLineEdit::setEchoMode(QLineEdit::Password);

    remberPassword = new QCheckBox(tr("记住密码"));
    autoLogin = new QCheckBox(tr("自动登录"));

    logintoButton = new QPushButton;
    logintoButton->setText(tr("登录"));
    exitoutButton = new QPushButton;
    exitoutButton->setText(tr("退出"));
    forgetPasswordButton = new QPushButton;
    forgetPasswordButton->setText(tr("忘记密码？"));
    helpButton = new QPushButton;
    helpButton->setText(tr("帮助"));

    upLayout = new QGridLayout();
    upLayout->addWidget(pic,0,0,1,5);
    upLayout->addWidget(userNameLabel,2,0);
    upLayout->addWidget(userNameEdit,2,1);
    upLayout->addWidget(userPasswordLabel,3,0);
    upLayout->addWidget(userPasswordEdit,3,1);
    // upLayout->addWidget(logintoButton,4,0);
    //upLayout->addWidget(exitoutButton,4,1);
    upLayout->addWidget(forgetPasswordButton,2,2);
    upLayout->addWidget(helpButton,3,2);
    upLayout->addWidget(remberPassword,5,0);
    upLayout->addWidget(autoLogin,5,1);

    lowLayout = new QVBoxLayout();
    //lowLayout->addLayout(upLayout);
    lowLayout->addWidget(logintoButton);
    lowLayout->addWidget(exitoutButton);

    mainLayout = new QGridLayout(this);
    mainLayout->setMargin(15);
    mainLayout->setSpacing(10);
    mainLayout->addLayout(upLayout,0,0);
    mainLayout->addLayout(lowLayout,1,0);
    //mainLayout->setSizeConstraint(QLayout::SetFixedSize);



    connect(logintoButton,SIGNAL(clicked()),this,SLOT(loginto()));
    connect(exitoutButton,SIGNAL(clicked()),this,SLOT(exitout()));
    connect(forgetPasswordButton,SIGNAL(clicked()),this,SLOT(forgetPassword()));
    connect(helpButton,SIGNAL(clicked()),this,SLOT(help()));


}

login::~login()
{

}

void login::loginto(){

}
void login::exitout(){
    close();
}

void login::forgetPassword(){

}

void login::help(){

}


