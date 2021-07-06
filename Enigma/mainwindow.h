#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QDebug>
#include "plugboard.h"
#include "assign.h"
#include "rotor1.h"
#include "rotor2.h"
#include "rotor3.h"
#include "reflector.h"
#include "rotor3_bck.h"
#include "rotor2_bck.h"
#include "rotor1_bck.h"
#include "back_plugboard.h"
#include "control.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    PlugBoard plug; Assign ass; Rotor1 rot1; rotor2 rot2; rotor3 rot3;
    reflector ref; rotor3_Bck rot3Bck; rotor2_bck rot2Bck; rotor1_bck rot1Bck; back_plugboard back_plug;
    control cont;
    int PosR1,PosR2,PosR3;
    int Letter;
    int LetInProcess;
    //int LetterR1[26] = {4,10,12,5,11,6,3,16,21,25,13,19,14,22,24,7,23,20,18,15,0,8,1,17,2,9};
    //int LetterR1Mod[26] = {4,10,12,5,11,6,3,16,21,25,13,19,14,22,24,7,23,20,18,15,0,8,1,17,2,9};
    int Start_Letter_R1;
    //int LetterR2[26]={0,9,3,10,18,8,17,20,23,1,11,7,22,19,12,2,16,6,25,13,15,24,5,21,14,4};
    //int LetterR2Mod[26]={0,9,3,10,18,8,17,20,23,1,11,7,22,19,12,2,16,6,25,13,15,24,5,21,14,4};
    int Start_Letter_R2;
    //int LetterR3[26]={1,3,5,7,9,11,2,15,17,19,23,21,25,13,24,4,8,22,6,0,10,12,20,18,16,14};
    //int LetterR3Mod[26]={1,3,5,7,9,11,2,15,17,19,23,21,25,13,24,4,8,22,6,0,10,12,20,18,16,14};
    int Start_Letter_R3;
    int LetterRef[26]={24,17,20,7,16,18,11,3,15,23,13,6,14,10,12,8,4,1,5,25,2,22,21,9,0,19};
    int Start_Letter_Ref;
    int LetterBack1Mod[26]={19,0,6,1,15,2,18,3,16,4,20,5,21,13,25,7,24,8,23,9,22,11,17,10,14,12};
    int Start_Letter_Back1;
    int LetterBack2Mod[26]={0,9,15,2,25,22,17,11,5,1,3,10,14,19,24,20,16,6,4,13,7,23,12,8,21,18};
    int Start_Letter_Back2;
    int LetterBack3Mod[26]={20,22,24,6,0,3,5,15,21,25,1,4,2,10,12,19,7,23,18,11,17,8,13,16,14,9};
    int Start_Letter_Back3;
    int m;
    int q;
    int Str_r1; int Str_r2; int Str_r3;
    QString LetFinale;
    ~MainWindow();

private slots:
    void on_Btn_A_clicked();
    void Pos_R();
    //void AssignLetterR1();
    void Rotor1_2();
    //void AssignLetterR2();
    void Rotor2_2();
    //void AssignLetterR3();
    void Rotor3_2();
    void Reflector();
    void Rotor3_Back();
    void Rotor2_Back();
    void Rotor1_Back();
    void ConvertAtEnd();
    void ChangeRotorAtEnd();
    void ENIGMA();
    void on_Btn_Q_clicked();
    void on_Btn_W_clicked();
    void on_Btn_E_clicked();
    void on_Btn_R_clicked();
    void on_Btn_T_clicked();
    void on_Btn_Z_clicked();
    void on_Btn_U_clicked();
    void on_Btn_I_clicked();
    void on_Btn_O_clicked();
    void on_Btn_S_clicked();
    void on_Btn_D_clicked();
    void on_Btn_F_clicked();
    void on_Btn_G_clicked();
    void on_Btn_H_clicked();
    void on_Btn_J_clicked();
    void on_Btn_K_clicked();
    void on_Btn_P_clicked();
    void on_Btn_Y_clicked();
    void on_Btn_X_clicked();
    void on_Btn_C_clicked();
    void on_Btn_V_clicked();
    void on_Btn_B_clicked();
    void on_Btn_N_clicked();
    void on_Btn_M_clicked();
    void on_Btn_L_clicked();

    void on_Btn_Reset_clicked();

    void on_Btn_End_Cr_clicked();

    void on_Btn_End_DeCr_clicked();

    void on_Btn_Save_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
