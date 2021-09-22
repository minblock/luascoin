from distutils.core import setup
setup(name='LUASCOINspendfrom',
      version='1.0',
      description='Command-line utility for luascoin "coin control"',
      author='Gavin Andresen',
      author_email='gavin@luascoinfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
