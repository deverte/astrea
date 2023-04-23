import pathlib
import setuptools
import shutil


__version__ = '0.1.0'


package_path = pathlib.Path('lss_py/lss')

shared_object = []
shared_object.extend([
    *pathlib.Path('lss_py/build/Release').glob('lss*.so'),
    *pathlib.Path('lss_py/build/Release').glob('lss*.dll'),
])
shared_object = shared_object[0]

shutil.copy(shared_object, package_path / shared_object.name)


setuptools.setup(
    name='lss',
    version=__version__,
    packages=['lss'],
    package_dir={'': 'lss_py'},
    package_data={
        'lss': ['lss*.so', 'lss*.dll'],
    },
    include_package_data=True,
)