#ifndef BASICKEYBOARDSCENE_H_
# define BASICKEYBOARDSCENE_H_

# include <pebble.h>
# include "MemoryManager.h"
# include "Utils.h"
# include "BasicScene.h"
# include "BasicInvertLayer.h"

/**
 * A container for the cursor position for Keyboard
 * @see Keyboard
 */
typedef struct	s_KeyboardState
{
  InvertLayer	*layer;
  int		x;
  int		y;
}		KeyboardState;

/**
 * A container for the keyboard, contains the typed string and the size
 */
typedef struct	s_Keyboard
{
  char		*str;
  size_t	size;
  KeyboardState	state;
  void		(*ptr)(struct s_Keyboard *);
}		Keyboard;

/**
 * Creates a keyboard scene for typing something
 * @param str The default string to be displayed
 * @param size The max string size
 * @param ptr The Callback that is called after user validation, it receive a Keyboard pointer that contains data
 * @see Keyboard
 */
void		create_basic_keyboard_scene(char *str, size_t size, void (*ptr)(Keyboard *));

#endif
