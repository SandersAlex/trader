**Compiling Qt (unix/linux)**
1. Open your source directory, ie. `cd ~/src`. If it doesn't exist, run `mkdir ~/src` first.
2. Pull a currently maintained Qt source (Please don't use ancient Qt versions, less than 5.10 is not supported currently): `wget https://download.qt.io/archive/qt/5.13/5.13.0/single/qt-everywhere-src-5.13.0.tar.xz`
3. Extract: `tar xf qt-everywhere-src-5.13.0.tar.xz`
4. Go there: `cd qt-everywhere-src-5.13.0.tar.xz`
5. Install dependencies: `sudo apt-get build-dep qt5-default`
6. Configure Qt (and skip some things to improve compile time): 
`./configure -prefix /home/username/localqt/Qt-5.13.0-minimal/ -opensource -confirm-license -shared -release -nomake examples -nomake tests -skip qt3d -skip qtactiveqt -skip qtandroidextras -skip qtcanvas3d -skip qtcharts -skip qtdatavis3d -skip qtgamepad -skip qtgraphicaleffects -skip qtlocation -skip qtmultimedia -skip qtpurchasing -skip qtquickcontrols -skip qtquickcontrols2 -skip qtscript -skip qtscxml -skip qtsensors -skip qtserialbus -skip qtserialport -skip qtwebengine -skip qtwebview -skip qttools`
7. If there are no errors, now you can run make: `make -j`
8. If there are no errors, run `make install`
9. Now try and run qmake from your installation path with the `-v` flag: `/home/username/localqt/Qt-5.13.0-minimal/bin/qmake -v` and you should get:
`QMake version 3.1
Using Qt version 5.13.0 in /home/username/localqt/Qt-5.13.0-release/lib`
--------------------------
**Compiling trader(unix/linux)**
1. Open your source directory, ie. `cd ~/src`
2. Put your keys into the bot one of three ways (only do one):
	a. Run `python generate_keys.py` to create `daemon/keydefs.h`
	b. Copy the example keydefs file: `cp daemon/keydefs.h.example daemon/keydefs.h'` then paste your keys in with your favorite editor, or:
	c. Create `keydefs.h` using the example file, but leave the keys blank or as-is during compile, then use the runtime CLI to enter your keys into the bot: `trader-cli Poloniex setkeyandsecret <key> <secret>`
	
3. Now that `daemon/keydefs.h` exists, you can build the project from the project's root directory:
4. Run qmake: `/home/username/localqt/Qt-5.13.0-minimal/bin/qmake`
5. Build your binaries:
	a. Run `./build-all.sh`. This will build all exchange targets and the CLI using.
	b. Modify `daemon/build-config.h` with your build preferences and build using `make` or what you like.
	
**Preparing to run traderd and trader-cli (unix/linux)**
[todo]
