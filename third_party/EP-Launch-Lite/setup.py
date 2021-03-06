"""
This is a setup.py script generated by py2applet

Usage:
    python setup.py py2app
"""

from setuptools import setup

APP = ['EP-Launch-Lite.py']
DATA_FILES = []
OPTIONS = {
    'argv_emulation': True,
    'includes': ['cairo', 'gobject', 'gio', 'pango', 'pangocairo', 'atk', 'subprocess', 'glob', 'json', 'subprocess']
}

setup(
    app=APP,
    data_files=DATA_FILES,
    options={'py2app': OPTIONS},
    setup_requires=['py2app'],
    version="2.0.0",
)
