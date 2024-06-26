# 一些常用的选项，例如存放Qt的路径

# 软件名字
if(NOT DEFINED SLN_APP_NAME)
    set(SLN_APP_NAME "sln")
endif()
if(NOT DEFINED SLN_APP_VERSION_MAJOR)
    set(SLN_APP_VERSION_MAJOR 0)
endif()
if(NOT DEFINED SLN_APP_VERSION_MINOR)
    set(SLN_APP_VERSION_MINOR 0)
endif()
if(NOT DEFINED SLN_APP_VERSION_PATCH)
    set(SLN_APP_VERSION_PATCH 0)
endif()
if(NOT DEFINED SLN_APP_VERSION_TWEAK)
    set(SLN_APP_VERSION_TWEAK 0)
endif()

# 直接在这里设置不同系统的环境变量，简单可控，隐藏过深不利于维护
if (CMAKE_HOST_WIN32)
    set(OPTION_QT_CMAKE_PATH "C:\\DevTools\\Qt\\6.6.2\\msvc2019_64\\lib\\cmake")
elseif (CMAKE_HOST_LINUX)
    set(OPTION_QT_CMAKE_PATH "")
elseif (CMAKE_HOST_APPLE)
    set(OPTION_QT_CMAKE_PATH "")
elseif (CMAKE_HOST_UNIX)
    set(OPTION_QT_CMAKE_PATH "")
endif ()
if (OPTION_QT_CMAKE_PATH)
    list(APPEND CMAKE_MODULE_PATH ${OPTION_QT_CMAKE_PATH})
endif ()