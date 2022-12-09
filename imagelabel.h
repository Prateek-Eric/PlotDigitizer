#ifndef IMAGELABEL_H
#define IMAGELABEL_H

#include <QLabel>
#include <QObject>
#include <QStatusBar>

class ImageLabel : public QLabel
{
public:
    ImageLabel();
    ImageLabel(QWidget* widget);
    bool setImage(QString path);
    void mouseMoveEvent(QMouseEvent *ev);
    void mousePressEvent(QMouseEvent *ev);
    void paintEvent(QPaintEvent *event);
    void setMiniLabel(QLabel *pMini);
    void setMainImageLabel(QLabel *pMini);
    void setStatusBar(QStatusBar *pstatusBar);
private:
    QPixmap m_image;
    QLabel* m_pImage;
    QLabel* m_pMini;
    QStatusBar* m_pstatusBar;

};

#endif // IMAGELABEL_H
