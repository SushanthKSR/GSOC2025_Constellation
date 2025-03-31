# Qt6 module provided by Meson for preprocessing and integration
qt6 = import('qt6')

# listing of C++ source files for the project
sources = files(
  'main.cpp',
  'mainwindow.cpp',
  'chartview.cpp',
)

headers = files(
  'mainwindow.h',
  'chartview.h',
)


# Run Qt's Meta-Object Compiler (MOC) on headers that use Q_OBJECT macro
moc_mainwindow = qt6.preprocess(moc_headers: ['mainwindow.h'])
moc_chartview = qt6.preprocess(moc_headers: ['chartview.h'])

executable('AlgorithmSorting',
  sources: sources + moc_mainwindow + moc_chartview,
  dependencies: qt6_dep,
  install: true
)