project('MissionImpossible', 'cpp',
	version : '0.1.1',
	default_options : ['cpp_std=c++17'])

gtest_proj = subproject('gtest')
gtest_dep = gtest_proj.get_variable('gtest_main_dep')

subdir('src')
subdir('test')
subdir('sandbox')
subdir('examples')
