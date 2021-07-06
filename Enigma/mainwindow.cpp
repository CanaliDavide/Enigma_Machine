#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "plugboard.h"
#include "assign.h"
#include <QMessageBox>
#include <QFile>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QPixmap logo ("logo.png");
    ui->setupUi(this);
    ui->ComboBox_R1->setCurrentIndex(1);
    ui->ComboBox_R2->setCurrentIndex(2);
    ui->ComboBox_R3->setCurrentIndex(3);
    ui->ComboBox_Set_R1->setCurrentIndex(17);
    ui->ComboBox_Set_R2->setCurrentIndex(4);
    ui->ComboBox_Set_R3->setCurrentIndex(21);
    ui->ComboBox_Start_R1->setCurrentIndex(10);
    ui->ComboBox_Start_R2->setCurrentIndex(2);
    ui->ComboBox_Start_R3->setCurrentIndex(15);
    ui->label_Logo->setPixmap(logo);
    ui->LIneEdit_Result->setStyleSheet("color: black;");
    ui->LIneEdit_Result_2->setStyleSheet("color: black;");
}

MainWindow::~MainWindow()//qDebug() << ui->ComboBox_Set_R1->currentIndex();
{
    delete ui;
}


void MainWindow::Pos_R()
{
        PosR1 = ui->ComboBox_R1->currentIndex();
        PosR2 = ui->ComboBox_R2->currentIndex();
        PosR3 = ui->ComboBox_R3->currentIndex();
        qDebug() << "PosRotors " << PosR1 << PosR2 << PosR3;
}

/*void MainWindow::AssignLetterR1() //ShouldBeFINISHED
{
    if(ui->ComboBox_Set_R1->currentIndex() != 0)
    {
        for(int n=0; n<26; n++)
        {
            if(n+ui->ComboBox_Set_R1->currentIndex() < 26)
                LetterR1Mod[n]=LetterR1[n+ui->ComboBox_Set_R1->currentIndex()];
            else
                LetterR1Mod[n]=LetterR1[(n+ui->ComboBox_Set_R1->currentIndex())- 26];
        }
    }
    else
        for(int n=0; n<26; n++)
        {
            LetterR1Mod[n]=LetterR1[n];
        }
}
*/
void MainWindow::Rotor1_2()
{
    /*if((Letter + ui->ComboBox_Start_R1->currentIndex())<26)
        Start_Letter_R1 = Letter + ui->ComboBox_Start_R1->currentIndex();
    else
        Start_Letter_R1 = (Letter + ui->ComboBox_Start_R1->currentIndex()) - 26;
    Start_Letter_R1=LetInProcess;
    qDebug() << "Start Letter Rotor1 = " << Start_Letter_R1;*/
    rot1.F_Rotor1(PosR1,PosR2,PosR3,LetInProcess,ui->ComboBox_Start_R1->currentIndex(),ui->ComboBox_Start_R2->currentIndex(),
                  ui->ComboBox_Start_R3->currentIndex(),ui->ComboBox_Set_R2->currentIndex(),ui->ComboBox_Set_R3->currentIndex());
    qDebug() << "Start Letter Rotor1 " << rot1.StartR1;
    switch (rot1.StartR1) {
    case 0:
        LetInProcess=ass.LetterR1Mod[0];
        break;
    case 1:
        LetInProcess=ass.LetterR1Mod[1];
        break;
    case 2:
        LetInProcess=ass.LetterR1Mod[2];
        break;
    case 3:
        LetInProcess=ass.LetterR1Mod[3];
        break;
    case 4:
        LetInProcess=ass.LetterR1Mod[4];
        break;
    case 5:
        LetInProcess=ass.LetterR1Mod[5];
        break;
    case 6:
        LetInProcess=ass.LetterR1Mod[6];
        break;
    case 7:
        LetInProcess=ass.LetterR1Mod[7];
        break;
    case 8:
        LetInProcess=ass.LetterR1Mod[8];
        break;
    case 9:
        LetInProcess=ass.LetterR1Mod[9];
        break;
    case 10:
        LetInProcess=ass.LetterR1Mod[10];
        break;
    case 11:
        LetInProcess=ass.LetterR1Mod[11];
        break;
    case 12:
        LetInProcess=ass.LetterR1Mod[12];
        break;
    case 13:
        LetInProcess=ass.LetterR1Mod[13];
        break;
    case 14:
        LetInProcess=ass.LetterR1Mod[14];
        break;
    case 15:
        LetInProcess=ass.LetterR1Mod[15];
        break;
    case 16:
        LetInProcess=ass.LetterR1Mod[16];
        break;
    case 17:
        LetInProcess=ass.LetterR1Mod[17];
        break;
    case 18:
        LetInProcess=ass.LetterR1Mod[18];
        break;
    case 19:
        LetInProcess=ass.LetterR1Mod[19];
        break;
    case 20:
        LetInProcess=ass.LetterR1Mod[20];
        break;
    case 21:
        LetInProcess=ass.LetterR1Mod[21];
        break;
    case 22:
        LetInProcess=ass.LetterR1Mod[22];
        break;
    case 23:
        LetInProcess=ass.LetterR1Mod[23];
        break;
    case 24:
        LetInProcess=ass.LetterR1Mod[24];
        break;
    case 25:
        LetInProcess=ass.LetterR1Mod[25];
        break;
    default:
        break;
    }
    qDebug() << "Rotor1 = " << LetInProcess;
}

