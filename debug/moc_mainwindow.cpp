/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "signal",
    "",
    "GetCar",
    "QListWidgetItem*",
    "slotAddCar",
    "on_dataEntered",
    "Id",
    "Color",
    "Price",
    "Photo",
    "ModelId",
    "EquipmentId",
    "on_dataEntered1",
    "EngineName",
    "EngineVolume",
    "WheelDrive",
    "TranssmisionType",
    "HorsePower",
    "MaxSpeed",
    "on_dataEntered2",
    "Manufacturer",
    "Country",
    "on_dataEntered3",
    "ModelName",
    "ManufacturerId",
    "Mass",
    "Lenght",
    "Width",
    "Height",
    "Clearance",
    "BodyType",
    "on_pbDelCar_clicked",
    "on_pbEditCar_clicked",
    "on_pushButtonSearch_clicked",
    "on_pushButtonShowAll_clicked",
    "on_Purchase_clicked",
    "RemovePurchasedCar",
    "on_ApplyButton_clicked",
    "on_ReceiveEarnings_clicked",
    "on_SaleColorCar_clicked",
    "ShowCongratulationsDialog"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[84];
    char stringdata0[11];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[17];
    char stringdata5[11];
    char stringdata6[15];
    char stringdata7[3];
    char stringdata8[6];
    char stringdata9[6];
    char stringdata10[6];
    char stringdata11[8];
    char stringdata12[12];
    char stringdata13[16];
    char stringdata14[11];
    char stringdata15[13];
    char stringdata16[11];
    char stringdata17[17];
    char stringdata18[11];
    char stringdata19[9];
    char stringdata20[16];
    char stringdata21[13];
    char stringdata22[8];
    char stringdata23[16];
    char stringdata24[10];
    char stringdata25[15];
    char stringdata26[5];
    char stringdata27[7];
    char stringdata28[6];
    char stringdata29[7];
    char stringdata30[10];
    char stringdata31[9];
    char stringdata32[20];
    char stringdata33[21];
    char stringdata34[28];
    char stringdata35[29];
    char stringdata36[20];
    char stringdata37[19];
    char stringdata38[23];
    char stringdata39[27];
    char stringdata40[24];
    char stringdata41[26];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 6),  // "signal"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 6),  // "GetCar"
        QT_MOC_LITERAL(26, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(43, 10),  // "slotAddCar"
        QT_MOC_LITERAL(54, 14),  // "on_dataEntered"
        QT_MOC_LITERAL(69, 2),  // "Id"
        QT_MOC_LITERAL(72, 5),  // "Color"
        QT_MOC_LITERAL(78, 5),  // "Price"
        QT_MOC_LITERAL(84, 5),  // "Photo"
        QT_MOC_LITERAL(90, 7),  // "ModelId"
        QT_MOC_LITERAL(98, 11),  // "EquipmentId"
        QT_MOC_LITERAL(110, 15),  // "on_dataEntered1"
        QT_MOC_LITERAL(126, 10),  // "EngineName"
        QT_MOC_LITERAL(137, 12),  // "EngineVolume"
        QT_MOC_LITERAL(150, 10),  // "WheelDrive"
        QT_MOC_LITERAL(161, 16),  // "TranssmisionType"
        QT_MOC_LITERAL(178, 10),  // "HorsePower"
        QT_MOC_LITERAL(189, 8),  // "MaxSpeed"
        QT_MOC_LITERAL(198, 15),  // "on_dataEntered2"
        QT_MOC_LITERAL(214, 12),  // "Manufacturer"
        QT_MOC_LITERAL(227, 7),  // "Country"
        QT_MOC_LITERAL(235, 15),  // "on_dataEntered3"
        QT_MOC_LITERAL(251, 9),  // "ModelName"
        QT_MOC_LITERAL(261, 14),  // "ManufacturerId"
        QT_MOC_LITERAL(276, 4),  // "Mass"
        QT_MOC_LITERAL(281, 6),  // "Lenght"
        QT_MOC_LITERAL(288, 5),  // "Width"
        QT_MOC_LITERAL(294, 6),  // "Height"
        QT_MOC_LITERAL(301, 9),  // "Clearance"
        QT_MOC_LITERAL(311, 8),  // "BodyType"
        QT_MOC_LITERAL(320, 19),  // "on_pbDelCar_clicked"
        QT_MOC_LITERAL(340, 20),  // "on_pbEditCar_clicked"
        QT_MOC_LITERAL(361, 27),  // "on_pushButtonSearch_clicked"
        QT_MOC_LITERAL(389, 28),  // "on_pushButtonShowAll_clicked"
        QT_MOC_LITERAL(418, 19),  // "on_Purchase_clicked"
        QT_MOC_LITERAL(438, 18),  // "RemovePurchasedCar"
        QT_MOC_LITERAL(457, 22),  // "on_ApplyButton_clicked"
        QT_MOC_LITERAL(480, 26),  // "on_ReceiveEarnings_clicked"
        QT_MOC_LITERAL(507, 23),  // "on_SaleColorCar_clicked"
        QT_MOC_LITERAL(531, 25)   // "ShowCongratulationsDialog"
    },
    "MainWindow",
    "signal",
    "",
    "GetCar",
    "QListWidgetItem*",
    "slotAddCar",
    "on_dataEntered",
    "Id",
    "Color",
    "Price",
    "Photo",
    "ModelId",
    "EquipmentId",
    "on_dataEntered1",
    "EngineName",
    "EngineVolume",
    "WheelDrive",
    "TranssmisionType",
    "HorsePower",
    "MaxSpeed",
    "on_dataEntered2",
    "Manufacturer",
    "Country",
    "on_dataEntered3",
    "ModelName",
    "ManufacturerId",
    "Mass",
    "Lenght",
    "Width",
    "Height",
    "Clearance",
    "BodyType",
    "on_pbDelCar_clicked",
    "on_pbEditCar_clicked",
    "on_pushButtonSearch_clicked",
    "on_pushButtonShowAll_clicked",
    "on_Purchase_clicked",
    "RemovePurchasedCar",
    "on_ApplyButton_clicked",
    "on_ReceiveEarnings_clicked",
    "on_SaleColorCar_clicked",
    "ShowCongratulationsDialog"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  116,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,  117,    2, 0x0a,    2 /* Public */,
       5,    0,  120,    2, 0x0a,    4 /* Public */,
       6,    6,  121,    2, 0x08,    5 /* Private */,
      13,    8,  134,    2, 0x08,   12 /* Private */,
      20,    3,  151,    2, 0x08,   21 /* Private */,
      23,    9,  158,    2, 0x08,   25 /* Private */,
      32,    0,  177,    2, 0x08,   35 /* Private */,
      33,    0,  178,    2, 0x08,   36 /* Private */,
      34,    0,  179,    2, 0x08,   37 /* Private */,
      35,    0,  180,    2, 0x08,   38 /* Private */,
      36,    0,  181,    2, 0x08,   39 /* Private */,
      37,    0,  182,    2, 0x08,   40 /* Private */,
      38,    0,  183,    2, 0x08,   41 /* Private */,
      39,    0,  184,    2, 0x08,   42 /* Private */,
      40,    0,  185,    2, 0x08,   43 /* Private */,
      41,    0,  186,    2, 0x0a,   44 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,    8,    9,   10,   11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,   14,   15,   16,   17,   18,   19,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,   21,   22,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,   24,   25,   26,   27,   28,   29,   30,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'signal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'GetCar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'slotAddCar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_dataEntered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_dataEntered1'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_dataEntered2'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_dataEntered3'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_pbDelCar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pbEditCar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSearch_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonShowAll_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_Purchase_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'RemovePurchasedCar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ApplyButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_ReceiveEarnings_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_SaleColorCar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ShowCongratulationsDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal(); break;
        case 1: _t->GetCar((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 2: _t->slotAddCar(); break;
        case 3: _t->on_dataEntered((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6]))); break;
        case 4: _t->on_dataEntered1((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[8]))); break;
        case 5: _t->on_dataEntered2((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 6: _t->on_dataEntered3((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[6])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[7])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[8])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[9]))); break;
        case 7: _t->on_pbDelCar_clicked(); break;
        case 8: _t->on_pbEditCar_clicked(); break;
        case 9: _t->on_pushButtonSearch_clicked(); break;
        case 10: _t->on_pushButtonShowAll_clicked(); break;
        case 11: _t->on_Purchase_clicked(); break;
        case 12: _t->RemovePurchasedCar(); break;
        case 13: _t->on_ApplyButton_clicked(); break;
        case 14: _t->on_ReceiveEarnings_clicked(); break;
        case 15: _t->on_SaleColorCar_clicked(); break;
        case 16: _t->ShowCongratulationsDialog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::signal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::signal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
