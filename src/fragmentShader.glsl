#version 330 core
out vec4 fragColor;

in vec3 outColor;
in vec2 TexCoord;
uniform sampler2D texture1;
uniform sampler2D texture2;
uniform float mixin;

void main()
{
    fragColor = mix(texture(texture1, TexCoord), texture(texture2, TexCoord), mixin);
};
