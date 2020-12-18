#include <QtTest>
#include "../KURS/rocords.h"

// add necessary includes here

class test_rocords : public QObject
{
    Q_OBJECT

public:
    test_rocords();
    ~test_rocords();

private slots:
    void test_rocords_case_NN();
    void test_rocords_case_LL();
    void test_rocords_case_SS();

};

test_rocords::test_rocords()
{

}

test_rocords::~test_rocords()
{

}

void test_rocords::test_rocords_case_NN(){
  auto name="Testing";
  rocords s(name,2,2);
  QVERIFY2(
        s.NN()==name, "ошибка имени"
        );
}
void test_rocords::test_rocords_case_LL(){
  auto l = 3;
  rocords s("gocha",l,2);
   QVERIFY2(
         s.LL()==l,"ошибка уровня"
         );
}
void test_rocords::test_rocords_case_SS(){
  auto S=3;
  rocords s("gocha",2,S);
  QVERIFY2(
        s.SS()==3,"ошибка счёта"
        );
}

QTEST_APPLESS_MAIN(test_rocords)

#include "tst_test_rocords.moc"
