#ifndef MYVIEW_H
#define MYVIEW_H

#include"login.h"
#include <QGraphicsView>
class BoxGroup;
#include <phonon>
#include <QSqlDatabase>
#include <QtSql>
class MyView : public QGraphicsView
{
    Q_OBJECT
public:
    explicit MyView(QWidget *parent = 0);
    QSqlDatabase OpenDatabase();

protected:
    void keyPressEvent(QKeyEvent *event);

public slots:
    void startGame();
    void clearFullRows();
    void moveBox();
    void gameOver();

    void restartGame();
    void finishGame();
    void pauseGame();
    void returnGame();
    void aboutToFinish();

    void inputName();
    void saveScores();

    void loginSlots();

private:
    BoxGroup *boxGroup;
    BoxGroup *nextBoxGroup;
    QGraphicsLineItem *topLine;
    QGraphicsLineItem *bottomLine;
    QGraphicsLineItem *leftLine;
    QGraphicsLineItem *rightLine;
    qreal gameSpeed;
    QList<int> rows;
    void initView();
    void initGame();
    void updateScore(const int fullRowNum = 0);

    QGraphicsTextItem *gameScoreText;
    QGraphicsTextItem *gameLevelText;


    // 遮罩面板
    QGraphicsWidget *maskWidget;

    // 各种按钮
    QGraphicsWidget *startButton;
    QGraphicsWidget *finishButton;
    QGraphicsWidget *restartButton;
    QGraphicsWidget *pauseButton;
    QGraphicsWidget *optionButton;
    QGraphicsWidget *returnButton;
    QGraphicsWidget *exitButton;
    QGraphicsWidget *showMenuButton;
    QGraphicsWidget *yesButton;
    QGraphicsWidget *noButton;
    QGraphicsWidget *saveScoresButton;
    QGraphicsWidget *cancelButton;

    QGraphicsWidget *loginButton;

    // 各种文本
    QGraphicsTextItem *gameWelcomeText;
    QGraphicsTextItem *gamePausedText;
    QGraphicsTextItem *gameOverText;
    QGraphicsTextItem *saveScoresText;
    QGraphicsLineItem *lineText;
    // 背景音乐
    Phonon::MediaObject *backgroundMusic;
    Phonon::MediaObject *clearRowSound;

    login *w;

};

#endif // MYVIEW_H
