# Third Party Libraries
set(PYBIND11_INSTALL OFF CACHE BOOL "" FORCE)
set(PYBIND11_TEST OFF CACHE BOOL "" FORCE)
add_subdirectory(pybind11)

# -------------- imgui --------------
set(imgui_SRCS
    imgui/imgui.cpp
    imgui/imgui_demo.cpp
    imgui/imgui_draw.cpp
    imgui/imgui_tables.cpp
    imgui/imgui_widgets.cpp
    imgui/backends/imgui_impl_glfw.cpp
    imgui/backends/imgui_impl_opengl3.cpp

    # imnodes
    imnodes/imnodes.cpp

    # implot
    implot/implot.cpp
    implot/implot_items.cpp
    implot/implot_demo.cpp
)

add_library(imgui-cpp
    STATIC
    ${imgui_SRCS}
)

target_include_directories(imgui-cpp
    PUBLIC
    imgui
    imnodes
    implot
    imconfig
)

target_link_libraries(imgui-cpp
    PRIVATE
    pyglfw
)

set_target_properties(imgui-cpp
    PROPERTIES POSITION_INDEPENDENT_CODE ON
)

target_compile_definitions(imgui-cpp
    PUBLIC
    IMGUI_USER_CONFIG=<bind-imconfig.h>
)

if(${MSVC})
    target_link_libraries(imgui-cpp
        PRIVATE
        opengl32.lib
        gdi32.lib
        shell32.lib
    )
else()
    find_package(OpenGL REQUIRED)
    target_link_libraries(imgui-cpp
        PRIVATE
        ${OPENGL_LIBRARIES}
    )
endif()

target_compile_definitions(imgui-cpp
    PUBLIC
    IMGUI_DISABLE_OBSOLETE_KEYIO
    IMGUI_DISABLE_OBSOLETE_FUNCTIONS
)

add_library(glad
    STATIC
    glad/src/gl.c
)
target_include_directories(glad PUBLIC
    glad/include
)
set_target_properties(glad PROPERTIES
    POSITION_INDEPENDENT_CODE ON
)

add_library(stb INTERFACE)
target_include_directories(stb INTERFACE stb)