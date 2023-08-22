project('Qt test', 'cpp',
  version: '0.1.0',
  default_options: ['warning_level=3', 'c_std=c99', 'cpp_std=c++17', 'b_ndebug=if-release']
)

qt6 = import('qt6')
qt6_dep = dependency('qt6', modules: ['Core', 'Gui', 'Widgets'])
qt_generated = qt6.preprocess(
  moc_headers: [
    'mainwindow.hpp',
  ]
)

app = executable('app',
  'main.cpp',
  'mainwindow.cpp',
  qt_generated,
  dependencies: [qt6_dep],
  install: false
)

