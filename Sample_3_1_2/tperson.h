#ifndef TPERSON_H
#define TPERSON_H

#include <QDebug>
#include <QObject>
#include <QString>



class TPerson : public QObject
{
    Q_OBJECT
    Q_CLASSINFO("author","Xia");
    Q_CLASSINFO("company","XiasC");
    Q_CLASSINFO("Ver","1.0");
public:
    explicit TPerson(QString name, QObject *parent = nullptr);
    ~TPerson();

    int age();
    void setAge(quint8 ageValue);
    void incAge();

signals:
    void ageChanged(int ageValue);

private:
    // QString m_sex;
    QString m_name;
    quint8 m_age = 10;
    quint8 m_score = 79;

};

#endif // TPERSON_H
