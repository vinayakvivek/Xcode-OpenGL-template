#ifndef shader_util_hpp
#define shader_util_hpp

#include <algorithm>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <GL/glew.h>

namespace myNamespace {
	GLuint loadShaderGL(GLenum eShaderType, const std::string &strFilename);
	GLuint createShaderGL(GLenum eShaderType, const std::string &strShaderFile);
	GLuint createProgramGL(const std::vector<GLuint> &shaderList);
};

#endif /* shader_util_hpp */
