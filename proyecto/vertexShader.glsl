#version 450
 in vec3 position;
 out vec4 fragColor;
 void main(){
 fragColor = vec4(0.3, 0.2, 0.75, 1.0);
 gl_Position = vec4(position, 1.0);
}
