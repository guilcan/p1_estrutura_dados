#ifndef GLOBALS_H
#define GLOBALS_H
#include <QString>
#include "lde.h"
#include "les.h"
#include "no.h"

QT_BEGIN_NAMESPACE
class QString;
QT_END_NAMESPACE

les<QString> lista1(100);
LDE<QString> lista2;

extern les<QString> lista1;



