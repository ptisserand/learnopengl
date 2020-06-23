#ifndef SHADER_H_
#define SHADER_H_ 1

#include <glad/glad.h> // for all required OpengGL headers

#include <string>

class Shader
{
public:
    // program ID
    unsigned int ID;

    // constructor reads and build the shader
    Shader(const char* vertexPath, const char* fragmentPath);
    // use/activate the shader
    void use();
    // utility uniform method
    void setBool(const std::string &name, bool value) const;  
    void setInt(const std::string &name, int value) const;   
    void setFloat(const std::string &name, float value) const;
};


#endif // SHADER_H_