/*void MainWindow::AssignLetterR2()
{
    if(ui->ComboBox_Set_R2->currentIndex() != 0)
    {
        for(int n=0; n<26; n++)
        {
            if(n+ui->ComboBox_Set_R2->currentIndex() < 26)
                LetterR2Mod[n]=LetterR2[n+ui->ComboBox_Set_R2->currentIndex()];
            else
                LetterR2Mod[n]=LetterR2[(n+ui->ComboBox_Set_R2->currentIndex())- 26];
        }
    }
    else
        for(int n=0; n<26; n++)
        {
            LetterR2Mod[n]=LetterR2[n];
        }
}
*/
void MainWindow::Rotor2_2()
{
    /*Start_Letter_R2 = LetInProcess - ui->ComboBox_Start_R1->currentIndex() - ui->ComboBox_Set_R1->currentIndex() + ui->ComboBox_Start_R2->currentIndex();
    if (Start_Letter_R2 < 0)
        Start_Letter_R2 += 26;
    if (Start_Letter_R2 < 0)
        Start_Letter_R2 += 26;
    if(ui->ComboBox_Set_R1->currentIndex() == 0 && ui->ComboBox_Start_R1->currentIndex() == 0)
        Start_Letter_R2 = LetInProcess;
    else
        if(ui->ComboBox_Set_R1->currentIndex() != 0 && ui->ComboBox_Start_R1->currentIndex() == 0)
        {
            if(LetInProcess > ui->ComboBox_Set_R1->currentIndex())
                Start_Letter_R2 = LetInProcess - ui->ComboBox_Set_R1->currentIndex();
            else
                Start_Letter_R2 = LetInProcess + (26 - ui->ComboBox_Set_R1->currentIndex());
        }
        else
            if(ui->ComboBox_Start_R1->currentIndex() != 0 && ui->ComboBox_Set_R1->currentIndex() == 0)
            {
                if(LetInProcess > ui->ComboBox_Start_R1->currentIndex())
                    Start_Letter_R2 = LetInProcess - ui->ComboBox_Start_R1->currentIndex();
                else
                    Start_Letter_R2 = LetInProcess + (26 - ui->ComboBox_Start_R1->currentIndex());
            }
            else
                if(ui->ComboBox_Start_R1->currentIndex() != 0 && ui->ComboBox_Set_R1->currentIndex() != 0)
                {
                    int n = ui->ComboBox_Set_R1->currentIndex() + ui->ComboBox_Start_R1->currentIndex();
                    if(LetInProcess > n)
                        Start_Letter_R2 = LetInProcess - n;
                    else
                        Start_Letter_R2 = LetInProcess + (26 - n);
                }
    Start_Letter_R2 += ui->ComboBox_Start_R2->currentIndex();
    if (Start_Letter_R2 >= 26)
        Start_Letter_R2 -= 26;*/
    rot2.F_Rotor2(PosR1,PosR2,PosR3,LetInProcess,ui->ComboBox_Start_R1->currentIndex(),ui->ComboBox_Start_R2->currentIndex(),
                  ui->ComboBox_Start_R3->currentIndex(),ui->ComboBox_Set_R1->currentIndex(),ui->ComboBox_Set_R3->currentIndex());
    qDebug() << "Start Letter Rotor2 = " << rot2.StartR2;
    switch (rot2.StartR2) {
    case 0:
        LetInProcess=ass.LetterR2Mod[0];
        break;
    case 1:
        LetInProcess=ass.LetterR2Mod[1];
        break;
    case 2:
        LetInProcess=ass.LetterR2Mod[2];
        break;
    case 3:
        LetInProcess=ass.LetterR2Mod[3];
        break;
    case 4:
        LetInProcess=ass.LetterR2Mod[4];
        break;
    case 5:
        LetInProcess=ass.LetterR2Mod[5];
        break;
    case 6:
        LetInProcess=ass.LetterR2Mod[6];
        break;
    case 7:
        LetInProcess=ass.LetterR2Mod[7];
        break;
    case 8:
        LetInProcess=ass.LetterR2Mod[8];
        break;
    case 9:
        LetInProcess=ass.LetterR2Mod[9];
        break;
    case 10:
        LetInProcess=ass.LetterR2Mod[10];
        break;
    case 11:
        LetInProcess=ass.LetterR2Mod[11];
        break;
    case 12:
        LetInProcess=ass.LetterR2Mod[12];
        break;
    case 13:
        LetInProcess=ass.LetterR2Mod[13];
        break;
    case 14:
        LetInProcess=ass.LetterR2Mod[14];
        break;
    case 15:
        LetInProcess=ass.LetterR2Mod[15];
        break;
    case 16:
        LetInProcess=ass.LetterR2Mod[16];
        break;
    case 17:
        LetInProcess=ass.LetterR2Mod[17];
        break;
    case 18:
        LetInProcess=ass.LetterR2Mod[18];
        break;
    case 19:
        LetInProcess=ass.LetterR2Mod[19];
        break;
    case 20:
        LetInProcess=ass.LetterR2Mod[20];
        break;
    case 21:
        LetInProcess=ass.LetterR2Mod[21];
        break;
    case 22:
        LetInProcess=ass.LetterR2Mod[22];
        break;
    case 23:
        LetInProcess=ass.LetterR2Mod[23];
        break;
    case 24:
        LetInProcess=ass.LetterR2Mod[24];
        break;
    case 25:
        LetInProcess=ass.LetterR2Mod[25];
        break;
    default:
        break;
    }
    qDebug() << "Rotor2 = " << LetInProcess;
}

/*void MainWindow::AssignLetterR3()
{
    if(ui->ComboBox_Set_R3->currentIndex() != 0)
    {
        for(int n=0; n<26; n++)
        {
            if(n+ui->ComboBox_Set_R3->currentIndex() < 26)
                LetterR3Mod[n]=LetterR3[n+ui->ComboBox_Set_R3->currentIndex()];
            else
                LetterR3Mod[n]=LetterR3[(n+ui->ComboBox_Set_R3->currentIndex())- 26];
        }
    }
    else
        for(int n=0; n<26; n++)
        {
            LetterR3Mod[n]=LetterR3[n];
        }
}
*/
void MainWindow::Rotor3_2()
{
    /*Start_Letter_R3 = LetInProcess - ui->ComboBox_Start_R2->currentIndex() - ui->ComboBox_Set_R2->currentIndex() + ui->ComboBox_Start_R3->currentIndex();
    if (Start_Letter_R3 < 0)
        Start_Letter_R3 += 26;
    if (Start_Letter_R3 < 0)
        Start_Letter_R3 += 26;
    if(ui->ComboBox_Set_R2->currentIndex() == 0 && ui->ComboBox_Start_R2->currentIndex() == 0)
        Start_Letter_R3 = LetInProcess;
    else
        if(ui->ComboBox_Set_R2->currentIndex() != 0 && ui->ComboBox_Start_R2->currentIndex() == 0)
        {
            if(LetInProcess > ui->ComboBox_Set_R2->currentIndex())
                Start_Letter_R3 = LetInProcess - ui->ComboBox_Set_R2->currentIndex();
            else
                Start_Letter_R3 = LetInProcess + (26 - ui->ComboBox_Set_R2->currentIndex());
        }
        else
            if(ui->ComboBox_Start_R2->currentIndex() != 0 && ui->ComboBox_Set_R2->currentIndex() == 0)
            {
                if(LetInProcess > ui->ComboBox_Start_R2->currentIndex())
                    Start_Letter_R3 = LetInProcess - ui->ComboBox_Start_R2->currentIndex();
                else
                    Start_Letter_R3 = LetInProcess + (26 - ui->ComboBox_Start_R2->currentIndex());
            }
            else
                if(ui->ComboBox_Start_R2->currentIndex() != 0 && ui->ComboBox_Set_R2->currentIndex() != 0)
                {
                    int n = ui->ComboBox_Set_R2->currentIndex() + ui->ComboBox_Start_R2->currentIndex();
                    if(LetInProcess > n)
                        Start_Letter_R3 = LetInProcess - n;
                    else
                        Start_Letter_R3 = LetInProcess + (26 - n);
                }
    Start_Letter_R3 += ui->ComboBox_Start_R3->currentIndex();
    if (Start_Letter_R3 >= 26)
        Start_Letter_R3 -= 26;*/
    rot3.F_Rotor3(PosR1,PosR2,PosR3,LetInProcess,ui->ComboBox_Start_R1->currentIndex(),ui->ComboBox_Start_R2->currentIndex(),
                  ui->ComboBox_Start_R3->currentIndex(),ui->ComboBox_Set_R1->currentIndex(),ui->ComboBox_Set_R2->currentIndex());
    qDebug() << "Start Letter Rotor3 = " << rot3.StartR3;
    switch (rot3.StartR3) {
    case 0:
        LetInProcess=ass.LetterR3Mod[0];
        break;
    case 1:
        LetInProcess=ass.LetterR3Mod[1];
        break;
    case 2:
        LetInProcess=ass.LetterR3Mod[2];
        break;
    case 3:
        LetInProcess=ass.LetterR3Mod[3];
        break;
    case 4:
        LetInProcess=ass.LetterR3Mod[4];
        break;
    case 5:
        LetInProcess=ass.LetterR3Mod[5];
        break;
    case 6:
        LetInProcess=ass.LetterR3Mod[6];
        break;
    case 7:
        LetInProcess=ass.LetterR3Mod[7];
        break;
    case 8:
        LetInProcess=ass.LetterR3Mod[8];
        break;
    case 9:
        LetInProcess=ass.LetterR3Mod[9];
        break;
    case 10:
        LetInProcess=ass.LetterR3Mod[10];
        break;
    case 11:
        LetInProcess=ass.LetterR3Mod[11];
        break;
    case 12:
        LetInProcess=ass.LetterR3Mod[12];
        break;
    case 13:
        LetInProcess=ass.LetterR3Mod[13];
        break;
    case 14:
        LetInProcess=ass.LetterR3Mod[14];
        break;
    case 15:
        LetInProcess=ass.LetterR3Mod[15];
        break;
    case 16:
        LetInProcess=ass.LetterR3Mod[16];
        break;
    case 17:
        LetInProcess=ass.LetterR3Mod[17];
        break;
    case 18:
        LetInProcess=ass.LetterR3Mod[18];
        break;
    case 19:
        LetInProcess=ass.LetterR3Mod[19];
        break;
    case 20:
        LetInProcess=ass.LetterR3Mod[20];
        break;
    case 21:
        LetInProcess=ass.LetterR3Mod[21];
        break;
    case 22:
        LetInProcess=ass.LetterR3Mod[22];
        break;
    case 23:
        LetInProcess=ass.LetterR3Mod[23];
        break;
    case 24:
        LetInProcess=ass.LetterR3Mod[24];
        break;
    case 25:
        LetInProcess=ass.LetterR3Mod[25];
        break;
    default:
        break;
    }
    qDebug() << "Rotor3 = " << LetInProcess;
}

