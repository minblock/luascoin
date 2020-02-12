from distutils.core import setup
setup(name='LUAspendfrom',
      version='1.0',
      description='Command-line utility for lua "coin control"',
      author='Gavin Andresen',
      author_email='gavin@luafoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
