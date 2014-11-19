import autopy

autopy.bitmap.capture_screen().save("test.png")
capture1 = autopy.bitmap.Bitmap.open("test.png")
capture2 = autopy.bitmap.Bitmap.open("Capture.png")
capture3 = autopy.bitmap.Bitmap.open("Capture1.png")

pos = capture1.find_bitmap(capture2)
pos1 = capture1.find_bitmap(capture3)
if pos:
	print "not null"
else:
	pos = pos1
if pos:
	print "Found at %s" % str(pos)
	print pos
	autopy.mouse.smooth_move(pos[0], pos[1])
	autopy.mouse.click()
else:
	print "No"
	print pos

