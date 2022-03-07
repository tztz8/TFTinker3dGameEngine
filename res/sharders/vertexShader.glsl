#version 430 core

// Input from vertices position attribute
layout (location = 0) in vec4 vPosition; // (x, y, z, w)
// Input from vertices color attribute
layout (location = 1) in vec4 vColor; // (r, g, b, a)

uniform mat4 modelMatrix;
uniform mat4 viewMatrix;
uniform mat4 projectionMatrix;

// Output from the Vertex Shader for the Fragment Shader
out vec4 fColor;

void main() {

    // Seting the position
    gl_Position = (projectionMatrix*viewMatrix*modelMatrix*vPosition);

    // Seting the color to pass to Fragment Shader
    fColor = vColor;

}