void MainWindow::Reflector()
{
    /*Start_Letter_Ref = LetInProcess - ui->ComboBox_Start_R3->currentIndex() - ui->ComboBox_Set_R3->currentIndex();
    if (Start_Letter_Ref < 0)
        Start_Letter_Ref += 26;
    if (Start_Letter_Ref < 0)
        Start_Letter_Ref += 26;*/
    ref.F_reflector(PosR1,PosR2,PosR3,LetInProcess,ui->ComboBox_Start_R1->currentIndex(),ui->ComboBox_Start_R2->currentIndex(),
                    ui->ComboBox_Start_R3->currentIndex(),ui->ComboBox_Set_R1->currentIndex(),ui->ComboBox_Set_R2->currentIndex(),ui->ComboBox_Set_R3->currentIndex());
    qDebug() << "Start Letter Ref = " << ref.StartRef;
    switch (ref.StartRef) {
    case 0:
        LetInProcess=LetterRef[0];
        break;
    case 1:
        LetInProcess=LetterRef[1];
        break;
    case 2:
        LetInProcess=LetterRef[2];
        break;
    case 3:
        LetInProcess=LetterRef[3];
        break;
    case 4:
        LetInProcess=LetterRef[4];
        break;
    case 5:
        LetInProcess=LetterRef[5];
        break;
    case 6:
        LetInProcess=LetterRef[6];
        break;
    case 7:
        LetInProcess=LetterRef[7];
        break;
    case 8:
        LetInProcess=LetterRef[8];
        break;
    case 9:
        LetInProcess=LetterRef[9];
        break;
    case 10:
        LetInProcess=LetterRef[10];
        break;
    case 11:
        LetInProcess=LetterRef[11];
        break;
    case 12:
        LetInProcess=LetterRef[12];
        break;
    case 13:
        LetInProcess=LetterRef[13];
        break;
    case 14:
        LetInProcess=LetterRef[14];
        break;
    case 15:
        LetInProcess=LetterRef[15];
        break;
    case 16:
        LetInProcess=LetterRef[16];
        break;
    case 17:
        LetInProcess=LetterRef[17];
        break;
    case 18:
        LetInProcess=LetterRef[18];
        break;
    case 19:
        LetInProcess=LetterRef[19];
        break;
    case 20:
        LetInProcess=LetterRef[20];
        break;
    case 21:
        LetInProcess=LetterRef[21];
        break;
    case 22:
        LetInProcess=LetterRef[22];
        break;
    case 23:
        LetInProcess=LetterRef[23];
        break;
    case 24:
        LetInProcess=LetterRef[24];
        break;
    case 25:
        LetInProcess=LetterRef[25];
        break;
    default:
        break;
    }
    qDebug() << "Ref = " << LetInProcess;
}

void MainWindow::Rotor3_Back()
{
    /*if((LetInProcess + ui->ComboBox_Start_R3->currentIndex())<26)
        Start_Letter_Back1 = LetInProcess + ui->ComboBox_Start_R3->currentIndex();
    else
        Start_Letter_Back1 = (LetInProcess + ui->ComboBox_Start_R3->currentIndex()) - 26;
    if((Start_Letter_Back1 + ui->ComboBox_Set_R3->currentIndex())<26)
        Start_Letter_Back1 += ui->ComboBox_Set_R3->currentIndex();
    else
        Start_Letter_Back1 = (Start_Letter_Back1 + ui->ComboBox_Set_R3->currentIndex()) -26;*/
    rot3Bck.F_rotor3_Bck_1(PosR1,PosR2,PosR3,LetInProcess,ui->ComboBox_Start_R1->currentIndex(),ui->ComboBox_Start_R2->currentIndex(),
                           ui->ComboBox_Start_R3->currentIndex(),ui->ComboBox_Set_R3->currentIndex());
    qDebug() << "Start Letter Rotor3_Back = " << rot3Bck.StartR3Bck;
    switch (rot3Bck.StartR3Bck) {
    case 0:
        LetInProcess=LetterBack1Mod[0];
        break;
    case 1:
        LetInProcess=LetterBack1Mod[1];
        break;
    case 2:
        LetInProcess=LetterBack1Mod[2];
        break;
    case 3:
        LetInProcess=LetterBack1Mod[3];
        break;
    case 4:
        LetInProcess=LetterBack1Mod[4];
        break;
    case 5:
        LetInProcess=LetterBack1Mod[5];
        break;
    case 6:
        LetInProcess=LetterBack1Mod[6];
        break;
    case 7:
        LetInProcess=LetterBack1Mod[7];
        break;
    case 8:
        LetInProcess=LetterBack1Mod[8];
        break;
    case 9:
        LetInProcess=LetterBack1Mod[9];
        break;
    case 10:
        LetInProcess=LetterBack1Mod[10];
        break;
    case 11:
        LetInProcess=LetterBack1Mod[11];
        break;
    case 12:
        LetInProcess=LetterBack1Mod[12];
        break;
    case 13:
        LetInProcess=LetterBack1Mod[13];
        break;
    case 14:
        LetInProcess=LetterBack1Mod[14];
        break;
    case 15:
        LetInProcess=LetterBack1Mod[15];
        break;
    case 16:
        LetInProcess=LetterBack1Mod[16];
        break;
    case 17:
        LetInProcess=LetterBack1Mod[17];
        break;
    case 18:
        LetInProcess=LetterBack1Mod[18];
        break;
    case 19:
        LetInProcess=LetterBack1Mod[19];
        break;
    case 20:
        LetInProcess=LetterBack1Mod[20];
        break;
    case 21:
        LetInProcess=LetterBack1Mod[21];
        break;
    case 22:
        LetInProcess=LetterBack1Mod[22];
        break;
    case 23:
        LetInProcess=LetterBack1Mod[23];
        break;
    case 24:
        LetInProcess=LetterBack1Mod[24];
        break;
    case 25:
        LetInProcess=LetterBack1Mod[25];
        break;
    default:
        break;
    }
    qDebug() << "Rotor3Back = " << LetInProcess;
    LetInProcess = rot3Bck.F_rotor3_Bck_2(PosR3,LetInProcess,ui->ComboBox_Set_R3->currentIndex(),ui->ComboBox_Start_R3->currentIndex());
    qDebug() << "Rotor3Back_2 = " << LetInProcess;
    /*if((LetInProcess - ui->ComboBox_Set_R3->currentIndex()) >= 0)
        LetInProcess = LetInProcess - ui->ComboBox_Set_R3->currentIndex();
    else
        LetInProcess = (LetInProcess - ui->ComboBox_Set_R3->currentIndex()) + 26;
    qDebug() << "Rotor3Back = " << LetInProcess;*/
}

