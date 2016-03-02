#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <QString>
#include <QDir>

//PacmanExec - QTextBrowser related
enum TreatString { ectn_TREAT_STRING, ectn_DONT_TREAT_STRING };
enum TreatURLLinks { ectn_TREAT_URL_LINK, ectn_DONT_TREAT_URL_LINK };

//SettingsManager related
enum SaveSettingsReason { ectn_PackageList, ectn_CurrentTabIndex, ectn_NORMAL=30,
                          ectn_MAXIMIZE_PACKAGES=40, ectn_MAXIMIZE_PROPERTIES=50, ectn_GROUPS=5 };

const QString ctn_ORGANIZATION("octopi");
const QString ctn_APPLICATION("octopi");
const QString ctn_KEY_CURRENT_TAB_INDEX("Current_Tab_Index");
const QString ctn_KEY_WINDOW_SIZE("Window_Size");
const QString ctn_KEY_TRANSACTION_WINDOW_SIZE("Transaction_Window_Size");
const QString ctn_KEY_PANEL_ORGANIZING("Panel_Organizing");
const QString ctn_KEY_PACKAGE_LIST_ORDERED_COL("PackageList_Ordered_Col");
const QString ctn_KEY_PACKAGE_LIST_SORT_ORDER("PackageList_Sort_Order");
const QString ctn_KEY_SKIP_MIRRORCHECK_ON_STARTUP("Skip_Mirror_Check_At_Startup");
const QString ctn_KEY_SPLITTER_HORIZONTAL_STATE("Splitter_Horizontal_State");
const QString ctn_KEY_SHOW_GROUPS_PANEL("Show_Groups_Panel");
const QString ctn_KEY_PACKAGE_ICON_COLUMN_WIDTH("Package_Icon_Column_Width");
const QString ctn_KEY_PACKAGE_NAME_COLUMN_WIDTH("Package_Name_Column_Width");
const QString ctn_KEY_PACKAGE_VERSION_COLUMN_WIDTH("Package_Version_Column_Width");
const QString ctn_KEY_TERMINAL("Terminal");
const QString ctn_AUTOMATIC("automatic");

//Notifier related
const QString ctn_KEY_LAST_SYNC_DB_TIME("LastSyncDbTime");
const QString ctn_KEY_SYNC_DB_INTERVAL("SyncDbInterval");
const QString ctn_KEY_SYNC_DB_HOUR("SyncDbHour");

//CacheCleaner related
const QString ctn_KEEP_NUM_INSTALLED("Keep_Num_Installed");
const QString ctn_KEEP_NUM_UNINSTALLED("Keep_Num_Uninstalled");

//Package related
const QString ctn_TEMP_ACTIONS_FILE ( QDir::tempPath() + QDir::separator() + ".qt_temp_" );
const QString ctn_PACMAN_DATABASE_DIR = "/var/lib/pacman";
const QString ctn_PACMAN_CORE_DB_FILE = "/var/lib/pacman/sync/core.db";

enum PackageStatus { ectn_INSTALLED, ectn_NON_INSTALLED, ectn_OUTDATED, ectn_NEWER,
                     ectn_FOREIGN, ectn_FOREIGN_OUTDATED };

enum ViewOptions { ectn_ALL_PKGS, ectn_INSTALLED_PKGS, ectn_NON_INSTALLED_PKGS };

//TransactionDialog related
const int ctn_RUN_IN_TERMINAL(328);

//WMHelper related
const QString ctn_NO_SU_COMMAND("none");
const QString ctn_ROOT_SH("/bin/sh -c ");

const QString ctn_LXQTSU("lxqt-sudo");

const QString ctn_KDESU("kdesu");
const QString ctn_KDE_DESKTOP("kwin");
const QString ctn_KDE_X11_DESKTOP("kwin_x11");
const QString ctn_KDE_WAYLAND_DESKTOP("kwin_wayland");
const QString ctn_KDE_EDITOR("kwrite");
const QString ctn_KDE_FILE_MANAGER("kfmclient");
const QString ctn_KDE_TERMINAL("konsole");
const QString ctn_KDE4_OPEN("kde-open");
const QString ctn_KDE5_OPEN("kde-open5");
const QString ctn_KDE4_FILE_MANAGER("dolphin");
const QString ctn_KDE4_EDITOR("kate");

const QString ctn_TDESU("tdesu");
const QString ctn_TDE_DESKTOP("twin");
const QString ctn_TDE_EDITOR("kwrite");
const QString ctn_TDE_FILE_MANAGER("kfmclient");
const QString ctn_TDE_TERMINAL("konsole");

const QString ctn_GKSU_1("/usr/libexec/gksu");
const QString ctn_GKSU_2("gksu");

const QString ctn_ANTERGOS_FILE_MANAGER("nautilus");

const QString ctn_ARCHBANG_EDITOR("medit");
const QString ctn_ARCHBANG_FILE_MANAGER("spacefm");

const QString ctn_MOOOS_EDITOR("subl3");
const QString ctn_RXVT_TERMINAL("urxvt");

const QString ctn_XFCE_DESKTOP("xfdesktop");
const QString ctn_XFCE_EDITOR("mousepad");
const QString ctn_XFCE_EDITOR_ALT("leafpad");
const QString ctn_XFCE_FILE_MANAGER("thunar");
const QString ctn_XFCE_TERMINAL("xfce4-terminal");

const QString ctn_OPENBOX_DESKTOP("openbox");
const QString ctn_LXDE_DESKTOP("lxsession");
const QString ctn_LXDE_TERMINAL("lxterminal");
const QString ctn_LXDE_FILE_MANAGER("pcmanfm");

const QString ctn_LXQT_DESKTOP("lxqt-session");
const QString ctn_LXQT_TERMINAL("qterminal");
const QString ctn_LXQT_FILE_MANAGER("pcmanfm-qt");
const QString ctn_LXQT_EDITOR("juffed");

const QString ctn_MATE_DESKTOP("mate-session");
const QString ctn_MATE_EDITOR("mate-open");
const QString ctn_MATE_FILE_MANAGER("caja");
const QString ctn_MATE_TERMINAL("mate-terminal");

const QString ctn_CINNAMON_DESKTOP("cinnamon-session");
const QString ctn_CINNAMON_EDITOR("gedit");
const QString ctn_CINNAMON_FILE_MANAGER("nemo");
const QString ctn_CINNAMON_TERMINAL("gnome-terminal");

const QString ctn_RAZORQT_DESKTOP("razor-session");
const QString ctn_PEK_TERMINAL("sakura");
const QString ctn_XTERM("xterm");

enum EditOptions { ectn_EDIT_AS_ROOT, ectn_EDIT_AS_NORMAL_USER };

#endif // CONSTANTS
