Solari Core 0.10.99
=====================

Setup
---------------------
[Solari Core](http://solari.org/en/download) is the original Solari client and it builds the backbone of the network. However, it downloads and stores the entire history of Solari transactions (which is currently several GBs); depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more.

Running
---------------------
The following are some helpful notes on how to run Solari on your native platform. 

### Unix

You need the Qt4 run-time libraries to run Solari-Qt. On Debian or Ubuntu:

	sudo apt-get install libqtgui4

Unpack the files into a directory and run:

- bin/32/solari-qt (GUI, 32-bit) or bin/32/solarid (headless, 32-bit)
- bin/64/solari-qt (GUI, 64-bit) or bin/64/solarid (headless, 64-bit)



### Windows

Unpack the files into a directory, and then run solari-qt.exe.

### OSX

Drag Solari-Qt to your applications folder, and then run Solari-Qt.

### Need Help?

* See the documentation at the [Solari Wiki](https://en.solari.it/wiki/Main_Page)
for help and more information.
* Ask for help on [#solari](http://webchat.freenode.net?channels=solari) on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net?channels=solari).
* Ask for help on the [SolariTalk](https://solaritalk.org/) forums, in the [Technical Support board](https://solaritalk.org/index.php?board=4.0).

Building
---------------------
The following are developer notes on how to build Solari on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [OSX Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)

Development
---------------------
The Solari repo's [root README](https://github.com/solari/solari/blob/master/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Multiwallet Qt Development](multiwallet-qt.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://dev.visucore.com/solari/doxygen/)
- [Translation Process](translation_process.md)
- [Unit Tests](unit-tests.md)

### Resources
* Discuss on the [SolariTalk](https://solaritalk.org/) forums, in the [Development & Technical Discussion board](https://solaritalk.org/index.php?board=6.0).
* Discuss on [#solari-dev](http://webchat.freenode.net/?channels=solari) on Freenode. If you don't have an IRC client use [webchat here](http://webchat.freenode.net/?channels=solari-dev).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)

License
---------------------
Distributed under the [MIT software license](http://www.opensource.org/licenses/mit-license.php).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
