/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../2D_Bin_Packing_Problem/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[106];
    char stringdata0[1020];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 9), // "askToPack"
QT_MOC_LITERAL(21, 0), // ""
QT_MOC_LITERAL(22, 14), // "endPackingTask"
QT_MOC_LITERAL(37, 11), // "infoMessage"
QT_MOC_LITERAL(49, 7), // "message"
QT_MOC_LITERAL(57, 22), // "on_exit_button_clicked"
QT_MOC_LITERAL(80, 22), // "on_help_button_clicked"
QT_MOC_LITERAL(103, 26), // "on_settings_button_clicked"
QT_MOC_LITERAL(130, 26), // "on_bpp_view_button_clicked"
QT_MOC_LITERAL(157, 15), // "on_home_clicked"
QT_MOC_LITERAL(173, 15), // "on_back_clicked"
QT_MOC_LITERAL(189, 15), // "on_help_clicked"
QT_MOC_LITERAL(205, 19), // "on_settings_clicked"
QT_MOC_LITERAL(225, 18), // "on_refresh_clicked"
QT_MOC_LITERAL(244, 19), // "on_zoom_out_clicked"
QT_MOC_LITERAL(264, 18), // "on_zoom_in_clicked"
QT_MOC_LITERAL(283, 22), // "on_zoom_to_fit_clicked"
QT_MOC_LITERAL(306, 23), // "on_clear_screen_clicked"
QT_MOC_LITERAL(330, 23), // "on_previous_bin_clicked"
QT_MOC_LITERAL(354, 19), // "on_next_bin_clicked"
QT_MOC_LITERAL(374, 18), // "on_clear_2_clicked"
QT_MOC_LITERAL(393, 16), // "on_clear_clicked"
QT_MOC_LITERAL(410, 18), // "on_clear_3_clicked"
QT_MOC_LITERAL(429, 17), // "on_home_2_clicked"
QT_MOC_LITERAL(447, 17), // "on_help_2_clicked"
QT_MOC_LITERAL(465, 21), // "on_settings_2_clicked"
QT_MOC_LITERAL(487, 25), // "on_load_from_file_clicked"
QT_MOC_LITERAL(513, 14), // "on_run_clicked"
QT_MOC_LITERAL(528, 18), // "on_process_clicked"
QT_MOC_LITERAL(547, 14), // "on_add_clicked"
QT_MOC_LITERAL(562, 24), // "on_set_container_clicked"
QT_MOC_LITERAL(587, 28), // "on_clear_stored_data_clicked"
QT_MOC_LITERAL(616, 17), // "on_home_4_clicked"
QT_MOC_LITERAL(634, 21), // "on_to_packing_clicked"
QT_MOC_LITERAL(656, 17), // "on_help_4_clicked"
QT_MOC_LITERAL(674, 32), // "on_horizontalSlider_valueChanged"
QT_MOC_LITERAL(707, 5), // "value"
QT_MOC_LITERAL(713, 17), // "on_home_5_clicked"
QT_MOC_LITERAL(731, 23), // "on_to_packing_2_clicked"
QT_MOC_LITERAL(755, 21), // "on_settings_3_clicked"
QT_MOC_LITERAL(777, 35), // "on_transparency_slider_valueC..."
QT_MOC_LITERAL(813, 12), // "handleResult"
QT_MOC_LITERAL(826, 20), // "QList<BinContainer>&"
QT_MOC_LITERAL(847, 4), // "bins"
QT_MOC_LITERAL(852, 11), // "showMessage"
QT_MOC_LITERAL(864, 16), // "showErrorMessage"
QT_MOC_LITERAL(881, 23), // "on_display_bins_clicked"
QT_MOC_LITERAL(905, 14), // "getElapsedTime"
QT_MOC_LITERAL(920, 22), // "on_radioButton_clicked"
QT_MOC_LITERAL(943, 24), // "on_radioButton_2_clicked"
QT_MOC_LITERAL(968, 23), // "calculate_entiere_waste"
QT_MOC_LITERAL(992, 27) // "getNumberOfPackedRectangles"

    },
    "MainWindow\0askToPack\0\0endPackingTask\0"
    "infoMessage\0message\0on_exit_button_clicked\0"
    "on_help_button_clicked\0"
    "on_settings_button_clicked\0"
    "on_bpp_view_button_clicked\0on_home_clicked\0"
    "on_back_clicked\0on_help_clicked\0"
    "on_settings_clicked\0on_refresh_clicked\0"
    "on_zoom_out_clicked\0on_zoom_in_clicked\0"
    "on_zoom_to_fit_clicked\0on_clear_screen_clicked\0"
    "on_previous_bin_clicked\0on_next_bin_clicked\0"
    "on_clear_2_clicked\0on_clear_clicked\0"
    "on_clear_3_clicked\0on_home_2_clicked\0"
    "on_help_2_clicked\0on_settings_2_clicked\0"
    "on_load_from_file_clicked\0on_run_clicked\0"
    "on_process_clicked\0on_add_clicked\0"
    "on_set_container_clicked\0"
    "on_clear_stored_data_clicked\0"
    "on_home_4_clicked\0on_to_packing_clicked\0"
    "on_help_4_clicked\0on_horizontalSlider_valueChanged\0"
    "value\0on_home_5_clicked\0on_to_packing_2_clicked\0"
    "on_settings_3_clicked\0"
    "on_transparency_slider_valueChanged\0"
    "handleResult\0QList<BinContainer>&\0"
    "bins\0showMessage\0showErrorMessage\0"
    "on_display_bins_clicked\0getElapsedTime\0"
    "on_radioButton_clicked\0on_radioButton_2_clicked\0"
    "calculate_entiere_waste\0"
    "getNumberOfPackedRectangles"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      47,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  296,    2, 0x06,    1 /* Public */,
       3,    0,  297,    2, 0x06,    2 /* Public */,
       4,    1,  298,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,  301,    2, 0x08,    5 /* Private */,
       7,    0,  302,    2, 0x08,    6 /* Private */,
       8,    0,  303,    2, 0x08,    7 /* Private */,
       9,    0,  304,    2, 0x08,    8 /* Private */,
      10,    0,  305,    2, 0x08,    9 /* Private */,
      11,    0,  306,    2, 0x08,   10 /* Private */,
      12,    0,  307,    2, 0x08,   11 /* Private */,
      13,    0,  308,    2, 0x08,   12 /* Private */,
      14,    0,  309,    2, 0x08,   13 /* Private */,
      15,    0,  310,    2, 0x08,   14 /* Private */,
      16,    0,  311,    2, 0x08,   15 /* Private */,
      17,    0,  312,    2, 0x08,   16 /* Private */,
      18,    0,  313,    2, 0x08,   17 /* Private */,
      19,    0,  314,    2, 0x08,   18 /* Private */,
      20,    0,  315,    2, 0x08,   19 /* Private */,
      21,    0,  316,    2, 0x08,   20 /* Private */,
      22,    0,  317,    2, 0x08,   21 /* Private */,
      23,    0,  318,    2, 0x08,   22 /* Private */,
      24,    0,  319,    2, 0x08,   23 /* Private */,
      25,    0,  320,    2, 0x08,   24 /* Private */,
      26,    0,  321,    2, 0x08,   25 /* Private */,
      27,    0,  322,    2, 0x08,   26 /* Private */,
      28,    0,  323,    2, 0x08,   27 /* Private */,
      29,    0,  324,    2, 0x08,   28 /* Private */,
      30,    0,  325,    2, 0x08,   29 /* Private */,
      31,    0,  326,    2, 0x08,   30 /* Private */,
      32,    0,  327,    2, 0x08,   31 /* Private */,
      33,    0,  328,    2, 0x08,   32 /* Private */,
      34,    0,  329,    2, 0x08,   33 /* Private */,
      35,    0,  330,    2, 0x08,   34 /* Private */,
      36,    1,  331,    2, 0x08,   35 /* Private */,
      38,    0,  334,    2, 0x08,   37 /* Private */,
      39,    0,  335,    2, 0x08,   38 /* Private */,
      40,    0,  336,    2, 0x08,   39 /* Private */,
      41,    1,  337,    2, 0x08,   40 /* Private */,
      42,    1,  340,    2, 0x08,   42 /* Private */,
      45,    1,  343,    2, 0x08,   44 /* Private */,
      46,    1,  346,    2, 0x08,   46 /* Private */,
      47,    0,  349,    2, 0x08,   48 /* Private */,
      48,    0,  350,    2, 0x08,   49 /* Private */,
      49,    0,  351,    2, 0x08,   50 /* Private */,
      50,    0,  352,    2, 0x08,   51 /* Private */,
      51,    0,  353,    2, 0x08,   52 /* Private */,
      52,    0,  354,    2, 0x08,   53 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
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
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   37,
    QMetaType::Void, 0x80000000 | 43,   44,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Double,
    QMetaType::Int,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->askToPack(); break;
        case 1: _t->endPackingTask(); break;
        case 2: _t->infoMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_exit_button_clicked(); break;
        case 4: _t->on_help_button_clicked(); break;
        case 5: _t->on_settings_button_clicked(); break;
        case 6: _t->on_bpp_view_button_clicked(); break;
        case 7: _t->on_home_clicked(); break;
        case 8: _t->on_back_clicked(); break;
        case 9: _t->on_help_clicked(); break;
        case 10: _t->on_settings_clicked(); break;
        case 11: _t->on_refresh_clicked(); break;
        case 12: _t->on_zoom_out_clicked(); break;
        case 13: _t->on_zoom_in_clicked(); break;
        case 14: _t->on_zoom_to_fit_clicked(); break;
        case 15: _t->on_clear_screen_clicked(); break;
        case 16: _t->on_previous_bin_clicked(); break;
        case 17: _t->on_next_bin_clicked(); break;
        case 18: _t->on_clear_2_clicked(); break;
        case 19: _t->on_clear_clicked(); break;
        case 20: _t->on_clear_3_clicked(); break;
        case 21: _t->on_home_2_clicked(); break;
        case 22: _t->on_help_2_clicked(); break;
        case 23: _t->on_settings_2_clicked(); break;
        case 24: _t->on_load_from_file_clicked(); break;
        case 25: _t->on_run_clicked(); break;
        case 26: _t->on_process_clicked(); break;
        case 27: _t->on_add_clicked(); break;
        case 28: _t->on_set_container_clicked(); break;
        case 29: _t->on_clear_stored_data_clicked(); break;
        case 30: _t->on_home_4_clicked(); break;
        case 31: _t->on_to_packing_clicked(); break;
        case 32: _t->on_help_4_clicked(); break;
        case 33: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->on_home_5_clicked(); break;
        case 35: _t->on_to_packing_2_clicked(); break;
        case 36: _t->on_settings_3_clicked(); break;
        case 37: _t->on_transparency_slider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->handleResult((*reinterpret_cast< QList<BinContainer>(*)>(_a[1]))); break;
        case 39: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 40: _t->showErrorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 41: _t->on_display_bins_clicked(); break;
        case 42: _t->getElapsedTime(); break;
        case 43: _t->on_radioButton_clicked(); break;
        case 44: _t->on_radioButton_2_clicked(); break;
        case 45: { double _r = _t->calculate_entiere_waste();
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 46: { int _r = _t->getNumberOfPackedRectangles();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::askToPack)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::endPackingTask)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::infoMessage)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<BinContainer> &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 47)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 47;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 47)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 47;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::askToPack()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MainWindow::endPackingTask()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MainWindow::infoMessage(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
