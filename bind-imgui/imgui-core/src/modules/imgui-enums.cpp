#include <binder/inc/enum-utility.h>
#include <imgui-core/inc/imgui-modules.h>

void init_imgui_enums(py::module& m)
{
    ENUM(ImGui, WindowFlags)
        .RAW_VALUE(None_, ImGuiWindowFlags_None)
        .VALUE(ImGui, WindowFlags, NoTitleBar)
        .VALUE(ImGui, WindowFlags, NoResize)
        .VALUE(ImGui, WindowFlags, NoMove)
        .VALUE(ImGui, WindowFlags, NoScrollbar)
        .VALUE(ImGui, WindowFlags, NoScrollWithMouse)
        .VALUE(ImGui, WindowFlags, NoCollapse)
        .VALUE(ImGui, WindowFlags, AlwaysAutoResize)
        .VALUE(ImGui, WindowFlags, NoBackground)
        .VALUE(ImGui, WindowFlags, NoSavedSettings)
        .VALUE(ImGui, WindowFlags, NoMouseInputs)
        .VALUE(ImGui, WindowFlags, MenuBar)
        .VALUE(ImGui, WindowFlags, HorizontalScrollbar)
        .VALUE(ImGui, WindowFlags, NoFocusOnAppearing)
        .VALUE(ImGui, WindowFlags, NoBringToFrontOnFocus)
        .VALUE(ImGui, WindowFlags, AlwaysVerticalScrollbar)
        .VALUE(ImGui, WindowFlags, AlwaysHorizontalScrollbar)
        .VALUE(ImGui, WindowFlags, AlwaysUseWindowPadding)
        .VALUE(ImGui, WindowFlags, NoNavInputs)
        .VALUE(ImGui, WindowFlags, NoNavFocus)
        .VALUE(ImGui, WindowFlags, UnsavedDocument)
        .VALUE(ImGui, WindowFlags, NoNav)
        .VALUE(ImGui, WindowFlags, NoDecoration)
        .VALUE(ImGui, WindowFlags, NoInputs);

    ENUM(ImGui, InputTextFlags)
        .RAW_VALUE(None_, ImGuiInputTextFlags_None)
        .VALUE(ImGui, InputTextFlags, CharsDecimal)
        .VALUE(ImGui, InputTextFlags, CharsHexadecimal)
        .VALUE(ImGui, InputTextFlags, CharsUppercase)
        .VALUE(ImGui, InputTextFlags, CharsNoBlank)
        .VALUE(ImGui, InputTextFlags, AutoSelectAll)
        .VALUE(ImGui, InputTextFlags, EnterReturnsTrue)
        .VALUE(ImGui, InputTextFlags, CallbackCompletion)
        .VALUE(ImGui, InputTextFlags, CallbackHistory)
        .VALUE(ImGui, InputTextFlags, CallbackAlways)
        .VALUE(ImGui, InputTextFlags, CallbackCharFilter)
        .VALUE(ImGui, InputTextFlags, AllowTabInput)
        .VALUE(ImGui, InputTextFlags, CtrlEnterForNewLine)
        .VALUE(ImGui, InputTextFlags, NoHorizontalScroll)
        .VALUE(ImGui, InputTextFlags, AlwaysOverwrite)
        .VALUE(ImGui, InputTextFlags, ReadOnly)
        .VALUE(ImGui, InputTextFlags, Password)
        .VALUE(ImGui, InputTextFlags, NoUndoRedo)
        .VALUE(ImGui, InputTextFlags, CharsScientific)
        .VALUE(ImGui, InputTextFlags, CallbackResize)
        .VALUE(ImGui, InputTextFlags, CallbackEdit)
        .VALUE(ImGui, InputTextFlags, EscapeClearsAll);

    ENUM(ImGui, TreeNodeFlags)
        .RAW_VALUE(None_, ImGuiTreeNodeFlags_None)
        .VALUE(ImGui, TreeNodeFlags, Selected)
        .VALUE(ImGui, TreeNodeFlags, Framed)
        .VALUE(ImGui, TreeNodeFlags, AllowItemOverlap)
        .VALUE(ImGui, TreeNodeFlags, NoTreePushOnOpen)
        .VALUE(ImGui, TreeNodeFlags, NoAutoOpenOnLog)
        .VALUE(ImGui, TreeNodeFlags, DefaultOpen)
        .VALUE(ImGui, TreeNodeFlags, OpenOnDoubleClick)
        .VALUE(ImGui, TreeNodeFlags, OpenOnArrow)
        .VALUE(ImGui, TreeNodeFlags, Leaf)
        .VALUE(ImGui, TreeNodeFlags, Bullet)
        .VALUE(ImGui, TreeNodeFlags, FramePadding)
        .VALUE(ImGui, TreeNodeFlags, SpanAvailWidth)
        .VALUE(ImGui, TreeNodeFlags, NavLeftJumpsBackHere)
        .VALUE(ImGui, TreeNodeFlags, CollapsingHeader);

    ENUM(ImGui, PopupFlags)
        .RAW_VALUE(None_, ImGuiPopupFlags_None)
        .VALUE(ImGui, PopupFlags, MouseButtonLeft)
        .VALUE(ImGui, PopupFlags, MouseButtonRight)
        .VALUE(ImGui, PopupFlags, MouseButtonMiddle)
        .VALUE(ImGui, PopupFlags, MouseButtonMask_)
        .VALUE(ImGui, PopupFlags, MouseButtonDefault_)
        .VALUE(ImGui, PopupFlags, NoOpenOverExistingPopup)
        .VALUE(ImGui, PopupFlags, NoOpenOverItems)
        .VALUE(ImGui, PopupFlags, AnyPopupId)
        .VALUE(ImGui, PopupFlags, AnyPopupLevel)
        .VALUE(ImGui, PopupFlags, AnyPopup);

    ENUM(ImGui, SelectableFlags)
        .RAW_VALUE(None_, ImGuiSelectableFlags_None)
        .VALUE(ImGui, SelectableFlags, DontClosePopups)
        .VALUE(ImGui, SelectableFlags, SpanAllColumns)
        .VALUE(ImGui, SelectableFlags, AllowDoubleClick)
        .VALUE(ImGui, SelectableFlags, Disabled)
        .VALUE(ImGui, SelectableFlags, AllowItemOverlap);

    ENUM(ImGui, ComboFlags)
        .RAW_VALUE(None_, ImGuiComboFlags_None)
        .VALUE(ImGui, ComboFlags, PopupAlignLeft)
        .VALUE(ImGui, ComboFlags, HeightSmall)
        .VALUE(ImGui, ComboFlags, HeightRegular)
        .VALUE(ImGui, ComboFlags, HeightLarge)
        .VALUE(ImGui, ComboFlags, HeightLargest)
        .VALUE(ImGui, ComboFlags, NoArrowButton)
        .VALUE(ImGui, ComboFlags, NoPreview)
        .VALUE(ImGui, ComboFlags, HeightMask_);

    ENUM(ImGui, TabBarFlags)
        .RAW_VALUE(None_, ImGuiTabBarFlags_None)
        .VALUE(ImGui, TabBarFlags, Reorderable)
        .VALUE(ImGui, TabBarFlags, AutoSelectNewTabs)
        .VALUE(ImGui, TabBarFlags, TabListPopupButton)
        .VALUE(ImGui, TabBarFlags, NoCloseWithMiddleMouseButton)
        .VALUE(ImGui, TabBarFlags, NoTabListScrollingButtons)
        .VALUE(ImGui, TabBarFlags, NoTooltip)
        .VALUE(ImGui, TabBarFlags, FittingPolicyResizeDown)
        .VALUE(ImGui, TabBarFlags, FittingPolicyScroll)
        .VALUE(ImGui, TabBarFlags, FittingPolicyMask_)
        .VALUE(ImGui, TabBarFlags, FittingPolicyDefault_);

    ENUM(ImGui, TabItemFlags)
        .RAW_VALUE(None_, ImGuiTabItemFlags_None)
        .VALUE(ImGui, TabItemFlags, UnsavedDocument)
        .VALUE(ImGui, TabItemFlags, SetSelected)
        .VALUE(ImGui, TabItemFlags, NoCloseWithMiddleMouseButton)
        .VALUE(ImGui, TabItemFlags, NoPushId)
        .VALUE(ImGui, TabItemFlags, NoTooltip)
        .VALUE(ImGui, TabItemFlags, NoReorder)
        .VALUE(ImGui, TabItemFlags, Leading)
        .VALUE(ImGui, TabItemFlags, Trailing);

    ENUM(ImGui, TableFlags)
        .RAW_VALUE(None_, ImGuiTableFlags_None)
        .VALUE(ImGui, TableFlags, Resizable)
        .VALUE(ImGui, TableFlags, Reorderable)
        .VALUE(ImGui, TableFlags, Hideable)
        .VALUE(ImGui, TableFlags, Sortable)
        .VALUE(ImGui, TableFlags, NoSavedSettings)
        .VALUE(ImGui, TableFlags, ContextMenuInBody)
        .VALUE(ImGui, TableFlags, RowBg)
        .VALUE(ImGui, TableFlags, BordersInnerH)
        .VALUE(ImGui, TableFlags, BordersOuterH)
        .VALUE(ImGui, TableFlags, BordersInnerV)
        .VALUE(ImGui, TableFlags, BordersOuterV)
        .VALUE(ImGui, TableFlags, BordersH)
        .VALUE(ImGui, TableFlags, BordersV)
        .VALUE(ImGui, TableFlags, BordersInner)
        .VALUE(ImGui, TableFlags, BordersOuter)
        .VALUE(ImGui, TableFlags, Borders)
        .VALUE(ImGui, TableFlags, NoBordersInBody)
        .VALUE(ImGui, TableFlags, NoBordersInBodyUntilResize)
        .VALUE(ImGui, TableFlags, SizingFixedFit)
        .VALUE(ImGui, TableFlags, SizingFixedSame)
        .VALUE(ImGui, TableFlags, SizingStretchProp)
        .VALUE(ImGui, TableFlags, SizingStretchSame)
        .VALUE(ImGui, TableFlags, NoHostExtendX)
        .VALUE(ImGui, TableFlags, NoHostExtendY)
        .VALUE(ImGui, TableFlags, NoKeepColumnsVisible)
        .VALUE(ImGui, TableFlags, PreciseWidths)
        .VALUE(ImGui, TableFlags, NoClip)
        .VALUE(ImGui, TableFlags, PadOuterX)
        .VALUE(ImGui, TableFlags, NoPadOuterX)
        .VALUE(ImGui, TableFlags, NoPadInnerX)
        .VALUE(ImGui, TableFlags, ScrollX)
        .VALUE(ImGui, TableFlags, ScrollY)
        .VALUE(ImGui, TableFlags, SortMulti)
        .VALUE(ImGui, TableFlags, SortTristate);

    ENUM(ImGui, TableColumnFlags)
        .RAW_VALUE(None_, ImGuiTableColumnFlags_None)
        .VALUE(ImGui, TableColumnFlags, Disabled)
        .VALUE(ImGui, TableColumnFlags, DefaultHide)
        .VALUE(ImGui, TableColumnFlags, DefaultSort)
        .VALUE(ImGui, TableColumnFlags, WidthStretch)
        .VALUE(ImGui, TableColumnFlags, WidthFixed)
        .VALUE(ImGui, TableColumnFlags, NoResize)
        .VALUE(ImGui, TableColumnFlags, NoReorder)
        .VALUE(ImGui, TableColumnFlags, NoHide)
        .VALUE(ImGui, TableColumnFlags, NoClip)
        .VALUE(ImGui, TableColumnFlags, NoSort)
        .VALUE(ImGui, TableColumnFlags, NoSortAscending)
        .VALUE(ImGui, TableColumnFlags, NoSortDescending)
        .VALUE(ImGui, TableColumnFlags, NoHeaderLabel)
        .VALUE(ImGui, TableColumnFlags, NoHeaderWidth)
        .VALUE(ImGui, TableColumnFlags, PreferSortAscending)
        .VALUE(ImGui, TableColumnFlags, PreferSortDescending)
        .VALUE(ImGui, TableColumnFlags, IndentEnable)
        .VALUE(ImGui, TableColumnFlags, IndentDisable)
        .VALUE(ImGui, TableColumnFlags, IsEnabled)
        .VALUE(ImGui, TableColumnFlags, IsVisible)
        .VALUE(ImGui, TableColumnFlags, IsSorted)
        .VALUE(ImGui, TableColumnFlags, IsHovered);

    ENUM(ImGui, TableRowFlags)
        .RAW_VALUE(None_, ImGuiTableRowFlags_None)
        .VALUE(ImGui, TableRowFlags, Headers);

    ENUM(ImGui, TableBgTarget)
        .RAW_VALUE(None_, ImGuiTableBgTarget_None)
        .VALUE(ImGui, TableBgTarget, RowBg0)
        .VALUE(ImGui, TableBgTarget, RowBg1)
        .VALUE(ImGui, TableBgTarget, CellBg);

    ENUM(ImGui, FocusedFlags)
        .RAW_VALUE(None_, ImGuiFocusedFlags_None)
        .VALUE(ImGui, FocusedFlags, ChildWindows)
        .VALUE(ImGui, FocusedFlags, RootWindow)
        .VALUE(ImGui, FocusedFlags, AnyWindow)
        .VALUE(ImGui, FocusedFlags, NoPopupHierarchy)
        .VALUE(ImGui, FocusedFlags, RootAndChildWindows);

    ENUM(ImGui, HoveredFlags)
        .RAW_VALUE(None_, ImGuiHoveredFlags_None)
        .VALUE(ImGui, HoveredFlags, ChildWindows)
        .VALUE(ImGui, HoveredFlags, RootWindow)
        .VALUE(ImGui, HoveredFlags, AnyWindow)
        .VALUE(ImGui, HoveredFlags, NoPopupHierarchy)
        .VALUE(ImGui, HoveredFlags, AllowWhenBlockedByPopup)
        .VALUE(ImGui, HoveredFlags, AllowWhenBlockedByActiveItem)
        .VALUE(ImGui, HoveredFlags, AllowWhenOverlapped)
        .VALUE(ImGui, HoveredFlags, AllowWhenDisabled)
        .VALUE(ImGui, HoveredFlags, NoNavOverride)
        .VALUE(ImGui, HoveredFlags, RectOnly)
        .VALUE(ImGui, HoveredFlags, RootAndChildWindows)
        .VALUE(ImGui, HoveredFlags, DelayNormal)
        .VALUE(ImGui, HoveredFlags, DelayShort)
        .VALUE(ImGui, HoveredFlags, NoSharedDelay);

    ENUM(ImGui, DragDropFlags)
        .RAW_VALUE(None_, ImGuiDragDropFlags_None)
        .VALUE(ImGui, DragDropFlags, SourceNoPreviewTooltip)
        .VALUE(ImGui, DragDropFlags, SourceNoDisableHover)
        .VALUE(ImGui, DragDropFlags, SourceNoHoldToOpenOthers)
        .VALUE(ImGui, DragDropFlags, SourceAllowNullID)
        .VALUE(ImGui, DragDropFlags, SourceExtern)
        .VALUE(ImGui, DragDropFlags, SourceAutoExpirePayload)
        .VALUE(ImGui, DragDropFlags, AcceptBeforeDelivery)
        .VALUE(ImGui, DragDropFlags, AcceptNoDrawDefaultRect)
        .VALUE(ImGui, DragDropFlags, AcceptNoPreviewTooltip)
        .VALUE(ImGui, DragDropFlags, AcceptPeekOnly);

    ENUM(ImGui, Dir)
        .RAW_VALUE(None_, ImGuiDir_None)
        .VALUE(ImGui, Dir, Left)
        .VALUE(ImGui, Dir, Right)
        .VALUE(ImGui, Dir, Up)
        .VALUE(ImGui, Dir, Down);

    ENUM(ImGui, SortDirection)
        .RAW_VALUE(None_, ImGuiSortDirection_None)
        .VALUE(ImGui, SortDirection, Ascending)
        .VALUE(ImGui, SortDirection, Descending);

    RAW_ENUM(ImGuiKey, ImKey)
        .RAW_VALUE(None_, ImGuiKey_None)
        .VALUE(ImGui, Key, Tab)
        .VALUE(ImGui, Key, LeftArrow)
        .VALUE(ImGui, Key, RightArrow)
        .VALUE(ImGui, Key, UpArrow)
        .VALUE(ImGui, Key, DownArrow)
        .VALUE(ImGui, Key, PageUp)
        .VALUE(ImGui, Key, PageDown)
        .VALUE(ImGui, Key, Home)
        .VALUE(ImGui, Key, End)
        .VALUE(ImGui, Key, Insert)
        .VALUE(ImGui, Key, Delete)
        .VALUE(ImGui, Key, Backspace)
        .VALUE(ImGui, Key, Space)
        .VALUE(ImGui, Key, Enter)
        .VALUE(ImGui, Key, Escape)
        .VALUE(ImGui, Key, LeftCtrl)
        .VALUE(ImGui, Key, LeftShift)
        .VALUE(ImGui, Key, LeftAlt)
        .VALUE(ImGui, Key, LeftSuper)
        .VALUE(ImGui, Key, RightCtrl)
        .VALUE(ImGui, Key, RightShift)
        .VALUE(ImGui, Key, RightAlt)
        .VALUE(ImGui, Key, RightSuper)
        .VALUE(ImGui, Key, Menu)
        .RAW_VALUE(_0, ImGuiKey_0)
        .RAW_VALUE(_1, ImGuiKey_1)
        .RAW_VALUE(_2, ImGuiKey_2)
        .RAW_VALUE(_3, ImGuiKey_3)
        .RAW_VALUE(_4, ImGuiKey_4)
        .RAW_VALUE(_5, ImGuiKey_5)
        .RAW_VALUE(_6, ImGuiKey_6)
        .RAW_VALUE(_7, ImGuiKey_7)
        .RAW_VALUE(_8, ImGuiKey_8)
        .RAW_VALUE(_9, ImGuiKey_9)
        .VALUE(ImGui, Key, A)
        .VALUE(ImGui, Key, B)
        .VALUE(ImGui, Key, C)
        .VALUE(ImGui, Key, D)
        .VALUE(ImGui, Key, E)
        .VALUE(ImGui, Key, F)
        .VALUE(ImGui, Key, G)
        .VALUE(ImGui, Key, H)
        .VALUE(ImGui, Key, I)
        .VALUE(ImGui, Key, J)
        .VALUE(ImGui, Key, K)
        .VALUE(ImGui, Key, L)
        .VALUE(ImGui, Key, M)
        .VALUE(ImGui, Key, N)
        .VALUE(ImGui, Key, O)
        .VALUE(ImGui, Key, P)
        .VALUE(ImGui, Key, Q)
        .VALUE(ImGui, Key, R)
        .VALUE(ImGui, Key, S)
        .VALUE(ImGui, Key, T)
        .VALUE(ImGui, Key, U)
        .VALUE(ImGui, Key, V)
        .VALUE(ImGui, Key, W)
        .VALUE(ImGui, Key, X)
        .VALUE(ImGui, Key, Y)
        .VALUE(ImGui, Key, Z)
        .VALUE(ImGui, Key, F1)
        .VALUE(ImGui, Key, F2)
        .VALUE(ImGui, Key, F3)
        .VALUE(ImGui, Key, F4)
        .VALUE(ImGui, Key, F5)
        .VALUE(ImGui, Key, F6)
        .VALUE(ImGui, Key, F7)
        .VALUE(ImGui, Key, F8)
        .VALUE(ImGui, Key, F9)
        .VALUE(ImGui, Key, F10)
        .VALUE(ImGui, Key, F11)
        .VALUE(ImGui, Key, F12)
        .VALUE(ImGui, Key, Apostrophe)
        .VALUE(ImGui, Key, Comma)
        .VALUE(ImGui, Key, Minus)
        .VALUE(ImGui, Key, Period)
        .VALUE(ImGui, Key, Slash)
        .VALUE(ImGui, Key, Semicolon)
        .VALUE(ImGui, Key, Equal)
        .VALUE(ImGui, Key, LeftBracket)
        .VALUE(ImGui, Key, Backslash)
        .VALUE(ImGui, Key, RightBracket)
        .VALUE(ImGui, Key, GraveAccent)
        .VALUE(ImGui, Key, CapsLock)
        .VALUE(ImGui, Key, ScrollLock)
        .VALUE(ImGui, Key, NumLock)
        .VALUE(ImGui, Key, PrintScreen)
        .VALUE(ImGui, Key, Pause)
        .VALUE(ImGui, Key, Keypad0)
        .VALUE(ImGui, Key, Keypad1)
        .VALUE(ImGui, Key, Keypad2)
        .VALUE(ImGui, Key, Keypad3)
        .VALUE(ImGui, Key, Keypad4)
        .VALUE(ImGui, Key, Keypad5)
        .VALUE(ImGui, Key, Keypad6)
        .VALUE(ImGui, Key, Keypad7)
        .VALUE(ImGui, Key, Keypad8)
        .VALUE(ImGui, Key, Keypad9)
        .VALUE(ImGui, Key, KeypadDecimal)
        .VALUE(ImGui, Key, KeypadDivide)
        .VALUE(ImGui, Key, KeypadMultiply)
        .VALUE(ImGui, Key, KeypadSubtract)
        .VALUE(ImGui, Key, KeypadAdd)
        .VALUE(ImGui, Key, KeypadEnter)
        .VALUE(ImGui, Key, KeypadEqual)
        .VALUE(ImGui, Key, GamepadStart)
        .VALUE(ImGui, Key, GamepadBack)
        .VALUE(ImGui, Key, GamepadFaceLeft)
        .VALUE(ImGui, Key, GamepadFaceRight)
        .VALUE(ImGui, Key, GamepadFaceUp)
        .VALUE(ImGui, Key, GamepadFaceDown)
        .VALUE(ImGui, Key, GamepadDpadLeft)
        .VALUE(ImGui, Key, GamepadDpadRight)
        .VALUE(ImGui, Key, GamepadDpadUp)
        .VALUE(ImGui, Key, GamepadDpadDown)
        .VALUE(ImGui, Key, GamepadL1)
        .VALUE(ImGui, Key, GamepadR1)
        .VALUE(ImGui, Key, GamepadL2)
        .VALUE(ImGui, Key, GamepadR2)
        .VALUE(ImGui, Key, GamepadL3)
        .VALUE(ImGui, Key, GamepadR3)
        .VALUE(ImGui, Key, GamepadLStickLeft)
        .VALUE(ImGui, Key, GamepadLStickRight)
        .VALUE(ImGui, Key, GamepadLStickUp)
        .VALUE(ImGui, Key, GamepadLStickDown)
        .VALUE(ImGui, Key, GamepadRStickLeft)
        .VALUE(ImGui, Key, GamepadRStickRight)
        .VALUE(ImGui, Key, GamepadRStickUp)
        .VALUE(ImGui, Key, GamepadRStickDown)
        .VALUE(ImGui, Key, MouseLeft)
        .VALUE(ImGui, Key, MouseRight)
        .VALUE(ImGui, Key, MouseMiddle)
        .VALUE(ImGui, Key, MouseX1)
        .VALUE(ImGui, Key, MouseX2)
        .VALUE(ImGui, Key, MouseWheelX)
        .VALUE(ImGui, Key, MouseWheelY)
        .RAW_VALUE(Mod_None, ImGuiMod_None)
        .RAW_VALUE(Mod_Ctrl, ImGuiMod_Ctrl)
        .RAW_VALUE(Mod_Shift, ImGuiMod_Shift)
        .RAW_VALUE(Mod_Alt, ImGuiMod_Alt)
        .RAW_VALUE(Mod_Super, ImGuiMod_Super)
        .RAW_VALUE(Mod_Shortcut, ImGuiMod_Shortcut)
        .RAW_VALUE(Mod_Mask_, ImGuiMod_Mask_)
        .VALUE(ImGui, Key, NamedKey_BEGIN)
        .VALUE(ImGui, Key, NamedKey_END);

    ENUM(ImGui, ConfigFlags)
        .RAW_VALUE(None_, ImGuiConfigFlags_None)
        .VALUE(ImGui, ConfigFlags, NavEnableKeyboard)
        .VALUE(ImGui, ConfigFlags, NavEnableGamepad)
        .VALUE(ImGui, ConfigFlags, NavEnableSetMousePos)
        .VALUE(ImGui, ConfigFlags, NavNoCaptureKeyboard)
        .VALUE(ImGui, ConfigFlags, NoMouse)
        .VALUE(ImGui, ConfigFlags, NoMouseCursorChange)
        .VALUE(ImGui, ConfigFlags, IsSRGB)
        .VALUE(ImGui, ConfigFlags, IsTouchScreen);

    ENUM(ImGui, BackendFlags)
        .RAW_VALUE(None_, ImGuiBackendFlags_None)
        .VALUE(ImGui, BackendFlags, HasGamepad)
        .VALUE(ImGui, BackendFlags, HasMouseCursors)
        .VALUE(ImGui, BackendFlags, HasSetMousePos)
        .VALUE(ImGui, BackendFlags, RendererHasVtxOffset);

    ENUM(ImGui, Col)
        .VALUE(ImGui, Col, Text)
        .VALUE(ImGui, Col, TextDisabled)
        .VALUE(ImGui, Col, WindowBg)
        .VALUE(ImGui, Col, ChildBg)
        .VALUE(ImGui, Col, PopupBg)
        .VALUE(ImGui, Col, Border)
        .VALUE(ImGui, Col, BorderShadow)
        .VALUE(ImGui, Col, FrameBg)
        .VALUE(ImGui, Col, FrameBgHovered)
        .VALUE(ImGui, Col, FrameBgActive)
        .VALUE(ImGui, Col, TitleBg)
        .VALUE(ImGui, Col, TitleBgActive)
        .VALUE(ImGui, Col, TitleBgCollapsed)
        .VALUE(ImGui, Col, MenuBarBg)
        .VALUE(ImGui, Col, ScrollbarBg)
        .VALUE(ImGui, Col, ScrollbarGrab)
        .VALUE(ImGui, Col, ScrollbarGrabHovered)
        .VALUE(ImGui, Col, ScrollbarGrabActive)
        .VALUE(ImGui, Col, CheckMark)
        .VALUE(ImGui, Col, SliderGrab)
        .VALUE(ImGui, Col, SliderGrabActive)
        .VALUE(ImGui, Col, Button)
        .VALUE(ImGui, Col, ButtonHovered)
        .VALUE(ImGui, Col, ButtonActive)
        .VALUE(ImGui, Col, Header)
        .VALUE(ImGui, Col, HeaderHovered)
        .VALUE(ImGui, Col, HeaderActive)
        .VALUE(ImGui, Col, Separator)
        .VALUE(ImGui, Col, SeparatorHovered)
        .VALUE(ImGui, Col, SeparatorActive)
        .VALUE(ImGui, Col, ResizeGrip)
        .VALUE(ImGui, Col, ResizeGripHovered)
        .VALUE(ImGui, Col, ResizeGripActive)
        .VALUE(ImGui, Col, Tab)
        .VALUE(ImGui, Col, TabHovered)
        .VALUE(ImGui, Col, TabActive)
        .VALUE(ImGui, Col, TabUnfocused)
        .VALUE(ImGui, Col, TabUnfocusedActive)
        .VALUE(ImGui, Col, PlotLines)
        .VALUE(ImGui, Col, PlotLinesHovered)
        .VALUE(ImGui, Col, PlotHistogram)
        .VALUE(ImGui, Col, PlotHistogramHovered)
        .VALUE(ImGui, Col, TableHeaderBg)
        .VALUE(ImGui, Col, TableBorderStrong)
        .VALUE(ImGui, Col, TableBorderLight)
        .VALUE(ImGui, Col, TableRowBg)
        .VALUE(ImGui, Col, TableRowBgAlt)
        .VALUE(ImGui, Col, TextSelectedBg)
        .VALUE(ImGui, Col, DragDropTarget)
        .VALUE(ImGui, Col, NavHighlight)
        .VALUE(ImGui, Col, NavWindowingHighlight)
        .VALUE(ImGui, Col, NavWindowingDimBg)
        .VALUE(ImGui, Col, ModalWindowDimBg);

    ENUM(ImGui, StyleVar)
        .VALUE(ImGui, StyleVar, Alpha)
        .VALUE(ImGui, StyleVar, DisabledAlpha)
        .VALUE(ImGui, StyleVar, WindowPadding)
        .VALUE(ImGui, StyleVar, WindowRounding)
        .VALUE(ImGui, StyleVar, WindowBorderSize)
        .VALUE(ImGui, StyleVar, WindowMinSize)
        .VALUE(ImGui, StyleVar, WindowTitleAlign)
        .VALUE(ImGui, StyleVar, ChildRounding)
        .VALUE(ImGui, StyleVar, ChildBorderSize)
        .VALUE(ImGui, StyleVar, PopupRounding)
        .VALUE(ImGui, StyleVar, PopupBorderSize)
        .VALUE(ImGui, StyleVar, FramePadding)
        .VALUE(ImGui, StyleVar, FrameRounding)
        .VALUE(ImGui, StyleVar, FrameBorderSize)
        .VALUE(ImGui, StyleVar, ItemSpacing)
        .VALUE(ImGui, StyleVar, ItemInnerSpacing)
        .VALUE(ImGui, StyleVar, IndentSpacing)
        .VALUE(ImGui, StyleVar, CellPadding)
        .VALUE(ImGui, StyleVar, ScrollbarSize)
        .VALUE(ImGui, StyleVar, ScrollbarRounding)
        .VALUE(ImGui, StyleVar, GrabMinSize)
        .VALUE(ImGui, StyleVar, GrabRounding)
        .VALUE(ImGui, StyleVar, TabRounding)
        .VALUE(ImGui, StyleVar, ButtonTextAlign)
        .VALUE(ImGui, StyleVar, SelectableTextAlign);

    ENUM(ImGui, ButtonFlags)
        .RAW_VALUE(None_, ImGuiButtonFlags_None)
        .VALUE(ImGui, ButtonFlags, MouseButtonLeft)
        .VALUE(ImGui, ButtonFlags, MouseButtonRight)
        .VALUE(ImGui, ButtonFlags, MouseButtonMiddle);

    ENUM(ImGui, ColorEditFlags)
        .RAW_VALUE(None_, ImGuiColorEditFlags_None)
        .VALUE(ImGui, ColorEditFlags, NoAlpha)
        .VALUE(ImGui, ColorEditFlags, NoPicker)
        .VALUE(ImGui, ColorEditFlags, NoOptions)
        .VALUE(ImGui, ColorEditFlags, NoSmallPreview)
        .VALUE(ImGui, ColorEditFlags, NoInputs)
        .VALUE(ImGui, ColorEditFlags, NoTooltip)
        .VALUE(ImGui, ColorEditFlags, NoLabel)
        .VALUE(ImGui, ColorEditFlags, NoSidePreview)
        .VALUE(ImGui, ColorEditFlags, NoDragDrop)
        .VALUE(ImGui, ColorEditFlags, NoBorder)
        .VALUE(ImGui, ColorEditFlags, AlphaBar)
        .VALUE(ImGui, ColorEditFlags, AlphaPreview)
        .VALUE(ImGui, ColorEditFlags, AlphaPreviewHalf)
        .VALUE(ImGui, ColorEditFlags, HDR)
        .VALUE(ImGui, ColorEditFlags, DisplayRGB)
        .VALUE(ImGui, ColorEditFlags, DisplayHSV)
        .VALUE(ImGui, ColorEditFlags, DisplayHex)
        .VALUE(ImGui, ColorEditFlags, Uint8)
        .VALUE(ImGui, ColorEditFlags, Float)
        .VALUE(ImGui, ColorEditFlags, PickerHueBar)
        .VALUE(ImGui, ColorEditFlags, PickerHueWheel)
        .VALUE(ImGui, ColorEditFlags, InputRGB)
        .VALUE(ImGui, ColorEditFlags, InputHSV)
        .VALUE(ImGui, ColorEditFlags, DefaultOptions_);

    ENUM(ImGui, SliderFlags)
        .RAW_VALUE(None_, ImGuiSliderFlags_None)
        .VALUE(ImGui, SliderFlags, AlwaysClamp)
        .VALUE(ImGui, SliderFlags, Logarithmic)
        .VALUE(ImGui, SliderFlags, NoRoundToFormat)
        .VALUE(ImGui, SliderFlags, NoInput)
        .VALUE(ImGui, SliderFlags, InvalidMask_);

    ENUM(ImGui, MouseButton)
        .VALUE(ImGui, MouseButton, Left)
        .VALUE(ImGui, MouseButton, Right)
        .VALUE(ImGui, MouseButton, Middle);

    ENUM(ImGui, MouseCursor)
        .RAW_VALUE(None_, ImGuiMouseCursor_None)
        .VALUE(ImGui, MouseCursor, Arrow)
        .VALUE(ImGui, MouseCursor, TextInput)
        .VALUE(ImGui, MouseCursor, ResizeAll)
        .VALUE(ImGui, MouseCursor, ResizeNS)
        .VALUE(ImGui, MouseCursor, ResizeEW)
        .VALUE(ImGui, MouseCursor, ResizeNESW)
        .VALUE(ImGui, MouseCursor, ResizeNWSE)
        .VALUE(ImGui, MouseCursor, Hand)
        .VALUE(ImGui, MouseCursor, NotAllowed);

    ENUM(ImGui, Cond)
        .RAW_VALUE(None_, ImGuiCond_None)
        .VALUE(ImGui, Cond, Always)
        .VALUE(ImGui, Cond, Once)
        .VALUE(ImGui, Cond, FirstUseEver)
        .VALUE(ImGui, Cond, Appearing);

    ENUM(Im, DrawFlags)
        .RAW_VALUE(None_, ImDrawFlags_None)
        .VALUE(Im, DrawFlags, Closed)
        .VALUE(Im, DrawFlags, RoundCornersTopLeft)
        .VALUE(Im, DrawFlags, RoundCornersTopRight)
        .VALUE(Im, DrawFlags, RoundCornersBottomLeft)
        .VALUE(Im, DrawFlags, RoundCornersBottomRight)
        .VALUE(Im, DrawFlags, RoundCornersNone)
        .VALUE(Im, DrawFlags, RoundCornersTop)
        .VALUE(Im, DrawFlags, RoundCornersBottom)
        .VALUE(Im, DrawFlags, RoundCornersLeft)
        .VALUE(Im, DrawFlags, RoundCornersRight)
        .VALUE(Im, DrawFlags, RoundCornersAll)
        .VALUE(Im, DrawFlags, RoundCornersDefault_)
        .VALUE(Im, DrawFlags, RoundCornersMask_);

    ENUM(Im, DrawListFlags)
        .RAW_VALUE(None_, ImDrawListFlags_None)
        .VALUE(Im, DrawListFlags, AntiAliasedLines)
        .VALUE(Im, DrawListFlags, AntiAliasedLinesUseTex)
        .VALUE(Im, DrawListFlags, AntiAliasedFill)
        .VALUE(Im, DrawListFlags, AllowVtxOffset);

    ENUM(ImGui, ViewportFlags)
        .RAW_VALUE(None_, ImGuiViewportFlags_None)
        .VALUE(ImGui, ViewportFlags, IsPlatformWindow)
        .VALUE(ImGui, ViewportFlags, IsPlatformMonitor)
        .VALUE(ImGui, ViewportFlags, OwnedByApp);
}