void MainWindow::Rotor2_Back()
{
    /*if((LetInProcess + ui->ComboBox_Start_R2->currentIndex())<26)
        Start_Letter_Back2 = LetInProcess + ui->ComboBox_Start_R2->currentIndex();
    else
        Start_Letter_Back2 = (LetInProcess + ui->ComboBox_Start_R2->currentIndex()) - 26;
    if((Start_Letter_Back2 + ui->ComboBox_Set_R2->currentIndex())<26)
        Start_Letter_Back2 += ui->ComboBox_Set_R2->currentIndex();
    else
        Start_Letter_Back2 = (Start_Letter_Back2 + ui->ComboBox_Set_R2->currentIndex()) -26;
    if((Start_Letter_Back2 - ui->ComboBox_Start_R3->currentIndex())>=0)
        Start_Letter_Back2 -= ui->ComboBox_Start_R3->currentIndex();
    else
        Start_Letter_Back2 = (Start_Letter_Back2 - ui->ComboBox_Start_R3->currentIndex()) +26;*/
    rot2Bck.F_rotor2_bck_1(PosR1,PosR2,PosR3,LetInProcess,ui->ComboBox_Start_R1->currentIndex(),ui->ComboBox_Start_R2->currentIndex(),
                           ui->ComboBox_Start_R3->currentIndex(),ui->ComboBox_Set_R2->currentIndex());
    qDebug() << "Start Letter Rotor2_Back = " << rot2Bck.StartR2Bck;
    switch (rot2Bck.StartR2Bck) {
    case 0:
        LetInProcess=LetterBack2Mod[0];
        break;
    case 1:
        LetInProcess=LetterBack2Mod[1];
        break;
    case 2:
        LetInProcess=LetterBack2Mod[2];
        break;
    case 3:
        LetInProcess=LetterBack2Mod[3];
        break;
    case 4:
        LetInProcess=LetterBack2Mod[4];
        break;
    case 5:
        LetInProcess=LetterBack2Mod[5];
        break;
    case 6:
        LetInProcess=LetterBack2Mod[6];
        break;
    case 7:
        LetInProcess=LetterBack2Mod[7];
        break;
    case 8:
        LetInProcess=LetterBack2Mod[8];
        break;
    case 9:
        LetInProcess=LetterBack2Mod[9];
        break;
    case 10:
        LetInProcess=LetterBack2Mod[10];
        break;
    case 11:
        LetInProcess=LetterBack2Mod[11];
        break;
    case 12:
        LetInProcess=LetterBack2Mod[12];
        break;
    case 13:
        LetInProcess=LetterBack2Mod[13];
        break;
    case 14:
        LetInProcess=LetterBack2Mod[14];
        break;
    case 15:
        LetInProcess=LetterBack2Mod[15];
        break;
    case 16:
        LetInProcess=LetterBack2Mod[16];
        break;
    case 17:
        LetInProcess=LetterBack2Mod[17];
        break;
    case 18:
        LetInProcess=LetterBack2Mod[18];
        break;
    case 19:
        LetInProcess=LetterBack2Mod[19];
        break;
    case 20:
        LetInProcess=LetterBack2Mod[20];
        break;
    case 21:
        LetInProcess=LetterBack2Mod[21];
        break;
    case 22:
        LetInProcess=LetterBack2Mod[22];
        break;
    case 23:
        LetInProcess=LetterBack2Mod[23];
        break;
    case 24:
        LetInProcess=LetterBack2Mod[24];
        break;
    case 25:
        LetInProcess=LetterBack2Mod[25];
        break;
    default:
        break;
    }
    qDebug() << "Rotor2Back = " << LetInProcess;
    LetInProcess = rot2Bck.F_rotor2_bck_2(PosR2,LetInProcess,ui->ComboBox_Set_R2->currentIndex(),ui->ComboBox_Start_R2->currentIndex());
    qDebug() << "Rotor2Back_2 = " << LetInProcess;

    /*if((LetInProcess - ui->ComboBox_Set_R2->currentIndex()) >= 0)
        LetInProcess = LetInProcess - ui->ComboBox_Set_R2->currentIndex();
    else
        LetInProcess = (LetInProcess - ui->ComboBox_Set_R2->currentIndex()) + 26;
    qDebug() << "Rotor2Back = " << LetInProcess;*/
}

