#version 430 core

// Output from the Fragment Shader
out vec4 color;

// Input from the Vertex Shader
in vec4 fColor;

void main() {

    // R G B A
    color = fColor;

}
