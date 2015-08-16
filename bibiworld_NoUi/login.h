#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>
#include <QCheckBox>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPixmap>

class login : public QDialog
{
    Q_OBJECT

public:
    login(QWidget *parent = 0);
    ~login();

private slots:
    void loginto();//登录按钮
    void exitout();//退出按钮
    void forgetPassword();//忘记密码按钮
    void help();//帮助按钮

private:
    QLabel *userNameLabel;
    QLabel *userPasswordLabel;
    QLineEdit *userNameEdit;
    QLineEdit *userPasswordEdit;
    QCheckBox *remberPassword;
    QCheckBox *autoLogin;

    QPushButton *logintoButton;
    QPushButton *exitoutButton;
    QPushButton *forgetPasswordButton;
    QPushButton *helpButton;

    QGridLayout *mainLayout;
    QGridLayout *upLayout;
    QVBoxLayout *lowLayout;

    QLabel *pic;
};

#endif // LOGIN_H