void MainWindow::Rotor1_Back()
{
    /*if((LetInProcess + ui->ComboBox_Start_R1->currentIndex())<26)
        Start_Letter_Back3 = LetInProcess + ui->ComboBox_Start_R1->currentIndex();
    else
        Start_Letter_Back3 = (LetInProcess + ui->ComboBox_Start_R1->currentIndex()) - 26;
    if((Start_Letter_Back3 + ui->ComboBox_Set_R1->currentIndex())<26)
        Start_Letter_Back3 += ui->ComboBox_Set_R1->currentIndex();
    else
        Start_Letter_Back3 = (Start_Letter_Back3 + ui->ComboBox_Set_R1->currentIndex()) -26;
    if((Start_Letter_Back3- ui->ComboBox_Start_R2->currentIndex())>=0)
        Start_Letter_Back3 -= ui->ComboBox_Start_R2->currentIndex();
    else
        Start_Letter_Back3 = (Start_Letter_Back3 - ui->ComboBox_Start_R2->currentIndex()) +26;*/
    rot1Bck.F_rotor1_bck_1(PosR1,PosR2,PosR3,LetInProcess,ui->ComboBox_Start_R1->currentIndex(),ui->ComboBox_Start_R2->currentIndex(),
                           ui->ComboBox_Start_R3->currentIndex(),ui->ComboBox_Set_R1->currentIndex());
    qDebug() << "Start Letter Rotor1_Back = " << rot1Bck.StartR1Bck;
    switch (rot1Bck.StartR1Bck) {
    case 0:
        LetInProcess=LetterBack3Mod[0];
        break;
    case 1:
        LetInProcess=LetterBack3Mod[1];
        break;
    case 2:
        LetInProcess=LetterBack3Mod[2];
        break;
    case 3:
        LetInProcess=LetterBack3Mod[3];
        break;
    case 4:
        LetInProcess=LetterBack3Mod[4];
        break;
    case 5:
        LetInProcess=LetterBack3Mod[5];
        break;
    case 6:
        LetInProcess=LetterBack3Mod[6];
        break;
    case 7:
        LetInProcess=LetterBack3Mod[7];
        break;
    case 8:
        LetInProcess=LetterBack3Mod[8];
        break;
    case 9:
        LetInProcess=LetterBack3Mod[9];
        break;
    case 10:
        LetInProcess=LetterBack3Mod[10];
        break;
    case 11:
        LetInProcess=LetterBack3Mod[11];
        break;
    case 12:
        LetInProcess=LetterBack3Mod[12];
        break;
    case 13:
        LetInProcess=LetterBack3Mod[13];
        break;
    case 14:
        LetInProcess=LetterBack3Mod[14];
        break;
    case 15:
        LetInProcess=LetterBack3Mod[15];
        break;
    case 16:
        LetInProcess=LetterBack3Mod[16];
        break;
    case 17:
        LetInProcess=LetterBack3Mod[17];
        break;
    case 18:
        LetInProcess=LetterBack3Mod[18];
        break;
    case 19:
        LetInProcess=LetterBack3Mod[19];
        break;
    case 20:
        LetInProcess=LetterBack3Mod[20];
        break;
    case 21:
        LetInProcess=LetterBack3Mod[21];
        break;
    case 22:
        LetInProcess=LetterBack3Mod[22];
        break;
    case 23:
        LetInProcess=LetterBack3Mod[23];
        break;
    case 24:
        LetInProcess=LetterBack3Mod[24];
        break;
    case 25:
        LetInProcess=LetterBack3Mod[25];
        break;
    default:
        break;
    }
    qDebug() << "Rotor1Back = " << LetInProcess;
    LetInProcess = rot1Bck.F_rotor1_bck_2(PosR1,LetInProcess,ui->ComboBox_Set_R1->currentIndex(),ui->ComboBox_Start_R1->currentIndex()); qDebug() << "Rotor1Back_2 = " << LetInProcess;
    /*if((LetInProcess - ui->ComboBox_Set_R1->currentIndex()) >= 0)
        LetInProcess = LetInProcess - ui->ComboBox_Set_R1->currentIndex();
    else
        LetInProcess = (LetInProcess - ui->ComboBox_Set_R1->currentIndex()) + 26;
    qDebug() << "Rotor1Back = " << LetInProcess << "----------------------------------------------------";*/
}

void MainWindow::ConvertAtEnd()
{
    switch (LetInProcess) {
    case 0:
        LetFinale = "A";
        break;
    case 1:
        LetFinale = "B";
        break;
    case 2:
        LetFinale = "C";
        break;
    case 3:
        LetFinale = "D";
        break;
    case 4:
        LetFinale = "E";
        break;
    case 5:
        LetFinale = "F";
        break;
    case 6:
        LetFinale = "G";
        break;
    case 7:
        LetFinale = "H";
        break;
    case 8:
        LetFinale = "I";
        break;
    case 9:
        LetFinale = "J";
        break;
    case 10:
        LetFinale = "K";
        break;
    case 11:
        LetFinale = "L";
        break;
    case 12:
        LetFinale = "M";
        break;
    case 13:
        LetFinale = "N";
        break;
    case 14:
        LetFinale = "O";
        break;
    case 15:
        LetFinale = "P";
        break;
    case 16:
        LetFinale = "Q";
        break;
    case 17:
        LetFinale = "R";
        break;
    case 18:
        LetFinale = "S";
        break;
    case 19:
        LetFinale = "T";
        break;
    case 20:
        LetFinale = "U";
        break;
    case 21:
        LetFinale = "V";
        break;
    case 22:
        LetFinale = "W";
        break;
    case 23:
        LetFinale = "X";
        break;
    case 24:
        LetFinale = "Y";
        break;
    case 25:
        LetFinale = "Z";
        break;
    default:
        break;
    }
}

