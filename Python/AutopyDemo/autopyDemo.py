import autopy
import time
import math
import random

def sine_mouse_wave():
	width, height = autopy.screen.get_size()
	height /= 2
	height -= 10

	for x in xrange(width):
		y = int(height * math.sin(math.pi * 2 * x / width) + height)
		autopy.mouse.move(x, y)
		time.sleep(random.uniform(0.001, 0.003))
sine_mouse_wave()
