/****************************************************************************
** Meta object code from reading C++ file 'dialogpurchasecar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dialogpurchasecar.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialogpurchasecar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSDialogPurchaseCarENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSDialogPurchaseCarENDCLASS = QtMocHelpers::stringData(
    "DialogPurchaseCar",
    "CarPurchased",
    "",
    "PurchaseConfirmed",
    "UpdateComboBoxes",
    "on_ConfirmPurchase_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDialogPurchaseCarENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[18];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[17];
    char stringdata5[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDialogPurchaseCarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDialogPurchaseCarENDCLASS_t qt_meta_stringdata_CLASSDialogPurchaseCarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "DialogPurchaseCar"
        QT_MOC_LITERAL(18, 12),  // "CarPurchased"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 17),  // "PurchaseConfirmed"
        QT_MOC_LITERAL(50, 16),  // "UpdateComboBoxes"
        QT_MOC_LITERAL(67, 26)   // "on_ConfirmPurchase_clicked"
    },
    "DialogPurchaseCar",
    "CarPurchased",
    "",
    "PurchaseConfirmed",
    "UpdateComboBoxes",
    "on_ConfirmPurchase_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDialogPurchaseCarENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    1 /* Public */,
       3,    0,   39,    2, 0x06,    2 /* Public */,
       4,    0,   40,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject DialogPurchaseCar::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSDialogPurchaseCarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDialogPurchaseCarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDialogPurchaseCarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DialogPurchaseCar, std::true_type>,
        // method 'CarPurchased'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'PurchaseConfirmed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'UpdateComboBoxes'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ConfirmPurchase_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DialogPurchaseCar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogPurchaseCar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->CarPurchased(); break;
        case 1: _t->PurchaseConfirmed(); break;
        case 2: _t->UpdateComboBoxes(); break;
        case 3: _t->on_ConfirmPurchase_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DialogPurchaseCar::*)();
            if (_t _q_method = &DialogPurchaseCar::CarPurchased; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DialogPurchaseCar::*)();
            if (_t _q_method = &DialogPurchaseCar::PurchaseConfirmed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DialogPurchaseCar::*)();
            if (_t _q_method = &DialogPurchaseCar::UpdateComboBoxes; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *DialogPurchaseCar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogPurchaseCar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDialogPurchaseCarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogPurchaseCar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void DialogPurchaseCar::CarPurchased()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void DialogPurchaseCar::PurchaseConfirmed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DialogPurchaseCar::UpdateComboBoxes()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