void MainWindow::ChangeRotorAtEnd()
{
    if (PosR1 == 1)
    {
        if((ui->ComboBox_Start_R1->currentIndex() + 1) < 26)
            ui->ComboBox_Start_R1->setCurrentIndex(ui->ComboBox_Start_R1->currentIndex() + 1);
        else
            ui->ComboBox_Start_R1->setCurrentIndex((ui->ComboBox_Start_R1->currentIndex() + 1) - 26);
        m++;
    }
    else
    {
        if(PosR2 == 1)
        {
            if((ui->ComboBox_Start_R2->currentIndex() + 1) < 26)
                ui->ComboBox_Start_R2->setCurrentIndex(ui->ComboBox_Start_R2->currentIndex() + 1);
            else
                ui->ComboBox_Start_R2->setCurrentIndex((ui->ComboBox_Start_R2->currentIndex() + 1) - 26);
            m++;
        }
        else
        {
            if(PosR3 == 1)
            {
                if((ui->ComboBox_Start_R3->currentIndex() + 1) < 26)
                    ui->ComboBox_Start_R3->setCurrentIndex(ui->ComboBox_Start_R3->currentIndex() + 1);
                else
                    ui->ComboBox_Start_R3->setCurrentIndex((ui->ComboBox_Start_R3->currentIndex() + 1) - 26);
                m++;
            }
        }
    }
    if(m==26)
    {
        if (PosR1 == 2)
        {
            if((ui->ComboBox_Start_R1->currentIndex() + 1) < 26)
                ui->ComboBox_Start_R1->setCurrentIndex(ui->ComboBox_Start_R1->currentIndex() + 1);
            else
                ui->ComboBox_Start_R1->setCurrentIndex((ui->ComboBox_Start_R1->currentIndex() + 1) - 26);
            m=0;
            q++;
        }
        else
        {
            if(PosR2 == 2)
            {
                if((ui->ComboBox_Start_R2->currentIndex() + 1) < 26)
                    ui->ComboBox_Start_R2->setCurrentIndex(ui->ComboBox_Start_R2->currentIndex() + 1);
                else
                    ui->ComboBox_Start_R2->setCurrentIndex((ui->ComboBox_Start_R2->currentIndex() + 1) - 26);
                m=0;
                q++;
            }
            else
            {
                if(PosR3 == 2)
                {
                    if((ui->ComboBox_Start_R3->currentIndex() + 1) < 26)
                        ui->ComboBox_Start_R3->setCurrentIndex(ui->ComboBox_Start_R3->currentIndex() + 1);
                    else
                        ui->ComboBox_Start_R3->setCurrentIndex((ui->ComboBox_Start_R3->currentIndex() + 1) - 26);
                    m=0;
                    q++;
                }
            }
        }
    }
    if(q==26)
    {
        if (PosR1 == 3)
        {
            if((ui->ComboBox_Start_R1->currentIndex() + 1) < 26)
                ui->ComboBox_Start_R1->setCurrentIndex(ui->ComboBox_Start_R1->currentIndex() + 1);
            else
                ui->ComboBox_Start_R1->setCurrentIndex((ui->ComboBox_Start_R1->currentIndex() + 1) - 26);
            q=0;
        }
        else
        {
            if(PosR2 == 3)
            {
                if((ui->ComboBox_Start_R2->currentIndex() + 1) < 26)
                    ui->ComboBox_Start_R2->setCurrentIndex(ui->ComboBox_Start_R2->currentIndex() + 1);
                else
                    ui->ComboBox_Start_R2->setCurrentIndex((ui->ComboBox_Start_R2->currentIndex() + 1) - 26);
                q=0;
            }
            else
            {
                if(PosR3 == 3)
                {
                    if((ui->ComboBox_Start_R3->currentIndex() + 1) < 26)
                        ui->ComboBox_Start_R3->setCurrentIndex(ui->ComboBox_Start_R3->currentIndex() + 1);
                    else
                        ui->ComboBox_Start_R3->setCurrentIndex((ui->ComboBox_Start_R3->currentIndex() + 1) - 26);
                    q=0;
                }
            }
        }
    }

    /*if((ui->ComboBox_Start_R1->currentIndex() + 1) < 26)
        ui->ComboBox_Start_R1->setCurrentIndex(ui->ComboBox_Start_R1->currentIndex() + 1);
    else
        ui->ComboBox_Start_R1->setCurrentIndex((ui->ComboBox_Start_R1->currentIndex() + 1) - 26);
    m++;
    if(m==26)
    {
        if((ui->ComboBox_Start_R2->currentIndex() + 1) < 26)
            ui->ComboBox_Start_R2->setCurrentIndex(ui->ComboBox_Start_R2->currentIndex() + 1);
        else
            ui->ComboBox_Start_R2->setCurrentIndex((ui->ComboBox_Start_R2->currentIndex() + 1) - 26);
        m=0;
        q++;
    }
    if(q==26)
    {
        if((ui->ComboBox_Start_R3->currentIndex() + 1) < 26)
            ui->ComboBox_Start_R3->setCurrentIndex(ui->ComboBox_Start_R3->currentIndex() + 1);
        else
            ui->ComboBox_Start_R3->setCurrentIndex((ui->ComboBox_Start_R3->currentIndex() + 1) - 26);
        q=0;
    }*/

}

 void MainWindow::ENIGMA()
{
    Pos_R();
    ChangeRotorAtEnd();
    LetInProcess = plug.F_PlugBoard(ui->comboBox_PB_1_1->currentIndex(),ui->comboBox_PB_1_2->currentIndex()
                              ,ui->comboBox_PB_2_1->currentIndex(),ui->comboBox_PB_2_2->currentIndex()
                              ,ui->comboBox_PB_3_1->currentIndex(),ui->comboBox_PB_3_2->currentIndex()
                              ,ui->comboBox_PB_4_1->currentIndex(),ui->comboBox_PB_4_2->currentIndex()
                              ,ui->comboBox_PB_5_1->currentIndex(),ui->comboBox_PB_5_2->currentIndex()
                              ,Letter);
    qDebug() << "Letter after PlugBoard " << LetInProcess;
    ass.F_Assign(ui->ComboBox_Set_R1->currentIndex(), ui->ComboBox_Set_R2->currentIndex(), ui->ComboBox_Set_R3->currentIndex());
                                                                                        //AssignLetterR1();

    if(PosR1 == 1 )
    {
        Rotor1_2();
        if((PosR2 == 2) && (PosR3 == 3))
        {
            Rotor2_2();
            Rotor3_2();
            Reflector();
            Rotor3_Back();
            Rotor2_Back();
        }
        if((PosR3 == 2) && (PosR2 == 3))
        {
            Rotor3_2();
            Rotor2_2();
            Reflector();
            Rotor2_Back();
            Rotor3_Back();
        }
        Rotor1_Back();
    }
    if(PosR2 == 1 )
    {
        Rotor2_2();
        if((PosR1 == 2) && (PosR3 == 3))
        {
            Rotor1_2();
            Rotor3_2();
            Reflector();
            Rotor3_Back();
            Rotor1_Back();
        }
        if((PosR3 == 2) && (PosR1 == 3))
        {
            Rotor3_2();
            Rotor1_2();
            Reflector();
            Rotor1_Back();
            Rotor3_Back();
        }
        Rotor2_Back();
    }
    if(PosR3 == 1 )
    {
        Rotor3_2();
        if((PosR1 == 2) && (PosR2 == 3))
        {
            Rotor1_2();
            Rotor2_2();
            Reflector();
            Rotor2_Back();
            Rotor1_Back();
        }
        if((PosR2 == 2) && (PosR1 == 3))
        {
            Rotor2_2();
            Rotor1_2();
            Reflector();
            Rotor1_Back();
            Rotor2_Back();
        }
        Rotor3_Back();
    }
    /*
    Rotor1_2();
                                                                             //AssignLetterR2();
    Rotor2_2();
                                                                                    //AssignLetterR3();
    Rotor3_2();

    Reflector();

    Rotor3_Back();

    Rotor2_Back();

    Rotor1_Back();
*/
    qDebug() << "let in process  " << LetInProcess << " letter  " << Letter;
    LetInProcess = back_plug.F_back_plugboard(ui->comboBox_PB_1_1->currentIndex(),ui->comboBox_PB_1_2->currentIndex()
                               ,ui->comboBox_PB_2_1->currentIndex(),ui->comboBox_PB_2_2->currentIndex()
                               ,ui->comboBox_PB_3_1->currentIndex(),ui->comboBox_PB_3_2->currentIndex()
                               ,ui->comboBox_PB_4_1->currentIndex(),ui->comboBox_PB_4_2->currentIndex()
                               ,ui->comboBox_PB_5_1->currentIndex(),ui->comboBox_PB_5_2->currentIndex()
                               ,LetInProcess);
    ConvertAtEnd();
}

void MainWindow::on_Btn_A_clicked()
{
    Letter = 0;
    ENIGMA();
    ui->LIneEdit_Result->setText(ui->LIneEdit_Result->text()+LetFinale);
}

void MainWindow::on_Btn_Q_clicked()
{
    Letter = 16;
    ENIGMA();
    ui->LIneEdit_Result->setText(ui->LIneEdit_Result->text()+LetFinale);
}

void MainWindow::on_Btn_W_clicked()
{
    Letter = 22;
    ENIGMA();
    ui->LIneEdit_Result->setText(ui->LIneEdit_Result->text()+LetFinale);
}

void MainWindow::on_Btn_E_clicked()
{
    Letter = 4;
    ENIGMA();
    ui->LIneEdit_Result->setText(ui->LIneEdit_Result->text()+LetFinale);
}

void MainWindow::on_Btn_R_clicked()
{
    Letter = 17;
    ENIGMA();
    ui->LIneEdit_Result->setText(ui->LIneEdit_Result->text()+LetFinale);
}

void MainWindow::on_Btn_T_clicked()
{
    Letter = 19;
    ENIGMA();
    ui->LIneEdit_Result->setText(ui->LIneEdit_Result->text()+LetFinale);
}

void MainWindow::on_Btn_Z_clicked()
{
    Letter = 25;
    ENIGMA();
    ui->LIneEdit_Result->setText(ui->LIneEdit_Result->text()+LetFinale);
}

