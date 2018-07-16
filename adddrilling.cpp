﻿#include "adddrilling.h"

#pragma execution_character_set("utf-8")

addDrilling::addDrilling()
{
    this->setWindowTitle("添加钻孔");
    this->resize(400,300);

    L1 = new QLabel("id:");
    id = new QLineEdit();
    L2 = new QLabel("jborehole:");
    jborehole = new QLineEdit();
    L3 = new QLabel("jtype:");
    jtype = new QLineEdit();
    L4 = new QLabel("jeast:");
    jeast = new QLineEdit();
    L5 = new QLabel("jnorth:");
    jnorth = new QLineEdit();
    L6 = new QLabel("jaltitude:");
    jaltitude = new QLineEdit();
    L7 = new QLabel("jdepth:");
    jdepth = new QLineEdit();
    L8 = new QLabel("jpath:");
    jpath = new QLineEdit();
    L9 = new QLabel("jdrill:");
    jdrill = new QLineEdit();

    confirm = new QPushButton("添加");
    cancel = new QPushButton("取消");

    layout = new QVBoxLayout();
    layout->addWidget(L1);
    layout->addWidget(id);
    layout->addWidget(L2);
    layout->addWidget(jborehole);
    layout->addWidget(L3);
    layout->addWidget(jtype);
    layout->addWidget(L4);
    layout->addWidget(jeast);
    layout->addWidget(L5);
    layout->addWidget(jnorth);
    layout->addWidget(L6);
    layout->addWidget(jaltitude);
    layout->addWidget(L7);
    layout->addWidget(jdepth);
    layout->addWidget(L8);
    layout->addWidget(jpath);
    layout->addWidget(L9);
    layout->addWidget(jdrill);
    layout->addWidget(confirm);
    layout->addWidget(cancel);

    this->setLayout(layout);
}