/****************************************************************************
** Meta object code from reading C++ file 'sortdialog.h'
**
** Created: Mon Apr 1 21:05:47 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sortdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sortdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SortDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_SortDialog[] = {
    "SortDialog\0"
};

const QMetaObject SortDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SortDialog,
      qt_meta_data_SortDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SortDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SortDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SortDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SortDialog))
        return static_cast<void*>(const_cast< SortDialog*>(this));
    if (!strcmp(_clname, "Ui::SortDialog"))
        return static_cast< Ui::SortDialog*>(const_cast< SortDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SortDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