void MainWindow::on_Btn_U_clicked()
{
    Letter = 20;
    ENIGMA();
    ui->LIneEdit_Result->setText(ui->LIneEdit_Result->text()+LetFinale);
}

void MainWindow::on_Btn_I_clicked()
{
    Letter = 8;
    ENIGMA();
    ui->LIneEdit_Result->setText(ui->LIneEdit_Result->text()+LetFinale);
}

void MainWindow::on_Btn_O_clicked()
{
    Letter = 14;
    ENIGMA();
    ui->LIneEdit_Result->setText(ui->LIneEdit_Result->text()+LetFinale);
}

void MainWindow::on_Btn_S_clicked()
{
    Letter = 18;
    ENIGMA();
    ui->LIneEdit_Result->setText(ui->LIneEdit_Result->text()+LetFinale);
}

void MainWindow::on_Btn_D_clicked()
{
    Letter = 3;
    ENIGMA();
    ui->LIneEdit_Result->setText(ui->LIneEdit_Result->text()+LetFinale);
}

void MainWindow::on_Btn_F_clicked()
{
    Letter = 5;
    ENIGMA();
    ui->LIneEdit_Result->setText(ui->LIneEdit_Result->text()+LetFinale);
}

void MainWindow::on_Btn_G_clicked()
{
    Letter = 6;
    ENIGMA();
    ui->LIneEdit_Result->setText(ui->LIneEdit_Result->text()+LetFinale);
}

void MainWindow::on_Btn_H_clicked()
{
    Letter = 7;
    ENIGMA();
    ui->LIneEdit_Result->setText(ui->LIneEdit_Result->text()+LetFinale);
}

void MainWindow::on_Btn_J_clicked()
{
    Letter = 9;
    ENIGMA();
    ui->LIneEdit_Result->setText(ui->LIneEdit_Result->text()+LetFinale);
}

void MainWindow::on_Btn_K_clicked()
{
    Letter = 10;
    ENIGMA();
    ui->LIneEdit_Result->setText(ui->LIneEdit_Result->text()+LetFinale);
}

void MainWindow::on_Btn_P_clicked()
{
    Letter = 15;
    ENIGMA();
    ui->LIneEdit_Result->setText(ui->LIneEdit_Result->text()+LetFinale);
}

void MainWindow::on_Btn_Y_clicked()
{
    Letter = 24;
    ENIGMA();
    ui->LIneEdit_Result->setText(ui->LIneEdit_Result->text()+LetFinale);
}

void MainWindow::on_Btn_X_clicked()
{
    Letter = 23;
    ENIGMA();
    ui->LIneEdit_Result->setText(ui->LIneEdit_Result->text()+LetFinale);
}

void MainWindow::on_Btn_C_clicked()
{
    Letter = 2;
    ENIGMA();
    ui->LIneEdit_Result->setText(ui->LIneEdit_Result->text()+LetFinale);
}

void MainWindow::on_Btn_V_clicked()
{
    Letter = 21;
    ENIGMA();
    ui->LIneEdit_Result->setText(ui->LIneEdit_Result->text()+LetFinale);
}

void MainWindow::on_Btn_B_clicked()
{
    Letter = 1;
    ENIGMA();
    ui->LIneEdit_Result->setText(ui->LIneEdit_Result->text()+LetFinale);
}

void MainWindow::on_Btn_N_clicked()
{
    Letter = 13;
    ENIGMA();
    ui->LIneEdit_Result->setText(ui->LIneEdit_Result->text()+LetFinale);
}

void MainWindow::on_Btn_M_clicked()
{
    Letter = 12;
    ENIGMA();
    ui->LIneEdit_Result->setText(ui->LIneEdit_Result->text()+LetFinale);
}

void MainWindow::on_Btn_L_clicked()
{
    Letter = 11;
    ENIGMA();
    ui->LIneEdit_Result->setText(ui->LIneEdit_Result->text()+LetFinale);
}

void MainWindow::on_Btn_Reset_clicked()
{
    m = q = 0;
    ui->ComboBox_R1->setCurrentIndex(0);
    ui->ComboBox_R2->setCurrentIndex(0);
    ui->ComboBox_R3->setCurrentIndex(0);
    ui->ComboBox_Set_R1->setCurrentIndex(0);
    ui->ComboBox_Set_R2->setCurrentIndex(0);
    ui->ComboBox_Set_R3->setCurrentIndex(0);
    ui->ComboBox_Start_R1->setCurrentIndex(0);
    ui->ComboBox_Start_R2->setCurrentIndex(0);
    ui->ComboBox_Start_R3->setCurrentIndex(0);
    ui->comboBox_PB_1_1->setCurrentIndex(26);
    ui->comboBox_PB_1_2->setCurrentIndex(26);
    ui->comboBox_PB_2_1->setCurrentIndex(26);
    ui->comboBox_PB_2_2->setCurrentIndex(26);
    ui->comboBox_PB_3_1->setCurrentIndex(26);
    ui->comboBox_PB_3_2->setCurrentIndex(26);
    ui->comboBox_PB_4_1->setCurrentIndex(26);
    ui->comboBox_PB_4_2->setCurrentIndex(26);
    ui->comboBox_PB_5_1->setCurrentIndex(26);
    ui->comboBox_PB_5_2->setCurrentIndex(26);
    ui->LIneEdit_Result->setText("");
    ui->ComboBox_R1->setEnabled(true);
    ui->ComboBox_R2->setEnabled(true);
    ui->ComboBox_R3->setEnabled(true);
    ui->ComboBox_Set_R1->setEnabled(true);
    ui->ComboBox_Set_R2->setEnabled(true);
    ui->ComboBox_Set_R3->setEnabled(true);
    ui->ComboBox_Start_R1->setEnabled(true);
    ui->ComboBox_Start_R2->setEnabled(true);
    ui->ComboBox_Start_R3->setEnabled(true);
    ui->comboBox_PB_1_1->setEnabled(true);
    ui->comboBox_PB_1_2->setEnabled(true);
    ui->comboBox_PB_2_1->setEnabled(true);
    ui->comboBox_PB_2_2->setEnabled(true);
    ui->comboBox_PB_3_1->setEnabled(true);
    ui->comboBox_PB_3_2->setEnabled(true);
    ui->comboBox_PB_4_1->setEnabled(true);
    ui->comboBox_PB_4_2->setEnabled(true);
    ui->comboBox_PB_5_1->setEnabled(true);
    ui->comboBox_PB_5_2->setEnabled(true);
    ui->LIneEdit_Result_2->setText("");
    ui->Btn_End_DeCr->setEnabled(true);
    ui->Btn_End_Cr->setEnabled(true);
    ui->Btn_A->setEnabled(false);
    ui->Btn_B->setEnabled(false);
    ui->Btn_C->setEnabled(false);
    ui->Btn_D->setEnabled(false);
    ui->Btn_E->setEnabled(false);
    ui->Btn_F->setEnabled(false);
    ui->Btn_G->setEnabled(false);
    ui->Btn_H->setEnabled(false);
    ui->Btn_I->setEnabled(false);
    ui->Btn_J->setEnabled(false);
    ui->Btn_K->setEnabled(false);
    ui->Btn_L->setEnabled(false);
    ui->Btn_M->setEnabled(false);
    ui->Btn_N->setEnabled(false);
    ui->Btn_O->setEnabled(false);
    ui->Btn_P->setEnabled(false);
    ui->Btn_Q->setEnabled(false);
    ui->Btn_R->setEnabled(false);
    ui->Btn_S->setEnabled(false);
    ui->Btn_T->setEnabled(false);
    ui->Btn_U->setEnabled(false);
    ui->Btn_V->setEnabled(false);
    ui->Btn_W->setEnabled(false);
    ui->Btn_X->setEnabled(false);
    ui->Btn_Y->setEnabled(false);
    ui->Btn_Z->setEnabled(false);
}

