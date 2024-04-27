#include <QtTest>

#include "../lab1-oop-2024/note.h"

class note : public QObject
{
    Q_OBJECT

public:
    note();
    ~note();

private slots:
    void test_case_note_get();
    void test_case_note_set();
    void test_case_note_contains_category();

};

note::note()
{

}

note::~note()
{

}

void note::test_case_note_get()
{
    Note note("Duis nulla felis, porta dapibus.",
              "Aliquam at congue augue. Pellentesque metus arcu, mollis et feugiat ut, fermentum nec dolor. Proin bibendum metus elementum lorem posuere, a ullamcorper diam facilisis. Pellentesque et vestibulum eros. Aenean finibus justo sodales lacinia malesuada. Aenean id varius neque, at blandit lorem. Vivamus sed interdum tellus. Morbi id justo euismod, semper.");
    QCOMPARE(note.getTitle(), "Duis nulla felis, porta dapibus.");
    QCOMPARE(note.getText(), "Aliquam at congue augue. Pellentesque metus arcu, mollis et feugiat ut, fermentum nec dolor. Proin bibendum metus elementum lorem posuere, a ullamcorper diam facilisis. Pellentesque et vestibulum eros. Aenean finibus justo sodales lacinia malesuada. Aenean id varius neque, at blandit lorem. Vivamus sed interdum tellus. Morbi id justo euismod, semper.");
    QCOMPARE(note.getShortText(), "Aliquam at congue augu...");
}

void note::test_case_note_set()
{
    Note note("Duis nulla felis, porta dapibus.",
              "Aliquam at congue augue. Pellentesque metus arcu, mollis et feugiat ut, fermentum nec dolor. Proin bibendum metus elementum lorem posuere, a ullamcorper diam facilisis. Pellentesque et vestibulum eros. Aenean finibus justo sodales lacinia malesuada. Aenean id varius neque, at blandit lorem. Vivamus sed interdum tellus. Morbi id justo euismod, semper.");
    note.setTitle("Integer sit amet tortor pellentesque.");
    QCOMPARE(note.getTitle(), "Integer sit amet tortor pellentesque.");
}

void note::test_case_note_contains_category()
{
    Note note("Duis nulla felis, porta dapibus.",
              "Aliquam at congue augue. Pellentesque metus arcu, mollis et feugiat ut, fermentum nec dolor. Proin bibendum metus elementum lorem posuere, a ullamcorper diam facilisis. Pellentesque et vestibulum eros. Aenean finibus justo sodales lacinia malesuada. Aenean id varius neque, at blandit lorem. Vivamus sed interdum tellus. Morbi id justo euismod, semper.",
              {"Categoty 1", "Categoty 2"});
    QVERIFY(note.containCategory("Categoty 1"));
    QVERIFY(note.containCategory("Categoty 2"));
    QVERIFY(!note.containCategory("Categoty 3"));
}

QTEST_APPLESS_MAIN(note)

#include "tst_note.moc"
