#include "imagelabel.h"
#include <QFile>
#include<QImageReader>
#include<QPainter>
#include<QMouseEvent>
#include<QDebug>
#include<QFile>

ImageLabel::ImageLabel()
{
    m_pMini = 0;
}

ImageLabel::ImageLabel(QWidget *w):QLabel(w)
{
    m_pMini = 0;
}

void ImageLabel::setMiniLabel(QLabel* pMini)
{
    if(pMini)
        m_pMini = pMini;
}

void ImageLabel::setMainImageLabel(QLabel* pImage)
{
    if(pImage)
        m_pImage = pImage;
}

void ImageLabel::setStatusBar(QStatusBar* pStatusBar)
{
    if (pStatusBar)
    {
        m_pstatusBar = pStatusBar;
    }
}

bool ImageLabel::setImage(QString path)
{
    QFile imageFile(path);
    if(imageFile.exists())
    {
        QImageReader reader(path);
        reader.autoDetectImageFormat();
        reader.autoTransform();
        m_image = QPixmap::fromImageReader(&reader);
        //this->setPixmap(m_image);
        return true;
    }

    return false;
}

void ImageLabel::mousePressEvent(QMouseEvent *ev)
{
    //ui->statusbar->showMessage("Mouse press || X:" + QString::number(event->x()) + " Y:" + QString::number(event->y()));
    assert(ev);
    m_pstatusBar->showMessage("Mouse pressed");
    if(ev)
    {
        QMouseEvent p = *ev;
        QLabel::mousePressEvent(ev);
        auto pixmap1 = m_image;

        QPainter painter(&pixmap1);
        painter.setPen(QPen(Qt::green, 5, Qt::SolidLine));
        painter.drawEllipse(QPoint(p.x(), p.y()), 10, 10);
        painter.end();
        QFile file("test1.png");
        file.open(QIODevice::WriteOnly);
        pixmap1.save(&file, "PNG");
        m_pImage->setPixmap(pixmap1);
        m_pImage->repaint();
        m_pImage->update();
    }

}

void ImageLabel::mouseMoveEvent(QMouseEvent *ev)
{
    assert(ev);
    m_pstatusBar->showMessage("Mouse moving");
    if(ev)
    {
        QMouseEvent p = *ev;
        QLabel::mouseMoveEvent(ev);

        int src_width, src_height;
        src_width = this->size().width();
        src_height = this->size().height();
        auto sq_size = 50;
        auto ymin = p.y() - sq_size;
        if (ymin < 0)
            ymin = 0;
        auto ymax = p.y() + sq_size;
        if (ymax > src_height)
            ymax = src_height;

        auto xmin = p.x() - sq_size;
        if (xmin < 0)
            xmin = 0;
        auto xmax = p.x() + sq_size;
        if (xmax > src_width)
            xmax = src_width;

        auto rect = QRect(xmin, ymin, 100, 100);
        auto pixmap = m_image.scaled(src_width, src_height);


        QPainter painter(&pixmap);
        painter.setPen(QPen(Qt::green, 1, Qt::SolidLine));
        painter.drawLine(p.x(), p.y(), p.x(), p.y());
        painter.drawEllipse(QPoint(p.x(), p.y()), 3, 3);
        painter.end();

        QPixmap zoom_img = pixmap.copy(rect);
        m_pMini->setPixmap(zoom_img.scaled(350, 480, Qt::KeepAspectRatio));
    }

}

void ImageLabel::paintEvent(QPaintEvent *event)
{

    QPainter painter;
    painter.begin(this);
    QBrush brush(m_image);
    painter.setBrush(brush);
    painter.drawImage(rect(),m_image.toImage());
    painter.end();

    QWidget::paintEvent(event);

}