void MainWindow::on_Btn_End_Cr_clicked()
{
    if((cont.F_control_PosR(ui->ComboBox_R1->currentIndex(),ui->ComboBox_R2->currentIndex(),ui->ComboBox_R3->currentIndex()) == 0) &&
        (cont.F_control_Plug(ui->comboBox_PB_1_1->currentIndex(),ui->comboBox_PB_1_2->currentIndex()
        ,ui->comboBox_PB_2_1->currentIndex(),ui->comboBox_PB_2_2->currentIndex()
        ,ui->comboBox_PB_3_1->currentIndex(),ui->comboBox_PB_3_2->currentIndex()
        ,ui->comboBox_PB_4_1->currentIndex(),ui->comboBox_PB_4_2->currentIndex()
        ,ui->comboBox_PB_5_1->currentIndex(),ui->comboBox_PB_5_2->currentIndex()) == 0))
    {
        m = q = 0;
        Str_r1 = ui->ComboBox_Start_R1->currentIndex();
        Str_r2 = ui->ComboBox_Start_R2->currentIndex();
        Str_r3 = ui->ComboBox_Start_R3->currentIndex();
        ui->ComboBox_R1->setEnabled(false);
        ui->ComboBox_R2->setEnabled(false);
        ui->ComboBox_R3->setEnabled(false);
        ui->ComboBox_Set_R1->setEnabled(false);
        ui->ComboBox_Set_R2->setEnabled(false);
        ui->ComboBox_Set_R3->setEnabled(false);
        ui->ComboBox_Start_R1->setEnabled(false);
        ui->ComboBox_Start_R2->setEnabled(false);
        ui->ComboBox_Start_R3->setEnabled(false);
        ui->comboBox_PB_1_1->setEnabled(false);
        ui->comboBox_PB_1_2->setEnabled(false);
        ui->comboBox_PB_2_1->setEnabled(false);
        ui->comboBox_PB_2_2->setEnabled(false);
        ui->comboBox_PB_3_1->setEnabled(false);
        ui->comboBox_PB_3_2->setEnabled(false);
        ui->comboBox_PB_4_1->setEnabled(false);
        ui->comboBox_PB_4_2->setEnabled(false);
        ui->comboBox_PB_5_1->setEnabled(false);
        ui->comboBox_PB_5_2->setEnabled(false);
        ui->Btn_End_DeCr->setEnabled(true);
        ui->Btn_A->setEnabled(true);
        ui->Btn_B->setEnabled(true);
        ui->Btn_C->setEnabled(true);
        ui->Btn_D->setEnabled(true);
        ui->Btn_E->setEnabled(true);
        ui->Btn_F->setEnabled(true);
        ui->Btn_G->setEnabled(true);
        ui->Btn_H->setEnabled(true);
        ui->Btn_I->setEnabled(true);
        ui->Btn_J->setEnabled(true);
        ui->Btn_K->setEnabled(true);
        ui->Btn_L->setEnabled(true);
        ui->Btn_M->setEnabled(true);
        ui->Btn_N->setEnabled(true);
        ui->Btn_O->setEnabled(true);
        ui->Btn_P->setEnabled(true);
        ui->Btn_Q->setEnabled(true);
        ui->Btn_R->setEnabled(true);
        ui->Btn_S->setEnabled(true);
        ui->Btn_T->setEnabled(true);
        ui->Btn_U->setEnabled(true);
        ui->Btn_V->setEnabled(true);
        ui->Btn_W->setEnabled(true);
        ui->Btn_X->setEnabled(true);
        ui->Btn_Y->setEnabled(true);
        ui->Btn_Z->setEnabled(true);
        ui->Btn_End_Cr->setEnabled(false);
    }
    else
    {
       QMessageBox messBox;
       messBox.setText("Error: Check Settings!");
       messBox.exec();
    }
}

void MainWindow::on_Btn_End_DeCr_clicked()
{
    m = q = 0;
    ui->ComboBox_Start_R1->setCurrentIndex(Str_r1);
    ui->ComboBox_Start_R2->setCurrentIndex(Str_r2);
    ui->ComboBox_Start_R3->setCurrentIndex(Str_r3);
    ui->LIneEdit_Result_2->setText(ui->LIneEdit_Result->text());
    ui->LIneEdit_Result->setText("");
    ui->Btn_End_DeCr->setEnabled(false);
}

void MainWindow::on_Btn_Save_clicked()
{
    QFile file("Enigma.txt");
    file.open(QIODevice::ReadOnly | QIODevice::WriteOnly | QIODevice::Text | QIODevice::Truncate);
    QTextStream txt(&file);
    txt << "ENIGMA";
    txt << "\n\n---------------------------------------------\n";
    txt << "Text:\n\n" << ui->LIneEdit_Result->text();
    txt << "\n\n---------------------------------------------\n";
    txt << "Rotor Positions:\n\nRotor I    " << ui->ComboBox_R1->currentIndex();
    txt << "\nRotor II   " << ui->ComboBox_R2->currentIndex();
    txt << "\nRotor III  " << ui->ComboBox_R3->currentIndex();
    txt << "\n\n---------------------------------------------\n";
    txt << "Rotor Settings:\n\nRotor I    " << ui->ComboBox_Set_R1->currentIndex();
    txt << "\nRotor II   " << ui->ComboBox_Set_R2->currentIndex();
    txt << "\nRotor III  " << ui->ComboBox_Set_R3->currentIndex();
    txt << "\n\n---------------------------------------------\n";
    txt << "Rotor Starting Letter:\n\nRotor I    " << ui->ComboBox_Start_R1->currentText();
    txt << "\nRotor II   " << ui->ComboBox_Start_R2->currentText();
    txt << "\nRotor III  " << ui->ComboBox_Start_R3->currentText();
    txt << "\n\n---------------------------------------------\n";
    txt << "Plugboard Settings:\n";
    txt << "\n" << ui->comboBox_PB_1_1->currentText() << " -> " <<ui->comboBox_PB_1_2->currentText();
    txt << "\n" << ui->comboBox_PB_2_1->currentText() << " -> " <<ui->comboBox_PB_2_2->currentText();
    txt << "\n" << ui->comboBox_PB_3_1->currentText() << " -> " <<ui->comboBox_PB_3_2->currentText();
    txt << "\n" << ui->comboBox_PB_4_1->currentText() << " -> " <<ui->comboBox_PB_4_2->currentText();
    txt << "\n" << ui->comboBox_PB_5_1->currentText() << " -> " <<ui->comboBox_PB_5_2->currentText();
    file.close();
}
