dist_man_MANS = snap-confine.5 ubuntu-core-launcher.1

CLEANFILES = snap-confine.5 ubuntu-core-launcher.1
EXTRA_DIST = snap-confine.rst ubuntu-core-launcher.rst

snap-confine.5: snap-confine.rst
	rst2man $^ > $@

ubuntu-core-launcher.1: ubuntu-core-launcher.rst
	rst2man $^ > $@
