
/* Generated data (by glib-mkenums) */

#include "config.h"
#include "clutter-enum-types.h"

/* enumerations from "./clutter-enums.h" */
#include "./clutter-enums.h"

GType
clutter_gravity_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_GRAVITY_NONE, "CLUTTER_GRAVITY_NONE", "none" },
        { CLUTTER_GRAVITY_NORTH, "CLUTTER_GRAVITY_NORTH", "north" },
        { CLUTTER_GRAVITY_NORTH_EAST, "CLUTTER_GRAVITY_NORTH_EAST", "north-east" },
        { CLUTTER_GRAVITY_EAST, "CLUTTER_GRAVITY_EAST", "east" },
        { CLUTTER_GRAVITY_SOUTH_EAST, "CLUTTER_GRAVITY_SOUTH_EAST", "south-east" },
        { CLUTTER_GRAVITY_SOUTH, "CLUTTER_GRAVITY_SOUTH", "south" },
        { CLUTTER_GRAVITY_SOUTH_WEST, "CLUTTER_GRAVITY_SOUTH_WEST", "south-west" },
        { CLUTTER_GRAVITY_WEST, "CLUTTER_GRAVITY_WEST", "west" },
        { CLUTTER_GRAVITY_NORTH_WEST, "CLUTTER_GRAVITY_NORTH_WEST", "north-west" },
        { CLUTTER_GRAVITY_CENTER, "CLUTTER_GRAVITY_CENTER", "center" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterGravity"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_rotate_axis_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_X_AXIS, "CLUTTER_X_AXIS", "x-axis" },
        { CLUTTER_Y_AXIS, "CLUTTER_Y_AXIS", "y-axis" },
        { CLUTTER_Z_AXIS, "CLUTTER_Z_AXIS", "z-axis" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterRotateAxis"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_rotate_direction_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_ROTATE_CW, "CLUTTER_ROTATE_CW", "cw" },
        { CLUTTER_ROTATE_CCW, "CLUTTER_ROTATE_CCW", "ccw" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterRotateDirection"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_request_mode_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_REQUEST_HEIGHT_FOR_WIDTH, "CLUTTER_REQUEST_HEIGHT_FOR_WIDTH", "height-for-width" },
        { CLUTTER_REQUEST_WIDTH_FOR_HEIGHT, "CLUTTER_REQUEST_WIDTH_FOR_HEIGHT", "width-for-height" },
        { CLUTTER_REQUEST_CONTENT_SIZE, "CLUTTER_REQUEST_CONTENT_SIZE", "content-size" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterRequestMode"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_animation_mode_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_CUSTOM_MODE, "CLUTTER_CUSTOM_MODE", "custom-mode" },
        { CLUTTER_LINEAR, "CLUTTER_LINEAR", "linear" },
        { CLUTTER_EASE_IN_QUAD, "CLUTTER_EASE_IN_QUAD", "ease-in-quad" },
        { CLUTTER_EASE_OUT_QUAD, "CLUTTER_EASE_OUT_QUAD", "ease-out-quad" },
        { CLUTTER_EASE_IN_OUT_QUAD, "CLUTTER_EASE_IN_OUT_QUAD", "ease-in-out-quad" },
        { CLUTTER_EASE_IN_CUBIC, "CLUTTER_EASE_IN_CUBIC", "ease-in-cubic" },
        { CLUTTER_EASE_OUT_CUBIC, "CLUTTER_EASE_OUT_CUBIC", "ease-out-cubic" },
        { CLUTTER_EASE_IN_OUT_CUBIC, "CLUTTER_EASE_IN_OUT_CUBIC", "ease-in-out-cubic" },
        { CLUTTER_EASE_IN_QUART, "CLUTTER_EASE_IN_QUART", "ease-in-quart" },
        { CLUTTER_EASE_OUT_QUART, "CLUTTER_EASE_OUT_QUART", "ease-out-quart" },
        { CLUTTER_EASE_IN_OUT_QUART, "CLUTTER_EASE_IN_OUT_QUART", "ease-in-out-quart" },
        { CLUTTER_EASE_IN_QUINT, "CLUTTER_EASE_IN_QUINT", "ease-in-quint" },
        { CLUTTER_EASE_OUT_QUINT, "CLUTTER_EASE_OUT_QUINT", "ease-out-quint" },
        { CLUTTER_EASE_IN_OUT_QUINT, "CLUTTER_EASE_IN_OUT_QUINT", "ease-in-out-quint" },
        { CLUTTER_EASE_IN_SINE, "CLUTTER_EASE_IN_SINE", "ease-in-sine" },
        { CLUTTER_EASE_OUT_SINE, "CLUTTER_EASE_OUT_SINE", "ease-out-sine" },
        { CLUTTER_EASE_IN_OUT_SINE, "CLUTTER_EASE_IN_OUT_SINE", "ease-in-out-sine" },
        { CLUTTER_EASE_IN_EXPO, "CLUTTER_EASE_IN_EXPO", "ease-in-expo" },
        { CLUTTER_EASE_OUT_EXPO, "CLUTTER_EASE_OUT_EXPO", "ease-out-expo" },
        { CLUTTER_EASE_IN_OUT_EXPO, "CLUTTER_EASE_IN_OUT_EXPO", "ease-in-out-expo" },
        { CLUTTER_EASE_IN_CIRC, "CLUTTER_EASE_IN_CIRC", "ease-in-circ" },
        { CLUTTER_EASE_OUT_CIRC, "CLUTTER_EASE_OUT_CIRC", "ease-out-circ" },
        { CLUTTER_EASE_IN_OUT_CIRC, "CLUTTER_EASE_IN_OUT_CIRC", "ease-in-out-circ" },
        { CLUTTER_EASE_IN_ELASTIC, "CLUTTER_EASE_IN_ELASTIC", "ease-in-elastic" },
        { CLUTTER_EASE_OUT_ELASTIC, "CLUTTER_EASE_OUT_ELASTIC", "ease-out-elastic" },
        { CLUTTER_EASE_IN_OUT_ELASTIC, "CLUTTER_EASE_IN_OUT_ELASTIC", "ease-in-out-elastic" },
        { CLUTTER_EASE_IN_BACK, "CLUTTER_EASE_IN_BACK", "ease-in-back" },
        { CLUTTER_EASE_OUT_BACK, "CLUTTER_EASE_OUT_BACK", "ease-out-back" },
        { CLUTTER_EASE_IN_OUT_BACK, "CLUTTER_EASE_IN_OUT_BACK", "ease-in-out-back" },
        { CLUTTER_EASE_IN_BOUNCE, "CLUTTER_EASE_IN_BOUNCE", "ease-in-bounce" },
        { CLUTTER_EASE_OUT_BOUNCE, "CLUTTER_EASE_OUT_BOUNCE", "ease-out-bounce" },
        { CLUTTER_EASE_IN_OUT_BOUNCE, "CLUTTER_EASE_IN_OUT_BOUNCE", "ease-in-out-bounce" },
        { CLUTTER_STEPS, "CLUTTER_STEPS", "steps" },
        { CLUTTER_STEP_START, "CLUTTER_STEP_START", "step-start" },
        { CLUTTER_STEP_END, "CLUTTER_STEP_END", "step-end" },
        { CLUTTER_CUBIC_BEZIER, "CLUTTER_CUBIC_BEZIER", "cubic-bezier" },
        { CLUTTER_EASE, "CLUTTER_EASE", "ease" },
        { CLUTTER_EASE_IN, "CLUTTER_EASE_IN", "ease-in" },
        { CLUTTER_EASE_OUT, "CLUTTER_EASE_OUT", "ease-out" },
        { CLUTTER_EASE_IN_OUT, "CLUTTER_EASE_IN_OUT", "ease-in-out" },
        { CLUTTER_ANIMATION_LAST, "CLUTTER_ANIMATION_LAST", "animation-last" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterAnimationMode"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_font_flags_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GFlagsValue values[] = {
        { CLUTTER_FONT_MIPMAPPING, "CLUTTER_FONT_MIPMAPPING", "mipmapping" },
        { CLUTTER_FONT_HINTING, "CLUTTER_FONT_HINTING", "hinting" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_flags_register_static (g_intern_static_string ("ClutterFontFlags"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_text_direction_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_TEXT_DIRECTION_DEFAULT, "CLUTTER_TEXT_DIRECTION_DEFAULT", "default" },
        { CLUTTER_TEXT_DIRECTION_LTR, "CLUTTER_TEXT_DIRECTION_LTR", "ltr" },
        { CLUTTER_TEXT_DIRECTION_RTL, "CLUTTER_TEXT_DIRECTION_RTL", "rtl" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterTextDirection"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_shader_type_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_VERTEX_SHADER, "CLUTTER_VERTEX_SHADER", "vertex-shader" },
        { CLUTTER_FRAGMENT_SHADER, "CLUTTER_FRAGMENT_SHADER", "fragment-shader" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterShaderType"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_modifier_type_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GFlagsValue values[] = {
        { CLUTTER_SHIFT_MASK, "CLUTTER_SHIFT_MASK", "shift-mask" },
        { CLUTTER_LOCK_MASK, "CLUTTER_LOCK_MASK", "lock-mask" },
        { CLUTTER_CONTROL_MASK, "CLUTTER_CONTROL_MASK", "control-mask" },
        { CLUTTER_MOD1_MASK, "CLUTTER_MOD1_MASK", "mod1-mask" },
        { CLUTTER_MOD2_MASK, "CLUTTER_MOD2_MASK", "mod2-mask" },
        { CLUTTER_MOD3_MASK, "CLUTTER_MOD3_MASK", "mod3-mask" },
        { CLUTTER_MOD4_MASK, "CLUTTER_MOD4_MASK", "mod4-mask" },
        { CLUTTER_MOD5_MASK, "CLUTTER_MOD5_MASK", "mod5-mask" },
        { CLUTTER_BUTTON1_MASK, "CLUTTER_BUTTON1_MASK", "button1-mask" },
        { CLUTTER_BUTTON2_MASK, "CLUTTER_BUTTON2_MASK", "button2-mask" },
        { CLUTTER_BUTTON3_MASK, "CLUTTER_BUTTON3_MASK", "button3-mask" },
        { CLUTTER_BUTTON4_MASK, "CLUTTER_BUTTON4_MASK", "button4-mask" },
        { CLUTTER_BUTTON5_MASK, "CLUTTER_BUTTON5_MASK", "button5-mask" },
        { CLUTTER_MODIFIER_RESERVED_13_MASK, "CLUTTER_MODIFIER_RESERVED_13_MASK", "modifier-reserved-13-mask" },
        { CLUTTER_MODIFIER_RESERVED_14_MASK, "CLUTTER_MODIFIER_RESERVED_14_MASK", "modifier-reserved-14-mask" },
        { CLUTTER_MODIFIER_RESERVED_15_MASK, "CLUTTER_MODIFIER_RESERVED_15_MASK", "modifier-reserved-15-mask" },
        { CLUTTER_MODIFIER_RESERVED_16_MASK, "CLUTTER_MODIFIER_RESERVED_16_MASK", "modifier-reserved-16-mask" },
        { CLUTTER_MODIFIER_RESERVED_17_MASK, "CLUTTER_MODIFIER_RESERVED_17_MASK", "modifier-reserved-17-mask" },
        { CLUTTER_MODIFIER_RESERVED_18_MASK, "CLUTTER_MODIFIER_RESERVED_18_MASK", "modifier-reserved-18-mask" },
        { CLUTTER_MODIFIER_RESERVED_19_MASK, "CLUTTER_MODIFIER_RESERVED_19_MASK", "modifier-reserved-19-mask" },
        { CLUTTER_MODIFIER_RESERVED_20_MASK, "CLUTTER_MODIFIER_RESERVED_20_MASK", "modifier-reserved-20-mask" },
        { CLUTTER_MODIFIER_RESERVED_21_MASK, "CLUTTER_MODIFIER_RESERVED_21_MASK", "modifier-reserved-21-mask" },
        { CLUTTER_MODIFIER_RESERVED_22_MASK, "CLUTTER_MODIFIER_RESERVED_22_MASK", "modifier-reserved-22-mask" },
        { CLUTTER_MODIFIER_RESERVED_23_MASK, "CLUTTER_MODIFIER_RESERVED_23_MASK", "modifier-reserved-23-mask" },
        { CLUTTER_MODIFIER_RESERVED_24_MASK, "CLUTTER_MODIFIER_RESERVED_24_MASK", "modifier-reserved-24-mask" },
        { CLUTTER_MODIFIER_RESERVED_25_MASK, "CLUTTER_MODIFIER_RESERVED_25_MASK", "modifier-reserved-25-mask" },
        { CLUTTER_SUPER_MASK, "CLUTTER_SUPER_MASK", "super-mask" },
        { CLUTTER_HYPER_MASK, "CLUTTER_HYPER_MASK", "hyper-mask" },
        { CLUTTER_META_MASK, "CLUTTER_META_MASK", "meta-mask" },
        { CLUTTER_MODIFIER_RESERVED_29_MASK, "CLUTTER_MODIFIER_RESERVED_29_MASK", "modifier-reserved-29-mask" },
        { CLUTTER_RELEASE_MASK, "CLUTTER_RELEASE_MASK", "release-mask" },
        { CLUTTER_MODIFIER_MASK, "CLUTTER_MODIFIER_MASK", "modifier-mask" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_flags_register_static (g_intern_static_string ("ClutterModifierType"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_actor_flags_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GFlagsValue values[] = {
        { CLUTTER_ACTOR_MAPPED, "CLUTTER_ACTOR_MAPPED", "mapped" },
        { CLUTTER_ACTOR_REALIZED, "CLUTTER_ACTOR_REALIZED", "realized" },
        { CLUTTER_ACTOR_REACTIVE, "CLUTTER_ACTOR_REACTIVE", "reactive" },
        { CLUTTER_ACTOR_VISIBLE, "CLUTTER_ACTOR_VISIBLE", "visible" },
        { CLUTTER_ACTOR_NO_LAYOUT, "CLUTTER_ACTOR_NO_LAYOUT", "no-layout" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_flags_register_static (g_intern_static_string ("ClutterActorFlags"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_offscreen_redirect_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GFlagsValue values[] = {
        { CLUTTER_OFFSCREEN_REDIRECT_AUTOMATIC_FOR_OPACITY, "CLUTTER_OFFSCREEN_REDIRECT_AUTOMATIC_FOR_OPACITY", "automatic-for-opacity" },
        { CLUTTER_OFFSCREEN_REDIRECT_ALWAYS, "CLUTTER_OFFSCREEN_REDIRECT_ALWAYS", "always" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_flags_register_static (g_intern_static_string ("ClutterOffscreenRedirect"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_allocation_flags_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GFlagsValue values[] = {
        { CLUTTER_ALLOCATION_NONE, "CLUTTER_ALLOCATION_NONE", "allocation-none" },
        { CLUTTER_ABSOLUTE_ORIGIN_CHANGED, "CLUTTER_ABSOLUTE_ORIGIN_CHANGED", "absolute-origin-changed" },
        { CLUTTER_DELEGATE_LAYOUT, "CLUTTER_DELEGATE_LAYOUT", "delegate-layout" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_flags_register_static (g_intern_static_string ("ClutterAllocationFlags"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_align_axis_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_ALIGN_X_AXIS, "CLUTTER_ALIGN_X_AXIS", "x-axis" },
        { CLUTTER_ALIGN_Y_AXIS, "CLUTTER_ALIGN_Y_AXIS", "y-axis" },
        { CLUTTER_ALIGN_BOTH, "CLUTTER_ALIGN_BOTH", "both" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterAlignAxis"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_interpolation_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_INTERPOLATION_LINEAR, "CLUTTER_INTERPOLATION_LINEAR", "linear" },
        { CLUTTER_INTERPOLATION_CUBIC, "CLUTTER_INTERPOLATION_CUBIC", "cubic" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterInterpolation"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_bin_alignment_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_BIN_ALIGNMENT_FIXED, "CLUTTER_BIN_ALIGNMENT_FIXED", "fixed" },
        { CLUTTER_BIN_ALIGNMENT_FILL, "CLUTTER_BIN_ALIGNMENT_FILL", "fill" },
        { CLUTTER_BIN_ALIGNMENT_START, "CLUTTER_BIN_ALIGNMENT_START", "start" },
        { CLUTTER_BIN_ALIGNMENT_END, "CLUTTER_BIN_ALIGNMENT_END", "end" },
        { CLUTTER_BIN_ALIGNMENT_CENTER, "CLUTTER_BIN_ALIGNMENT_CENTER", "center" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterBinAlignment"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_bind_coordinate_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_BIND_X, "CLUTTER_BIND_X", "x" },
        { CLUTTER_BIND_Y, "CLUTTER_BIND_Y", "y" },
        { CLUTTER_BIND_WIDTH, "CLUTTER_BIND_WIDTH", "width" },
        { CLUTTER_BIND_HEIGHT, "CLUTTER_BIND_HEIGHT", "height" },
        { CLUTTER_BIND_POSITION, "CLUTTER_BIND_POSITION", "position" },
        { CLUTTER_BIND_SIZE, "CLUTTER_BIND_SIZE", "size" },
        { CLUTTER_BIND_ALL, "CLUTTER_BIND_ALL", "all" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterBindCoordinate"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_effect_paint_flags_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GFlagsValue values[] = {
        { CLUTTER_EFFECT_PAINT_ACTOR_DIRTY, "CLUTTER_EFFECT_PAINT_ACTOR_DIRTY", "actor-dirty" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_flags_register_static (g_intern_static_string ("ClutterEffectPaintFlags"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_box_alignment_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_BOX_ALIGNMENT_START, "CLUTTER_BOX_ALIGNMENT_START", "start" },
        { CLUTTER_BOX_ALIGNMENT_END, "CLUTTER_BOX_ALIGNMENT_END", "end" },
        { CLUTTER_BOX_ALIGNMENT_CENTER, "CLUTTER_BOX_ALIGNMENT_CENTER", "center" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterBoxAlignment"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_long_press_state_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_LONG_PRESS_QUERY, "CLUTTER_LONG_PRESS_QUERY", "query" },
        { CLUTTER_LONG_PRESS_ACTIVATE, "CLUTTER_LONG_PRESS_ACTIVATE", "activate" },
        { CLUTTER_LONG_PRESS_CANCEL, "CLUTTER_LONG_PRESS_CANCEL", "cancel" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterLongPressState"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_static_color_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_COLOR_WHITE, "CLUTTER_COLOR_WHITE", "white" },
        { CLUTTER_COLOR_BLACK, "CLUTTER_COLOR_BLACK", "black" },
        { CLUTTER_COLOR_RED, "CLUTTER_COLOR_RED", "red" },
        { CLUTTER_COLOR_DARK_RED, "CLUTTER_COLOR_DARK_RED", "dark-red" },
        { CLUTTER_COLOR_GREEN, "CLUTTER_COLOR_GREEN", "green" },
        { CLUTTER_COLOR_DARK_GREEN, "CLUTTER_COLOR_DARK_GREEN", "dark-green" },
        { CLUTTER_COLOR_BLUE, "CLUTTER_COLOR_BLUE", "blue" },
        { CLUTTER_COLOR_DARK_BLUE, "CLUTTER_COLOR_DARK_BLUE", "dark-blue" },
        { CLUTTER_COLOR_CYAN, "CLUTTER_COLOR_CYAN", "cyan" },
        { CLUTTER_COLOR_DARK_CYAN, "CLUTTER_COLOR_DARK_CYAN", "dark-cyan" },
        { CLUTTER_COLOR_MAGENTA, "CLUTTER_COLOR_MAGENTA", "magenta" },
        { CLUTTER_COLOR_DARK_MAGENTA, "CLUTTER_COLOR_DARK_MAGENTA", "dark-magenta" },
        { CLUTTER_COLOR_YELLOW, "CLUTTER_COLOR_YELLOW", "yellow" },
        { CLUTTER_COLOR_DARK_YELLOW, "CLUTTER_COLOR_DARK_YELLOW", "dark-yellow" },
        { CLUTTER_COLOR_GRAY, "CLUTTER_COLOR_GRAY", "gray" },
        { CLUTTER_COLOR_DARK_GRAY, "CLUTTER_COLOR_DARK_GRAY", "dark-gray" },
        { CLUTTER_COLOR_LIGHT_GRAY, "CLUTTER_COLOR_LIGHT_GRAY", "light-gray" },
        { CLUTTER_COLOR_BUTTER, "CLUTTER_COLOR_BUTTER", "butter" },
        { CLUTTER_COLOR_BUTTER_LIGHT, "CLUTTER_COLOR_BUTTER_LIGHT", "butter-light" },
        { CLUTTER_COLOR_BUTTER_DARK, "CLUTTER_COLOR_BUTTER_DARK", "butter-dark" },
        { CLUTTER_COLOR_ORANGE, "CLUTTER_COLOR_ORANGE", "orange" },
        { CLUTTER_COLOR_ORANGE_LIGHT, "CLUTTER_COLOR_ORANGE_LIGHT", "orange-light" },
        { CLUTTER_COLOR_ORANGE_DARK, "CLUTTER_COLOR_ORANGE_DARK", "orange-dark" },
        { CLUTTER_COLOR_CHOCOLATE, "CLUTTER_COLOR_CHOCOLATE", "chocolate" },
        { CLUTTER_COLOR_CHOCOLATE_LIGHT, "CLUTTER_COLOR_CHOCOLATE_LIGHT", "chocolate-light" },
        { CLUTTER_COLOR_CHOCOLATE_DARK, "CLUTTER_COLOR_CHOCOLATE_DARK", "chocolate-dark" },
        { CLUTTER_COLOR_CHAMELEON, "CLUTTER_COLOR_CHAMELEON", "chameleon" },
        { CLUTTER_COLOR_CHAMELEON_LIGHT, "CLUTTER_COLOR_CHAMELEON_LIGHT", "chameleon-light" },
        { CLUTTER_COLOR_CHAMELEON_DARK, "CLUTTER_COLOR_CHAMELEON_DARK", "chameleon-dark" },
        { CLUTTER_COLOR_SKY_BLUE, "CLUTTER_COLOR_SKY_BLUE", "sky-blue" },
        { CLUTTER_COLOR_SKY_BLUE_LIGHT, "CLUTTER_COLOR_SKY_BLUE_LIGHT", "sky-blue-light" },
        { CLUTTER_COLOR_SKY_BLUE_DARK, "CLUTTER_COLOR_SKY_BLUE_DARK", "sky-blue-dark" },
        { CLUTTER_COLOR_PLUM, "CLUTTER_COLOR_PLUM", "plum" },
        { CLUTTER_COLOR_PLUM_LIGHT, "CLUTTER_COLOR_PLUM_LIGHT", "plum-light" },
        { CLUTTER_COLOR_PLUM_DARK, "CLUTTER_COLOR_PLUM_DARK", "plum-dark" },
        { CLUTTER_COLOR_SCARLET_RED, "CLUTTER_COLOR_SCARLET_RED", "scarlet-red" },
        { CLUTTER_COLOR_SCARLET_RED_LIGHT, "CLUTTER_COLOR_SCARLET_RED_LIGHT", "scarlet-red-light" },
        { CLUTTER_COLOR_SCARLET_RED_DARK, "CLUTTER_COLOR_SCARLET_RED_DARK", "scarlet-red-dark" },
        { CLUTTER_COLOR_ALUMINIUM_1, "CLUTTER_COLOR_ALUMINIUM_1", "aluminium-1" },
        { CLUTTER_COLOR_ALUMINIUM_2, "CLUTTER_COLOR_ALUMINIUM_2", "aluminium-2" },
        { CLUTTER_COLOR_ALUMINIUM_3, "CLUTTER_COLOR_ALUMINIUM_3", "aluminium-3" },
        { CLUTTER_COLOR_ALUMINIUM_4, "CLUTTER_COLOR_ALUMINIUM_4", "aluminium-4" },
        { CLUTTER_COLOR_ALUMINIUM_5, "CLUTTER_COLOR_ALUMINIUM_5", "aluminium-5" },
        { CLUTTER_COLOR_ALUMINIUM_6, "CLUTTER_COLOR_ALUMINIUM_6", "aluminium-6" },
        { CLUTTER_COLOR_TRANSPARENT, "CLUTTER_COLOR_TRANSPARENT", "transparent" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterStaticColor"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_drag_axis_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_DRAG_AXIS_NONE, "CLUTTER_DRAG_AXIS_NONE", "axis-none" },
        { CLUTTER_DRAG_X_AXIS, "CLUTTER_DRAG_X_AXIS", "x-axis" },
        { CLUTTER_DRAG_Y_AXIS, "CLUTTER_DRAG_Y_AXIS", "y-axis" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterDragAxis"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_event_flags_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GFlagsValue values[] = {
        { CLUTTER_EVENT_NONE, "CLUTTER_EVENT_NONE", "none" },
        { CLUTTER_EVENT_FLAG_SYNTHETIC, "CLUTTER_EVENT_FLAG_SYNTHETIC", "flag-synthetic" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_flags_register_static (g_intern_static_string ("ClutterEventFlags"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_event_type_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_NOTHING, "CLUTTER_NOTHING", "nothing" },
        { CLUTTER_KEY_PRESS, "CLUTTER_KEY_PRESS", "key-press" },
        { CLUTTER_KEY_RELEASE, "CLUTTER_KEY_RELEASE", "key-release" },
        { CLUTTER_MOTION, "CLUTTER_MOTION", "motion" },
        { CLUTTER_ENTER, "CLUTTER_ENTER", "enter" },
        { CLUTTER_LEAVE, "CLUTTER_LEAVE", "leave" },
        { CLUTTER_BUTTON_PRESS, "CLUTTER_BUTTON_PRESS", "button-press" },
        { CLUTTER_BUTTON_RELEASE, "CLUTTER_BUTTON_RELEASE", "button-release" },
        { CLUTTER_SCROLL, "CLUTTER_SCROLL", "scroll" },
        { CLUTTER_STAGE_STATE, "CLUTTER_STAGE_STATE", "stage-state" },
        { CLUTTER_DESTROY_NOTIFY, "CLUTTER_DESTROY_NOTIFY", "destroy-notify" },
        { CLUTTER_CLIENT_MESSAGE, "CLUTTER_CLIENT_MESSAGE", "client-message" },
        { CLUTTER_DELETE, "CLUTTER_DELETE", "delete" },
        { CLUTTER_TOUCH_BEGIN, "CLUTTER_TOUCH_BEGIN", "touch-begin" },
        { CLUTTER_TOUCH_UPDATE, "CLUTTER_TOUCH_UPDATE", "touch-update" },
        { CLUTTER_TOUCH_END, "CLUTTER_TOUCH_END", "touch-end" },
        { CLUTTER_TOUCH_CANCEL, "CLUTTER_TOUCH_CANCEL", "touch-cancel" },
        { CLUTTER_TOUCHPAD_PINCH, "CLUTTER_TOUCHPAD_PINCH", "touchpad-pinch" },
        { CLUTTER_TOUCHPAD_SWIPE, "CLUTTER_TOUCHPAD_SWIPE", "touchpad-swipe" },
        { CLUTTER_EVENT_LAST, "CLUTTER_EVENT_LAST", "event-last" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterEventType"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_scroll_direction_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_SCROLL_UP, "CLUTTER_SCROLL_UP", "up" },
        { CLUTTER_SCROLL_DOWN, "CLUTTER_SCROLL_DOWN", "down" },
        { CLUTTER_SCROLL_LEFT, "CLUTTER_SCROLL_LEFT", "left" },
        { CLUTTER_SCROLL_RIGHT, "CLUTTER_SCROLL_RIGHT", "right" },
        { CLUTTER_SCROLL_SMOOTH, "CLUTTER_SCROLL_SMOOTH", "smooth" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterScrollDirection"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_stage_state_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GFlagsValue values[] = {
        { CLUTTER_STAGE_STATE_FULLSCREEN, "CLUTTER_STAGE_STATE_FULLSCREEN", "fullscreen" },
        { CLUTTER_STAGE_STATE_OFFSCREEN, "CLUTTER_STAGE_STATE_OFFSCREEN", "offscreen" },
        { CLUTTER_STAGE_STATE_ACTIVATED, "CLUTTER_STAGE_STATE_ACTIVATED", "activated" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_flags_register_static (g_intern_static_string ("ClutterStageState"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_feature_flags_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GFlagsValue values[] = {
        { CLUTTER_FEATURE_TEXTURE_NPOT, "CLUTTER_FEATURE_TEXTURE_NPOT", "texture-npot" },
        { CLUTTER_FEATURE_SYNC_TO_VBLANK, "CLUTTER_FEATURE_SYNC_TO_VBLANK", "sync-to-vblank" },
        { CLUTTER_FEATURE_TEXTURE_YUV, "CLUTTER_FEATURE_TEXTURE_YUV", "texture-yuv" },
        { CLUTTER_FEATURE_TEXTURE_READ_PIXELS, "CLUTTER_FEATURE_TEXTURE_READ_PIXELS", "texture-read-pixels" },
        { CLUTTER_FEATURE_STAGE_STATIC, "CLUTTER_FEATURE_STAGE_STATIC", "stage-static" },
        { CLUTTER_FEATURE_STAGE_USER_RESIZE, "CLUTTER_FEATURE_STAGE_USER_RESIZE", "stage-user-resize" },
        { CLUTTER_FEATURE_STAGE_CURSOR, "CLUTTER_FEATURE_STAGE_CURSOR", "stage-cursor" },
        { CLUTTER_FEATURE_SHADERS_GLSL, "CLUTTER_FEATURE_SHADERS_GLSL", "shaders-glsl" },
        { CLUTTER_FEATURE_OFFSCREEN, "CLUTTER_FEATURE_OFFSCREEN", "offscreen" },
        { CLUTTER_FEATURE_STAGE_MULTIPLE, "CLUTTER_FEATURE_STAGE_MULTIPLE", "stage-multiple" },
        { CLUTTER_FEATURE_SWAP_EVENTS, "CLUTTER_FEATURE_SWAP_EVENTS", "swap-events" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_flags_register_static (g_intern_static_string ("ClutterFeatureFlags"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_flow_orientation_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_FLOW_HORIZONTAL, "CLUTTER_FLOW_HORIZONTAL", "horizontal" },
        { CLUTTER_FLOW_VERTICAL, "CLUTTER_FLOW_VERTICAL", "vertical" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterFlowOrientation"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_input_device_type_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_POINTER_DEVICE, "CLUTTER_POINTER_DEVICE", "pointer-device" },
        { CLUTTER_KEYBOARD_DEVICE, "CLUTTER_KEYBOARD_DEVICE", "keyboard-device" },
        { CLUTTER_EXTENSION_DEVICE, "CLUTTER_EXTENSION_DEVICE", "extension-device" },
        { CLUTTER_JOYSTICK_DEVICE, "CLUTTER_JOYSTICK_DEVICE", "joystick-device" },
        { CLUTTER_TABLET_DEVICE, "CLUTTER_TABLET_DEVICE", "tablet-device" },
        { CLUTTER_TOUCHPAD_DEVICE, "CLUTTER_TOUCHPAD_DEVICE", "touchpad-device" },
        { CLUTTER_TOUCHSCREEN_DEVICE, "CLUTTER_TOUCHSCREEN_DEVICE", "touchscreen-device" },
        { CLUTTER_PEN_DEVICE, "CLUTTER_PEN_DEVICE", "pen-device" },
        { CLUTTER_ERASER_DEVICE, "CLUTTER_ERASER_DEVICE", "eraser-device" },
        { CLUTTER_CURSOR_DEVICE, "CLUTTER_CURSOR_DEVICE", "cursor-device" },
        { CLUTTER_N_DEVICE_TYPES, "CLUTTER_N_DEVICE_TYPES", "n-device-types" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterInputDeviceType"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_input_mode_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_INPUT_MODE_MASTER, "CLUTTER_INPUT_MODE_MASTER", "master" },
        { CLUTTER_INPUT_MODE_SLAVE, "CLUTTER_INPUT_MODE_SLAVE", "slave" },
        { CLUTTER_INPUT_MODE_FLOATING, "CLUTTER_INPUT_MODE_FLOATING", "floating" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterInputMode"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_input_axis_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_INPUT_AXIS_IGNORE, "CLUTTER_INPUT_AXIS_IGNORE", "ignore" },
        { CLUTTER_INPUT_AXIS_X, "CLUTTER_INPUT_AXIS_X", "x" },
        { CLUTTER_INPUT_AXIS_Y, "CLUTTER_INPUT_AXIS_Y", "y" },
        { CLUTTER_INPUT_AXIS_PRESSURE, "CLUTTER_INPUT_AXIS_PRESSURE", "pressure" },
        { CLUTTER_INPUT_AXIS_XTILT, "CLUTTER_INPUT_AXIS_XTILT", "xtilt" },
        { CLUTTER_INPUT_AXIS_YTILT, "CLUTTER_INPUT_AXIS_YTILT", "ytilt" },
        { CLUTTER_INPUT_AXIS_WHEEL, "CLUTTER_INPUT_AXIS_WHEEL", "wheel" },
        { CLUTTER_INPUT_AXIS_DISTANCE, "CLUTTER_INPUT_AXIS_DISTANCE", "distance" },
        { CLUTTER_INPUT_AXIS_LAST, "CLUTTER_INPUT_AXIS_LAST", "last" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterInputAxis"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_snap_edge_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_SNAP_EDGE_TOP, "CLUTTER_SNAP_EDGE_TOP", "top" },
        { CLUTTER_SNAP_EDGE_RIGHT, "CLUTTER_SNAP_EDGE_RIGHT", "right" },
        { CLUTTER_SNAP_EDGE_BOTTOM, "CLUTTER_SNAP_EDGE_BOTTOM", "bottom" },
        { CLUTTER_SNAP_EDGE_LEFT, "CLUTTER_SNAP_EDGE_LEFT", "left" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterSnapEdge"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_pick_mode_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_PICK_NONE, "CLUTTER_PICK_NONE", "none" },
        { CLUTTER_PICK_REACTIVE, "CLUTTER_PICK_REACTIVE", "reactive" },
        { CLUTTER_PICK_ALL, "CLUTTER_PICK_ALL", "all" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterPickMode"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_swipe_direction_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GFlagsValue values[] = {
        { CLUTTER_SWIPE_DIRECTION_UP, "CLUTTER_SWIPE_DIRECTION_UP", "up" },
        { CLUTTER_SWIPE_DIRECTION_DOWN, "CLUTTER_SWIPE_DIRECTION_DOWN", "down" },
        { CLUTTER_SWIPE_DIRECTION_LEFT, "CLUTTER_SWIPE_DIRECTION_LEFT", "left" },
        { CLUTTER_SWIPE_DIRECTION_RIGHT, "CLUTTER_SWIPE_DIRECTION_RIGHT", "right" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_flags_register_static (g_intern_static_string ("ClutterSwipeDirection"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_pan_axis_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_PAN_AXIS_NONE, "CLUTTER_PAN_AXIS_NONE", "axis-none" },
        { CLUTTER_PAN_X_AXIS, "CLUTTER_PAN_X_AXIS", "x-axis" },
        { CLUTTER_PAN_Y_AXIS, "CLUTTER_PAN_Y_AXIS", "y-axis" },
        { CLUTTER_PAN_AXIS_AUTO, "CLUTTER_PAN_AXIS_AUTO", "axis-auto" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterPanAxis"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_table_alignment_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_TABLE_ALIGNMENT_START, "CLUTTER_TABLE_ALIGNMENT_START", "start" },
        { CLUTTER_TABLE_ALIGNMENT_CENTER, "CLUTTER_TABLE_ALIGNMENT_CENTER", "center" },
        { CLUTTER_TABLE_ALIGNMENT_END, "CLUTTER_TABLE_ALIGNMENT_END", "end" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterTableAlignment"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_texture_flags_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GFlagsValue values[] = {
        { CLUTTER_TEXTURE_NONE, "CLUTTER_TEXTURE_NONE", "none" },
        { CLUTTER_TEXTURE_RGB_FLAG_BGR, "CLUTTER_TEXTURE_RGB_FLAG_BGR", "rgb-flag-bgr" },
        { CLUTTER_TEXTURE_RGB_FLAG_PREMULT, "CLUTTER_TEXTURE_RGB_FLAG_PREMULT", "rgb-flag-premult" },
        { CLUTTER_TEXTURE_YUV_FLAG_YUV2, "CLUTTER_TEXTURE_YUV_FLAG_YUV2", "yuv-flag-yuv2" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_flags_register_static (g_intern_static_string ("ClutterTextureFlags"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_texture_quality_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_TEXTURE_QUALITY_LOW, "CLUTTER_TEXTURE_QUALITY_LOW", "low" },
        { CLUTTER_TEXTURE_QUALITY_MEDIUM, "CLUTTER_TEXTURE_QUALITY_MEDIUM", "medium" },
        { CLUTTER_TEXTURE_QUALITY_HIGH, "CLUTTER_TEXTURE_QUALITY_HIGH", "high" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterTextureQuality"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_timeline_direction_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_TIMELINE_FORWARD, "CLUTTER_TIMELINE_FORWARD", "forward" },
        { CLUTTER_TIMELINE_BACKWARD, "CLUTTER_TIMELINE_BACKWARD", "backward" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterTimelineDirection"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_unit_type_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_UNIT_PIXEL, "CLUTTER_UNIT_PIXEL", "pixel" },
        { CLUTTER_UNIT_EM, "CLUTTER_UNIT_EM", "em" },
        { CLUTTER_UNIT_MM, "CLUTTER_UNIT_MM", "mm" },
        { CLUTTER_UNIT_POINT, "CLUTTER_UNIT_POINT", "point" },
        { CLUTTER_UNIT_CM, "CLUTTER_UNIT_CM", "cm" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterUnitType"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_path_node_type_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_PATH_MOVE_TO, "CLUTTER_PATH_MOVE_TO", "move-to" },
        { CLUTTER_PATH_LINE_TO, "CLUTTER_PATH_LINE_TO", "line-to" },
        { CLUTTER_PATH_CURVE_TO, "CLUTTER_PATH_CURVE_TO", "curve-to" },
        { CLUTTER_PATH_CLOSE, "CLUTTER_PATH_CLOSE", "close" },
        { CLUTTER_PATH_REL_MOVE_TO, "CLUTTER_PATH_REL_MOVE_TO", "rel-move-to" },
        { CLUTTER_PATH_REL_LINE_TO, "CLUTTER_PATH_REL_LINE_TO", "rel-line-to" },
        { CLUTTER_PATH_REL_CURVE_TO, "CLUTTER_PATH_REL_CURVE_TO", "rel-curve-to" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterPathNodeType"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_actor_align_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_ACTOR_ALIGN_FILL, "CLUTTER_ACTOR_ALIGN_FILL", "fill" },
        { CLUTTER_ACTOR_ALIGN_START, "CLUTTER_ACTOR_ALIGN_START", "start" },
        { CLUTTER_ACTOR_ALIGN_CENTER, "CLUTTER_ACTOR_ALIGN_CENTER", "center" },
        { CLUTTER_ACTOR_ALIGN_END, "CLUTTER_ACTOR_ALIGN_END", "end" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterActorAlign"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_repaint_flags_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GFlagsValue values[] = {
        { CLUTTER_REPAINT_FLAGS_PRE_PAINT, "CLUTTER_REPAINT_FLAGS_PRE_PAINT", "pre-paint" },
        { CLUTTER_REPAINT_FLAGS_POST_PAINT, "CLUTTER_REPAINT_FLAGS_POST_PAINT", "post-paint" },
        { CLUTTER_REPAINT_FLAGS_QUEUE_REDRAW_ON_ADD, "CLUTTER_REPAINT_FLAGS_QUEUE_REDRAW_ON_ADD", "queue-redraw-on-add" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_flags_register_static (g_intern_static_string ("ClutterRepaintFlags"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_content_gravity_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_CONTENT_GRAVITY_TOP_LEFT, "CLUTTER_CONTENT_GRAVITY_TOP_LEFT", "top-left" },
        { CLUTTER_CONTENT_GRAVITY_TOP, "CLUTTER_CONTENT_GRAVITY_TOP", "top" },
        { CLUTTER_CONTENT_GRAVITY_TOP_RIGHT, "CLUTTER_CONTENT_GRAVITY_TOP_RIGHT", "top-right" },
        { CLUTTER_CONTENT_GRAVITY_LEFT, "CLUTTER_CONTENT_GRAVITY_LEFT", "left" },
        { CLUTTER_CONTENT_GRAVITY_CENTER, "CLUTTER_CONTENT_GRAVITY_CENTER", "center" },
        { CLUTTER_CONTENT_GRAVITY_RIGHT, "CLUTTER_CONTENT_GRAVITY_RIGHT", "right" },
        { CLUTTER_CONTENT_GRAVITY_BOTTOM_LEFT, "CLUTTER_CONTENT_GRAVITY_BOTTOM_LEFT", "bottom-left" },
        { CLUTTER_CONTENT_GRAVITY_BOTTOM, "CLUTTER_CONTENT_GRAVITY_BOTTOM", "bottom" },
        { CLUTTER_CONTENT_GRAVITY_BOTTOM_RIGHT, "CLUTTER_CONTENT_GRAVITY_BOTTOM_RIGHT", "bottom-right" },
        { CLUTTER_CONTENT_GRAVITY_RESIZE_FILL, "CLUTTER_CONTENT_GRAVITY_RESIZE_FILL", "resize-fill" },
        { CLUTTER_CONTENT_GRAVITY_RESIZE_ASPECT, "CLUTTER_CONTENT_GRAVITY_RESIZE_ASPECT", "resize-aspect" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterContentGravity"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_scaling_filter_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_SCALING_FILTER_LINEAR, "CLUTTER_SCALING_FILTER_LINEAR", "linear" },
        { CLUTTER_SCALING_FILTER_NEAREST, "CLUTTER_SCALING_FILTER_NEAREST", "nearest" },
        { CLUTTER_SCALING_FILTER_TRILINEAR, "CLUTTER_SCALING_FILTER_TRILINEAR", "trilinear" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterScalingFilter"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_orientation_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_ORIENTATION_HORIZONTAL, "CLUTTER_ORIENTATION_HORIZONTAL", "horizontal" },
        { CLUTTER_ORIENTATION_VERTICAL, "CLUTTER_ORIENTATION_VERTICAL", "vertical" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterOrientation"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_scroll_mode_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GFlagsValue values[] = {
        { CLUTTER_SCROLL_NONE, "CLUTTER_SCROLL_NONE", "none" },
        { CLUTTER_SCROLL_HORIZONTALLY, "CLUTTER_SCROLL_HORIZONTALLY", "horizontally" },
        { CLUTTER_SCROLL_VERTICALLY, "CLUTTER_SCROLL_VERTICALLY", "vertically" },
        { CLUTTER_SCROLL_BOTH, "CLUTTER_SCROLL_BOTH", "both" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_flags_register_static (g_intern_static_string ("ClutterScrollMode"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_grid_position_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_GRID_POSITION_LEFT, "CLUTTER_GRID_POSITION_LEFT", "left" },
        { CLUTTER_GRID_POSITION_RIGHT, "CLUTTER_GRID_POSITION_RIGHT", "right" },
        { CLUTTER_GRID_POSITION_TOP, "CLUTTER_GRID_POSITION_TOP", "top" },
        { CLUTTER_GRID_POSITION_BOTTOM, "CLUTTER_GRID_POSITION_BOTTOM", "bottom" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterGridPosition"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_content_repeat_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GFlagsValue values[] = {
        { CLUTTER_REPEAT_NONE, "CLUTTER_REPEAT_NONE", "none" },
        { CLUTTER_REPEAT_X_AXIS, "CLUTTER_REPEAT_X_AXIS", "x-axis" },
        { CLUTTER_REPEAT_Y_AXIS, "CLUTTER_REPEAT_Y_AXIS", "y-axis" },
        { CLUTTER_REPEAT_BOTH, "CLUTTER_REPEAT_BOTH", "both" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_flags_register_static (g_intern_static_string ("ClutterContentRepeat"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_step_mode_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_STEP_MODE_START, "CLUTTER_STEP_MODE_START", "start" },
        { CLUTTER_STEP_MODE_END, "CLUTTER_STEP_MODE_END", "end" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterStepMode"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_zoom_axis_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_ZOOM_X_AXIS, "CLUTTER_ZOOM_X_AXIS", "x-axis" },
        { CLUTTER_ZOOM_Y_AXIS, "CLUTTER_ZOOM_Y_AXIS", "y-axis" },
        { CLUTTER_ZOOM_BOTH, "CLUTTER_ZOOM_BOTH", "both" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterZoomAxis"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_gesture_trigger_edge_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_GESTURE_TRIGGER_EDGE_NONE, "CLUTTER_GESTURE_TRIGGER_EDGE_NONE", "none" },
        { CLUTTER_GESTURE_TRIGGER_EDGE_AFTER, "CLUTTER_GESTURE_TRIGGER_EDGE_AFTER", "after" },
        { CLUTTER_GESTURE_TRIGGER_EDGE_BEFORE, "CLUTTER_GESTURE_TRIGGER_EDGE_BEFORE", "before" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterGestureTriggerEdge"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_touchpad_gesture_phase_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_TOUCHPAD_GESTURE_PHASE_BEGIN, "CLUTTER_TOUCHPAD_GESTURE_PHASE_BEGIN", "begin" },
        { CLUTTER_TOUCHPAD_GESTURE_PHASE_UPDATE, "CLUTTER_TOUCHPAD_GESTURE_PHASE_UPDATE", "update" },
        { CLUTTER_TOUCHPAD_GESTURE_PHASE_END, "CLUTTER_TOUCHPAD_GESTURE_PHASE_END", "end" },
        { CLUTTER_TOUCHPAD_GESTURE_PHASE_CANCEL, "CLUTTER_TOUCHPAD_GESTURE_PHASE_CANCEL", "cancel" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterTouchpadGesturePhase"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_scroll_source_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_SCROLL_SOURCE_UNKNOWN, "CLUTTER_SCROLL_SOURCE_UNKNOWN", "unknown" },
        { CLUTTER_SCROLL_SOURCE_WHEEL, "CLUTTER_SCROLL_SOURCE_WHEEL", "wheel" },
        { CLUTTER_SCROLL_SOURCE_FINGER, "CLUTTER_SCROLL_SOURCE_FINGER", "finger" },
        { CLUTTER_SCROLL_SOURCE_CONTINUOUS, "CLUTTER_SCROLL_SOURCE_CONTINUOUS", "continuous" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterScrollSource"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_scroll_finish_flags_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GFlagsValue values[] = {
        { CLUTTER_SCROLL_FINISHED_NONE, "CLUTTER_SCROLL_FINISHED_NONE", "none" },
        { CLUTTER_SCROLL_FINISHED_HORIZONTAL, "CLUTTER_SCROLL_FINISHED_HORIZONTAL", "horizontal" },
        { CLUTTER_SCROLL_FINISHED_VERTICAL, "CLUTTER_SCROLL_FINISHED_VERTICAL", "vertical" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_flags_register_static (g_intern_static_string ("ClutterScrollFinishFlags"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}

/* enumerations from "./clutter-image.h" */
#include "./clutter-image.h"

GType
clutter_image_error_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_IMAGE_ERROR_INVALID_DATA, "CLUTTER_IMAGE_ERROR_INVALID_DATA", "data" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterImageError"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}

/* enumerations from "./clutter-main.h" */
#include "./clutter-main.h"

GType
clutter_init_error_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_INIT_SUCCESS, "CLUTTER_INIT_SUCCESS", "success" },
        { CLUTTER_INIT_ERROR_UNKNOWN, "CLUTTER_INIT_ERROR_UNKNOWN", "error-unknown" },
        { CLUTTER_INIT_ERROR_THREADS, "CLUTTER_INIT_ERROR_THREADS", "error-threads" },
        { CLUTTER_INIT_ERROR_BACKEND, "CLUTTER_INIT_ERROR_BACKEND", "error-backend" },
        { CLUTTER_INIT_ERROR_INTERNAL, "CLUTTER_INIT_ERROR_INTERNAL", "error-internal" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterInitError"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}

/* enumerations from "./clutter-script.h" */
#include "./clutter-script.h"

GType
clutter_script_error_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_SCRIPT_ERROR_INVALID_TYPE_FUNCTION, "CLUTTER_SCRIPT_ERROR_INVALID_TYPE_FUNCTION", "type-function" },
        { CLUTTER_SCRIPT_ERROR_INVALID_PROPERTY, "CLUTTER_SCRIPT_ERROR_INVALID_PROPERTY", "property" },
        { CLUTTER_SCRIPT_ERROR_INVALID_VALUE, "CLUTTER_SCRIPT_ERROR_INVALID_VALUE", "value" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterScriptError"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}

/* enumerations from "./clutter-texture.h" */
#include "./clutter-texture.h"

GType
clutter_texture_error_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_TEXTURE_ERROR_OUT_OF_MEMORY, "CLUTTER_TEXTURE_ERROR_OUT_OF_MEMORY", "out-of-memory" },
        { CLUTTER_TEXTURE_ERROR_NO_YUV, "CLUTTER_TEXTURE_ERROR_NO_YUV", "no-yuv" },
        { CLUTTER_TEXTURE_ERROR_BAD_FORMAT, "CLUTTER_TEXTURE_ERROR_BAD_FORMAT", "bad-format" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterTextureError"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}

/* enumerations from "./deprecated/clutter-shader.h" */
#include "./deprecated/clutter-shader.h"

GType
clutter_shader_error_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_SHADER_ERROR_NO_ASM, "CLUTTER_SHADER_ERROR_NO_ASM", "no-asm" },
        { CLUTTER_SHADER_ERROR_NO_GLSL, "CLUTTER_SHADER_ERROR_NO_GLSL", "no-glsl" },
        { CLUTTER_SHADER_ERROR_COMPILE, "CLUTTER_SHADER_ERROR_COMPILE", "compile" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterShaderError"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}

/* Generated data ends here */

